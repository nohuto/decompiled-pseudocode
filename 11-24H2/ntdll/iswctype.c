/*
 * XREFs of iswctype @ 0x180124B20
 * Callers:
 *     RtlIpv4StringToAddressExW @ 0x1800BA200 (RtlIpv4StringToAddressExW.c)
 *     RtlCanonicalizeDomainName @ 0x1800BA3D0 (RtlCanonicalizeDomainName.c)
 *     RtlIpv6StringToAddressExW @ 0x1800BA9B0 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x1800BAC80 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressW @ 0x1800BBF50 (RtlIpv4StringToAddressW.c)
 *     RtlEthernetStringToAddressW @ 0x180113FE0 (RtlEthernetStringToAddressW.c)
 *     RtlUnicodeStringToLcid @ 0x180116D44 (RtlUnicodeStringToLcid.c)
 *     iswalnum @ 0x180124A50 (iswalnum.c)
 *     iswalpha @ 0x180124A60 (iswalpha.c)
 *     iswdigit @ 0x180124A90 (iswdigit.c)
 *     iswgraph @ 0x180124AA0 (iswgraph.c)
 *     iswlower @ 0x180124AB0 (iswlower.c)
 *     iswprint @ 0x180124AC0 (iswprint.c)
 *     iswspace @ 0x180124AD0 (iswspace.c)
 *     iswxdigit @ 0x180124AE0 (iswxdigit.c)
 *     towlower @ 0x1801275E0 (towlower.c)
 *     _whiteout @ 0x180130A4C (_whiteout.c)
 *     _winput_s @ 0x180130AA4 (_winput_s.c)
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
