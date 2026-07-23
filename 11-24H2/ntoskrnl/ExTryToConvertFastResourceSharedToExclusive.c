/*
 * XREFs of ExTryToConvertFastResourceSharedToExclusive @ 0x140655190
 * Callers:
 *     DifExTryToConvertFastResourceSharedToExclusiveWrapper @ 0x14061FAE0 (DifExTryToConvertFastResourceSharedToExclusiveWrapper.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpRemoveFastOwnerEntryFromThreadList @ 0x1402F2120 (ExpRemoveFastOwnerEntryFromThreadList.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x140404DF0 (ExpAddFastOwnerEntryToThreadList.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall ExTryToConvertFastResourceSharedToExclusive(_QWORD *BugCheckParameter2, ULONG_PTR a2)
{
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v6; // rdx
  char v7; // cl
  _QWORD *v8; // rax
  signed __int64 v9; // rax
  signed __int64 v10; // rcx
  signed __int64 v11; // rtt
  struct _KTHREAD *v12; // r10
  char v13; // bp
  ULONG_PTR v14; // r14
  __int64 v15; // rdx
  _QWORD *v16; // r9
  __int64 v17; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v20; // eax
  signed __int32 v21; // ett

  if ( (*((_BYTE *)BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 1u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v6 = *(_QWORD *)(a2 + 16);
  if ( (struct _KTHREAD *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) != CurrentThread )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v6 & 0xFFFFFFFFFFFFFFFEuLL, 0LL);
  v7 = *(_BYTE *)(a2 + 37);
  if ( (v7 & 2) == 0 )
  {
    v8 = *(_QWORD **)(a2 + 24);
    if ( v8 != BugCheckParameter2 )
    {
      if ( v8 )
        KeBugCheckEx(0x1C6u, 8uLL, (ULONG_PTR)BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
    }
  }
  if ( (v6 & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, a2, 0LL, 0LL);
  if ( (v7 & 2) != 0 )
    KeBugCheckEx(0x1C6u, 0xBuLL, a2, (unsigned __int64)(v7 & 2) << 15, 0LL);
  if ( *(int *)(a2 + 32) > 1 )
    KeBugCheckEx(0x1C6u, 0x13uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  _m_prefetchw(BugCheckParameter2);
  v9 = *BugCheckParameter2;
  do
  {
    if ( (v9 & 1) != 0 )
      break;
    if ( (v9 & 2) != 0 || v9 >> 2 != 1 )
      return 0;
    v10 = v9 & 2 | 1;
    if ( v10 == v9 )
      break;
    v11 = v9;
    v9 = _InterlockedCompareExchange64(BugCheckParameter2, v10, v9);
  }
  while ( v11 != v9 );
  v12 = KeGetCurrentThread();
  v13 = 1;
  v14 = *(unsigned __int8 *)(a2 + 36);
  if ( !BugCheckParameter2[10] )
  {
    BugCheckParameter2[10] = v12;
    *((_DWORD *)BugCheckParameter2 + 24) = 1;
    _disable();
    ExpRemoveFastOwnerEntryFromThreadList((_QWORD *)a2);
    ExpAddFastOwnerEntryToThreadList(v17, v15, 0, v16);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v20 = *SchedulerAssist;
      do
      {
        v21 = v20;
        v20 = _InterlockedCompareExchange(SchedulerAssist, v20 & 0xFFDFFFFF, v20);
      }
      while ( v21 != v20 );
      if ( (v20 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  *(_DWORD *)(a2 + 32) = 0;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_BYTE *)(a2 + 36) = 0;
  if ( *((_BYTE *)BugCheckParameter2 + 100) )
  {
    if ( (_BYTE)v14 )
      KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, v14);
  }
  else
  {
    *((_BYTE *)BugCheckParameter2 + 100) = v14;
  }
  return v13;
}
