/*
 * XREFs of RtlIsPackageSid @ 0x140A4069C
 * Callers:
 *     SepCreateAppContainerToken @ 0x140606A30 (SepCreateAppContainerToken.c)
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140A40460 (ObpVerifyAccessToBoundaryEntry.c)
 *     NtCreateLowBoxToken @ 0x140AD5A60 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 */

BOOLEAN __cdecl RtlIsPackageSid(PSID Sid)
{
  return *((_BYTE *)Sid + 1) >= 2u
      && *(_BYTE *)Sid == 1
      && RtlCompareMemory((char *)Sid + 2, &RtlpAppPackageAuthority, 6uLL) == 6
      && *((_DWORD *)Sid + 2) == 2;
}
