/*
 * XREFs of ?StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z @ 0x18006DD98
 * Callers:
 *     ?StabilizeTargetRay@MPCInputProviderBase@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1800804E0 (-StabilizeTargetRay@MPCInputProviderBase@@UEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ??$_Emplace_front_internal@AEAVRayStabilizationResult@@@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x18006DEE0 (--$_Emplace_front_internal@AEAVRayStabilizationResult@@@-$deque@VRayStabilizationResult@@V-$allo.c)
 *     ?PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x18006DFB4 (-PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800C6A60 (-PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800C6D48 (-PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 */

void __fastcall RayStabilizer::StabilizeInput(RayStabilizer *this, struct LegacyInputInfo *a2)
{
  bool v2; // zf
  __int128 v4; // xmm0
  __int64 v6; // xmm1_8
  const char *v7; // r9
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // [rsp+20h] [rbp-88h] BYREF
  __int128 v13; // [rsp+24h] [rbp-84h]
  _QWORD v14[11]; // [rsp+34h] [rbp-74h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v2 = *((_QWORD *)this + 4) == 0LL;
  v4 = *(_OWORD *)((char *)a2 + 120);
  v12 = 1;
  v6 = *((_QWORD *)a2 + 17);
  v13 = v4;
  v14[0] = v6;
  if ( !v2 )
  {
    if ( (*((_BYTE *)this + 44) & 1) != 0 )
      RayStabilizer::PerformLowPassFilterStabilization(this, (struct RayStabilizationResult *)&v12);
    if ( (*((_BYTE *)this + 44) & 2) != 0 )
      RayStabilizer::PerformDropOffStabilization(this, (struct RayStabilizationResult *)&v12);
    if ( (*((_BYTE *)this + 44) & 4) != 0 )
      RayStabilizer::PerformDynamicExponential(this, (struct RayStabilizationResult *)&v12);
  }
  std::deque<RayStabilizationResult>::_Emplace_front_internal<RayStabilizationResult &>(this, &v12);
  v8 = *((unsigned int *)this + 10);
  v9 = *((_QWORD *)this + 4);
  while ( v9 > v8 )
  {
    *((_QWORD *)this + 4) = --v9;
    if ( !v9 )
      *((_QWORD *)this + 3) = 0LL;
  }
  if ( !v12 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\raystabilizationresult.cpp",
      v7);
  v10 = (unsigned int)(v12 - 1);
  if ( (unsigned int)v10 >= 4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\raystabilizationresult.cpp",
      v7);
  v11 = 3 * v10;
  *(_OWORD *)((char *)a2 + 120) = *(_OWORD *)&v14[v11 - 2];
  *((_QWORD *)a2 + 17) = v14[v11];
}
