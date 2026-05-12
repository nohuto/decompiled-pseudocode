/*
 * XREFs of RaUnitIsSMRDisabled @ 0x14003A8F0
 * Callers:
 *     RaidUnitGetCompatibleIds @ 0x14009E318 (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetHardwareIds @ 0x14009EB24 (RaidUnitGetHardwareIds.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1401B7B2C (RaUnitQueryCapabilitiesIrp.c)
 *     RaUnitQueryPnpDeviceStateIrp @ 0x1401BAC5C (RaUnitQueryPnpDeviceStateIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitIsSMRDisabled(__int64 a1)
{
  _BYTE *v1; // rax

  v1 = *(_BYTE **)(a1 + 112);
  if ( !v1 || (*v1 & 0x1F) != 0x14 )
    return 0LL;
  if ( IsSMREnabled && *(int *)(*(_QWORD *)(a1 + 24) + 4664LL) <= 1 )
    return *(_BYTE *)(a1 + 507) & 1;
  return 1LL;
}
