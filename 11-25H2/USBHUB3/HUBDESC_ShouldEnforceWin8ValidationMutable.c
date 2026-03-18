/*
 * XREFs of HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x14003C58C
 * Callers:
 *     HUBDESC_InternalValidateBOSDescriptor @ 0x140035E8C (HUBDESC_InternalValidateBOSDescriptor.c)
 *     HUBDESC_InternalValidateContainerIDCapabilityDescriptor @ 0x140036BE0 (HUBDESC_InternalValidateContainerIDCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateEndpointDescriptor @ 0x140037404 (HUBDESC_InternalValidateEndpointDescriptor.c)
 *     HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor @ 0x140039CB8 (HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor @ 0x14003A89C (HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor @ 0x14003BBE4 (HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor.c)
 *     HUBDESC_Validate20HubDescriptor @ 0x14003C5C4 (HUBDESC_Validate20HubDescriptor.c)
 *     HUBDESC_Validate30HubDescriptor @ 0x14003C9EC (HUBDESC_Validate30HubDescriptor.c)
 *     HUBDESC_ValidateDeviceDescriptor @ 0x14003D71C (HUBDESC_ValidateDeviceDescriptor.c)
 * Callees:
 *     <none>
 */

bool __fastcall HUBDESC_ShouldEnforceWin8ValidationMutable(__int64 a1)
{
  return (unsigned __int16)(*(_WORD *)a1 - 768) <= 0x10u
      || (unsigned __int16)(*(_WORD *)a1 - 513) <= 0xFu
      || *(_BYTE *)(a1 + 12) != 0;
}
