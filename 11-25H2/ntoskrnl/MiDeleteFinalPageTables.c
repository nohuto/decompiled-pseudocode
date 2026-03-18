/*
 * XREFs of MiDeleteFinalPageTables @ 0x14045CD60
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x1408D7B40 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1402A3CEC (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiDeleteVirtualAddresses @ 0x140383D40 (MiDeleteVirtualAddresses.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403D824C (LOCK_ADDRESS_SPACE.c)
 *     KeFlushProcessTb @ 0x14045CF7C (KeFlushProcessTb.c)
 *     MiDeleteProcessShadow @ 0x14045CFAC (MiDeleteProcessShadow.c)
 *     MiDeleteTopLevelPage @ 0x14045D230 (MiDeleteTopLevelPage.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MiDeleteVadBitmap @ 0x140A33648 (MiDeleteVadBitmap.c)
 *     PsUnlinkProcessFromSession @ 0x140A79F74 (PsUnlinkProcessFromSession.c)
 */

__int64 __fastcall MiDeleteFinalPageTables(_KPROCESS *BugCheckParameter2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // r15
  int i; // r14d
  unsigned __int64 v6; // rsi
  KIRQL v7; // al
  struct _LIST_ENTRY *Flink; // r9
  struct _LIST_ENTRY *Blink; // r8
  __int64 v10; // rcx
  bool v11; // zf
  __int64 result; // rax
  _OWORD v13[3]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v14; // [rsp+60h] [rbp-9h]
  _OWORD v15[3]; // [rsp+68h] [rbp-1h] BYREF

  v14 = 0LL;
  v2 = BugCheckParameter2->DirectoryTableBase >> 12;
  memset(v15, 0, sizeof(v15));
  v3 = 48 * v2;
  memset(v13, 0, sizeof(v13));
  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess(BugCheckParameter2, 0, (__int64)v15);
  for ( i = 0; i < 2; ++i )
  {
    if ( i )
    {
      v6 = qword_140E2D838;
      if ( !qword_140E2D838 )
        continue;
    }
    else
    {
      v6 = 2147352576LL;
    }
    if ( MI_READ_PTE_LOCK_FREE(8 * ((v6 >> 39) & 0x1FF) - 0x90482413000LL) )
    {
      LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)BugCheckParameter2);
      MiDeleteVirtualAddresses(v6, v6, 0, (__int64)v13);
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)BugCheckParameter2);
    }
  }
  MiDeleteVadBitmap((ULONG_PTR)BugCheckParameter2);
  if ( (*(_QWORD *)(v3 - 0x220000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL) != 2 )
    KeBugCheckEx(
      0x1Au,
      0x3453uLL,
      (ULONG_PTR)BugCheckParameter2,
      0xAAAAAAAAAAAAAAABuLL * (v3 >> 4),
      *(_QWORD *)(v3 - 0x220000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL);
  MiDeleteProcessShadow(BugCheckParameter2, 1LL);
  KiUnstackDetachProcess((__int64)v15, 0LL);
  _interlockedbittestandset((volatile signed __int32 *)&BugCheckParameter2->136, 0xBu);
  PsUnlinkProcessFromSession(BugCheckParameter2);
  v7 = ExAcquireSpinLockExclusive(&dword_140E37180);
  Flink = BugCheckParameter2[2].CpuPartitionList.Flink;
  if ( Flink->Blink != &BugCheckParameter2[2].CpuPartitionList
    || (Blink = BugCheckParameter2[2].CpuPartitionList.Blink, Blink->Flink != &BugCheckParameter2[2].CpuPartitionList) )
  {
    __fastfail(3u);
  }
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  MiReleaseSpinLockExclusive(&dword_140E37180, v7);
  KeFlushProcessTb(BugCheckParameter2->DirectoryTableBase);
  v11 = (unsigned int)MiDeleteTopLevelPage(v10, BugCheckParameter2->DirectoryTableBase >> 12) == 3;
  result = *((_QWORD *)&v13[0] + 1);
  if ( v11 )
    return *((_QWORD *)&v13[0] + 1) + 1LL;
  return result;
}
