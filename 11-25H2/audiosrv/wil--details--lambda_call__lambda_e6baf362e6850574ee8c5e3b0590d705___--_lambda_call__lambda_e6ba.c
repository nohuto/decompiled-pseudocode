/*
 * XREFs of wil::details::lambda_call__lambda_e6baf362e6850574ee8c5e3b0590d705___::_lambda_call__lambda_e6baf362e6850574ee8c5e3b0590d705___ @ 0x180083B6C
 * Callers:
 *     _CKsSoftwareNotificationsMonitor::OnFormatCapsChange_::_1_::dtor$8 @ 0x180167322 (_CKsSoftwareNotificationsMonitor--OnFormatCapsChange_--_1_--dtor$8.c)
 *     _CEndpointCharacteristics::GetAvailableConnectorCount_::_1_::dtor$1 @ 0x18016824A (_CEndpointCharacteristics--GetAvailableConnectorCount_--_1_--dtor$1.c)
 *     _EffectPack::UpdateAPOEnableStatus_::_1_::dtor$0 @ 0x1801683DD (_EffectPack--UpdateAPOEnableStatus_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall wil::details::lambda_call__lambda_e6baf362e6850574ee8c5e3b0590d705___::_lambda_call__lambda_e6baf362e6850574ee8c5e3b0590d705___(
        __int64 a1)
{
  HRESULT result; // eax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return PropVariantClear(*(PROPVARIANT **)a1);
  }
  return result;
}
