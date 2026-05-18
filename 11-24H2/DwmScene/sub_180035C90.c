/*
 * XREFs of sub_180035C90 @ 0x180035C90
 * Callers:
 *     sub_180067A50 @ 0x180067A50 (sub_180067A50.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180011C8C @ 0x180011C8C (sub_180011C8C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180015274 @ 0x180015274 (sub_180015274.c)
 *     sub_18001EB4C @ 0x18001EB4C (sub_18001EB4C.c)
 *     sub_18001EC3C @ 0x18001EC3C (sub_18001EC3C.c)
 *     sub_18002F414 @ 0x18002F414 (sub_18002F414.c)
 *     sub_180030128 @ 0x180030128 (sub_180030128.c)
 *     sub_180032548 @ 0x180032548 (sub_180032548.c)
 *     sub_180032D70 @ 0x180032D70 (sub_180032D70.c)
 *     sub_1800331D0 @ 0x1800331D0 (sub_1800331D0.c)
 *     sub_18003582C @ 0x18003582C (sub_18003582C.c)
 *     sub_18006D508 @ 0x18006D508 (sub_18006D508.c)
 *     sub_18006D710 @ 0x18006D710 (sub_18006D710.c)
 *     sub_18009537C @ 0x18009537C (sub_18009537C.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_180035C90(__int64 a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 *v8; // r14
  __int64 *v9; // r13
  _OWORD *v10; // rdi
  _QWORD *v11; // r15
  __int128 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD v16[3]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+58h] [rbp-B0h] BYREF
  int v18; // [rsp+60h] [rbp-A8h]
  __int64 v19; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+70h] [rbp-98h] BYREF
  volatile signed __int32 *v21; // [rsp+78h] [rbp-90h]
  __int64 v22; // [rsp+80h] [rbp-88h] BYREF
  volatile signed __int32 *v23; // [rsp+88h] [rbp-80h]
  __int128 v24; // [rsp+90h] [rbp-78h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v27; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v28; // [rsp+C0h] [rbp-48h]
  __int64 v29; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v30; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v31; // [rsp+E0h] [rbp-28h]
  __int128 v32; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v33; // [rsp+F8h] [rbp-10h]
  __int128 v34; // [rsp+108h] [rbp+0h]
  __int64 v35[3]; // [rsp+118h] [rbp+10h] BYREF
  __int64 v36[3]; // [rsp+130h] [rbp+28h] BYREF
  _QWORD v37[8]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v38[8]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v39[4]; // [rsp+1C8h] [rbp+C0h] BYREF
  _QWORD v40[4]; // [rsp+1E8h] [rbp+E0h] BYREF

  v2 = (_QWORD *)(a1 + 464);
  v3 = unknown_libname_81(&v26, (_QWORD *)(a1 + 464));
  sub_18001EB4C(
    v38,
    v3,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    707,
    (__int64)"UpdateScenes",
    (__int64)"UpdateScenes");
  std::string::string(v39, "UpdateScenes");
  v4 = sub_180032548(a1, &v27);
  sub_180015274(&v20, v4);
  sub_18002F414(v36, (__int64)&v20);
  if ( v21 )
    sub_180010644(v21);
  if ( v28 )
    sub_18001060C(v28);
  sub_180011B5C((__int64)v39);
  v5 = unknown_libname_81(&v29, v2);
  sub_18001EB4C(
    v37,
    v5,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    712,
    (__int64)"UpdateScenes",
    (__int64)"kSpectreRenderCB_BeginFrame");
  std::string::string(v40, "kSpectreRenderCB_BeginFrame");
  v6 = sub_180032548(a1, &v30);
  sub_180015274(&v22, v6);
  sub_18002F414(v35, (__int64)&v22);
  if ( v23 )
    sub_180010644(v23);
  if ( v31 )
    sub_18001060C(v31);
  sub_180011B5C((__int64)v40);
  v17 = *(_QWORD *)(a1 + 968);
  v18 = 0;
  sub_180011C8C(&v19);
  sub_18009537C(v17, &v17);
  v24 = 0LL;
  *(_OWORD *)&v16[1] = 0LL;
  sub_1800331D0(a1, 0, &v16[1], &v24);
  sub_180030128((__int64)v35);
  sub_18001EC3C((__int64)v37);
  v8 = *(__int64 **)(a1 + 704);
  v9 = *(__int64 **)(a1 + 712);
  if ( v8 != v9 )
  {
    v10 = (_OWORD *)(a1 + 200);
    v11 = (_QWORD *)(a1 + 256);
    do
    {
      v12 = (__int128 *)sub_18006D710(a1 + 376, v7);
      v32 = *v12;
      v33 = v12[1];
      v34 = v12[2];
      v14 = sub_18006D710(a1 + 200, v13);
      if ( sub_180032D70(v14) && !sub_180032D70((__int64)&v32) )
      {
        while ( _InterlockedExchange((volatile __int32 *)(a1 + 248), 1) )
          ;
        *v10 = v32;
        *(_DWORD *)(a1 + 216) = v33;
        *(_QWORD *)(a1 + 280) = *sub_180011C8C(&v25);
        *(_DWORD *)(a1 + 248) = 0;
      }
      *(_OWORD *)(a1 + 376) = *v10;
      *(_OWORD *)(a1 + 392) = *(_OWORD *)(a1 + 216);
      *(_OWORD *)(a1 + 408) = *(_OWORD *)(a1 + 232);
      _InterlockedExchange((volatile __int32 *)(a1 + 424), 0);
      if ( (_QWORD *)(a1 + 432) != v11 )
        sub_18006D508(a1 + 432, *v11, (__int64)(*(_QWORD *)(a1 + 264) - *(_QWORD *)(a1 + 256)) >> 3);
      *(_QWORD *)(a1 + 456) = *(_QWORD *)(a1 + 280);
      sub_18003582C((_QWORD *)a1, v8);
      v8 += 2;
    }
    while ( v8 != v9 );
  }
  while ( _InterlockedExchange((volatile __int32 *)(a1 + 248), 1) )
    ;
  *(_OWORD *)(a1 + 220) = *(_OWORD *)(a1 + 200);
  *(_DWORD *)(a1 + 236) = *(_DWORD *)(a1 + 216);
  *(_DWORD *)(a1 + 200) = -1082130432;
  *(_DWORD *)(a1 + 204) = -1082130432;
  *(_QWORD *)(a1 + 208) = 2LL;
  *(_DWORD *)(a1 + 216) = 0;
  v16[1] = 2LL;
  *(_QWORD *)(a1 + 240) = 2LL;
  *(_DWORD *)(a1 + 248) = 0;
  sub_180030128((__int64)v36);
  return sub_18001EC3C((__int64)v38);
}
