/*
 * XREFs of sub_1800497C4 @ 0x1800497C4
 * Callers:
 *     sub_180049780 @ 0x180049780 (sub_180049780.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_1800254DC @ 0x1800254DC (sub_1800254DC.c)
 *     sub_1800480A0 @ 0x1800480A0 (sub_1800480A0.c)
 *     sub_180048690 @ 0x180048690 (sub_180048690.c)
 *     sub_180049B78 @ 0x180049B78 (sub_180049B78.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_1800497C4(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v5; // rcx
  unsigned int v6; // eax
  int v7; // r8d
  __int64 *result; // rax
  __int64 *v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // [rsp+30h] [rbp-59h] BYREF
  __int64 v13; // [rsp+40h] [rbp-49h] BYREF
  __int64 v14; // [rsp+48h] [rbp-41h]
  __int64 *v15; // [rsp+60h] [rbp-29h]
  _QWORD v16[4]; // [rsp+68h] [rbp-21h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+88h] [rbp-1h] BYREF

  v15 = a3;
  v5 = (_QWORD *)(a1 + 104);
  if ( !(0x2E8BA2E8BA2E8BA3LL * ((__int64)(v5[1] - *v5) >> 3)) )
  {
    std::string::string(v16, "Out of range");
    v6 = (unsigned int)std::string::string(
                         &v13,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\meshinstance.cpp");
    sub_180068508((unsigned int)pExceptionObject, v6, v7, (unsigned int)v16, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  result = (__int64 *)sub_180049B78(v5, 0LL);
  v9 = result;
  if ( *result != *a3 )
  {
    sub_180048690(a1, 0LL);
    result = sub_18001244C(v9, a3);
    if ( *a3 )
    {
      result = (__int64 *)sub_1800254DC(*a3, &v13);
      if ( v13 )
      {
        v10 = unknown_libname_81(&v12, &v13);
        result = (__int64 *)sub_1800480A0(a1, 0LL, v10);
      }
      if ( v14 )
        result = (__int64 *)sub_18001050C(v14);
    }
  }
  v11 = a3[1];
  if ( v11 )
    return (__int64 *)sub_18001050C(v11);
  return result;
}
