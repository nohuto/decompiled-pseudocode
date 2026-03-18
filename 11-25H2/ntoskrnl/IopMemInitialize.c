/*
 * XREFs of IopMemInitialize @ 0x140719C98
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbAddInaccessibleAllocationRange @ 0x1406F88D0 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1406F8AE8 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbInitializeArbiterInstance @ 0x1406F96D4 (ArbInitializeArbiterInstance.c)
 *     RtlAddRange @ 0x140A749C0 (RtlAddRange.c)
 */

int __fastcall IopMemInitialize(__int64 a1, __int64 a2)
{
  int result; // eax

  qword_140F8A9D8 = (__int64)IopGenericUnpackRequirement;
  qword_140F8A9E0 = (__int64)IopGenericPackResource;
  qword_140F8A9E8 = (__int64)IopGenericUnpackResource;
  qword_140F8A9F0 = (__int64)IopGenericScoreRequirement;
  qword_140F8AA58 = (__int64)IopMemFindSuitableRange;
  qword_140F8AA28 = (__int64)IopMemQueryConflict;
  result = ArbInitializeArbiterInstance((__int64)&IopRootMemArbiter, a2, 3, (__int64)L"RootMemory");
  if ( result >= 0 )
  {
    result = RtlAddRange(qword_140F8A988, 0, 4095, 0, 0, 0LL, 0LL);
    if ( result >= 0 )
    {
      result = ArbAddInaccessibleAllocationRange((__int64)&IopRootMemArbiter, qword_140F8A988);
      if ( result >= 0 )
        return ArbAddMmConfigRangeAsBootReserved((__int64)&IopRootMemArbiter, qword_140F8A988);
    }
  }
  return result;
}
