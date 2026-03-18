/*
 * XREFs of MiDeleteFinalPageTables @ 0x14045BA24
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x140AE6484 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     MiDeleteVirtualAddresses @ 0x1403CC160 (MiDeleteVirtualAddresses.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140405E18 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x140405F18 (LOCK_ADDRESS_SPACE.c)
 *     KeFlushProcessTb @ 0x14045BC40 (KeFlushProcessTb.c)
 *     MiDeleteProcessShadow @ 0x14045BC70 (MiDeleteProcessShadow.c)
 *     MiDeleteTopLevelPage @ 0x14045BEF4 (MiDeleteTopLevelPage.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     MiDeleteVadBitmap @ 0x140A37CD0 (MiDeleteVadBitmap.c)
 *     PsUnlinkProcessFromSession @ 0x140A7533C (PsUnlinkProcessFromSession.c)
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
      v6 = qword_140E2DA78;
      if ( !qword_140E2DA78 )
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
  KiUnstackDetachProcess((__int64)v15, 0);
  _interlockedbittestandset((volatile signed __int32 *)&BugCheckParameter2->136, 0xBu);
  PsUnlinkProcessFromSession(BugCheckParameter2);
  v7 = ExAcquireSpinLockExclusive(&dword_140E373C0);
  Flink = BugCheckParameter2[2].CpuPartitionList.Flink;
  if ( Flink->Blink != &BugCheckParameter2[2].CpuPartitionList
    || (Blink = BugCheckParameter2[2].CpuPartitionList.Blink, Blink->Flink != &BugCheckParameter2[2].CpuPartitionList) )
  {
    __fastfail(3u);
  }
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  MiReleaseSpinLockExclusive(&dword_140E373C0, v7);
  KeFlushProcessTb(BugCheckParameter2->DirectoryTableBase);
  v11 = (unsigned int)MiDeleteTopLevelPage(v10, BugCheckParameter2->DirectoryTableBase >> 12) == 3;
  result = *((_QWORD *)&v13[0] + 1);
  if ( v11 )
    return *((_QWORD *)&v13[0] + 1) + 1LL;
  return result;
}
