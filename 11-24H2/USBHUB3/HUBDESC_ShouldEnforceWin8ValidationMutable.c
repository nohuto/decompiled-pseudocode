/*
 * XREFs of HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x14003CC40
 * Callers:
 *     HUBDESC_InternalValidateBOSDescriptor @ 0x14003615C (HUBDESC_InternalValidateBOSDescriptor.c)
 *     HUBDESC_InternalValidateContainerIDCapabilityDescriptor @ 0x140036EB0 (HUBDESC_InternalValidateContainerIDCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateEndpointDescriptor @ 0x1400376D8 (HUBDESC_InternalValidateEndpointDescriptor.c)
 *     HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor @ 0x14003A36C (HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor @ 0x14003AF50 (HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor @ 0x14003C298 (HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor.c)
 *     HUBDESC_Validate20HubDescriptor @ 0x14003CC78 (HUBDESC_Validate20HubDescriptor.c)
 *     HUBDESC_Validate30HubDescriptor @ 0x14003D0A0 (HUBDESC_Validate30HubDescriptor.c)
 *     HUBDESC_ValidateDeviceDescriptor @ 0x14003DE2C (HUBDESC_ValidateDeviceDescriptor.c)
 * Callees:
 *     <none>
 */

bool __fastcall HUBDESC_ShouldEnforceWin8ValidationMutable(__int64 a1)
{
  return (unsigned __int16)(*(_WORD *)a1 - 768) <= 0x10u
      || (unsigned __int16)(*(_WORD *)a1 - 513) <= 0xFu
      || *(_BYTE *)(a1 + 12) != 0;
}
