/*
 * XREFs of ?ComputeTimeScale@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1801BE9D8
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801BEF30 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MPCGamepadProcessor::ComputeTimeScale(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  double v2; // xmm2_8
  double v3; // xmm1_8
  float v4; // xmm0_4

  v2 = (float)((double)(int)*((_QWORD *)a2 + 2) / (double)(int)qword_180250DA8);
  v3 = *((double *)this + 532);
  if ( v3 == 0.0 )
    v4 = FLOAT_1_0;
  else
    v4 = (float)(v2 - v3) / 0.02;
  *((float *)this + 1066) = v4;
  *((double *)this + 532) = v2;
}
