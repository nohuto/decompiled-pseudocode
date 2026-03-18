/*
 * XREFs of PpmParkEvaluateRestriction @ 0x14047F6CC
 * Callers:
 *     PpmParkComputeDiff @ 0x14047F584 (PpmParkComputeDiff.c)
 * Callees:
 *     PpmEventTraceHeteroSets @ 0x140427BB0 (PpmEventTraceHeteroSets.c)
 *     PpmEventParkNodeRestriction @ 0x1404CBA34 (PpmEventParkNodeRestriction.c)
 *     KeUpdateProcessorRestrictions @ 0x1405B16F8 (KeUpdateProcessorRestrictions.c)
 */

void __fastcall PpmParkEvaluateRestriction(__int64 a1)
{
  char v1; // di
  __int64 v3; // rax
  unsigned __int64 v4; // rcx

  v1 = 0;
  if ( *(_BYTE *)(a1 + 164)
    || *(_DWORD *)(a1 + 160) == 3
    && ((v3 = *(unsigned __int16 *)(a1 + 4), (unsigned __int16)v3 >= PpmPerfChangedCoreParkingMask.Count)
      ? (v4 = 0LL)
      : (v4 = PpmPerfChangedCoreParkingMask.Bitmap[v3]),
        (v4 & *(_QWORD *)(a1 + 16)) != 0) )
  {
    v1 = 1;
  }
  else if ( !*(_BYTE *)(a1 + 173) )
  {
    return;
  }
  PpmEventParkNodeRestriction(0LL, a1);
  if ( v1 )
  {
    if ( (unsigned __int8)KeUpdateProcessorRestrictions(
                            *(unsigned __int16 *)(a1 + 8),
                            *(unsigned __int8 *)(a1 + 172),
                            *(_QWORD *)(a1 + 176),
                            a1 + 165) )
      PpmEventTraceHeteroSets(2);
    *(_BYTE *)(a1 + 164) = 0;
  }
}
