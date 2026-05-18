/*
 * XREFs of sub_1800577C8 @ 0x1800577C8
 * Callers:
 *     sub_18005772C @ 0x18005772C (sub_18005772C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180012040 @ 0x180012040 (sub_180012040.c)
 *     sub_18001B4B0 @ 0x18001B4B0 (sub_18001B4B0.c)
 *     sub_1800254DC @ 0x1800254DC (sub_1800254DC.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     sub_18002F2B4 @ 0x18002F2B4 (sub_18002F2B4.c)
 *     sub_18002FFC8 @ 0x18002FFC8 (sub_18002FFC8.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_180044F14 @ 0x180044F14 (sub_180044F14.c)
 *     sub_18006B42C @ 0x18006B42C (sub_18006B42C.c)
 *     sub_18006C4CC @ 0x18006C4CC (sub_18006C4CC.c)
 *     sub_180096C0C @ 0x180096C0C (sub_180096C0C.c)
 *     sub_180096CBC @ 0x180096CBC (sub_180096CBC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=12
char __fastcall sub_1800577C8(_QWORD *a1, __int64 *a2, _QWORD *a3)
{
  _QWORD *v6; // rsi
  char result; // al
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int128 v12; // kr00_16
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // r8
  unsigned int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rcx
  __int128 v20; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h]
  _BYTE v22[8]; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v23; // [rsp+58h] [rbp-A8h]
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h]
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  __int64 v27; // [rsp+78h] [rbp-88h]
  __int64 v28; // [rsp+80h] [rbp-80h] BYREF
  __int64 v29; // [rsp+88h] [rbp-78h]
  _QWORD v30[4]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v31[16]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v32[3]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v33[4]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v34[4]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+118h] [rbp+18h] BYREF

  v6 = a1 + 212;
  result = sub_180044F14(a1[212], (__int64)&off_1801B96A0);
  if ( !result )
  {
    sub_18001B4B0(v34, (__int64)(a1 + 3), (__int64)" effect");
    v8 = *a2;
    sub_1800287EC(v8 + 24, v9);
    unknown_libname_81(&v28, (_QWORD *)(v8 + 272));
    sub_180096C0C(v31, &v28, v34);
    v10 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a3 + 200LL))(*a3, v22);
    sub_18002F2B4(v32, v10);
    if ( v23 )
      sub_180010544(v23);
    v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 152LL))(*a3);
    unknown_libname_81(&v24, v11);
    sub_18006C4CC(v24, &v20, v6);
    v12 = v20;
    if ( (_QWORD)v20 != *((_QWORD *)&v20 + 1) )
    {
      if ( (unsigned __int64)((__int64)(*((_QWORD *)&v20 + 1) - v20) >> 4) > 1 )
      {
        std::string::string(v33, "Camera::RenderEffects() -- only one effect per output is currently supported");
        v13 = std::string::string(
                v30,
                "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\camera.cpp");
        sub_180038A58(pExceptionObject, (__int64)v13, v14, (__int64)v33, 0);
        throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
      }
      if ( *(_DWORD *)(*(_QWORD *)v20 + 176LL) != 1 )
      {
        std::string::string(v33, "Camera::RenderEffects() -- effect must have local scope to be rendered by a camera");
        v15 = std::string::string(
                v30,
                "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\camera.cpp");
        sub_180038A58(pExceptionObject, (__int64)v15, v16, (__int64)v33, 0);
        throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
      }
      if ( *(_BYTE *)(*(_QWORD *)v20 + 136LL) )
      {
        unknown_libname_81(&v26, a1 + 17);
        sub_1800254DC(v26, v33);
        v17 = (unsigned int)unknown_libname_81(v30, (_QWORD *)v12);
        sub_18006B42C(v24, (unsigned int)v22, (_DWORD)a3, v17, v18);
        if ( v27 )
          sub_18001050C(v27);
        v19 = a1[220];
        if ( v19 )
          (*(void (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)v19 + 16LL))(v19, *(_QWORD *)v12, v22);
        if ( v23 )
          sub_18001050C((__int64)v23);
        v12 = v20;
      }
    }
    if ( (_QWORD)v12 )
    {
      sub_180012040(v12, *((__int64 *)&v12 + 1));
      sub_180010134((void *)v20, (v21 - v20) & 0xFFFFFFFFFFFFFFF0uLL);
      v20 = 0LL;
      v21 = 0LL;
    }
    if ( v25 )
      sub_18001050C(v25);
    sub_18002FFC8((__int64)v32);
    sub_180096CBC(v31);
    if ( v29 )
      sub_18001050C(v29);
    return sub_180011A5C((__int64)v34);
  }
  return result;
}
