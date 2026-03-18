/*
 * XREFs of KiInitializeForegroundBoostThread @ 0x14026B4D4
 * Callers:
 *     KeStartThread @ 0x14026AE04 (KeStartThread.c)
 * Callees:
 *     KiSetForegroundBoost @ 0x140269714 (KiSetForegroundBoost.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140271CE0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiComputeThreadPriority @ 0x1402E7250 (KiComputeThreadPriority.c)
 *     KiUpdateThreadPriority @ 0x1403170A0 (KiUpdateThreadPriority.c)
 */

__int64 __fastcall KiInitializeForegroundBoostThread(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  int v4; // edx

  result = *(unsigned int *)(*(_QWORD *)(a1 + 544) + 136LL);
  if ( (result & 0x2000) != 0 )
  {
    result = *(unsigned int *)(a1 + 120);
    if ( (result & 8) == 0 && *(char *)(a1 + 195) > 0 )
    {
      KiSetForegroundBoost(a1);
      result = KiComputeThreadPriority(v3, 0LL);
      if ( (int)result > *(char *)(a1 + 195) )
      {
        KiUpdateThreadPriority(0, v4, a1, result, v4);
        return KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
      }
    }
  }
  return result;
}
