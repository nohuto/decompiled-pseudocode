/*
 * XREFs of ?KiAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x140267478
 * Callers:
 *     KiGetDeepIdleProcessors @ 0x1402671F0 (KiGetDeepIdleProcessors.c)
 *     KeAndAffinityEx2 @ 0x140267450 (KeAndAffinityEx2.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140267B4C (PpmHeteroUpdateHgsConfiguration.c)
 *     KiComputeCpuSetAffinity @ 0x1402724D0 (KiComputeCpuSetAffinity.c)
 *     KiForwardTick @ 0x140274A70 (KiForwardTick.c)
 *     HalpInterruptSendIpi @ 0x140288640 (HalpInterruptSendIpi.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x140355570 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     KeAndAffinityEx @ 0x1404F8120 (KeAndAffinityEx.c)
 *     HalSendNMI @ 0x140541990 (HalSendNMI.c)
 *     PspSetEffectiveJobLimits @ 0x140A33B68 (PspSetEffectiveJobLimits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAndAffinityEx(
        struct _KAFFINITY_EX *a1,
        struct _KAFFINITY_EX *a2,
        struct _KAFFINITY_EX *a3,
        unsigned __int16 a4)
{
  unsigned __int16 Count; // r11
  unsigned int v6; // ebx
  unsigned __int16 v7; // r8
  __int64 v8; // rcx
  bool v10; // zf

  a3->Size = a4;
  Count = a1->Count;
  v6 = 0;
  if ( a1->Count >= a2->Count )
    Count = a2->Count;
  a3->Count = Count;
  if ( Count > a4 )
  {
    a3->Count = a4;
    Count = a4;
  }
  v7 = 0;
  if ( Count )
  {
    do
    {
      v10 = (a2->Bitmap[v7] & a1->Bitmap[v7]) == 0;
      a3->Bitmap[v7] = a2->Bitmap[v7] & a1->Bitmap[v7];
      if ( !v10 )
        v6 = 1;
      ++v7;
    }
    while ( v7 < a3->Count );
  }
  a3->Reserved = 0;
  while ( v7 < a3->Size )
  {
    v8 = v7++;
    a3->Bitmap[v8] = 0LL;
  }
  return v6;
}
