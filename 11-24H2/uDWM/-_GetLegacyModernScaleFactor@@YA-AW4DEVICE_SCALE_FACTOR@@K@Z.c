/*
 * XREFs of ?_GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x180004C10
 * Callers:
 *     ?InitImpl@CImmersiveOrPrimaryMonitor@@CAXAEBU_DPI_INFORMATION@@PEAUSCALINGINFO@@@Z @ 0x180004A3C (-InitImpl@CImmersiveOrPrimaryMonitor@@CAXAEBU_DPI_INFORMATION@@PEAUSCALINGINFO@@@Z.c)
 * Callees:
 *     ?LoadScalingOverrides@@YAXXZ @ 0x180004B44 (-LoadScalingOverrides@@YAXXZ.c)
 *     ?ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z @ 0x180098D78 (-ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z.c)
 */

__int64 __fastcall _GetLegacyModernScaleFactor(unsigned int a1)
{
  enum DEVICE_SCALE_FACTOR v2; // ebx
  unsigned int v3; // eax
  __int64 v4; // rdx

  LoadScalingOverrides();
  v2 = g_legacyCompatScalingOverride;
  v3 = 0;
  if ( g_legacyCompatScalingOverride == DEVICE_SCALE_FACTOR_INVALID )
  {
    v2 = SCALE_100_PERCENT;
    v4 = 0LL;
    do
    {
      if ( a1 >= *(_DWORD *)((char *)&ModernScaleFactorCutoffs + v4) )
        v2 = *(_DWORD *)((char *)&unk_18010C094 + v4);
      ++v3;
      v4 += 4LL;
    }
    while ( v3 < 2 );
  }
  ScalingCompatCalculationTelemetry(1LL, a1, (unsigned int)v2);
  return (unsigned int)v2;
}
