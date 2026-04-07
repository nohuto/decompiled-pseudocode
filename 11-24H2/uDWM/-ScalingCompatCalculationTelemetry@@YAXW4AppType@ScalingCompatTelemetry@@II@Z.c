/*
 * XREFs of ?ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z @ 0x180098D78
 * Callers:
 *     ?_GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x180004C10 (-_GetLegacyModernScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     ?GetLegacyPhoneScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z @ 0x1800F5744 (-GetLegacyPhoneScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z.c)
 * Callees:
 *     ??$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTelemetry@ScalingCompatTelemetry@@SAXAEAW4AppType@1@AEAI1@Z @ 0x1800F5564 (--$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTe.c)
 */

_UNKNOWN **__fastcall ScalingCompatCalculationTelemetry(int a1, int a2, int a3)
{
  _UNKNOWN **result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  int v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+38h] [rbp+10h] BYREF
  int v7; // [rsp+40h] [rbp+18h] BYREF

  result = &retaddr;
  v7 = a3;
  v6 = a2;
  v5 = a1;
  if ( !byte_180129BE8 )
  {
    result = (_UNKNOWN **)ScalingCompatTelemetry::CScalingCompatTelemetry::ScalingCompatCalulationInvoked<enum ScalingCompatTelemetry::AppType &,unsigned int &,unsigned int &>(
                            &v5,
                            &v6,
                            &v7);
    byte_180129BE8 = 1;
  }
  return result;
}
