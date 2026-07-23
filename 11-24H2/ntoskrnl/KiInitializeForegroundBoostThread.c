/*
 * XREFs of KiInitializeForegroundBoostThread @ 0x1403A2590
 * Callers:
 *     KeStartThread @ 0x1403A1E70 (KeStartThread.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x140280090 (KiComputeThreadPriority.c)
 *     KiUpdateThreadPriority @ 0x1402E0E50 (KiUpdateThreadPriority.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1403A0DB0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiSetForegroundBoost @ 0x14044762C (KiSetForegroundBoost.c)
 */

__int64 __fastcall KiInitializeForegroundBoostThread(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = *(unsigned int *)(*(_QWORD *)(a1 + 544) + 136LL);
  if ( (result & 0x2000) != 0 )
  {
    result = *(unsigned int *)(a1 + 120);
    if ( (result & 8) == 0 && *(char *)(a1 + 195) > 0 )
    {
      KiSetForegroundBoost();
      result = KiComputeThreadPriority(a1, 0, 0);
      if ( (int)result > *(char *)(a1 + 195) )
      {
        KiUpdateThreadPriority(0LL, v3, a1, result, 0);
        return KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
      }
    }
  }
  return result;
}
