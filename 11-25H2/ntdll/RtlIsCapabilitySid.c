/*
 * XREFs of RtlIsCapabilitySid @ 0x18008FCF0
 * Callers:
 *     RtlCheckTokenCapability @ 0x18008F880 (RtlCheckTokenCapability.c)
 * Callees:
 *     RtlCompareMemory @ 0x1801674A0 (RtlCompareMemory.c)
 */

BOOLEAN __cdecl RtlIsCapabilitySid(PSID Sid)
{
  return *((_BYTE *)Sid + 1) >= 2u
      && *(_BYTE *)Sid == 1
      && RtlCompareMemory((char *)Sid + 2, &RtlpAppPackageAuthority, 6uLL) == 6
      && *((_DWORD *)Sid + 2) == 3;
}
