/*
 * XREFs of sub_180052F40 @ 0x180052F40
 * Callers:
 *     sub_180052EE8 @ 0x180052EE8 (sub_180052EE8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     j_unknown_libname_81 @ 0x180012000 (j_unknown_libname_81.c)
 *     sub_18001258C @ 0x18001258C (sub_18001258C.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 *     sub_1800526DC @ 0x1800526DC (sub_1800526DC.c)
 *     sub_180052A58 @ 0x180052A58 (sub_180052A58.c)
 *     sub_1800533A0 @ 0x1800533A0 (sub_1800533A0.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 */

// Hidden C++ exception states: #wind=6
int __fastcall sub_180052F40(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, int a5)
{
  char v7; // di
  struct _Mtx_internal_imp_t *v8; // rbx
  char v9; // r14
  bool v10; // r15
  unsigned int v11; // eax
  int v12; // r8d
  _QWORD *v13; // rax
  __int64 v14; // r11
  unsigned int v15; // eax
  int v16; // r8d
  _QWORD *v17; // rcx
  __int64 v18; // rcx
  __int64 v20; // [rsp+30h] [rbp-D0h] BYREF
  volatile signed __int32 *v21; // [rsp+38h] [rbp-C8h]
  __int64 v22; // [rsp+40h] [rbp-C0h]
  __int64 v23; // [rsp+48h] [rbp-B8h]
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h]
  __int64 *v26; // [rsp+60h] [rbp-A0h]
  _QWORD v27[4]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v28; // [rsp+88h] [rbp-78h] BYREF
  __int64 v29; // [rsp+90h] [rbp-70h]
  _QWORD pExceptionObject[7]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v31[56]; // [rsp+E0h] [rbp-20h] BYREF

  v23 = a4;
  v22 = a3;
  v7 = 0;
  v8 = (struct _Mtx_internal_imp_t *)(a1 + 16);
  v26 = a1 + 16;
  sub_180011B30((__int64)(a1 + 16));
  sub_180011B04(*a2 + 56LL, &v24);
  v9 = 1;
  v10 = 1;
  if ( v24 )
  {
    v7 = 1;
    if ( *(_QWORD *)sub_18001258C(v24, &v28) )
      v10 = 0;
  }
  if ( (v7 & 1) != 0 )
  {
    v7 &= ~1u;
    if ( v29 )
      sub_18001050C(v29);
  }
  if ( v10 )
  {
    std::string::string(&v28, "Cameras added to Displays must be attached to a scene.");
    v11 = (unsigned int)std::string::string(
                          v27,
                          "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\"
                          "engine\\display.cpp");
    sub_180068508((unsigned int)pExceptionObject, v11, v12, (unsigned int)&v28, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_1800533A0(a1, &v28);
  if ( !v28 || (v13 = (_QWORD *)sub_18001258C(v24, &v20), v7 |= 2u, *v13 == v14) )
    v9 = 0;
  if ( (v7 & 2) != 0 && v21 )
    sub_18001050C((__int64)v21);
  if ( v9 )
  {
    std::string::string(pExceptionObject, "Displays require that all cameras be in the same scene.");
    v15 = (unsigned int)std::string::string(
                          v27,
                          "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\"
                          "engine\\display.cpp");
    sub_180068508((unsigned int)v31, v15, v16, (unsigned int)pExceptionObject, 0);
    throw (Spectre::Engine::EngineException *)v31;
  }
  v17 = (_QWORD *)a1[6];
  if ( v17 == (_QWORD *)a1[7] )
  {
    sub_1800526DC(a1 + 5, a1[6], a2);
  }
  else
  {
    j_unknown_libname_81(v17, a2);
    a1[6] += 16LL;
  }
  sub_180015174(&v20, a2);
  v18 = *(_QWORD *)sub_180052A58(a1 + 11, (__int64)v27, (__int64)&v20);
  *(_QWORD *)(v18 + 48) = v22;
  *(_QWORD *)(v18 + 56) = v23;
  *(_DWORD *)(v18 + 64) = a5;
  if ( v21 )
    sub_180010544(v21);
  if ( v29 )
    sub_18001050C(v29);
  if ( v25 )
    sub_18001050C(v25);
  return Mtx_unlock(v8);
}
