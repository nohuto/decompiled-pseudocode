/*
 * XREFs of IommuDomainDetachPasidDevice @ 0x1406F7E00
 * Callers:
 *     <none>
 * Callees:
 *     IommupDomainDetachPasidDevice @ 0x14054BB10 (IommupDomainDetachPasidDevice.c)
 */

__int64 __fastcall IommuDomainDetachPasidDevice(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 48) )
    return IommupDomainDetachPasidDevice(a1);
  else
    return 3221225659LL;
}
