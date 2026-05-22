/*
 * XREFs of ??$_Emplace_front_internal@AEAVRayStabilizationResult@@@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x18006E150
 * Callers:
 *     ?StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z @ 0x18006E008 (-StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@AEAAX_K@Z @ 0x1800C9568 (-_Growmap@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@AEA.c)
 */

__int64 __fastcall std::deque<RayStabilizationResult>::_Emplace_front_internal<RayStabilizationResult &>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 result; // rax

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<RayStabilizationResult>::_Growmap();
  v4 = a1[2];
  v5 = a1[3] & (v4 - 1);
  a1[3] = v5;
  if ( !v5 )
    v5 = v4;
  v6 = v5 - 1;
  v7 = v6 & (v4 - 1);
  if ( !*(_QWORD *)(a1[1] + 8 * v7) )
    *(_QWORD *)(a1[1] + 8 * v7) = operator new(0x64uLL);
  v8 = *(_QWORD *)(a1[1] + 8 * v7);
  *(_OWORD *)v8 = *(_OWORD *)a2;
  *(_OWORD *)(v8 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(v8 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v8 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(v8 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(v8 + 80) = *(_OWORD *)(a2 + 80);
  result = *(unsigned int *)(a2 + 96);
  *(_DWORD *)(v8 + 96) = result;
  a1[3] = v6;
  ++a1[4];
  return result;
}
