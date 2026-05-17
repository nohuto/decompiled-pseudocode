/*
 * XREFs of iswctype @ 0x180126600
 * Callers:
 *     RtlUnicodeStringToLcid @ 0x180089820 (RtlUnicodeStringToLcid.c)
 *     RtlIpv4StringToAddressExW @ 0x1800BF260 (RtlIpv4StringToAddressExW.c)
 *     RtlCanonicalizeDomainName @ 0x1800BF430 (RtlCanonicalizeDomainName.c)
 *     RtlIpv6StringToAddressExW @ 0x1800BFA10 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x1800BFCE0 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressW @ 0x1800C0FB0 (RtlIpv4StringToAddressW.c)
 *     RtlEthernetStringToAddressW @ 0x180116F90 (RtlEthernetStringToAddressW.c)
 *     iswalnum @ 0x180126530 (iswalnum.c)
 *     iswalpha @ 0x180126540 (iswalpha.c)
 *     iswdigit @ 0x180126570 (iswdigit.c)
 *     iswgraph @ 0x180126580 (iswgraph.c)
 *     iswlower @ 0x180126590 (iswlower.c)
 *     iswprint @ 0x1801265A0 (iswprint.c)
 *     iswspace @ 0x1801265B0 (iswspace.c)
 *     iswxdigit @ 0x1801265C0 (iswxdigit.c)
 *     towlower @ 0x1801290C0 (towlower.c)
 *     _whiteout @ 0x18013252C (_whiteout.c)
 *     _winput_s @ 0x180132584 (_winput_s.c)
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
