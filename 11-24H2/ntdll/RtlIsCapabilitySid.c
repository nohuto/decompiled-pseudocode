/*
 * XREFs of RtlIsCapabilitySid @ 0x18001C580
 * Callers:
 *     RtlCheckTokenCapability @ 0x18001C110 (RtlCheckTokenCapability.c)
 * Callees:
 *     RtlCompareMemory @ 0x1801642D0 (RtlCompareMemory.c)
 */

BOOLEAN __cdecl RtlIsCapabilitySid(PSID Sid)
{
  return *((_BYTE *)Sid + 1) >= 2u
      && *(_BYTE *)Sid == 1
      && RtlCompareMemory((char *)Sid + 2, &RtlpAppPackageAuthority, 6uLL) == 6
      && *((_DWORD *)Sid + 2) == 3;
}
