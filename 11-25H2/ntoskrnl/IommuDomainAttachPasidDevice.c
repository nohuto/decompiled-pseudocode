/*
 * XREFs of IommuDomainAttachPasidDevice @ 0x1406F7CE0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuDeviceGetDomainTypes @ 0x14054B4C8 (HalpIommuDeviceGetDomainTypes.c)
 *     IommupDomainAttachPasidDevice @ 0x14054B814 (IommupDomainAttachPasidDevice.c)
 */

__int64 __fastcall IommuDomainAttachPasidDevice(__int64 a1, __int64 a2)
{
  int DomainTypes; // eax

  if ( !*(_DWORD *)(a2 + 48) )
    return 3221225659LL;
  DomainTypes = HalpIommuDeviceGetDomainTypes(*(_QWORD *)(a2 + 16));
  if ( _bittest(&DomainTypes, *(_DWORD *)(a1 + 8)) )
    return IommupDomainAttachPasidDevice(a1, a2);
  else
    return 3221225506LL;
}
