/*
 * XREFs of sub_18003E2AC @ 0x18003E2AC
 * Callers:
 *     sub_18003ED1C @ 0x18003ED1C (sub_18003ED1C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     sub_1800133F4 @ 0x1800133F4 (sub_1800133F4.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18001B5A8 @ 0x18001B5A8 (sub_18001B5A8.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     sub_18002C0B4 @ 0x18002C0B4 (sub_18002C0B4.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_18003BE7C @ 0x18003BE7C (sub_18003BE7C.c)
 *     sub_18003CC3C @ 0x18003CC3C (sub_18003CC3C.c)
 *     sub_18003CC78 @ 0x18003CC78 (sub_18003CC78.c)
 *     sub_18003E5B4 @ 0x18003E5B4 (sub_18003E5B4.c)
 *     sub_18003EA2C @ 0x18003EA2C (sub_18003EA2C.c)
 *     sub_18003F24C @ 0x18003F24C (sub_18003F24C.c)
 */

// Hidden C++ exception states: #wind=11
_QWORD *__fastcall sub_18003E2AC(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  void *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // r8
  void *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  volatile signed __int32 *v21; // rcx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v25; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h]
  _QWORD *v27; // [rsp+50h] [rbp-B0h]
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v29[4]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v30[16]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v31; // [rsp+98h] [rbp-68h]
  __int64 v32; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-58h]
  _BYTE v34[32]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v35[32]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v37[32]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v38[32]; // [rsp+158h] [rbp+58h] BYREF

  v27 = a2;
  v31 = a3;
  sub_18002894C(a1 + 16, (__int64)a2);
  v6 = sub_180012444((__int64)v29, a3);
  v7 = *(_QWORD *)sub_18003EA2C(a1, &v32, v6);
  if ( v33 )
    sub_18001060C(v33);
  if ( v7 )
  {
    v8 = (void *)sub_18002C0B4((__int64)&v32, a3);
    v9 = sub_18001B678((__int64)v37, (__int64)"Scene::CreateLayer() - a layer with ID ", v8);
    v10 = sub_18001B5A8((__int64)v38, v9, (__int64)" already exists");
    v11 = std::string::string(
            v29,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v11, v12, v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_18003E5B4(a1, &v25, &unk_1800FA7F0);
  v13 = (void *)sub_18002C0B4((__int64)v35, a3);
  sub_18001B678((__int64)v34, (__int64)"LayerRoot:", v13);
  sub_180011B5C((__int64)v35);
  v14 = v25;
  sub_1800133F4(v25 + 400, (__int64)v34);
  v15 = sub_18001B1F8(120LL);
  v16 = v15;
  if ( v15 )
  {
    *(_OWORD *)v15 = 0LL;
    *(_DWORD *)(v15 + 8) = 1;
    *(_DWORD *)(v15 + 12) = 1;
    *(_QWORD *)v15 = &std::_Ref_count_obj2<Spectre::Engine::SceneLayer>::`vftable';
    sub_18003CC3C(v15 + 16, a3, (__int64)&v25);
    v14 = v25;
  }
  else
  {
    v16 = 0LL;
  }
  *a2 = v16 + 16;
  a2[1] = v16;
  sub_18003CC78((__int64 *)(a1 + 88), (__int64)v30, a3, (__int64)a2);
  v17 = unknown_libname_81(&v28, a2);
  sub_18003BE7C(v14);
  v18 = v17[1];
  v19 = 0LL;
  v20 = 0LL;
  if ( v18 )
  {
    v19 = *v17;
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 12));
    v20 = v18;
  }
  *(_QWORD *)(v14 + 88) = v19;
  v21 = *(volatile signed __int32 **)(v14 + 96);
  *(_QWORD *)(v14 + 96) = v20;
  if ( v21 )
    sub_180010644(v21);
  v22 = v17[1];
  if ( v22 )
    sub_18001060C(v22);
  v23 = unknown_libname_81(&v32, &v25);
  sub_18003F24C(a1, v23);
  sub_180011B5C((__int64)v34);
  if ( v26 )
    sub_18001060C(v26);
  sub_180013228(a3);
  return a2;
}
