/*
 * XREFs of sub_180055BB0 @ 0x180055BB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_180015E88 @ 0x180015E88 (sub_180015E88.c)
 *     sub_180024E40 @ 0x180024E40 (sub_180024E40.c)
 *     sub_180027D84 @ 0x180027D84 (sub_180027D84.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     sub_180040A68 @ 0x180040A68 (sub_180040A68.c)
 *     sub_180040AFC @ 0x180040AFC (sub_180040AFC.c)
 *     sub_1800502A0 @ 0x1800502A0 (sub_1800502A0.c)
 *     sub_1800508B0 @ 0x1800508B0 (sub_1800508B0.c)
 *     sub_18005503C @ 0x18005503C (sub_18005503C.c)
 *     sub_180055484 @ 0x180055484 (sub_180055484.c)
 *     sub_18007F020 @ 0x18007F020 (sub_18007F020.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180055BB0(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // esi
  __int64 v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 *v11; // rbx
  __int64 v12; // r15
  __int64 *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+28h] [rbp-D8h]
  __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h]
  _DWORD v20[18]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v21; // [rsp+88h] [rbp-78h]
  __int64 v22; // [rsp+90h] [rbp-70h] BYREF
  __int64 v23; // [rsp+98h] [rbp-68h]
  _QWORD v24[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v25[56]; // [rsp+C0h] [rbp-40h] BYREF
  char v26; // [rsp+280h] [rbp+180h] BYREF
  _QWORD v27[76]; // [rsp+390h] [rbp+290h] BYREF

  v21 = a2;
  v4 = unknown_libname_81(&v18, a2)[1];
  if ( v4 )
    sub_18001060C(v4);
  result = *a2;
  v6 = *(_DWORD *)(*a2 + 244);
  if ( v6 )
  {
    LODWORD(v16) = *(_DWORD *)(*a2 + 244);
    result = sub_180040AFC(a1 + 448, (__int64)&v16);
    if ( result == *(_QWORD *)(a1 + 448) )
    {
      sub_18002894C(*a2 + 24, v7);
      sub_18005503C((__int64)v25);
      v8 = sub_180040A68(*(_QWORD *)(*a2 + 3648), &v16);
      sub_180011110(v27, v8);
      if ( v17 )
        sub_18001060C(v17);
      memset(v20, 0, sizeof(v20));
      v20[1] = 2;
      memset(&v20[2], 0, 17);
      memset(&v20[7], 0, 32);
      v20[15] = 65793;
      LOBYTE(v20[16]) = 1;
      v20[17] = 3;
      sub_18007F020(v27[0], v20, 0LL);
      sub_180015E88(*(__int64 **)(*a2 + 3648), &v18);
      v20[1] = 0;
      v20[2] = 0;
      v20[3] = 0;
      v20[4] = 0;
      v20[5] = 1;
      v20[6] = 7;
      *(_QWORD *)&v20[11] = 0x7F7FFFFF00000000LL;
      v20[0] = 2;
      *(_OWORD *)&v20[7] = 0LL;
      v9 = v18;
      v10 = std::string::string(v24, "Camera Default Sampler");
      sub_180027D84(v9, (__int64)v10);
      sub_1800508B0(v18, v20, 0LL);
      v11 = (__int64 *)&v26;
      v12 = 16LL;
      do
      {
        sub_18001254C(v11, &v18);
        v11 += 2;
        --v12;
      }
      while ( v12 );
      v13 = sub_180024E40(*a2, &v22, (__int64)v25, a1 + 24);
      LODWORD(v16) = v6;
      v14 = sub_1800502A0((__int64 *)(a1 + 448), (__int64)v24, &v16);
      sub_180011110((_QWORD *)(*(_QWORD *)v14 + 40LL), v13);
      if ( v23 )
        sub_18001060C(v23);
      if ( v19 )
        sub_18001060C(v19);
      result = sub_180055484(v25);
    }
  }
  v15 = a2[1];
  if ( v15 )
    return sub_18001060C(v15);
  return result;
}
