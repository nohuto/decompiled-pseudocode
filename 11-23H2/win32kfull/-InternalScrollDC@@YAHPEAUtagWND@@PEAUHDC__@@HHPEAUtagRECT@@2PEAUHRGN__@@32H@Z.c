/*
 * XREFs of ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C022D7DC
 * Callers:
 *     _ScrollDC @ 0x1C022E3B0 (_ScrollDC.c)
 *     xxxScrollWindowEx @ 0x1C022E570 (xxxScrollWindowEx.c)
 * Callees:
 *     GreTransformPoints @ 0x1C0006CF4 (GreTransformPoints.c)
 *     GreGetLayout @ 0x1C003CC34 (GreGetLayout.c)
 *     UnionRect @ 0x1C00ABC9C (UnionRect.c)
 *     IntersectRect @ 0x1C00AEB30 (IntersectRect.c)
 *     NtGdiBitBltInternal @ 0x1C0105030 (NtGdiBitBltInternal.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     GetDCOrgOnScreen @ 0x1C01BD424 (GetDCOrgOnScreen.c)
 *     ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C022D6EC (-GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     SubtractRect @ 0x1C024AFC0 (SubtractRect.c)
 */

__int64 __fastcall InternalScrollDC(
        struct tagWND *a1,
        HDC a2,
        unsigned int a3,
        unsigned int a4,
        struct tagRECT *a5,
        struct tagRECT *a6,
        HRGN a7,
        HRGN a8,
        struct tagRECT *a9,
        int a10)
{
  HRGN v10; // rbx
  unsigned int v11; // edi
  unsigned int v12; // r12d
  __int64 v14; // r13
  __int64 v15; // rcx
  unsigned int ClipBox; // esi
  __m128i *v17; // rcx
  __m128i v18; // xmm6
  int v19; // ecx
  __int32 v20; // ecx
  int v21; // ecx
  int v22; // r8d
  __int64 v23; // rcx
  unsigned int v25; // eax
  HRGN v26; // rdi
  int v27; // eax
  struct tagRECT v28; // xmm0
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  LONG v32; // edx
  int v33; // r9d
  LONG v34; // r8d
  int v35; // r10d
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // edi
  int v39; // eax
  __int64 v40; // rbx
  HRGN EmptyRgn; // [rsp+60h] [rbp-A0h]
  unsigned int v42; // [rsp+68h] [rbp-98h]
  __int64 v43; // [rsp+70h] [rbp-90h]
  HRGN v44; // [rsp+78h] [rbp-88h] BYREF
  int v45; // [rsp+80h] [rbp-80h]
  int v46; // [rsp+84h] [rbp-7Ch]
  unsigned int v47; // [rsp+88h] [rbp-78h]
  __int64 v48; // [rsp+90h] [rbp-70h]
  __int64 v49; // [rsp+98h] [rbp-68h]
  __int64 v50; // [rsp+A0h] [rbp-60h]
  unsigned int v51; // [rsp+A8h] [rbp-58h]
  struct tagRECT *v52; // [rsp+B0h] [rbp-50h]
  struct _POINTL v53; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v54; // [rsp+C0h] [rbp-40h]
  unsigned int v55; // [rsp+C4h] [rbp-3Ch]
  __m128i v56; // [rsp+D0h] [rbp-30h] BYREF
  int v57[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v58[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v59; // [rsp+100h] [rbp+0h] BYREF
  struct tagRECT v60; // [rsp+110h] [rbp+10h] BYREF
  __m128i v61; // [rsp+120h] [rbp+20h] BYREF
  __int128 v62; // [rsp+130h] [rbp+30h] BYREF

  v10 = a8;
  v52 = a5;
  v11 = a4;
  v12 = a3;
  v61.m128i_i64[0] = (__int64)a6;
  v14 = 0LL;
  v44 = a7;
  v59 = 0LL;
  v42 = a4;
  v56 = 0LL;
  v62 = 0LL;
  v47 = a3;
  *(_OWORD *)v58 = 0LL;
  v46 = 0;
  v60 = 0LL;
  EmptyRgn = 0LL;
  *(_OWORD *)v57 = 0LL;
  v15 = *(_QWORD *)(gpDispInfo + 40LL);
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v43 = 0LL;
  v45 = 0;
  if ( !(unsigned int)GreLockVisRgnSharedOrExclusive(v15) )
    return 0LL;
  ClipBox = GreGetClipBox(a2, &v59, 1LL);
  if ( !ClipBox )
    goto LABEL_107;
  v17 = (__m128i *)&v59;
  if ( v52 )
    v17 = (__m128i *)v52;
  v18 = *v17;
  v56 = *v17;
  if ( v61.m128i_i64[0] )
    v62 = *(_OWORD *)v61.m128i_i64[0];
  LODWORD(v52) = v12;
  v51 = v11;
  if ( a10 )
  {
    GreTransformPoints(a2, (struct _POINTL *)&v59, (struct _POINTFIX *)&v59, 2, 1);
    GreTransformPoints(a2, (struct _POINTL *)&v56, (struct _POINTFIX *)&v56, 2, 1);
    if ( (GreGetLayout(a2) & 1) != 0 )
    {
      v19 = v59;
      LODWORD(v59) = DWORD2(v59);
      DWORD2(v59) = v19;
      v20 = v56.m128i_i32[0];
      v56.m128i_i32[0] = v56.m128i_i32[2];
      v56.m128i_i32[2] = v20;
      v46 = 1;
    }
    if ( v61.m128i_i64[0] )
    {
      GreTransformPoints(a2, (struct _POINTL *)&v62, (struct _POINTFIX *)&v62, 2, 1);
      if ( v46 )
      {
        v21 = v62;
        LODWORD(v62) = DWORD2(v62);
        DWORD2(v62) = v21;
      }
    }
    v53.y = 0;
    v53.x = 0;
    v54 = v12;
    v55 = v11;
    GreTransformPoints(a2, &v53, (struct _POINTFIX *)&v53, 2, 1);
    v12 = v54 - v53.x;
    v11 = v55 - v53.y;
    v18 = v56;
    v42 = v55 - v53.y;
    v47 = v54 - v53.x;
  }
  if ( ClipBox == 1 )
  {
LABEL_23:
    if ( !a8 || (unsigned int)SetEmptyRgn(a8) )
    {
      if ( a9 )
        *a9 = 0LL;
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      GreDeleteObject(EmptyRgn);
      GreDeleteObject(v48);
      GreDeleteObject(0LL);
      GreDeleteObject(0LL);
      GreDeleteObject(0LL);
      GreDeleteObject(0LL);
      return 1LL;
    }
    goto LABEL_107;
  }
  if ( ClipBox == 3 )
  {
    EmptyRgn = (HRGN)CreateEmptyRgn(ClipBox - 1);
    if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
      goto LABEL_107;
    v18 = v56;
    v22 = 1;
    v45 = 1;
  }
  else
  {
    v22 = 0;
  }
  v58[0] = v12 + _mm_cvtsi128_si32(v18);
  v58[2] = v12 + _mm_cvtsi128_si32(_mm_srli_si128(v18, 8));
  v58[1] = v11 + _mm_cvtsi128_si32(_mm_srli_si128(v18, 4));
  v23 = v11 + _mm_cvtsi128_si32(_mm_srli_si128(v18, 12));
  v58[3] = v23;
  if ( !v61.m128i_i64[0] )
  {
LABEL_37:
    if ( ClipBox != 2 )
      goto LABEL_74;
    goto LABEL_38;
  }
  if ( ClipBox == 2 && (unsigned __int64)v44 <= 1 )
  {
    if ( !(unsigned int)IntersectRect(&v59, (int *)&v59, (int *)&v62) )
      goto LABEL_23;
LABEL_38:
    v26 = EmptyRgn;
    goto LABEL_39;
  }
  if ( !v22 )
  {
    EmptyRgn = (HRGN)CreateEmptyRgn(v23);
    if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
      goto LABEL_107;
    v45 = 1;
  }
  v48 = CreateEmptyRgn(v23);
  SetRectRgnIndirect(v48, &v62);
  v25 = GreCombineRgn(EmptyRgn, v48, EmptyRgn, 1LL);
  ClipBox = v25;
  if ( !v25 )
    goto LABEL_107;
  if ( v25 == 1 )
    goto LABEL_23;
  if ( v25 != 2 )
  {
    v18 = v56;
    goto LABEL_37;
  }
  v26 = EmptyRgn;
  if ( !(unsigned int)GreGetRgnBox(EmptyRgn, &v59) )
    goto LABEL_107;
  v18 = v56;
LABEL_39:
  if ( (unsigned __int64)v44 <= 1 )
  {
    v61 = v18;
    IntersectRect(v58, v58, (int *)&v59);
    v27 = IntersectRect(&v56, v56.m128i_i32, (int *)&v59);
    v46 = v27;
    if ( v44 != (HRGN)1 )
    {
      v57[0] = v12 + v56.m128i_i32[0];
      v57[2] = v12 + v56.m128i_i32[2];
      v57[1] = v42 + v56.m128i_i32[1];
      v57[3] = v42 + v56.m128i_i32[3];
      IntersectRect(v57, v57, v58);
      v27 = v46;
    }
    if ( !v27 )
    {
      v28 = *(struct tagRECT *)v58;
LABEL_52:
      v60 = v28;
LABEL_53:
      if ( a9 )
        *a9 = v28;
      if ( !a8 || (unsigned int)SetRectRgnIndirect(a8, &v60) )
      {
        ClipBox = 2;
        if ( v60.left >= v60.right || v60.top >= v60.bottom )
          ClipBox = 1;
LABEL_69:
        v32 = v57[0];
        v33 = v57[2];
        if ( v57[0] < v57[2] )
        {
          v34 = v57[1];
          v35 = v57[3];
          if ( v57[1] < v57[3] )
          {
            if ( a10 )
            {
              GreTransformPoints(a2, (struct _POINTL *)v57, (struct _POINTFIX *)v57, 2, 0);
              v35 = v57[3];
              v33 = v57[2];
              v34 = v57[1];
              v32 = v57[0];
            }
            NtGdiBitBltInternal(
              (__int64)a2,
              v32,
              v34,
              v33 - v32,
              v35 - v34,
              a2,
              v32 - (_DWORD)v52,
              v34 - v51,
              13369376,
              0,
              0);
          }
        }
        goto LABEL_102;
      }
LABEL_107:
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      GreDeleteObject(EmptyRgn);
      GreDeleteObject(v48);
      GreDeleteObject(v14);
      GreDeleteObject(v49);
      GreDeleteObject(v50);
      GreDeleteObject(v43);
      return 0LL;
    }
    if ( (unsigned int)IntersectRect(&v60, v56.m128i_i32, v58) )
    {
      if ( !v12 || !v42 )
      {
        UnionRect(&v60, v56.m128i_i32, v58);
        SubtractRect(&v60, &v60, v57);
        v28 = v60;
        goto LABEL_53;
      }
    }
    else
    {
      v30 = v56.m128i_i64[0] - v61.m128i_i64[0];
      if ( v56.m128i_i64[0] == v61.m128i_i64[0] )
        v30 = v56.m128i_i64[1] - v61.m128i_i64[1];
      if ( !v30 )
      {
        v28 = (struct tagRECT)v56;
        goto LABEL_52;
      }
    }
    if ( !a8 )
    {
      if ( !a9 )
        goto LABEL_69;
      v14 = CreateEmptyRgn(v29);
      v10 = (HRGN)v14;
      if ( !v14 )
        goto LABEL_69;
    }
    v31 = v48;
    if ( !v48 )
    {
      v31 = CreateEmptyRgn(v29);
      v48 = v31;
    }
    SetRectRgnIndirect(v31, &v56);
    SetRectRgnIndirect(v10, v58);
    if ( (unsigned int)GreCombineRgn(v10, v10, v48, 2LL) )
    {
      SetRectRgnIndirect(v48, v57);
      ClipBox = GreCombineRgn(v10, v10, v48, 4LL);
      if ( ClipBox )
      {
        if ( !a9 || (unsigned int)GreGetRgnBox(v10, a9) )
          goto LABEL_69;
      }
    }
    goto LABEL_107;
  }
LABEL_74:
  if ( !v45 )
  {
    EmptyRgn = (HRGN)CreateEmptyRgn(v23);
    if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
      goto LABEL_107;
  }
  v49 = CreateEmptyRgn(v23);
  SetRectRgnIndirect(v49, &v56);
  if ( !(unsigned int)GreCombineRgn(v49, v49, EmptyRgn, 1LL) )
    goto LABEL_107;
  v50 = CreateEmptyRgn(v36);
  SetRectRgnIndirect(v50, v58);
  if ( !(unsigned int)GreCombineRgn(v50, v50, EmptyRgn, 1LL) )
    goto LABEL_107;
  v38 = 1;
  if ( v44 == (HRGN)1 )
    goto LABEL_87;
  v43 = CreateEmptyRgn(v37);
  if ( !(unsigned int)GreCombineRgn(v43, v49, 0LL, 5LL) )
    goto LABEL_107;
  GreOffsetRgn(v43, v47, v42);
  v38 = GreCombineRgn(v43, v43, v50, 1LL);
  if ( (unsigned __int64)v44 <= 1 )
    goto LABEL_86;
  v14 = CreateEmptyRgn(v37);
  if ( !v38 )
    goto LABEL_107;
  if ( v38 != 1 )
  {
    v61.m128i_i64[0] = 0LL;
    GetDCOrgOnScreen((__int64)a2, &v61);
    GreCombineRgn(v14, v44, 0LL, 5LL);
    GreOffsetRgn(v14, (unsigned int)-v61.m128i_i32[0], (unsigned int)-v61.m128i_i32[1]);
    v39 = GreCombineRgn(v43, v43, v14, 4LL);
    v38 = v39;
    if ( !v39 )
      goto LABEL_107;
    if ( v39 != 1 )
    {
      GreOffsetRgn(v14, v47, v42);
      v38 = GreCombineRgn(v43, v43, v14, 4LL);
LABEL_86:
      if ( !v38 )
        goto LABEL_107;
    }
  }
LABEL_87:
  if ( a8 )
    goto LABEL_111;
  if ( a9 )
  {
    if ( !v14 )
      v14 = CreateEmptyRgn(v37);
    v10 = (HRGN)v14;
    if ( v14 )
    {
LABEL_111:
      ClipBox = GreCombineRgn(v10, v50, v49, 2LL);
      if ( !ClipBox )
        goto LABEL_107;
      if ( v38 != 1 )
        ClipBox = GreCombineRgn(v10, v10, v43, 4LL);
      if ( a9 && !(unsigned int)GreGetRgnBox(v10, a9) )
        goto LABEL_107;
    }
  }
  if ( v38 != 1 )
  {
    v44 = 0LL;
    GreGetDCOrg(a2, &v44);
    v40 = v43;
    GreOffsetRgn(v43, (unsigned int)v44, HIDWORD(v44));
    GreSelectVisRgnShared(a2, v43, 4LL);
    if ( a10 )
      GreTransformPoints(a2, (struct _POINTL *)v58, (struct _POINTFIX *)v58, 2, 0);
    NtGdiBitBltInternal(
      (__int64)a2,
      v58[0],
      v58[1],
      v58[2] - v58[0],
      v58[3] - v58[1],
      a2,
      v58[0] - (_DWORD)v52,
      v58[1] - v51,
      13369376,
      0,
      0);
    GreSelectVisRgnShared(a2, v43, 4LL);
    v26 = EmptyRgn;
    goto LABEL_103;
  }
  v26 = EmptyRgn;
LABEL_102:
  v40 = v43;
LABEL_103:
  if ( a10 && a9 )
    GreTransformPoints(a2, (struct _POINTL *)a9, (struct _POINTFIX *)a9, 2, 0);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  GreDeleteObject(v26);
  GreDeleteObject(v48);
  GreDeleteObject(v14);
  GreDeleteObject(v49);
  GreDeleteObject(v50);
  GreDeleteObject(v40);
  return ClipBox;
}
