/*
 * XREFs of SepIsCapabilitySid @ 0x14042FD20
 * Callers:
 *     SepNormalAccessCheck @ 0x140344500 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x140362354 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x14036292C (SepNormalAccessCheckEx.c)
 *     SepMaximumAccessCheck @ 0x140363250 (SepMaximumAccessCheck.c)
 * Callees:
 *     RtlCompareMemory @ 0x1406B3990 (RtlCompareMemory.c)
 */

bool __fastcall SepIsCapabilitySid(__int64 a1)
{
  __int64 v2; // rdi

  v2 = SeCapabilityPrefixSid;
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == *(_BYTE *)SeCapabilityPrefixSid
      && RtlCompareMemory((const void *)(a1 + 2), (const void *)(SeCapabilityPrefixSid + 2), 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == *(_DWORD *)(v2 + 8);
}
