/*
 * XREFs of sub_180095120 @ 0x180095120
 * Callers:
 *     sub_18002FFC8 @ 0x18002FFC8 (sub_18002FFC8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B8C @ 0x180011B8C (sub_180011B8C.c)
 *     sub_180027FBC @ 0x180027FBC (sub_180027FBC.c)
 *     sub_18002815C @ 0x18002815C (sub_18002815C.c)
 *     sub_180040290 @ 0x180040290 (sub_180040290.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180095120(__int64 a1, unsigned __int64 a2)
{
  char result; // al
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v8[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v9[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-48h] BYREF

  result = sub_180040290(a1 + 8);
  if ( result )
  {
    v7 = a1;
    sub_180027FBC(a1);
    if ( a2 >= 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32)) >> 3) )
    {
      std::string::string(v9, "Error: CpuProfiler::EndTimeSpanMarker() called with out of range parameter");
      v5 = std::string::string(
             v8,
             "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\cpupr"
             "ofiler\\cpuprofiler.cpp");
      sub_180068508(pExceptionObject, (__int64)v5, v6, (__int64)v9, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 56 * a2 + 48) = *sub_180011B8C(&v7);
    return sub_18002815C(a1);
  }
  return result;
}
