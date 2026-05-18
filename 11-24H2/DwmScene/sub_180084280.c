/*
 * XREFs of sub_180084280 @ 0x180084280
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_18001268C @ 0x18001268C (sub_18001268C.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     sub_180013E0C @ 0x180013E0C (sub_180013E0C.c)
 *     sub_180013ED4 @ 0x180013ED4 (sub_180013ED4.c)
 *     sub_180017828 @ 0x180017828 (sub_180017828.c)
 *     sub_180039CC8 @ 0x180039CC8 (sub_180039CC8.c)
 *     sub_180039EB0 @ 0x180039EB0 (sub_180039EB0.c)
 *     sub_18003A3E0 @ 0x18003A3E0 (sub_18003A3E0.c)
 *     sub_18003EA2C @ 0x18003EA2C (sub_18003EA2C.c)
 *     sub_18003ECF8 @ 0x18003ECF8 (sub_18003ECF8.c)
 *     sub_18003F944 @ 0x18003F944 (sub_18003F944.c)
 *     sub_1800473C4 @ 0x1800473C4 (sub_1800473C4.c)
 *     sub_18005755C @ 0x18005755C (sub_18005755C.c)
 *     sub_1800589FC @ 0x1800589FC (sub_1800589FC.c)
 *     sub_180058ACC @ 0x180058ACC (sub_180058ACC.c)
 */

// Hidden C++ exception states: #wind=9
char __fastcall sub_180084280(__int64 a1)
{
  _UNKNOWN **v1; // rax
  float v3; // xmm6_4
  float v4; // xmm7_4
  char v5; // r14
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  _OWORD *v11; // rax
  float *v12; // r8
  float v13; // xmm0_4
  __int64 *v14; // rax
  __int64 v16; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+30h] [rbp-D8h]
  __int64 v18; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C8h]
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v21[4]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+70h] [rbp-98h] BYREF
  __int64 v23; // [rsp+78h] [rbp-90h]
  __int64 v24; // [rsp+80h] [rbp-88h] BYREF
  __int64 v25; // [rsp+88h] [rbp-80h]
  __int64 v26; // [rsp+90h] [rbp-78h] BYREF
  __int64 v27; // [rsp+98h] [rbp-70h]
  __int64 v28; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-50h]
  __int64 v30; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v31; // [rsp+C8h] [rbp-40h]
  __int128 v32; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v33; // [rsp+E0h] [rbp-28h]
  _OWORD v34[4]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v35; // [rsp+128h] [rbp+20h] BYREF
  __int128 v36; // [rsp+148h] [rbp+40h]
  __int128 v37; // [rsp+158h] [rbp+50h]
  _BYTE v38[32]; // [rsp+168h] [rbp+60h] BYREF
  __int128 v39[4]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v40[32]; // [rsp+1C8h] [rbp+C0h] BYREF
  _BYTE v41[96]; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v42; // [rsp+248h] [rbp+140h] BYREF
  _UNKNOWN *retaddr; // [rsp+290h] [rbp+188h] BYREF

  v1 = &retaddr;
  if ( *(_BYTE *)(a1 + 1953) )
  {
    LOBYTE(v1) = sub_180011C04(a1 + 56, &v26);
    v3 = 3.4028235e38;
    v4 = -3.4028235e38;
    v5 = 0;
    v6 = *(_QWORD *)(a1 + 416);
    v7 = *(_QWORD *)(a1 + 424);
    if ( v6 != v7 )
    {
      do
      {
        sub_180012444((__int64)v40, v6);
        v8 = *(_QWORD *)sub_18001268C(v26, &v28);
        v9 = sub_180012444((__int64)v38, (__int64)v40);
        sub_18003EA2C(v8, &v20, v9);
        if ( v29 )
          sub_18001060C(v29);
        if ( *(_BYTE *)(v20 + 80) )
        {
          sub_18003ECF8(v20, &v18);
          unknown_libname_81(&v16, &v18);
          while ( 1 )
          {
            v10 = v16;
            if ( !v16 )
              break;
            if ( *(_DWORD *)(a1 + 1960) == 1 || sub_180039CC8(v16) )
            {
              sub_180013E0C(v10, &v24);
              sub_180013ED4(v10, &v22);
              if ( v24 && v22 )
              {
                v32 = *(_OWORD *)(v24 + 88);
                v33 = *(_QWORD *)(v24 + 104);
                *(_OWORD *)&v21[1] = xmmword_18018D5C0;
                v21[3] = 0x3F8000003F800000LL;
                v11 = (_OWORD *)sub_18005755C(a1, 0, 1);
                v34[0] = *v11;
                v34[1] = v11[1];
                v34[2] = v11[2];
                v34[3] = v11[3];
                sub_18003A3E0(v10, v39);
                sub_180017828((__int64)&v35, v39, v34);
                sub_18003F944((unsigned __int64 *)&v32, (__int64)&v21[1], *(double *)&v36, *(double *)&v37);
                sub_1800473C4((unsigned __int64 *)&v21[1], (__int64)v41);
                v12 = (float *)v41;
                do
                {
                  v13 = -v12[2];
                  if ( v13 > v4 )
                    v4 = -v12[2];
                  if ( v3 > v13 )
                    v3 = -v12[2];
                  v12 += 3;
                }
                while ( v12 != (float *)&v42 );
                v5 = 1;
              }
              if ( v23 )
                sub_18001060C(v23);
              if ( v25 )
                sub_18001060C(v25);
            }
            v14 = sub_180039EB0(v18, &v30, &v16);
            sub_180011110(&v16, v14);
            if ( v31 )
              sub_18001060C(v31);
          }
          if ( v17 )
            sub_18001060C(v17);
          if ( v19 )
            sub_18001060C(v19);
        }
        if ( v21[0] )
          sub_18001060C(v21[0]);
        LOBYTE(v1) = sub_180013228((__int64)v40);
        v6 += 32LL;
      }
      while ( v6 != v7 );
      if ( v5 )
      {
        LODWORD(v1) = *(_DWORD *)(a1 + 316) - 1;
        if ( (unsigned int)v1 <= 1 )
        {
          v3 = fmaxf(0.001, v3);
          v4 = fmaxf(0.001, v4);
        }
        if ( fabs(v4 - v3) > 0.0000099999997 )
        {
          sub_180058ACC(a1, v3);
          LOBYTE(v1) = sub_1800589FC(a1, v4);
        }
      }
    }
    if ( v27 )
      LOBYTE(v1) = sub_18001060C(v27);
  }
  return (char)v1;
}
