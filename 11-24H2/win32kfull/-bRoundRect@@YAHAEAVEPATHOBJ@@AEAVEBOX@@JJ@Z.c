/*
 * XREFs of ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1400E8608
 * Callers:
 *     NtGdiRoundRect @ 0x1400E62B0 (NtGdiRoundRect.c)
 *     NtGdiCreateRoundRectRgn @ 0x1400E8050 (NtGdiCreateRoundRectRgn.c)
 * Callees:
 *     ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x1400E8AF0 (-efHalfDiff@@YA-AVEFLOAT@@JJ@Z.c)
 *     bFToL @ 0x1400E8DB0 (bFToL.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

_BOOL8 __fastcall bRoundRect(struct EPATHOBJ *a1, struct EBOX *a2)
{
  float v4; // eax
  float v5; // xmm2_4
  float v6; // eax
  __int64 v7; // rcx
  int v8; // r9d
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // ebx
  int v14; // edi
  int v15; // r15d
  __int64 v16; // r12
  __int64 v17; // r13
  int v18; // eax
  int v19; // eax
  __int64 v20; // kr00_8
  int v21; // ecx
  __int64 v22; // rcx
  int v23; // ecx
  __int64 v24; // kr08_8
  int v25; // eax
  int v26; // eax
  __int64 v27; // kr10_8
  int v29; // [rsp+20h] [rbp-49h] BYREF
  int v30; // [rsp+24h] [rbp-45h]
  int *v31; // [rsp+28h] [rbp-41h] BYREF
  __int64 v32; // [rsp+30h] [rbp-39h]
  __int64 v33; // [rsp+38h] [rbp-31h]
  __int16 v34; // [rsp+40h] [rbp-29h]
  __int64 v35; // [rsp+48h] [rbp-21h] BYREF
  int v36; // [rsp+50h] [rbp-19h] BYREF
  int v37; // [rsp+54h] [rbp-15h] BYREF
  __int64 v38; // [rsp+58h] [rbp-11h]
  int v39; // [rsp+60h] [rbp-9h] BYREF
  int v40; // [rsp+64h] [rbp-5h]
  int v41; // [rsp+68h] [rbp-1h]
  int v42; // [rsp+6Ch] [rbp+3h]
  int v43; // [rsp+70h] [rbp+7h]
  int v44; // [rsp+74h] [rbp+Bh]

  efHalfDiff(*((unsigned int *)a2 + 16), *((unsigned int *)a2 + 18));
  v5 = v4;
  efHalfDiff(*((unsigned int *)a2 + 17), *((unsigned int *)a2 + 19));
  if ( v5 != 0.0 && v6 != 0.0 )
  {
    v7 = (unsigned int)-v8;
    if ( v8 > 0 )
      v7 = (unsigned int)v8;
  }
  if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64 *, __int64))bFToL)(v7, &v35, 6LL) )
    bFToL(v9, (char *)&v35 + 4, v10);
  if ( (unsigned int)((__int64 (__fastcall *)(__int64, int *, __int64))bFToL)(v9, &v36, v10) )
    bFToL(v11, &v37, v12);
  v13 = v35;
  v14 = v36;
  v15 = HIDWORD(v35);
  v16 = (1922922357LL * (int)v35) >> 32;
  v38 = (1922922357LL * v36) >> 32;
  v17 = (1922922357LL * SHIDWORD(v35)) >> 32;
  v35 = (1922922357LL * v37) >> 32;
  v18 = *((_DWORD *)a2 + 2) - v36;
  v32 = 1LL;
  v29 = v18;
  v19 = *((_DWORD *)a2 + 3) - v37;
  v33 = 0LL;
  v30 = v19;
  v34 = 0;
  v31 = &v29;
  if ( !(unsigned __int8)EPATHOBJ::bMoveTo(a1, 0LL, &v31) )
    return 0LL;
  v20 = *((_QWORD *)a2 + 1);
  v39 = v20 - v38;
  v40 = HIDWORD(v20) - v35;
  v42 = HIDWORD(v20) - v17;
  v44 = HIDWORD(v20) - v15;
  v43 = v20 - v13;
  v33 = 0LL;
  v41 = v20 - v16;
  v31 = &v39;
  v34 = 0;
  v32 = 3LL;
  if ( !(unsigned __int8)EPATHOBJ::bPolyBezierTo(a1, 0LL, &v31, 3LL) )
    return 0LL;
  v21 = v13 + *((_DWORD *)a2 + 4);
  v31 = &v29;
  v29 = v21;
  v30 = v15 + *((_DWORD *)a2 + 5);
  v33 = 0LL;
  v34 = 0;
  v32 = 1LL;
  if ( !(unsigned __int8)EPATHOBJ::bPolyLineTo(a1, 0LL, &v31, 1LL) )
    return 0LL;
  v22 = *((_QWORD *)a2 + 2);
  v40 = v17 + HIDWORD(v22);
  v39 = v16 + v22;
  v41 = v22 - v38;
  v42 = HIDWORD(v22) - v35;
  v44 = HIDWORD(v22) - v37;
  v43 = v22 - v14;
  v33 = 0LL;
  v34 = 0;
  v31 = &v39;
  v32 = 3LL;
  if ( !(unsigned __int8)EPATHOBJ::bPolyBezierTo(a1, 0LL, &v31, 3LL) )
    return 0LL;
  v23 = v14 + *((_DWORD *)a2 + 6);
  v31 = &v29;
  v29 = v23;
  v30 = *((_DWORD *)a2 + 7) + v37;
  v33 = 0LL;
  v34 = 0;
  v32 = 1LL;
  if ( !(unsigned __int8)EPATHOBJ::bPolyLineTo(a1, 0LL, &v31, 1LL) )
    return 0LL;
  v24 = *((_QWORD *)a2 + 3);
  v42 = v17 + HIDWORD(v24);
  v44 = v15 + HIDWORD(v24);
  v39 = v38 + v24;
  v40 = v35 + HIDWORD(v24);
  v41 = v16 + v24;
  v43 = v13 + v24;
  v31 = &v39;
  v33 = 0LL;
  v34 = 0;
  v32 = 3LL;
  if ( !(unsigned __int8)EPATHOBJ::bPolyBezierTo(a1, 0LL, &v31, 3LL) )
    return 0LL;
  v25 = *((_DWORD *)a2 + 8) - v13;
  v33 = 0LL;
  v29 = v25;
  v26 = *((_DWORD *)a2 + 9) - v15;
  v34 = 0;
  v30 = v26;
  v31 = &v29;
  v32 = 1LL;
  if ( !(unsigned __int8)EPATHOBJ::bPolyLineTo(a1, 0LL, &v31, 1LL) )
    return 0LL;
  v27 = *((_QWORD *)a2 + 4);
  v40 = HIDWORD(v27) - v17;
  v39 = v27 - v16;
  v41 = v38 + v27;
  v42 = v35 + HIDWORD(v27);
  v44 = v37 + HIDWORD(v27);
  v43 = v14 + v27;
  v33 = 0LL;
  v31 = &v39;
  v34 = 0;
  v32 = 3LL;
  return (unsigned __int8)EPATHOBJ::bPolyBezierTo(a1, 0LL, &v31, 3LL) && EPATHOBJ::bCloseFigure(a1);
}
