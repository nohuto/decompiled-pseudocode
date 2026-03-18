/*
 * XREFs of iswctype @ 0x140500C30
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x140470250 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x140470480 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x140475030 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x1404751A0 (RtlIpv4StringToAddressW.c)
 *     iswalnum @ 0x1404FEAD0 (iswalnum.c)
 *     iswalpha @ 0x1404FEAEC (iswalpha.c)
 *     iswdigit @ 0x1404FEB10 (iswdigit.c)
 *     iswspace @ 0x1404FEB30 (iswspace.c)
 *     towlower @ 0x1404FFC10 (towlower.c)
 *     _whiteout @ 0x140507150 (_whiteout.c)
 *     _winput_s @ 0x1405071A8 (_winput_s.c)
 *     RtlEthernetStringToAddressW @ 0x1405EE210 (RtlEthernetStringToAddressW.c)
 * Callees:
 *     <none>
 */

int __cdecl iswctype(wint_t C, wctype_t Type)
{
  if ( C >= 0x100u )
    return 0;
  else
    return Type & (*pwctype)[C];
}
