/*
 * XREFs of ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x140096308
 * Callers:
 *     _ScrollDC @ 0x1400960A0 (_ScrollDC.c)
 *     xxxScrollWindowEx @ 0x140258878 (xxxScrollWindowEx.c)
 * Callees:
 *     GreBitBltInternal @ 0x14001970C (GreBitBltInternal.c)
 *     GreGetLayout @ 0x140037748 (GreGetLayout.c)
 *     ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x140038E20 (-GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     GreLPtoDP @ 0x1400953BC (GreLPtoDP.c)
 *     GreDPtoLP @ 0x140095424 (GreDPtoLP.c)
 *     GetDCOrgOnScreen @ 0x140097370 (GetDCOrgOnScreen.c)
 *     SubtractRect @ 0x1400974EC (SubtractRect.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
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
  struct tagRECT *v10; // r12
  HRGN v11; // r15
  HRGN v12; // rdi
  __int64 UserSessionState; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 y; // r8
  __int64 v18; // r9
  unsigned int ClipBox; // r14d
  struct tagPOINT *v20; // rcx
  __m128i v21; // xmm1
  unsigned int v22; // esi
  int v23; // eax
  int v24; // r10d
  int v25; // r15d
  int v26; // r12d
  __int64 v27; // r9
  int v28; // esi
  int v29; // r11d
  int v30; // ebx
  __int64 v31; // rsi
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rbx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // ebx
  __int64 v38; // rax
  __int64 v39; // r12
  __int64 v40; // rbx
  __int64 v41; // rax
  int v43; // eax
  __int64 v44; // rax
  struct tagRECT v45; // xmm3
  LONG v46; // eax
  __m128i v47; // xmm4
  __int64 v48; // r8
  int v49; // r15d
  int v50; // r12d
  int v51; // esi
  LONG v52; // ebx
  int v53; // eax
  int v54; // eax
  int v55; // eax
  unsigned __int64 v56; // rax
  BOOL v57; // ecx
  BOOL v58; // eax
  struct tagPOINT *v59; // r15
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  LONG x; // ecx
  LONG v66; // ecx
  LONG v67; // ecx
  __int64 v68; // rax
  __int64 v69; // [rsp+60h] [rbp-A0h]
  __int64 v70; // [rsp+68h] [rbp-98h]
  __int64 v71; // [rsp+70h] [rbp-90h]
  int v72; // [rsp+78h] [rbp-88h]
  unsigned int v73; // [rsp+78h] [rbp-88h]
  HRGN EmptyRgn; // [rsp+80h] [rbp-80h]
  LONG v75; // [rsp+88h] [rbp-78h]
  int v76; // [rsp+88h] [rbp-78h]
  int v77; // [rsp+90h] [rbp-70h]
  int v78; // [rsp+90h] [rbp-70h]
  int v80; // [rsp+A4h] [rbp-5Ch]
  __int64 v82; // [rsp+B8h] [rbp-48h]
  HRGN v83; // [rsp+C0h] [rbp-40h] BYREF
  int v84; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v85; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v86; // [rsp+D8h] [rbp-28h]
  unsigned int v87; // [rsp+DCh] [rbp-24h]
  __int64 v88; // [rsp+E0h] [rbp-20h]
  struct tagPOINT v89; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v90; // [rsp+F0h] [rbp-10h]
  unsigned int v91; // [rsp+F4h] [rbp-Ch]
  struct tagPOINT v92[2]; // [rsp+100h] [rbp+0h] BYREF
  struct tagPOINT v93[2]; // [rsp+110h] [rbp+10h] BYREF
  struct tagPOINT v94[2]; // [rsp+120h] [rbp+20h] BYREF
  struct tagRECT v95; // [rsp+130h] [rbp+30h] BYREF
  struct tagPOINT v96[2]; // [rsp+140h] [rbp+40h] BYREF
  struct tagPOINT v97[2]; // [rsp+150h] [rbp+50h] BYREF
  __m128i v98; // [rsp+160h] [rbp+60h]

  v10 = a9;
  v11 = 0LL;
  v12 = a8;
  v83 = a7;
  *(_OWORD *)&v93[0].x = 0LL;
  v84 = 0;
  *(_OWORD *)&v92[0].x = 0LL;
  EmptyRgn = 0LL;
  *(_OWORD *)&v97[0].x = 0LL;
  v70 = 0LL;
  *(_OWORD *)&v94[0].x = 0LL;
  v69 = 0LL;
  v95 = 0LL;
  v71 = 0LL;
  *(_OWORD *)&v96[0].x = 0LL;
  v88 = 0LL;
  v82 = 0LL;
  v72 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( !(unsigned int)GreLockVisRgnSharedOrExclusive(
                        *(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL),
                        a2,
                        &v84) )
    return 0LL;
  ClipBox = GreGetClipBox(a2, v93, 1LL);
  if ( !ClipBox )
  {
    v39 = 0LL;
    goto LABEL_221;
  }
  v20 = v93;
  if ( a5 )
    v20 = (struct tagPOINT *)a5;
  v21 = *(__m128i *)&v20->x;
  *(_OWORD *)&v92[0].x = *(_OWORD *)&v20->x;
  if ( a6 )
    *(struct tagRECT *)&v97[0].x = *a6;
  v22 = a3;
  v87 = a3;
  v86 = a4;
  if ( a10 )
  {
    GreLPtoDP(a2, v93);
    GreLPtoDP(a2, v92);
    if ( (GreGetLayout(a2) & 1) != 0 )
    {
      x = v93[0].x;
      LODWORD(v11) = 1;
      v93[0].x = v93[1].x;
      v93[1].x = x;
      v66 = v92[0].x;
      v92[0].x = v92[1].x;
      v92[1].x = v66;
    }
    if ( a6 )
    {
      GreLPtoDP(a2, v97);
      if ( (_DWORD)v11 )
      {
        v67 = v97[0].x;
        v97[0].x = v97[1].x;
        v97[1].x = v67;
      }
    }
    v89.y = 0;
    v89.x = 0;
    v91 = a4;
    v90 = a3;
    GreLPtoDP(a2, &v89);
    v22 = v90 - v89.x;
    v21 = *(__m128i *)&v92[0].x;
    a4 = v91 - v89.y;
    a3 = v90 - v89.x;
  }
  v16 = ClipBox - 1;
  if ( ClipBox == 1 )
  {
    v11 = 0LL;
    v40 = 0LL;
    goto LABEL_45;
  }
  if ( ClipBox == 3 )
  {
    EmptyRgn = (HRGN)CreateEmptyRgn(v16, v15, y, v18);
    v11 = EmptyRgn;
    if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
    {
LABEL_219:
      v39 = 0LL;
LABEL_221:
      v40 = 0LL;
      v31 = 0LL;
      goto LABEL_28;
    }
    v21 = *(__m128i *)&v92[0].x;
    v23 = 1;
    v72 = 1;
  }
  else
  {
    v23 = 0;
  }
  v77 = _mm_cvtsi128_si32(v21);
  v24 = v22 + v77;
  v94[0].x = v22 + v77;
  v25 = _mm_cvtsi128_si32(_mm_srli_si128(v21, 4));
  v26 = _mm_cvtsi128_si32(_mm_srli_si128(v21, 12));
  v75 = _mm_cvtsi128_si32(_mm_srli_si128(v21, 8));
  v27 = v22 + v75;
  v16 = a4;
  v94[1].x = v22 + v75;
  v28 = a4 + v26;
  v94[1].y = a4 + v26;
  v29 = a4 + v25;
  v94[0].y = a4 + v25;
  if ( !a6 )
  {
    v30 = v77;
LABEL_13:
    if ( ClipBox != 2 )
    {
LABEL_14:
      if ( v72 )
      {
        v11 = EmptyRgn;
LABEL_16:
        v71 = CreateEmptyRgn(v16, v15, y, v27);
        v31 = v71;
        SetRectRgnIndirect(v71, v92);
        if ( !(unsigned int)GreCombineRgn(v31, v31, v11, 1LL)
          || (v88 = CreateEmptyRgn(v16, v15, v32, v33),
              v34 = v88,
              SetRectRgnIndirect(v88, v94),
              !(unsigned int)GreCombineRgn(v34, v34, v11, 1LL)) )
        {
          v39 = 0LL;
          goto LABEL_27;
        }
        v37 = 1;
        if ( v83 != (HRGN)1 )
        {
          v82 = CreateEmptyRgn(v16, v15, v35, v36);
          if ( !(unsigned int)GreCombineRgn(v82, v71, 0LL, 5LL) )
          {
            v39 = 0LL;
            goto LABEL_26;
          }
          GreOffsetRgn(v82, a3, a4);
          v37 = GreCombineRgn(v82, v82, v88, 1LL);
          if ( (unsigned __int64)v83 <= 1 )
          {
            v39 = 0LL;
LABEL_150:
            if ( !v37 )
              goto LABEL_25;
LABEL_151:
            v59 = (struct tagPOINT *)a9;
            if ( a8 )
              goto LABEL_224;
            if ( a9 )
            {
              v68 = v69;
              if ( !v69 )
              {
                v68 = CreateEmptyRgn(v16, v15, v35, v36);
                v69 = v68;
              }
              v39 = v69;
              v12 = (HRGN)v68;
              if ( v68 )
              {
LABEL_224:
                ClipBox = GreCombineRgn(v12, v88, v71, 2LL);
                if ( !ClipBox )
                  goto LABEL_25;
                if ( v37 != 1 )
                  ClipBox = GreCombineRgn(v12, v12, v82, 4LL);
                if ( a9 && !(unsigned int)GreGetRgnBox(v12, a9) )
                  goto LABEL_25;
              }
            }
            if ( v37 != 1 )
            {
              v83 = 0LL;
              GreGetDCOrg(a2, &v83);
              v60 = v82;
              GreOffsetRgn(v82, (unsigned int)v83, HIDWORD(v83));
              GreSelectVisRgnShared(a2, v82, 4LL);
              if ( a10 )
                GreDPtoLP(a2, v94);
              GreBitBltInternal(
                a2,
                v94[0].x,
                v94[0].y,
                v94[1].x - v94[0].x,
                v94[1].y - v94[0].y,
                a2,
                v94[0].x - v87,
                v94[0].y - v86,
                0xCC0020u,
                0,
                0);
              GreSelectVisRgnShared(a2, v82, 4LL);
              goto LABEL_136;
            }
LABEL_135:
            v60 = v82;
LABEL_136:
            if ( a10 && v59 )
              GreDPtoLP(a2, v59);
            if ( v84 )
            {
              v61 = W32GetUserSessionState(v16, v15);
              GreUnlockVisRgnShared(*(_QWORD *)(*(_QWORD *)(v61 + 57008) + 48LL));
            }
            else
            {
              v63 = W32GetUserSessionState(v16, v15);
              GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v63 + 57008) + 48LL));
            }
            GreDeleteObject(EmptyRgn);
            GreDeleteObject(v70);
            GreDeleteObject(v39);
            GreDeleteObject(v71);
            GreDeleteObject(v88);
            GreDeleteObject(v60);
            return ClipBox;
          }
          v38 = CreateEmptyRgn(v16, v15, v35, v36);
          v69 = v38;
          if ( !v37 )
          {
            v39 = v38;
            goto LABEL_25;
          }
          if ( v37 != 1 )
          {
            v85 = 0LL;
            GetDCOrgOnScreen(a2, &v85);
            GreCombineRgn(v69, v83, 0LL, 5LL);
            GreOffsetRgn(v69, (unsigned int)-(int)v85, (unsigned int)-HIDWORD(v85));
            v37 = GreCombineRgn(v82, v82, v69, 4LL);
            if ( !v37 )
            {
              v39 = v69;
LABEL_25:
              v11 = EmptyRgn;
LABEL_26:
              v31 = v71;
LABEL_27:
              v40 = v70;
LABEL_28:
              if ( v84 )
              {
                v41 = W32GetUserSessionState(v16, v15);
                GreUnlockVisRgnShared(*(_QWORD *)(*(_QWORD *)(v41 + 57008) + 48LL));
              }
              else
              {
                v62 = W32GetUserSessionState(v16, v15);
                GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v62 + 57008) + 48LL));
              }
              GreDeleteObject(v11);
              GreDeleteObject(v40);
              GreDeleteObject(v39);
              GreDeleteObject(v31);
              GreDeleteObject(v88);
              GreDeleteObject(v82);
              return 0LL;
            }
            if ( v37 != 1 )
            {
              GreOffsetRgn(v69, a3, a4);
              v39 = v69;
              v37 = GreCombineRgn(v82, v82, v69, 4LL);
              goto LABEL_150;
            }
          }
        }
        v39 = v69;
        goto LABEL_151;
      }
      EmptyRgn = (HRGN)CreateEmptyRgn(v16, v15, y, v27);
      v11 = EmptyRgn;
      if ( (unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
        goto LABEL_16;
LABEL_183:
      v39 = 0LL;
      v31 = 0LL;
      goto LABEL_27;
    }
    y = (unsigned int)v93[1].y;
    v16 = (unsigned int)v93[1].x;
    v15 = (unsigned int)v93[0].y;
    v43 = v93[0].x;
LABEL_53:
    if ( (unsigned __int64)v83 > 1 )
      goto LABEL_14;
    v98 = v21;
    if ( v24 <= v43 )
      v24 = v43;
    v94[0].x = v24;
    if ( (int)v27 >= (int)v16 )
      v27 = (unsigned int)v16;
    v94[1].x = v27;
    if ( v24 >= (int)v27 )
      goto LABEL_64;
    if ( v29 <= (int)v15 )
      v29 = v15;
    v94[0].y = v29;
    if ( v28 >= (int)y )
      v28 = y;
    v73 = v28;
    v94[1].y = v28;
    if ( v29 < v28 )
    {
      v45 = *(struct tagRECT *)&v94[0].x;
    }
    else
    {
LABEL_64:
      v45 = 0LL;
      v73 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
      v29 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
      *(_OWORD *)&v94[0].x = 0LL;
      v27 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
      v24 = _mm_cvtsi128_si32((__m128i)0LL);
    }
    if ( v30 <= v43 )
      v30 = v43;
    v46 = v75;
    v78 = v30;
    v92[0].x = v30;
    if ( v75 >= (int)v16 )
      v46 = v16;
    v76 = v46;
    v92[1].x = v46;
    if ( v30 >= v46 )
      goto LABEL_75;
    if ( v25 <= (int)v15 )
      v25 = v15;
    LODWORD(v85) = v25;
    if ( v26 >= (int)y )
      v26 = y;
    v92[0].y = v25;
    v80 = v26;
    v92[1].y = v26;
    if ( v25 < v26 )
    {
      v47 = *(__m128i *)&v92[0].x;
      v48 = 1LL;
    }
    else
    {
LABEL_75:
      v47 = 0LL;
      v26 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
      v48 = 0LL;
      v25 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
      v46 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
      v30 = _mm_cvtsi128_si32((__m128i)0LL);
      LODWORD(v85) = v25;
      *(_OWORD *)&v92[0].x = 0LL;
      v80 = v26;
      v76 = v46;
      v78 = v30;
    }
    if ( v83 == (HRGN)1 )
    {
      v15 = v73;
    }
    else
    {
      v49 = a4 + v25;
      v50 = a4 + v26;
      v51 = a3 + v30;
      v96[0].x = v51;
      v52 = a3 + v46;
      v96[1].x = a3 + v46;
      v16 = (unsigned int)v51;
      if ( v51 <= v24 )
      {
        v51 = v24;
        v96[0].x = v24;
        v16 = (unsigned int)v24;
      }
      v53 = a3 + v46;
      if ( v52 >= (int)v27 )
      {
        v52 = v27;
        v53 = v27;
        v96[1].x = v27;
      }
      v15 = v73;
      if ( (int)v16 < v53 )
      {
        if ( v49 <= v29 )
          v49 = v29;
        v96[0].y = v49;
        if ( v50 >= (int)v73 )
          v50 = v73;
        v96[1].y = v50;
        if ( v49 < v50 )
        {
LABEL_88:
          if ( (_DWORD)v48 )
          {
            v16 = (unsigned int)v24;
            v54 = v27;
            if ( v78 > v24 )
              v16 = (unsigned int)v78;
            v95.left = v16;
            if ( v76 < (int)v27 )
              v54 = v76;
            v95.right = v54;
            if ( (int)v16 >= v54 )
              goto LABEL_99;
            v48 = (unsigned int)v85;
            v16 = (unsigned int)v29;
            v55 = v15;
            if ( (int)v85 > v29 )
              v16 = (unsigned int)v85;
            v95.top = v16;
            if ( v80 < (int)v15 )
              v55 = v80;
            v95.bottom = v55;
            if ( (int)v16 < v55 )
            {
              if ( a3 && a4 )
              {
LABEL_102:
                if ( a8 )
                  goto LABEL_103;
                if ( a9 )
                {
                  v69 = CreateEmptyRgn(v16, v15, v48, v27);
                  v12 = (HRGN)v69;
                  if ( !v69 )
                  {
LABEL_199:
                    v50 = v96[1].y;
                    v52 = v96[1].x;
                    v49 = v96[0].y;
                    v51 = v96[0].x;
                    goto LABEL_133;
                  }
LABEL_103:
                  v40 = v70;
                  if ( !v70 )
                  {
                    v40 = CreateEmptyRgn(v16, v15, v48, v27);
                    v70 = v40;
                  }
                  SetRectRgnIndirect(v40, v92);
                  SetRectRgnIndirect(v12, v94);
                  if ( !(unsigned int)GreCombineRgn(v12, v12, v40, 2LL)
                    || (SetRectRgnIndirect(v40, v96), (ClipBox = GreCombineRgn(v12, v12, v40, 4LL)) == 0)
                    || a9 && !(unsigned int)GreGetRgnBox(v12, a9) )
                  {
                    v39 = v69;
                    v11 = EmptyRgn;
                    v31 = 0LL;
                    goto LABEL_28;
                  }
                  goto LABEL_199;
                }
LABEL_133:
                if ( v51 < v52 && v49 < v50 )
                {
                  if ( a10 )
                  {
                    GreDPtoLP(a2, v96);
                    v50 = v96[1].y;
                    v52 = v96[1].x;
                    v49 = v96[0].y;
                    v51 = v96[0].x;
                  }
                  GreBitBltInternal(a2, v51, v49, v52 - v51, v50 - v49, a2, v51 - v87, v49 - v86, 0xCC0020u, 0, 0);
                }
                v39 = v69;
                v59 = (struct tagPOINT *)a9;
                goto LABEL_135;
              }
              v57 = v78 >= v76 || (int)v85 >= v80;
              v58 = v24 >= (int)v27 || v29 >= (int)v15;
              if ( v57 )
              {
                if ( v58 )
                  v95 = 0LL;
                else
                  v95 = v45;
              }
              else if ( v58 )
              {
                v95 = (struct tagRECT)v47;
              }
              else
              {
                if ( v78 < v24 )
                  v24 = v78;
                v95.left = v24;
                if ( (int)v85 < v29 )
                  v29 = v85;
                v95.top = v29;
                if ( v76 > (int)v27 )
                  LODWORD(v27) = v76;
                v95.right = v27;
                if ( v80 > (int)v15 )
                  LODWORD(v15) = v80;
                v95.bottom = v15;
              }
              SubtractRect(&v95, &v95, v96);
              v45 = v95;
            }
            else
            {
LABEL_99:
              v95 = 0LL;
              v56 = v47.m128i_i64[0] - v98.m128i_i64[0];
              if ( v47.m128i_i64[0] == v98.m128i_i64[0] )
                v56 = _mm_srli_si128(v47, 8).m128i_u64[0] - v98.m128i_i64[1];
              if ( v56 )
                goto LABEL_102;
              v45 = (struct tagRECT)v47;
              v95 = (struct tagRECT)v47;
            }
          }
          else
          {
            v95 = v45;
          }
          if ( a9 )
            *a9 = v45;
          if ( a8 )
          {
            if ( !(unsigned int)SetRectRgnIndirect(a8, &v95) )
            {
              v11 = EmptyRgn;
              goto LABEL_183;
            }
            v50 = v96[1].y;
            v52 = v96[1].x;
            v49 = v96[0].y;
            v51 = v96[0].x;
          }
          ClipBox = 2;
          if ( v95.left >= v95.right || v95.top >= v95.bottom )
            ClipBox = 1;
          goto LABEL_133;
        }
      }
    }
    v50 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
    v49 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
    *(_OWORD *)&v96[0].x = 0LL;
    v52 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
    v51 = _mm_cvtsi128_si32((__m128i)0LL);
    goto LABEL_88;
  }
  if ( ClipBox != 2 || (unsigned __int64)v83 > 1 )
  {
    if ( v23 )
    {
      v11 = EmptyRgn;
LABEL_164:
      v70 = CreateEmptyRgn(v16, v15, y, v27);
      v40 = v70;
      SetRectRgnIndirect(v70, v97);
      ClipBox = GreCombineRgn(v11, v70, v11, 1LL);
      v15 = ClipBox;
      if ( ClipBox )
      {
        v15 = ClipBox - 1;
        if ( ClipBox == 1 )
        {
          v10 = a9;
          goto LABEL_45;
        }
        if ( ClipBox != 2 )
        {
          v26 = v92[1].y;
          v25 = v92[0].y;
          v30 = v92[0].x;
          v21 = *(__m128i *)&v92[0].x;
          v28 = v94[1].y;
          v27 = (unsigned int)v94[1].x;
          v29 = v94[0].y;
          v24 = v94[0].x;
          v75 = v92[1].x;
          goto LABEL_13;
        }
        if ( (unsigned int)GreGetRgnBox(v11, v93) )
        {
          y = (unsigned int)v93[1].y;
          v16 = (unsigned int)v93[1].x;
          v15 = (unsigned int)v93[0].y;
          v43 = v93[0].x;
          v26 = v92[1].y;
          v25 = v92[0].y;
          v30 = v92[0].x;
          v21 = *(__m128i *)&v92[0].x;
          v28 = v94[1].y;
          v29 = v94[0].y;
          v24 = v94[0].x;
          v75 = v92[1].x;
          v27 = (unsigned int)v94[1].x;
          goto LABEL_53;
        }
      }
      v39 = 0LL;
      v31 = 0LL;
      goto LABEL_28;
    }
    EmptyRgn = (HRGN)CreateEmptyRgn(a4, v15, y, v27);
    v11 = EmptyRgn;
    if ( (unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
    {
      v72 = 1;
      goto LABEL_164;
    }
    goto LABEL_219;
  }
  v43 = v93[0].x;
  v16 = (unsigned int)v93[1].x;
  if ( v93[0].x <= v97[0].x )
    v43 = v97[0].x;
  v93[0].x = v43;
  if ( v93[1].x >= v97[1].x )
    v16 = (unsigned int)v97[1].x;
  v93[1].x = v16;
  if ( v43 < (int)v16 )
  {
    v15 = (unsigned int)v93[0].y;
    y = (unsigned int)v93[1].y;
    if ( v93[0].y <= v97[0].y )
      v15 = (unsigned int)v97[0].y;
    v93[0].y = v15;
    if ( v93[1].y >= v97[1].y )
      y = (unsigned int)v97[1].y;
    v93[1].y = y;
    if ( (int)v15 < (int)y )
    {
      v30 = v77;
      goto LABEL_53;
    }
  }
  v10 = a9;
  v11 = EmptyRgn;
  v40 = 0LL;
  *(_OWORD *)&v93[0].x = 0LL;
LABEL_45:
  if ( a8 && !(unsigned int)SetEmptyRgn(a8) )
    goto LABEL_183;
  if ( v10 )
    *v10 = 0LL;
  if ( v84 )
  {
    v44 = W32GetUserSessionState(v16, v15);
    GreUnlockVisRgnShared(*(_QWORD *)(*(_QWORD *)(v44 + 57008) + 48LL));
  }
  else
  {
    v64 = W32GetUserSessionState(v16, v15);
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v64 + 57008) + 48LL));
  }
  GreDeleteObject(v11);
  GreDeleteObject(v40);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  return 1LL;
}
