/*
 * XREFs of IommuDomainDetachPasidDevice @ 0x140703CE0
 * Callers:
 *     <none>
 * Callees:
 *     IommupDomainDetachPasidDevice @ 0x14054E420 (IommupDomainDetachPasidDevice.c)
 */

__int64 __fastcall IommuDomainDetachPasidDevice(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 48) )
    return IommupDomainDetachPasidDevice(a1);
  else
    return 3221225659LL;
}
