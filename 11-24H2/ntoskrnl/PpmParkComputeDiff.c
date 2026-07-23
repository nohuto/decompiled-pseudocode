/*
 * XREFs of PpmParkComputeDiff @ 0x1404E5A28
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x1404E5250 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkCalculateCoreParkingMaskEx @ 0x1405DF1A8 (PpmParkCalculateCoreParkingMaskEx.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402AA18C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeXorAffinityEx2 @ 0x1402B2C68 (KeXorAffinityEx2.c)
 *     PpmParkEvaluateRestriction @ 0x1404E5C48 (PpmParkEvaluateRestriction.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned int PpmParkComputeDiff()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int i; // esi
  __int64 v6; // rdi
  unsigned int result; // eax

  *(_QWORD *)&PpmPerfNewCoreParkingMask.Count = 2097153LL;
  v0 = 0;
  memset_0(&PpmPerfNewCoreParkingMask.8, 0, sizeof(PpmPerfNewCoreParkingMask.8));
  *(_QWORD *)&PpmParkNewSoftParkingMask.Count = 2097153LL;
  memset_0(&PpmParkNewSoftParkingMask.8, 0, sizeof(PpmParkNewSoftParkingMask.8));
  for ( i = 0; i < PpmParkNumNodes; ++i )
  {
    v6 = PpmParkNodes + 1296LL * i;
    if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline(v2, v1, v3, v4) )
    {
      KiOrAffinityEx(
        &PpmPerfNewCoreParkingMask,
        (struct _KAFFINITY_EX *)(v6 + 312),
        &PpmPerfNewCoreParkingMask,
        PpmPerfNewCoreParkingMask.Size);
      KiOrAffinityEx(
        &PpmParkNewSoftParkingMask,
        (struct _KAFFINITY_EX *)(v6 + 840),
        &PpmParkNewSoftParkingMask,
        PpmParkNewSoftParkingMask.Size);
    }
    else
    {
      KeAddGroupAffinityEx(&PpmPerfNewCoreParkingMask.Count, *(_WORD *)(v6 + 4), *(_QWORD *)(v6 + 24));
      KeAddGroupAffinityEx(&PpmParkNewSoftParkingMask.Count, *(_WORD *)(v6 + 4), *(_QWORD *)(v6 + 40));
    }
  }
  result = KeXorAffinityEx2(&PpmPerfCoreParkingMask, &PpmPerfNewCoreParkingMask, &PpmPerfChangedCoreParkingMask);
  if ( PpmParkNumNodes )
  {
    do
      result = PpmParkEvaluateRestriction(PpmParkNodes + 1296LL * v0++);
    while ( v0 < PpmParkNumNodes );
  }
  return result;
}
