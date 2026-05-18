/*
 * XREFs of sub_1800C84D0 @ 0x1800C84D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180011424 @ 0x180011424 (sub_180011424.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180012408 @ 0x180012408 (sub_180012408.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_180015E64 @ 0x180015E64 (sub_180015E64.c)
 *     sub_180016F24 @ 0x180016F24 (sub_180016F24.c)
 *     sub_18001B448 @ 0x18001B448 (sub_18001B448.c)
 *     sub_180027A8C @ 0x180027A8C (sub_180027A8C.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 *     sub_180027C70 @ 0x180027C70 (sub_180027C70.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_18004FF90 @ 0x18004FF90 (sub_18004FF90.c)
 *     sub_180050230 @ 0x180050230 (sub_180050230.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 *     sub_1800B9A04 @ 0x1800B9A04 (sub_1800B9A04.c)
 *     sub_1800BB198 @ 0x1800BB198 (sub_1800BB198.c)
 *     sub_1800BD710 @ 0x1800BD710 (sub_1800BD710.c)
 *     sub_1800C2144 @ 0x1800C2144 (sub_1800C2144.c)
 *     sub_1800C7E40 @ 0x1800C7E40 (sub_1800C7E40.c)
 *     sub_1800C7F38 @ 0x1800C7F38 (sub_1800C7F38.c)
 *     sub_1800C8C18 @ 0x1800C8C18 (sub_1800C8C18.c)
 *     sub_1800C90A8 @ 0x1800C90A8 (sub_1800C90A8.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_1800C84D0(__int64 a1, int a2, int a3, int a4, unsigned int a5)
{
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int16 v9; // cx
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r15
  __int64 *v13; // rax
  __int64 *v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // r8d
  int v19; // ebx
  char v20; // r8
  __int64 v21; // rbx
  _QWORD *v22; // rax
  _DWORD *v23; // rax
  _QWORD *v24; // rax
  void (__fastcall *v25)(__int64, _QWORD *); // r8
  __int64 v26; // r9
  BOOL v27; // edx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 *v30; // rax
  __int64 v31; // rbx
  __int64 (__fastcall *v32)(__int64, __int64, int *, __int64); // rdi
  int v33; // eax
  __int64 v34; // rax
  const char *v35; // rax
  __int64 v36; // rdx
  __int64 result; // rax
  __int128 v38; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+48h] [rbp-B8h]
  __int128 v41; // [rsp+60h] [rbp-A0h] BYREF
  int v42; // [rsp+70h] [rbp-90h] BYREF
  int v43; // [rsp+74h] [rbp-8Ch]
  __int128 v44; // [rsp+78h] [rbp-88h]
  __int64 v45; // [rsp+88h] [rbp-78h] BYREF
  __int64 v46; // [rsp+90h] [rbp-70h]
  __int128 pExceptionObject; // [rsp+A8h] [rbp-58h] BYREF
  int *v48; // [rsp+B8h] [rbp-48h]
  unsigned int *v49; // [rsp+C0h] [rbp-40h]
  __int128 *v50; // [rsp+C8h] [rbp-38h]
  int v51; // [rsp+F0h] [rbp-10h] BYREF
  char v52; // [rsp+F4h] [rbp-Ch]
  bool v53; // [rsp+F5h] [rbp-Bh]
  bool v54; // [rsp+F6h] [rbp-Ah]
  _BYTE v55[56]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v56; // [rsp+130h] [rbp+30h]
  int v57; // [rsp+198h] [rbp+98h] BYREF
  int v58; // [rsp+1A0h] [rbp+A0h] BYREF

  v58 = a3;
  v57 = a2;
  sub_180011B04(a1 + 72, &v39);
  if ( v40 )
    sub_18001050C(v40);
  if ( (unsigned int)(a4 - 1) > 1 )
  {
    std::string::string(&v45, "Invalid format for DepthBuffer");
    v7 = std::string::string(
           &v39,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\depthbufferd3d11.cpp");
    sub_180068508(&pExceptionObject, (__int64)v7, v8, (__int64)&v45, 0);
    throw (Spectre::Engine::EngineException *)&pExceptionObject;
  }
  sub_180011B04(a1 + 72, &v38);
  v41 = v38;
  v9 = a5;
  *(_BYTE *)(a1 + 256) = (a5 & 0x40) != 0;
  v56 = 0LL;
  v51 = a4;
  v52 = HIBYTE(v9) & 1;
  v53 = (v9 & 0x400) != 0;
  v54 = (v9 & 0x200) != 0;
  *(_QWORD *)&pExceptionObject = a1;
  *((_QWORD *)&pExceptionObject + 1) = &v57;
  v48 = &v58;
  v49 = &a5;
  v50 = &v41;
  sub_1800C7E40((__int64)v55, &pExceptionObject);
  a5 = a5 & 0xFFFFF8BA | 1;
  if ( v53 && a4 != 1 )
  {
    std::string::string(&v45, "Readable stencil requested for stencil-buffer format that does not support stencil");
    v10 = std::string::string(
            &v39,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\depthbufferd3d11.cpp");
    sub_180038A58(&pExceptionObject, (__int64)v10, v11, (__int64)&v45, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)&pExceptionObject;
  }
  v12 = v39;
  v13 = sub_180015E64(*(_QWORD *)(v39 + 3648), &v39);
  v14 = (__int64 *)(a1 + 128);
  sub_180011010((_QWORD *)(a1 + 128), v13);
  if ( v40 )
    sub_18001050C(v40);
  v15 = *v14;
  v16 = sub_180027A8C(a1, (__int64)&v45);
  v17 = sub_18001B448((__int64)&v39, v16, (__int64)"Shared Texture");
  sub_180027C24(v15, v17);
  sub_180011A5C((__int64)&v45);
  sub_180027C70(*v14, 1, 0);
  v19 = v18 + 2;
  sub_180027C70(*v14, v18 + 2, v18);
  sub_180027C70(*v14, v19 + 2, v20);
  if ( v52 || v53 || v54 )
  {
    sub_18004FF90(v12, &v45);
    v21 = v45;
    v22 = std::string::string(&v39, "DepthBuffer Readable Sampler");
    sub_180027C24(v21, (__int64)v22);
    if ( v52 )
      sub_18001244C((__int64 *)(a1 + 208), &v45);
    if ( v53 )
      sub_18001244C((__int64 *)(a1 + 240), &v45);
    if ( v54 )
      sub_18001244C((__int64 *)(a1 + 224), &v45);
    sub_180050230(&v39);
    v23 = (_DWORD *)v39;
    *(_DWORD *)v39 = 0;
    v19 = 2;
    v23[1] = 2;
    v23[2] = 2;
    v23[3] = 2;
    v24 = unknown_libname_81(&v38, &v39);
    v25(v26, v24);
    if ( v40 )
      sub_18001050C(v40);
    if ( v46 )
      sub_18001050C(v46);
  }
  v44 = 0LL;
  if ( (unsigned int)(a4 - 23) <= 1 )
    v27 = v19;
  else
    v27 = (a5 & 8) != 0;
  v42 = sub_1800BD710(a4, v27);
  if ( *(_BYTE *)(a1 + 256) )
  {
    v43 = 5;
    v28 = sub_1800C7F38((__int64)&pExceptionObject, (__int64)&v51);
    sub_1800C90A8(a1, v28);
  }
  else
  {
    v43 = 3;
    v29 = sub_1800C7F38((__int64)&pExceptionObject, (__int64)&v51);
    sub_1800C8C18(a1, v29);
  }
  sub_1800B9A04(v41, &v38);
  v30 = unknown_libname_81(&v45, (_QWORD *)(a1 + 96));
  sub_180016F24(&v39, v30);
  sub_1800C2144(v39, &v45);
  v31 = v38;
  v32 = *(__int64 (__fastcall **)(__int64, __int64, int *, __int64))(*(_QWORD *)v38 + 80LL);
  sub_18000E854((__int64 *)(a1 + 112));
  v33 = v32(v31, v45, &v42, a1 + 112);
  sub_1800BB198(v41, v33);
  v34 = sub_180027A8C(a1, (__int64)&pExceptionObject);
  v35 = (const char *)sub_1800137F8(v34);
  sub_180011424(*(__int64 **)(a1 + 112), v35);
  sub_180011A5C((__int64)&pExceptionObject);
  sub_18000E854(&v45);
  if ( v40 )
    sub_18001050C(v40);
  sub_18000E854((__int64 *)&v38);
  result = sub_180012408((__int64)v55, v36);
  if ( *((_QWORD *)&v41 + 1) )
    return sub_18001050C(*((__int64 *)&v41 + 1));
  return result;
}
