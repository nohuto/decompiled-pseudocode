/*
 * XREFs of KiInitializeForegroundBoostThread @ 0x1403B3D80
 * Callers:
 *     KeStartThread @ 0x1403B3660 (KeStartThread.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x14024FA80 (KiComputeThreadPriority.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1403B25A0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateThreadPriority @ 0x140429720 (KiUpdateThreadPriority.c)
 *     KiSetForegroundBoost @ 0x14045257C (KiSetForegroundBoost.c)
 */

__int64 __fastcall KiInitializeForegroundBoostThread(__int64 a1)
{
  __int64 result; // rax
  int v3; // edx

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
        KiUpdateThreadPriority(0, v3, a1, result, 0);
        return KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
      }
    }
  }
  return result;
}
