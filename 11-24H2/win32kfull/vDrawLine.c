/*
 * XREFs of vDrawLine @ 0x140007688
 * Callers:
 *     ?vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z @ 0x140008200 (-vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z.c)
 * Callees:
 *     bGIQtoIntegerLine @ 0x140007A28 (bGIQtoIntegerLine.c)
 *     vLine32Octant16 @ 0x140167A10 (vLine32Octant16.c)
 *     vLine32Octant07 @ 0x1401755D0 (vLine32Octant07.c)
 *     vLine24Octant16 @ 0x14018B880 (vLine24Octant16.c)
 *     vHorizontalLine32 @ 0x140194A70 (vHorizontalLine32.c)
 *     vLineCallbackOctant07 @ 0x14019BCF0 (vLineCallbackOctant07.c)
 *     vHorizontalLine24 @ 0x14019C650 (vHorizontalLine24.c)
 *     vLine32Octant34 @ 0x1401A5020 (vLine32Octant34.c)
 *     vLine24Octant07 @ 0x1401A6D10 (vLine24Octant07.c)
 *     vLineCallbackOctant34 @ 0x1401ACDB0 (vLineCallbackOctant34.c)
 *     vLineCallbackOctant16 @ 0x1401AEA40 (vLineCallbackOctant16.c)
 *     vLine24Octant34 @ 0x1401B2090 (vLine24Octant34.c)
 *     vLine24Octant25 @ 0x1401B73B0 (vLine24Octant25.c)
 *     vLine1Octant07 @ 0x1401BFB60 (vLine1Octant07.c)
 *     vLine1Octant34 @ 0x1401C3E20 (vLine1Octant34.c)
 *     vLine1Octant25 @ 0x1401C4070 (vLine1Octant25.c)
 *     vLine32Octant25 @ 0x1401C4790 (vLine32Octant25.c)
 *     vLine1Octant16 @ 0x1401C4CD0 (vLine1Octant16.c)
 *     vHorizontalLineCallback @ 0x1401CF4B0 (vHorizontalLineCallback.c)
 *     vLineCallbackOctant25 @ 0x1401DF2B0 (vLineCallbackOctant25.c)
 *     vLine4Octant16 @ 0x140206CF0 (vLine4Octant16.c)
 *     vHorizontalLine4 @ 0x14026DC10 (vHorizontalLine4.c)
 *     vHorizontalLine16 @ 0x14031CBA0 (vHorizontalLine16.c)
 *     vHorizontalLine1 @ 0x14031CC40 (vHorizontalLine1.c)
 *     vHorizontalLine8 @ 0x14031CD30 (vHorizontalLine8.c)
 *     vLine16Octant07 @ 0x14031CE30 (vLine16Octant07.c)
 *     vLine16Octant16 @ 0x14031CE80 (vLine16Octant16.c)
 *     vLine16Octant25 @ 0x14031CEF0 (vLine16Octant25.c)
 *     vLine16Octant34 @ 0x14031CF60 (vLine16Octant34.c)
 *     vLine4Octant07 @ 0x14031CFB0 (vLine4Octant07.c)
 *     vLine4Octant25 @ 0x14031D070 (vLine4Octant25.c)
 *     vLine4Octant34 @ 0x14031D140 (vLine4Octant34.c)
 *     vLine8Octant07 @ 0x14031D200 (vLine8Octant07.c)
 *     vLine8Octant16 @ 0x14031D250 (vLine8Octant16.c)
 *     vLine8Octant25 @ 0x14031D2C0 (vLine8Octant25.c)
 *     vLine8Octant34 @ 0x14031D330 (vLine8Octant34.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall vDrawLine(
        int *a1,
        int *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6,
        int a7,
        __int64 a8)
{
  __int64 v9; // rsi
  unsigned int v12; // ebx
  int v13; // ecx
  int v14; // ecx
  int v15; // r14d
  int v16; // r10d
  int v17; // r9d
  int v18; // r14d
  int v19; // r10d
  int v20; // ecx
  int v21; // edx
  __int64 result; // rax
  int v23; // r13d
  int v24; // r11d
  int v25; // r8d
  int v26; // r9d
  int v27; // ecx
  bool v28; // zf
  __int64 (__fastcall *v29)(); // r11
  __int128 *v30; // rsi
  int v31; // edx
  __int64 v32; // r8
  unsigned int v33; // ecx
  int v34; // r9d
  int v35; // edx
  int v36; // eax
  int v37; // eax
  unsigned int v38; // [rsp+30h] [rbp-98h]
  int v39; // [rsp+34h] [rbp-94h]
  __int64 v40; // [rsp+38h] [rbp-90h] BYREF
  __int128 v41; // [rsp+40h] [rbp-88h]
  __int64 v42; // [rsp+50h] [rbp-78h]
  __int64 v43; // [rsp+58h] [rbp-70h]
  int v44; // [rsp+60h] [rbp-68h]
  __int64 v45; // [rsp+68h] [rbp-60h]
  int *v46; // [rsp+70h] [rbp-58h]
  __int128 v47; // [rsp+78h] [rbp-50h] BYREF

  v9 = a3;
  v45 = a3;
  v46 = a2;
  *(_QWORD *)&v47 = a1;
  v12 = a4;
  v41 = 0LL;
  v42 = 0LL;
  v40 = 0LL;
  v43 = a8;
  v13 = 6;
  if ( !a8 )
    v13 = a7;
  v38 = v13;
  v14 = a2[1];
  v15 = a1[1];
  v16 = *a2;
  if ( ((v16 | v15 | *a1 | v14) & 0xF) != 0 )
    goto LABEL_30;
  v17 = *a1 >> 4;
  v18 = v15 >> 4;
  v19 = v16 >> 4;
  v20 = v14 >> 4;
  HIDWORD(v40) = v17;
  LODWORD(v41) = v18;
  v21 = 0;
  result = 4LL;
  if ( v19 < v17 )
    v21 = 4;
  LODWORD(v40) = v21;
  v23 = v17;
  if ( v19 >= v17 )
  {
    v23 = v19;
    v19 = v17;
  }
  if ( v20 < v18 )
  {
    v21 |= 2u;
    LODWORD(v40) = v21;
  }
  v24 = v18;
  if ( v20 >= v18 )
  {
    v24 = v20;
    v20 = v18;
  }
  if ( !a6 )
    goto LABEL_13;
  result = *a6;
  if ( v23 < (int)result )
    return result;
  v34 = a6[2];
  if ( v19 >= v34 )
    return result;
  v44 = a6[1];
  if ( v24 < v44 )
    return result;
  v39 = a6[3];
  v9 = v45;
  if ( v20 >= v39 )
    return result;
  if ( v19 < (int)result || v23 >= v34 || v20 < v44 || v24 >= v39 )
  {
LABEL_30:
    result = bGIQtoIntegerLine(v47, v46, a6, &v40);
    if ( (_DWORD)result && SDWORD1(v41) > 0 )
    {
      if ( (v40 & 2) != 0 )
        v12 = -v12;
      return ((__int64 (__fastcall *)(__int64 *, __int64, _QWORD, _QWORD))*(&funcs_140007837[8 * v38] + (v40 & 7)))(
               &v40,
               (int)(v41 * a4) + v9,
               v12,
               a5);
    }
  }
  else
  {
LABEL_13:
    v25 = v23 - v19;
    v26 = v24 - v20;
    if ( v23 - v19 >= v24 - v20 )
    {
      if ( v26 )
      {
        if ( v25 )
        {
          v35 = v21 & 2;
          DWORD1(v41) = v23 - v19;
          DWORD2(v41) = 2 * v25;
          HIDWORD(v41) = 2 * v26;
          v27 = (v35 != 0) - 1 - v25;
          v12 = -v12;
          v28 = v35 == 0;
LABEL_18:
          LODWORD(v42) = v27;
          if ( v28 )
            v12 = a4;
          return ((__int64 (__fastcall *)(__int64 *, __int64, _QWORD, _QWORD))*(&funcs_140007837[8 * v38] + (v40 & 7)))(
                   &v40,
                   (int)(v41 * a4) + v9,
                   v12,
                   a5);
        }
      }
      else
      {
        v29 = funcs_1400078DC[v38];
        v30 = (__int128 *)((int)(v18 * a4) + v9);
        v47 = 0LL;
        if ( a8 )
        {
          LODWORD(v47) = v18;
          *((_QWORD *)&v47 + 1) = a8;
          v30 = &v47;
        }
        v31 = v21 & 4;
        v32 = (unsigned int)(v23 + 1);
        if ( !v31 )
          v32 = (unsigned int)v23;
        v33 = v19 + 1;
        if ( !v31 )
          v33 = v19;
        return ((__int64 (__fastcall *)(__int128 *, _QWORD, __int64, _QWORD))v29)(v30, v33, v32, a5);
      }
    }
    else
    {
      if ( !v26 )
        return result;
      if ( v25 || !a8 )
      {
        LODWORD(v40) = v21 | 1;
        HIDWORD(v42) = 1;
        DWORD1(v41) = v24 - v20;
        DWORD2(v41) = 2 * v26;
        HIDWORD(v41) = 2 * v25;
        v27 = ((v21 & 4) != 0) - 1 - v26;
        v12 = -v12;
        v28 = (v21 & 2) == 0;
        goto LABEL_18;
      }
      LODWORD(v47) = v19;
      v36 = v20 + 1;
      if ( (v21 & 2) == 0 )
        v36 = v20;
      DWORD1(v47) = v36;
      DWORD2(v47) = v19 + 1;
      v37 = v24 + 1;
      if ( (v21 & 2) == 0 )
        v37 = v24;
      HIDWORD(v47) = v37;
      return (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(a8 + 8))(a8, a5, &v47);
    }
  }
  return result;
}
