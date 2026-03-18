/*
 * XREFs of IopMemInitialize @ 0x140725C18
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbAddInaccessibleAllocationRange @ 0x1407047B0 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1407049C8 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbInitializeArbiterInstance @ 0x1407055B4 (ArbInitializeArbiterInstance.c)
 *     RtlAddRange @ 0x140A76A90 (RtlAddRange.c)
 */

int __fastcall IopMemInitialize(__int64 a1, __int64 a2)
{
  int result; // eax

  qword_140F8B2B8 = (__int64)IopGenericUnpackRequirement;
  qword_140F8B2C0 = (__int64)IopGenericPackResource;
  qword_140F8B2C8 = (__int64)IopGenericUnpackResource;
  qword_140F8B2D0 = (__int64)IopGenericScoreRequirement;
  qword_140F8B338 = (__int64)IopMemFindSuitableRange;
  qword_140F8B308 = (__int64)IopMemQueryConflict;
  result = ArbInitializeArbiterInstance((__int64)&IopRootMemArbiter, a2, 3, (__int64)L"RootMemory");
  if ( result >= 0 )
  {
    result = RtlAddRange(qword_140F8B268, 0, 4095, 0, 0, 0LL, 0LL);
    if ( result >= 0 )
    {
      result = ArbAddInaccessibleAllocationRange((__int64)&IopRootMemArbiter, qword_140F8B268);
      if ( result >= 0 )
        return ArbAddMmConfigRangeAsBootReserved((__int64)&IopRootMemArbiter, qword_140F8B268);
    }
  }
  return result;
}
