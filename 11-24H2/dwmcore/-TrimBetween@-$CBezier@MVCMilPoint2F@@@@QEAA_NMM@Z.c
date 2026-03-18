/*
 * XREFs of ?TrimBetween@?$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z @ 0x180248AE0
 * Callers:
 *     ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z @ 0x18017FC44 (-InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z.c)
 * Callees:
 *     ?TrimToEndAt@?$CBezier@MVCMilPoint2F@@@@QEAAXM@Z @ 0x1801805F4 (-TrimToEndAt@-$CBezier@MVCMilPoint2F@@@@QEAAXM@Z.c)
 *     ?TrimToStartAt@?$CBezier@MVCMilPoint2F@@@@QEAAXM@Z @ 0x1801FAA0C (-TrimToStartAt@-$CBezier@MVCMilPoint2F@@@@QEAAXM@Z.c)
 *     ?GetPoint@?$CBezier@MVCMilPoint2F@@@@QEBAXMAEAVCMilPoint2F@@@Z @ 0x180248B88 (-GetPoint@-$CBezier@MVCMilPoint2F@@@@QEBAXMAEAVCMilPoint2F@@@Z.c)
 */

char __fastcall CBezier<float,CMilPoint2F>::TrimBetween(float *a1, __int64 a2, float a3)
{
  float v3; // xmm1_4
  int *v4; // rcx
  int v5; // xmm0_4
  char result; // al
  int v7; // xmm1_4

  if ( (float)(a3 - v3) >= 0.000001 )
  {
    if ( a3 < 1.0 )
      CBezier<float,CMilPoint2F>::TrimToEndAt(a1, a3);
    if ( v3 > 0.0 )
      CBezier<float,CMilPoint2F>::TrimToStartAt(a1, v3 / a3);
    return 1;
  }
  else
  {
    CBezier<float,CMilPoint2F>::GetPoint(a1, a2, a1);
    v5 = *v4;
    result = 0;
    v7 = v4[1];
    v4[6] = *v4;
    v4[7] = v7;
    v4[4] = v5;
    v4[5] = v7;
    v4[2] = v5;
    v4[3] = v7;
  }
  return result;
}
