/*
 * XREFs of ?IsScreenPresentMatchingSizeCondition@DeviceCapabilitiesW@Internal@Windows@@YA_NMW4tagCONDITION_OPERATION@@@Z @ 0x18020820C
 * Callers:
 *     ?IsScreenSizeRequirementMet@DeviceCapabilitiesW@Internal@Windows@@YA_NW4Capability@123@@Z @ 0x180208108 (-IsScreenSizeRequirementMet@DeviceCapabilitiesW@Internal@Windows@@YA_NW4Capability@123@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall Windows::Internal::DeviceCapabilitiesW::IsScreenPresentMatchingSizeCondition(
        Windows::Internal::DeviceCapabilitiesW *this,
        float a2,
        __int64 a3)
{
  __int64 v3; // rdx
  float v4; // xmm0_4
  int v5; // edi
  char v6; // bl
  double v7; // xmm1_8
  int v8; // edi
  double v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0.0;
  v5 = v3;
  v6 = 0;
  if ( (int)GetIntegratedDisplaySize(&v10, v3, a3) >= 0 )
  {
    v7 = v4;
    v8 = v5 - 4;
    if ( v8 )
    {
      if ( v8 == 1 )
        return v7 >= v10;
    }
    else
    {
      return v10 > v7;
    }
  }
  return v6;
}
