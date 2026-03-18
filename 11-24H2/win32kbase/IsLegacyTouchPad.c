/*
 * XREFs of IsLegacyTouchPad @ 0x140121938
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x140166620 (_GetPrecisionTouchPadConfiguration.c)
 *     ?GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z @ 0x140187948 (-GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsLegacyTouchPad(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( !*(_DWORD *)(a1 + 48) )
    return *(_WORD *)(a1 + 864) == 1;
  return result;
}
