/*
 * XREFs of PpmEventAddAffinityMaskAsSubset @ 0x1405DA2C0
 * Callers:
 *     PpmEventAffinityMaskEx @ 0x1405DA420 (PpmEventAffinityMaskEx.c)
 *     PpmEventHgsActiveWorkloadClassEx @ 0x1405DA510 (PpmEventHgsActiveWorkloadClassEx.c)
 *     PpmEventHgsCoresUnparkedCountEx @ 0x1405DA8F8 (PpmEventHgsCoresUnparkedCountEx.c)
 *     PpmEventParkNodeCapChangeEx @ 0x1405DAA80 (PpmEventParkNodeCapChangeEx.c)
 *     PpmEventParkNodeClassRecordedStatsEx @ 0x1405DAC48 (PpmEventParkNodeClassRecordedStatsEx.c)
 *     PpmEventParkNodeParkHintChangedEx @ 0x1405DADD8 (PpmEventParkNodeParkHintChangedEx.c)
 *     PpmEventParkNodePreferenceEx @ 0x1405DAF00 (PpmEventParkNodePreferenceEx.c)
 *     PpmEventParkNodeRecordedStatsEx @ 0x1405DB128 (PpmEventParkNodeRecordedStatsEx.c)
 *     PpmEventParkNodeRestrictionEx @ 0x1405DB39C (PpmEventParkNodeRestrictionEx.c)
 *     PpmEventTraceCoreParkingSelectionEx @ 0x1405DB6A0 (PpmEventTraceCoreParkingSelectionEx.c)
 *     PpmEventTraceHeteroDistributeUtilityEx @ 0x1405DBA94 (PpmEventTraceHeteroDistributeUtilityEx.c)
 *     PpmEventTraceHeteroResponseEx @ 0x1405DBBC4 (PpmEventTraceHeteroResponseEx.c)
 *     PpmEventTraceHeteroResponseExV1 @ 0x1405DBE40 (PpmEventTraceHeteroResponseExV1.c)
 *     PpmEventTraceMultiClassHeteroResponseEx @ 0x1405DC0EC (PpmEventTraceMultiClassHeteroResponseEx.c)
 *     PpmEventTraceSoftCoreParkingSelectionEx @ 0x1405DC3F8 (PpmEventTraceSoftCoreParkingSelectionEx.c)
 *     PpmEventTraceParkNodeRundownEx @ 0x140765A0C (PpmEventTraceParkNodeRundownEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmEventAddAffinityMaskAsSubset(
        _WORD *a1,
        _WORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _DWORD *a7,
        unsigned int *a8)
{
  _WORD *v8; // r11
  unsigned __int16 v11; // r10
  unsigned int v12; // edx
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned __int16 *v15; // r9
  int v16; // ecx
  unsigned __int16 **v17; // rax
  __int64 result; // rax
  unsigned __int16 *v19; // r9
  __int64 v20; // rbp
  int v21; // r10d
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r11
  _WORD *v25; // r11

  v8 = a2;
  if ( a1 )
    v8 = a1;
  v11 = 0;
  v12 = 0;
  v13 = (unsigned int)*a7;
  do
  {
    if ( (unsigned __int16)v12 < *v8 && *(_QWORD *)&v8[4 * (unsigned __int16)v12 + 4] )
    {
      v14 = (unsigned int)*a7;
      *(_WORD *)(a4 + 2 * v14) = v12;
      *a7 = v14 + 1;
      ++v11;
    }
    ++v12;
  }
  while ( v12 < 0x20 );
  v15 = (unsigned __int16 *)(a3 + 2LL * (unsigned int)*a6);
  *v15 = v11;
  if ( !a1 )
  {
    v16 = *a8;
    v17 = (unsigned __int16 **)(a5 + 16LL * *a8);
    *v17 = v15;
    v17[1] = (unsigned __int16 *)2;
    *a8 = v16 + 1;
  }
  result = v11 + (unsigned int)v13;
  if ( (unsigned int)v13 < (unsigned int)result )
  {
    v19 = (unsigned __int16 *)(a4 + 2 * v13);
    v20 = v11;
    do
    {
      v21 = *a8;
      v22 = (_QWORD *)(a5 + 16LL * *a8);
      v23 = a5 + 16LL * (*a8 + 1);
      *v22 = v19;
      v22[1] = 2LL;
      v24 = *v19;
      if ( (unsigned __int16)v24 >= *a2 )
        v25 = &PpmEventEmptyMask;
      else
        v25 = &a2[4 * v24 + 4];
      *(_QWORD *)v23 = v25;
      ++v19;
      *(_DWORD *)(v23 + 8) = 8;
      result = (unsigned int)(v21 + 2);
      *(_DWORD *)(v23 + 12) = 0;
      *a8 = result;
      --v20;
    }
    while ( v20 );
  }
  ++*a6;
  return result;
}
