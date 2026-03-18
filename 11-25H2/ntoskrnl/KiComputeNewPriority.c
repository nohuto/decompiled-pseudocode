/*
 * XREFs of KiComputeNewPriority @ 0x1404E8FCC
 * Callers:
 *     KeYieldExecution @ 0x14027B240 (KeYieldExecution.c)
 *     KiDeferredReadySingleThread @ 0x1402877C0 (KiDeferredReadySingleThread.c)
 *     KiDirectSwitchThread @ 0x140315A20 (KiDirectSwitchThread.c)
 *     KiComputeEffectivePriority @ 0x140316760 (KiComputeEffectivePriority.c)
 *     KiQuantumEnd @ 0x14032ED10 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x14032F910 (KiQueueReadyThread.c)
 * Callees:
 *     KiClearForegroundBoost @ 0x14026974C (KiClearForegroundBoost.c)
 *     KiComputeThreadPriority @ 0x1402E7250 (KiComputeThreadPriority.c)
 */

__int64 __fastcall KiComputeNewPriority(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r11
  unsigned int v5; // ecx
  unsigned int v6; // edx
  char v7; // dl
  int v8; // edi
  int v9; // eax
  __int64 v10; // r11
  int v11; // ecx
  char v12; // al

  v3 = a1;
  v5 = *(char *)(a1 + 195);
  if ( (char)v5 < 16 || (*(_DWORD *)(v3 + 120) & 0x400000) != 0 )
  {
    v7 = 6;
    v8 = *(char *)(v3 + 870);
    if ( KiSchedulerForegroundBoostDecayPolicy )
    {
      v7 = 7;
      if ( a3 )
        KiClearForegroundBoost(v3);
    }
    v9 = KiComputeThreadPriority(v3, v7);
    v11 = *(char *)(v10 + 563);
    v6 = v9;
    if ( v8 >= 1 )
      v11 = v8 + v11 - 1;
    if ( v9 < v11 )
      v6 = v11;
    if ( a3 )
    {
      *(_WORD *)(v10 + 518) &= 0xF00Fu;
      v12 = *(_BYTE *)(v10 + 870);
      if ( v12 >= 1 )
        *(_BYTE *)(v10 + 870) = v12 - 1;
      else
        *(_BYTE *)(v10 + 870) = 0;
    }
  }
  else
  {
    return v5;
  }
  return v6;
}
