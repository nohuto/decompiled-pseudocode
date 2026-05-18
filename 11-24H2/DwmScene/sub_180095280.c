/*
 * XREFs of sub_180095280 @ 0x180095280
 * Callers:
 *     sub_180030128 @ 0x180030128 (sub_180030128.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011C8C @ 0x180011C8C (sub_180011C8C.c)
 *     sub_18002811C @ 0x18002811C (sub_18002811C.c)
 *     sub_1800282BC @ 0x1800282BC (sub_1800282BC.c)
 *     sub_1800403F0 @ 0x1800403F0 (sub_1800403F0.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180095280(__int64 a1, unsigned __int64 a2)
{
  char result; // al
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v8[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v9[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-48h] BYREF

  result = sub_1800403F0(a1 + 8);
  if ( result )
  {
    v7 = a1;
    sub_18002811C(a1);
    if ( a2 >= 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32)) >> 3) )
    {
      std::string::string(v9, "Error: CpuProfiler::EndTimeSpanMarker() called with out of range parameter");
      v5 = std::string::string(
             v8,
             "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\cpupr"
             "ofiler\\cpuprofiler.cpp");
      sub_180068668(pExceptionObject, (__int64)v5, v6, (__int64)v9, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 56 * a2 + 48) = *sub_180011C8C(&v7);
    return sub_1800282BC(a1);
  }
  return result;
}
