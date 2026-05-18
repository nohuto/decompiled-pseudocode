/*
 * XREFs of sub_180050580 @ 0x180050580
 * Callers:
 *     sub_180068A3C @ 0x180068A3C (sub_180068A3C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18005069C @ 0x18005069C (sub_18005069C.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180050580(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v5; // eax
  int v6; // r8d
  _QWORD v7[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v8[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a1 + 112);
  v3 = *(_QWORD *)(*(_QWORD *)a2 + 96LL);
  if ( *(_DWORD *)v2 != *(_DWORD *)v3
    || *(_DWORD *)(v2 + 4) != *(_DWORD *)(v3 + 4)
    || *(_DWORD *)(v2 + 8) != *(_DWORD *)(v3 + 8)
    || *(_DWORD *)(v2 + 12) != *(_DWORD *)(v3 + 12)
    || *(float *)(v2 + 16) != *(float *)(v3 + 16)
    || *(_DWORD *)(v2 + 20) != *(_DWORD *)(v3 + 20)
    || *(_DWORD *)(v2 + 24) != *(_DWORD *)(v3 + 24)
    || _mm_movemask_ps(_mm_cmpeq_ps(*(__m128 *)(v3 + 28), *(__m128 *)(v2 + 28))) != 15
    || *(float *)(v2 + 44) != *(float *)(v3 + 44)
    || *(float *)(v2 + 48) != *(float *)(v3 + 48) )
  {
    std::string::string(v8, "Attaching a device sampler to an incompatible sampler");
    v5 = (unsigned int)std::string::string(
                         v7,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\sampler.cpp");
    sub_180068508((unsigned int)pExceptionObject, v5, v6, (unsigned int)v8, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  return sub_18005069C(a1, a2);
}
