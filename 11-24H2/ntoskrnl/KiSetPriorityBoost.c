/*
 * XREFs of KiSetPriorityBoost @ 0x140338930
 * Callers:
 *     KiNormalPriorityReadyScan @ 0x140251B60 (KiNormalPriorityReadyScan.c)
 *     ExpApplyPriorityBoost @ 0x140277A10 (ExpApplyPriorityBoost.c)
 *     KiDeferredReadySingleThread @ 0x14031ED40 (KiDeferredReadySingleThread.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x14033817C (KiPrepareReadyThreadForRescheduling.c)
 *     KeSetPriorityBoost @ 0x140338750 (KeSetPriorityBoost.c)
 *     KiScanSharedReadyThreads @ 0x1404657E0 (KiScanSharedReadyThreads.c)
 *     KiVpBackingThreadYieldExecution @ 0x1404D5000 (KiVpBackingThreadYieldExecution.c)
 * Callees:
 *     KiSetPriorityThread @ 0x14024FBBC (KiSetPriorityThread.c)
 *     KiUpdateThreadPriority @ 0x140429720 (KiUpdateThreadPriority.c)
 *     KiThreadSetUnusualBoost @ 0x1404EA320 (KiThreadSetUnusualBoost.c)
 */

unsigned __int64 __fastcall KiSetPriorityBoost(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  int v7; // edx
  _KTHREAD *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r10
  unsigned __int64 v11; // rax
  unsigned __int64 result; // rax

  KiThreadSetUnusualBoost(a2, (unsigned int)a3, a3, (unsigned int)a3);
  if ( v10 )
    KiSetPriorityThread(v8, v10, (unsigned int)v9, v9);
  else
    KiUpdateThreadPriority(0, v7, a2, v9, 0);
  v11 = *(_QWORD *)(a2 + 32);
  if ( a4 > v11 || (result = v11 - a4, result < a5) )
  {
    result = a5 + a4;
    *(_QWORD *)(a2 + 32) = result;
  }
  return result;
}
