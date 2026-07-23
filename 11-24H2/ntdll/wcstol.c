/*
 * XREFs of wcstol @ 0x180126400
 * Callers:
 *     RtlIpv6StringToAddressW @ 0x1800B2A40 (RtlIpv6StringToAddressW.c)
 * Callees:
 *     wcstoxlX @ 0x1801261CC (wcstoxlX.c)
 */

int __cdecl wcstol(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)String, EndPtr, Radix, 0, 0);
}
