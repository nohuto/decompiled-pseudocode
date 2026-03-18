/*
 * XREFs of PpmParkComputeDiff @ 0x14047F584
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x1404EA450 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     ?KiXorAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1403ADF00 (-KiXorAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     PpmParkEvaluateRestriction @ 0x14047F6CC (PpmParkEvaluateRestriction.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 PpmParkComputeDiff()
{
  unsigned int v0; // ebx
  __int64 result; // rax
  __int64 v2; // r9
  unsigned __int16 *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r10

  *(_QWORD *)&PpmPerfNewCoreParkingMask.Count = 2097153LL;
  v0 = 0;
  memset_0(&PpmPerfNewCoreParkingMask.8, 0, sizeof(PpmPerfNewCoreParkingMask.8));
  *(_QWORD *)&PpmParkNewSoftParkingMask.Count = 2097153LL;
  memset_0(&PpmParkNewSoftParkingMask.8, 0, sizeof(PpmParkNewSoftParkingMask.8));
  if ( PpmParkNumNodes )
  {
    v2 = (unsigned int)PpmParkNumNodes;
    v3 = (unsigned __int16 *)(PpmParkNodes + 4);
    while ( 1 )
    {
      v4 = *v3;
      v5 = *(_QWORD *)(v3 + 10);
      if ( PpmPerfNewCoreParkingMask.Count > (unsigned __int16)v4 )
        goto LABEL_8;
      if ( PpmPerfNewCoreParkingMask.Size > (unsigned __int16)v4 )
        break;
LABEL_9:
      v6 = *v3;
      v7 = *(_QWORD *)(v3 + 18);
      if ( PpmParkNewSoftParkingMask.Count <= (unsigned __int16)v6 )
      {
        if ( PpmParkNewSoftParkingMask.Size <= (unsigned __int16)v6 )
          goto LABEL_11;
        PpmParkNewSoftParkingMask.Count = v6 + 1;
      }
      PpmParkNewSoftParkingMask.Bitmap[v6] |= v7;
LABEL_11:
      v3 += 104;
      if ( !--v2 )
        goto LABEL_2;
    }
    PpmPerfNewCoreParkingMask.Count = v4 + 1;
LABEL_8:
    PpmPerfNewCoreParkingMask.Bitmap[v4] |= v5;
    goto LABEL_9;
  }
LABEL_2:
  result = KiXorAffinityEx(
             &PpmPerfCoreParkingMask,
             &PpmPerfNewCoreParkingMask,
             &PpmPerfChangedCoreParkingMask,
             PpmPerfChangedCoreParkingMask.Size);
  if ( PpmParkNumNodes )
  {
    do
      result = PpmParkEvaluateRestriction(PpmParkNodes + 208LL * v0++);
    while ( v0 < PpmParkNumNodes );
  }
  return result;
}
