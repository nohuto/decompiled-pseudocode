/*
 * XREFs of IopMemInitialize @ 0x1407237A8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbAddInaccessibleAllocationRange @ 0x140702370 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x140702588 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbInitializeArbiterInstance @ 0x140703174 (ArbInitializeArbiterInstance.c)
 *     RtlAddRange @ 0x140A70BB0 (RtlAddRange.c)
 */

int __fastcall IopMemInitialize(__int64 a1, __int64 a2)
{
  int result; // eax

  qword_140F8B3B8 = (__int64)IopGenericUnpackRequirement;
  qword_140F8B3C0 = (__int64)IopGenericPackResource;
  qword_140F8B3C8 = (__int64)IopGenericUnpackResource;
  qword_140F8B3D0 = (__int64)IopGenericScoreRequirement;
  qword_140F8B438 = (__int64)IopMemFindSuitableRange;
  qword_140F8B408 = (__int64)IopMemQueryConflict;
  result = ArbInitializeArbiterInstance((__int64)&IopRootMemArbiter, a2, 3, (__int64)L"RootMemory");
  if ( result >= 0 )
  {
    result = RtlAddRange(qword_140F8B368, 0, 4095, 0, 0, 0LL, 0LL);
    if ( result >= 0 )
    {
      result = ArbAddInaccessibleAllocationRange((__int64)&IopRootMemArbiter, qword_140F8B368);
      if ( result >= 0 )
        return ArbAddMmConfigRangeAsBootReserved((__int64)&IopRootMemArbiter, qword_140F8B368);
    }
  }
  return result;
}
