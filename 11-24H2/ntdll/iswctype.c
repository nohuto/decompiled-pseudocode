/*
 * XREFs of iswctype @ 0x180122D50
 * Callers:
 *     RtlIpv4StringToAddressExW @ 0x1800B1FC0 (RtlIpv4StringToAddressExW.c)
 *     RtlCanonicalizeDomainName @ 0x1800B2190 (RtlCanonicalizeDomainName.c)
 *     RtlIpv6StringToAddressExW @ 0x1800B2770 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x1800B2A40 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressW @ 0x1800B3D10 (RtlIpv4StringToAddressW.c)
 *     RtlUnicodeStringToLcid @ 0x1800CB240 (RtlUnicodeStringToLcid.c)
 *     RtlEthernetStringToAddressW @ 0x18010F2E0 (RtlEthernetStringToAddressW.c)
 *     iswalnum @ 0x180122C80 (iswalnum.c)
 *     iswalpha @ 0x180122C90 (iswalpha.c)
 *     iswdigit @ 0x180122CC0 (iswdigit.c)
 *     iswgraph @ 0x180122CD0 (iswgraph.c)
 *     iswlower @ 0x180122CE0 (iswlower.c)
 *     iswprint @ 0x180122CF0 (iswprint.c)
 *     iswspace @ 0x180122D00 (iswspace.c)
 *     iswxdigit @ 0x180122D10 (iswxdigit.c)
 *     towlower @ 0x180125810 (towlower.c)
 *     _whiteout @ 0x18012EC7C (_whiteout.c)
 *     _winput_s @ 0x18012ECD4 (_winput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl iswctype(wint_t C, wctype_t Type)
{
  if ( C >= 0x100u )
    return 0;
  else
    return Type & pwctype[C];
}
