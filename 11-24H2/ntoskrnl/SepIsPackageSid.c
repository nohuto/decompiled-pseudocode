/*
 * XREFs of SepIsPackageSid @ 0x140428560
 * Callers:
 *     SepNormalAccessCheck @ 0x140344500 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x140362354 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x14036292C (SepNormalAccessCheckEx.c)
 *     SepMaximumAccessCheck @ 0x140363250 (SepMaximumAccessCheck.c)
 * Callees:
 *     RtlCompareMemory @ 0x1406B3990 (RtlCompareMemory.c)
 */

bool __fastcall SepIsPackageSid(__int64 a1)
{
  __int64 v2; // rdi

  v2 = SePackagePrefixSid;
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == *(_BYTE *)SePackagePrefixSid
      && RtlCompareMemory((const void *)(a1 + 2), (const void *)(SePackagePrefixSid + 2), 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == *(_DWORD *)(v2 + 8);
}
