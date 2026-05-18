/*
 * XREFs of sub_1800C1DB0 @ 0x1800C1DB0
 * Callers:
 *     sub_1800C53F0 @ 0x1800C53F0 (sub_1800C53F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_1800114D0 @ 0x1800114D0 (sub_1800114D0.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18001CC24 @ 0x18001CC24 (sub_18001CC24.c)
 *     sub_18001CC4C @ 0x18001CC4C (sub_18001CC4C.c)
 *     sub_180027470 @ 0x180027470 (sub_180027470.c)
 *     sub_1800521B8 @ 0x1800521B8 (sub_1800521B8.c)
 *     sub_18005224C @ 0x18005224C (sub_18005224C.c)
 *     sub_180068574 @ 0x180068574 (sub_180068574.c)
 *     sub_1800B9A04 @ 0x1800B9A04 (sub_1800B9A04.c)
 *     sub_1800BB198 @ 0x1800BB198 (sub_1800BB198.c)
 *     sub_1800BFC9C @ 0x1800BFC9C (sub_1800BFC9C.c)
 *     sub_1800C1AE8 @ 0x1800C1AE8 (sub_1800C1AE8.c)
 *     sub_1800C2170 @ 0x1800C2170 (sub_1800C2170.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=8
__int64 *__fastcall sub_1800C1DB0(__int64 a1, __int64 *a2, unsigned int a3, unsigned int a4)
{
  int v8; // eax
  char v9; // dl
  unsigned int v10; // esi
  __int64 *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r12
  unsigned __int128 v15; // kr00_16
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int128 *, _QWORD, __int64 *); // rdi
  int v18; // edi
  void **v19; // rax
  void **v20; // rax
  void **v21; // rax
  void **v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  void **v25; // rbx
  _QWORD *v26; // rax
  _BYTE *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // r8
  __int64 v31; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v32; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v33; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B0h]
  __int128 v35; // [rsp+60h] [rbp-A0h]
  __int128 v36; // [rsp+70h] [rbp-90h] BYREF
  __int128 v37; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+90h] [rbp-70h]
  int v39; // [rsp+98h] [rbp-68h]
  _QWORD v40[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v41[4]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v42[4]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+100h] [rbp+0h] BYREF

  v32 = a2;
  sub_1800521B8(a1);
  v8 = sub_18005224C(a1);
  v10 = sub_1800C1AE8(v8, v9);
  v11 = (__int64 *)(a1 + 184);
  v12 = *(_QWORD *)(a1 + 184);
  if ( v12 )
  {
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0LL;
    v39 = 0;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v12 + 80LL))(v12, &v36);
    if ( (_QWORD)v36 != __PAIR64__(a4, a3) || (_DWORD)v37 != v10 )
      sub_18000E854((__int64 *)(a1 + 184));
  }
  if ( !*v11 )
  {
    v39 = 0;
    *(_QWORD *)&v36 = __PAIR64__(a4, a3);
    *((_QWORD *)&v36 + 1) = 0x100000001LL;
    *(_QWORD *)&v37 = v10 | 0x100000000LL;
    *((_QWORD *)&v37 + 1) = 0x200000000LL;
    v38 = 0x1000000000008LL;
    sub_180011B04(a1 + 72, &v33);
    v15 = v33;
    v14 = v15 >> 64;
    v13 = v15;
    v35 = v33;
    sub_1800B9A04(v33, &v32);
    v31 = 0LL;
    v16 = (__int64)v32;
    v17 = *(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, __int64 *))(*v32 + 40);
    sub_18000E854(&v31);
    v18 = v17(v16, &v36, 0LL, &v31);
    sub_1800BB198(v13, v18);
    if ( v18 < 0 )
    {
      std::string::string(v40, "THROW_IF_FAILED_DETAILED. ");
      v19 = sub_18001CC4C((__int64)v40, " File=", 6uLL);
      sub_18001CC4C(
        (__int64)v19,
        "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp",
        0x5CuLL);
      v20 = sub_18001CC4C((__int64)v40, " Line=", 6uLL);
      sub_18001CC4C((__int64)v20, "929", 3uLL);
      v21 = sub_18001CC4C((__int64)v40, " Message=", 9uLL);
      sub_18001CC4C(
        (__int64)v21,
        "\"TextureD3D11::GetOrCreateCPUStagingTexture(): unable to create texture (2D)\"",
        0x4DuLL);
      v22 = sub_18001CC4C((__int64)v40, " Details=\"", 0xAuLL);
      v33 = 0LL;
      v34 = 0LL;
      v23 = sub_1800C2170(v41, &v36, &v33);
      v24 = sub_18001CC24((__int64)v22, v23);
      sub_18001CC4C(v24, "\"", 1uLL);
      sub_180011A5C((__int64)v41);
      if ( (_QWORD)v33 )
        sub_180010134((void *)v33, (v34 - v33) & 0xFFFFFFFFFFFFFFF0uLL);
      v25 = sub_18001CC4C((__int64)v40, " HRESULT=", 9uLL);
      v26 = sub_180027470(v41, v18);
      sub_18001CC24((__int64)v25, (__int64)v26);
      sub_180011A5C((__int64)v41);
      v27 = (_BYTE *)sub_1800137F8((__int64)v40);
      std::string::string(v42, v27);
      v28 = std::string::string(
              v41,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
      sub_180068574(pExceptionObject, (__int64)v28, v29, v18, (__int64)v42, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    sub_1800BFC9C(v11, &v31);
    sub_18000E854(&v31);
    sub_18000E854((__int64 *)&v32);
    if ( v14 )
      sub_18001050C(v14);
  }
  *a2 = *v11;
  sub_1800114D0(a2);
  return a2;
}
