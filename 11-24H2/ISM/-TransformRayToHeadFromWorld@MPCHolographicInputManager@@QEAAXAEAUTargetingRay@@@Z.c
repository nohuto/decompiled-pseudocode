/*
 * XREFs of ?TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z @ 0x180012AE0
 * Callers:
 *     ?PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@@Z @ 0x180012948 (-PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@PEAUIMPCInpu.c)
 *     ?GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUHitTestResult3D@@Ufloat3@Numerics@Foundation@Windows@@@Z @ 0x1800C3538 (-GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUHitTestResult3D@@Ufl.c)
 *     ?OnGazeUpdate@MPCMouseProcessor@@MEAAXPEAULegacyInputInfo@@@Z @ 0x1801C2590 (-OnGazeUpdate@MPCMouseProcessor@@MEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x18001431C (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall MPCHolographicInputManager::TransformRayToHeadFromWorld(
        MPCHolographicInputManager *this,
        struct TargetingRay *a2)
{
  float v2; // xmm2_4
  float v3; // xmm3_4
  int v4; // xmm1_4
  float v5; // xmm7_4
  float v6; // xmm6_4
  float v7; // xmm8_4
  float v8; // xmm0_4
  float v9; // xmm7_4
  float v10; // xmm6_4
  float v11; // xmm8_4
  int v12; // xmm1_4
  __int64 v13; // r9
  int v14; // xmm0_4
  _DWORD v15[4]; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v16[4]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( !*((_BYTE *)this + 3364) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3C8,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)a2);
  v2 = *((float *)a2 + 3);
  v3 = *((float *)a2 + 5);
  v4 = *((_DWORD *)a2 + 1);
  v5 = *((float *)a2 + 4) * *((float *)this + 24);
  v6 = *((float *)a2 + 4) * *((float *)this + 25);
  v7 = *((float *)a2 + 4) * *((float *)this + 26);
  v15[0] = *(_DWORD *)a2;
  v15[2] = *((_DWORD *)a2 + 2);
  v8 = v2 * *((float *)this + 20);
  v15[1] = v4;
  v9 = (float)(v5 + v8) + (float)(v3 * *((float *)this + 28));
  v10 = (float)(v6 + (float)(v2 * *((float *)this + 21))) + (float)(v3 * *((float *)this + 29));
  v11 = (float)(v7 + (float)(v2 * *((float *)this + 22))) + (float)(v3 * *((float *)this + 30));
  ((void (__fastcall *)(_DWORD *, _DWORD *, char *, struct TargetingRay *))Windows::Foundation::Numerics::transform)(
    v16,
    v15,
    (char *)this + 80,
    a2);
  v12 = v16[1];
  *(_DWORD *)v13 = v16[0];
  v14 = v16[2];
  *(float *)(v13 + 12) = v9;
  *(float *)(v13 + 16) = v10;
  *(float *)(v13 + 20) = v11;
  *(_DWORD *)(v13 + 8) = v14;
  *(_DWORD *)(v13 + 4) = v12;
}
