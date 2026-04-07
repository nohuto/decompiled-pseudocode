/*
 * XREFs of ??0MagnifierExperienceHelper@@QEAA@AEBNAEBM1@Z @ 0x1800C9044
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18006AD70 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?UpdateDesktopAndMonitorTopologyInformation@MagnifierExperienceHelper@@QEAAXXZ @ 0x180084DC4 (-UpdateDesktopAndMonitorTopologyInformation@MagnifierExperienceHelper@@QEAAXXZ.c)
 *     _anonymous_namespace_::clampFloat @ 0x180088E1C (_anonymous_namespace_--clampFloat.c)
 */

MagnifierExperienceHelper *__fastcall MagnifierExperienceHelper::MagnifierExperienceHelper(
        MagnifierExperienceHelper *this,
        double *a2,
        float *a3,
        const float *a4)
{
  float v4; // xmm0_4
  __int64 v5; // rcx
  float *v6; // r9
  float v7; // xmm0_4
  float *v8; // rcx
  MagnifierExperienceHelper *v9; // rcx

  *(_OWORD *)this = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_OWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((double *)this + 14) = *a2;
  *((_QWORD *)this + 15) = 0LL;
  v4 = anonymous_namespace_::clampFloat(*a3, 0.0, 100.0);
  *(float *)(v5 + 120) = v4;
  v7 = anonymous_namespace_::clampFloat(*v6, 0.0, 100.0);
  v8[31] = v7;
  MagnifierExperienceHelper::UpdateDesktopAndMonitorTopologyInformation((MagnifierExperienceHelper *)v8);
  return v9;
}
