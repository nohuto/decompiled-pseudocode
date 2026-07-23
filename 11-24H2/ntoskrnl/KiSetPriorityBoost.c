/*
 * XREFs of KiSetPriorityBoost @ 0x1402DFE70
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14022CFA0 (ExpApplyPriorityBoost.c)
 *     KiNormalPriorityReadyScan @ 0x140282170 (KiNormalPriorityReadyScan.c)
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1402DE7C8 (KiPrepareReadyThreadForRescheduling.c)
 *     KeSetPriorityBoost @ 0x1402DFC90 (KeSetPriorityBoost.c)
 *     KiScanSharedReadyThreads @ 0x14045BDC8 (KiScanSharedReadyThreads.c)
 *     KiVpBackingThreadYieldExecution @ 0x1404CE2D8 (KiVpBackingThreadYieldExecution.c)
 * Callees:
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     KiThreadSetUnusualBoost @ 0x1402E0094 (KiThreadSetUnusualBoost.c)
 *     KiUpdateThreadPriority @ 0x1402E0E50 (KiUpdateThreadPriority.c)
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
