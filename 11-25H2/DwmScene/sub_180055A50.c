/*
 * XREFs of sub_180055A50 @ 0x180055A50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     memset @ 0x18000C088 (memset.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_180015D88 @ 0x180015D88 (sub_180015D88.c)
 *     sub_180024CE0 @ 0x180024CE0 (sub_180024CE0.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     sub_180040908 @ 0x180040908 (sub_180040908.c)
 *     sub_18004099C @ 0x18004099C (sub_18004099C.c)
 *     sub_180050140 @ 0x180050140 (sub_180050140.c)
 *     sub_180050750 @ 0x180050750 (sub_180050750.c)
 *     sub_180054EDC @ 0x180054EDC (sub_180054EDC.c)
 *     sub_180055324 @ 0x180055324 (sub_180055324.c)
 *     sub_18007EEC0 @ 0x18007EEC0 (sub_18007EEC0.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180055A50(__int64 a1, __int64 *a2)
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
    sub_18001050C(v4);
  result = *a2;
  v6 = *(_DWORD *)(*a2 + 244);
  if ( v6 )
  {
    LODWORD(v16) = *(_DWORD *)(*a2 + 244);
    result = sub_18004099C(a1 + 448, (__int64)&v16);
    if ( result == *(_QWORD *)(a1 + 448) )
    {
      sub_1800287EC(*a2 + 24, v7);
      sub_180054EDC((__int64)v25);
      v8 = sub_180040908(*(_QWORD *)(*a2 + 3648), &v16);
      sub_180011010(v27, v8);
      if ( v17 )
        sub_18001050C(v17);
      memset(v20, 0, sizeof(v20));
      v20[1] = 2;
      memset(&v20[2], 0, 17);
      memset(&v20[7], 0, 32);
      v20[15] = 65793;
      LOBYTE(v20[16]) = 1;
      v20[17] = 3;
      sub_18007EEC0(v27[0], v20, 0LL);
      sub_180015D88(*(__int64 **)(*a2 + 3648), &v18);
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
      sub_180027C24(v9, (__int64)v10);
      sub_180050750(v18, v20, 0LL);
      v11 = (__int64 *)&v26;
      v12 = 16LL;
      do
      {
        sub_18001244C(v11, &v18);
        v11 += 2;
        --v12;
      }
      while ( v12 );
      v13 = sub_180024CE0(*a2, &v22, (__int64)v25, a1 + 24);
      LODWORD(v16) = v6;
      v14 = sub_180050140((__int64 *)(a1 + 448), (__int64)v24, &v16);
      sub_180011010((_QWORD *)(*(_QWORD *)v14 + 40LL), v13);
      if ( v23 )
        sub_18001050C(v23);
      if ( v19 )
        sub_18001050C(v19);
      result = sub_180055324(v25);
    }
  }
  v15 = a2[1];
  if ( v15 )
    return sub_18001050C(v15);
  return result;
}
