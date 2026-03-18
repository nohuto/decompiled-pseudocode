/*
 * XREFs of ?HalveTheStep@?$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ @ 0x1801809A8
 * Callers:
 *     ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x1800407B0 (-AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z.c)
 *     ?Flatten@?$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z @ 0x180180140 (-Flatten@-$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBezierFlattener<float,CMilPoint2F>::HalveTheStep(__int64 a1)
{
  float v1; // xmm3_4
  float v2; // xmm0_4
  float v3; // xmm3_4
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm2_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  double v9; // xmm0_8
  __int64 result; // rax

  v1 = *(float *)(a1 + 72) + *(float *)(a1 + 64);
  v2 = *(float *)(a1 + 68);
  *(float *)(a1 + 64) = v1;
  v3 = v1 * 0.125;
  v4 = (float)(v2 + *(float *)(a1 + 76)) * 0.125;
  *(float *)(a1 + 64) = v3;
  *(float *)(a1 + 68) = v4;
  v5 = *(float *)(a1 + 60);
  v6 = *(float *)(a1 + 56) - v3;
  *(float *)(a1 + 56) = v6;
  v7 = (float)(v5 - *(float *)(a1 + 68)) * 0.5;
  *(float *)(a1 + 56) = v6 * 0.5;
  *(float *)(a1 + 60) = v7;
  v8 = *(float *)(a1 + 72) * 0.25;
  *(float *)(a1 + 76) = *(float *)(a1 + 76) * 0.25;
  *(float *)(a1 + 72) = v8;
  v9 = *(float *)(a1 + 88);
  result = (unsigned int)(2 * *(_DWORD *)(a1 + 80));
  *(_DWORD *)(a1 + 80) = result;
  *(float *)(a1 + 88) = v9 * 0.5;
  return result;
}
