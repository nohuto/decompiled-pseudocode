/*
 * XREFs of sub_1800530A0 @ 0x1800530A0
 * Callers:
 *     sub_180053048 @ 0x180053048 (sub_180053048.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     j_unknown_libname_81 @ 0x180012100 (j_unknown_libname_81.c)
 *     sub_18001268C @ 0x18001268C (sub_18001268C.c)
 *     sub_180015274 @ 0x180015274 (sub_180015274.c)
 *     sub_18005283C @ 0x18005283C (sub_18005283C.c)
 *     sub_180052BB8 @ 0x180052BB8 (sub_180052BB8.c)
 *     sub_180053500 @ 0x180053500 (sub_180053500.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 */

// Hidden C++ exception states: #wind=6
int __fastcall sub_1800530A0(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, int a5)
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
  sub_180011C30((__int64)(a1 + 16));
  sub_180011C04(*a2 + 56LL, &v24);
  v9 = 1;
  v10 = 1;
  if ( v24 )
  {
    v7 = 1;
    if ( *(_QWORD *)sub_18001268C(v24, &v28) )
      v10 = 0;
  }
  if ( (v7 & 1) != 0 )
  {
    v7 &= ~1u;
    if ( v29 )
      sub_18001060C(v29);
  }
  if ( v10 )
  {
    std::string::string(&v28, "Cameras added to Displays must be attached to a scene.");
    v11 = (unsigned int)std::string::string(
                          v27,
                          "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\"
                          "engine\\display.cpp");
    sub_180068668((unsigned int)pExceptionObject, v11, v12, (unsigned int)&v28, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_180053500(a1, &v28);
  if ( !v28 || (v13 = (_QWORD *)sub_18001268C(v24, &v20), v7 |= 2u, *v13 == v14) )
    v9 = 0;
  if ( (v7 & 2) != 0 && v21 )
    sub_18001060C((__int64)v21);
  if ( v9 )
  {
    std::string::string(pExceptionObject, "Displays require that all cameras be in the same scene.");
    v15 = (unsigned int)std::string::string(
                          v27,
                          "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\"
                          "engine\\display.cpp");
    sub_180068668((unsigned int)v31, v15, v16, (unsigned int)pExceptionObject, 0);
    throw (Spectre::Engine::EngineException *)v31;
  }
  v17 = (_QWORD *)a1[6];
  if ( v17 == (_QWORD *)a1[7] )
  {
    sub_18005283C(a1 + 5, a1[6], a2);
  }
  else
  {
    j_unknown_libname_81(v17, a2);
    a1[6] += 16LL;
  }
  sub_180015274(&v20, a2);
  v18 = *(_QWORD *)sub_180052BB8(a1 + 11, (__int64)v27, (__int64)&v20);
  *(_QWORD *)(v18 + 48) = v22;
  *(_QWORD *)(v18 + 56) = v23;
  *(_DWORD *)(v18 + 64) = a5;
  if ( v21 )
    sub_180010644(v21);
  if ( v29 )
    sub_18001060C(v29);
  if ( v25 )
    sub_18001060C(v25);
  return Mtx_unlock(v8);
}
