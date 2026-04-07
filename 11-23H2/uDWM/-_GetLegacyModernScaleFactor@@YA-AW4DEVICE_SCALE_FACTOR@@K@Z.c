/*
 * XREFs of ?_GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x1801104C8
 * Callers:
 *     ?InitImpl@CImmersiveOrPrimaryMonitor@@CAXAEBU_DPI_INFORMATION@@PEAUSCALINGINFO@@@Z @ 0x180054620 (-InitImpl@CImmersiveOrPrimaryMonitor@@CAXAEBU_DPI_INFORMATION@@PEAUSCALINGINFO@@@Z.c)
 * Callees:
 *     ?LoadScalingOverrides@@YAXXZ @ 0x18001F7D8 (-LoadScalingOverrides@@YAXXZ.c)
 *     ??$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTelemetry@ScalingCompatTelemetry@@SAXAEAW4AppType@1@AEAI1@Z @ 0x180110034 (--$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTe.c)
 */

__int64 __fastcall _GetLegacyModernScaleFactor(unsigned int a1)
{
  enum DEVICE_SCALE_FACTOR v2; // ebx
  unsigned int v3; // edx
  __int64 v4; // rax
  enum DEVICE_SCALE_FACTOR v6; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF

  LoadScalingOverrides();
  v2 = g_legacyCompatScalingOverride;
  if ( g_legacyCompatScalingOverride == DEVICE_SCALE_FACTOR_INVALID )
  {
    v3 = 0;
    v4 = 0LL;
    v2 = SCALE_100_PERCENT;
    do
    {
      if ( a1 >= *(_DWORD *)((char *)&ModernScaleFactorCutoffs + v4) )
        v2 = *(_DWORD *)((char *)&unk_18012B1DC + v4);
      ++v3;
      v4 += 4LL;
    }
    while ( v3 < 2 );
  }
  v6 = v2;
  v7 = a1;
  v8 = 1;
  if ( !byte_1801484D4 )
  {
    ScalingCompatTelemetry::CScalingCompatTelemetry::ScalingCompatCalulationInvoked<enum ScalingCompatTelemetry::AppType &,unsigned int &,unsigned int &>(
      &v8,
      &v7,
      (unsigned int *)&v6);
    byte_1801484D4 = 1;
  }
  return (unsigned int)v2;
}
