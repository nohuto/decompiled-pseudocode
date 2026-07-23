/*
 * XREFs of MiDeleteFinalPageTables @ 0x140450DBC
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x140AE7D64 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDeleteVirtualAddresses @ 0x140266330 (MiDeleteVirtualAddresses.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1403C8374 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403C8474 (LOCK_ADDRESS_SPACE.c)
 *     KeFlushProcessTb @ 0x140450FD8 (KeFlushProcessTb.c)
 *     MiDeleteProcessShadow @ 0x140451008 (MiDeleteProcessShadow.c)
 *     MiDeleteTopLevelPage @ 0x14045128C (MiDeleteTopLevelPage.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiDeleteVadBitmap @ 0x140A2CD84 (MiDeleteVadBitmap.c)
 *     PsUnlinkProcessFromSession @ 0x140A6F65C (PsUnlinkProcessFromSession.c)
 */

__int64 __fastcall MiDeleteFinalPageTables(_KPROCESS *BugCheckParameter2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // r15
  int i; // r14d
  unsigned __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  KIRQL v9; // al
  struct _LIST_ENTRY *Flink; // r9
  struct _LIST_ENTRY *Blink; // r8
  __int64 v12; // rcx
  bool v13; // zf
  __int64 result; // rax
  _OWORD v15[3]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v16; // [rsp+60h] [rbp-9h]
  _OWORD v17[3]; // [rsp+68h] [rbp-1h] BYREF

  v16 = 0LL;
  v2 = BugCheckParameter2->DirectoryTableBase >> 12;
  memset(v17, 0, sizeof(v17));
  v3 = 48 * v2;
  memset(v15, 0, sizeof(v15));
  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess(BugCheckParameter2, 0, (__int64)v17);
  for ( i = 0; i < 2; ++i )
  {
    if ( i )
    {
      v6 = qword_140E2DBB8;
      if ( !qword_140E2DBB8 )
        continue;
    }
    else
    {
      v6 = 2147352576LL;
    }
    if ( MI_READ_PTE_LOCK_FREE(8 * ((v6 >> 39) & 0x1FF) - 0x90482413000LL) )
    {
      LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)BugCheckParameter2);
      MiDeleteVirtualAddresses(v6, v6, 0, (__int64)v15);
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
  KiUnstackDetachProcess((__int64)v17, 0, v7, v8);
  _interlockedbittestandset((volatile signed __int32 *)&BugCheckParameter2->136, 0xBu);
  PsUnlinkProcessFromSession(BugCheckParameter2);
  v9 = ExAcquireSpinLockExclusive(&SpinLock);
  Flink = BugCheckParameter2[2].CpuPartitionList.Flink;
  if ( Flink->Blink != &BugCheckParameter2[2].CpuPartitionList
    || (Blink = BugCheckParameter2[2].CpuPartitionList.Blink, Blink->Flink != &BugCheckParameter2[2].CpuPartitionList) )
  {
    __fastfail(3u);
  }
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  MiReleaseSpinLockExclusive(&SpinLock, v9);
  KeFlushProcessTb(BugCheckParameter2->DirectoryTableBase);
  v13 = (unsigned int)MiDeleteTopLevelPage(v12, BugCheckParameter2->DirectoryTableBase >> 12) == 3;
  result = *((_QWORD *)&v15[0] + 1);
  if ( v13 )
    return *((_QWORD *)&v15[0] + 1) + 1LL;
  return result;
}
