/*
 * XREFs of wil::details::lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___::_lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___ @ 0x1800D2128
 * Callers:
 *     _SpatialRimDeviceCollection::DoDeviceAttach_::_1_::dtor$1 @ 0x1801CE223 (_SpatialRimDeviceCollection--DoDeviceAttach_--_1_--dtor$1.c)
 * Callees:
 *     ?Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z @ 0x1800D5D84 (-Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___::_lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    RawInputProvidersTracing::DeviceAttached::Stop(
      *(RawInputProvidersTracing::DeviceAttached **)(a1 + 16),
      **(_DWORD **)a1,
      **(_DWORD **)(a1 + 8));
  }
}
