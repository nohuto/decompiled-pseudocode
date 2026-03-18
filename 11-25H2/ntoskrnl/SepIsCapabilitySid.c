/*
 * XREFs of SepIsCapabilitySid @ 0x14036C460
 * Callers:
 *     SepNormalAccessCheck @ 0x140366DE0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x140368FC0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x14036A718 (SepNormalAccessCheckEx.c)
 *     SepMaximumAccessCheckEx @ 0x1403CEF04 (SepMaximumAccessCheckEx.c)
 * Callees:
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
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
