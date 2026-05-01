/*
 * XREFs of ?QueryRelativePosition@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU4@W4FLYOUT_PLACEMENT@@PEAW47@@Z @ 0x18013DD30
 * Callers:
 *     ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@9@U3@UtagSIZE@@@Z @ 0x18013DA10 (-GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@UCoreKeyboardPositionAndSizeR.c)
 * Callees:
 *     ?PositionRelativeOnSide@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_PLACEMENT@@0@Z @ 0x18013D0B8 (-PositionRelativeOnSide@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_P.c)
 *     ?ShiftRectIntoContainer@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x18013E2F4 (-ShiftRectIntoContainer@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z.c)
 *     ?CanPositionRelativeOnSide@Immersive@UI@Windows@@YA_NAEBVCConstraint@123@AEBUtagRECT@@W4FLYOUT_PLACEMENT@@0@Z @ 0x1801C9288 (-CanPositionRelativeOnSide@Immersive@UI@Windows@@YA_NAEBVCConstraint@123@AEBUtagRECT@@W4FLYOUT_P.c)
 *     ?MoveNearRect@Immersive@UI@Windows@@YA?AUtagRECT@@AEBU4@0W4FLYOUT_PLACEMENT@@@Z @ 0x1801D3AF8 (-MoveNearRect@Immersive@UI@Windows@@YA-AUtagRECT@@AEBU4@0W4FLYOUT_PLACEMENT@@@Z.c)
 *     ?HorizontallyCenterRect@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x1801D9424 (-HorizontallyCenterRect@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?VerticallyCenterRect@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x1806845C0 (-VerticallyCenterRect@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z.c)
 */

const struct Windows::UI::Immersive::CConstraint *__fastcall Windows::UI::Immersive::QueryRelativePosition(
        const struct Windows::UI::Immersive::CConstraint *a1,
        struct tagRECT *a2,
        __int64 a3,
        LONG *a4,
        int a5,
        int *a6)
{
  struct tagRECT v7; // xmm0
  unsigned int v8; // esi
  int v10; // r15d
  LONG v12; // r13d
  int v13; // ecx
  LONG v14; // r12d
  LONG v15; // r8d
  int v16; // r11d
  int v17; // r10d
  int v18; // eax
  bool v19; // cc
  LONG v20; // ebx
  int v21; // edx
  int v22; // ecx
  const struct tagRECT *v23; // r9
  LONG top; // ebx
  LONG left; // edx
  __m128i v26; // xmm1
  int v27; // r8d
  unsigned __int64 v28; // xmm0_8
  const struct tagRECT *v30; // r9
  char v31; // dl
  char v32; // r13
  unsigned int v33; // edi
  unsigned int v34; // r12d
  struct tagRECT *v35; // rax
  bool v36; // zf
  int v37; // eax
  char v38; // di
  const struct tagRECT *v39; // r9
  const struct tagRECT *v40; // r9
  struct tagRECT v41; // xmm0
  struct tagRECT *v42; // rax
  struct tagRECT v43; // xmm0
  int v44; // r8d
  const struct tagRECT *v45; // r9
  char v46; // [rsp+30h] [rbp-89h]
  char v47; // [rsp+31h] [rbp-88h]
  int pvParam[3]; // [rsp+34h] [rbp-85h] BYREF
  struct tagRECT v49; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int64 v50; // [rsp+50h] [rbp-69h] BYREF
  struct tagRECT v51; // [rsp+60h] [rbp-59h] BYREF
  struct tagRECT v52; // [rsp+70h] [rbp-49h] BYREF
  int *v53; // [rsp+80h] [rbp-39h]
  struct tagRECT v54; // [rsp+88h] [rbp-31h] BYREF
  struct tagRECT v55; // [rsp+A0h] [rbp-19h] BYREF
  struct tagRECT rc; // [rsp+B0h] [rbp-9h] BYREF

  v7 = *a2;
  v8 = 1;
  v53 = a6;
  v10 = 1;
  if ( a5 )
    v10 = a5;
  rc = v7;
  InflateRect(&rc, -5, -5);
  v12 = *a4;
  v13 = *(_QWORD *)a3;
  v14 = a4[2];
  v15 = a4[3];
  v16 = rc.bottom - rc.top;
  v17 = rc.right - rc.left;
  v50 = *(_QWORD *)a3;
  v18 = HIDWORD(v50);
  if ( v13 > rc.right - rc.left )
    v13 = rc.right - rc.left;
  v49.left = v12;
  v19 = *(_DWORD *)(a3 + 4) <= v16;
  v20 = a4[1];
  if ( !v19 )
    v18 = rc.bottom - rc.top;
  v50 = __PAIR64__(v18, v13);
  v21 = 0;
  *(_QWORD *)&v55.left = 0LL;
  *(_QWORD *)&v55.right = __PAIR64__(v18, v13);
  v22 = 0;
  *(_QWORD *)&v51.left = HIDWORD(*(_QWORD *)&v55.right);
  v49.right = v14;
  pvParam[0] = v20;
  v49.top = v20;
  v49.bottom = v15;
  *(_OWORD *)a1 = 0LL;
  if ( v10 == 1 )
  {
    v22 = v20 - rc.top;
  }
  else
  {
    if ( v10 != 2 )
    {
      if ( v10 == 3 )
      {
        v21 = v12 - rc.left;
      }
      else
      {
        if ( v10 != 4 )
          goto LABEL_11;
        v21 = rc.right - v14;
      }
      v22 = v16;
      goto LABEL_11;
    }
    v22 = rc.bottom - v15;
  }
  v21 = v17;
LABEL_11:
  v23 = (const struct tagRECT *)(unsigned int)v50;
  top = v55.top;
  if ( v21 < (int)v50 - v55.left || (left = v51.left, v22 < v51.left - v55.top) )
  {
    v31 = 0;
    v32 = 0;
    v46 = 0;
    v33 = 1;
    v34 = 4;
    if ( v10 == 1 )
    {
      v33 = 2;
    }
    else if ( v10 != 2 )
    {
      if ( v10 == 3 )
      {
        v33 = 4;
      }
      else
      {
        if ( v10 != 4 )
          goto LABEL_50;
        v33 = 3;
      }
      v32 = 1;
LABEL_50:
      v47 = v31;
      if ( (unsigned __int8)Windows::UI::Immersive::CanPositionRelativeOnSide(&v49, &v55, v33, &rc) )
      {
        v35 = (struct tagRECT *)Windows::UI::Immersive::PositionRelativeOnSide(
                                  (__int64)&v52,
                                  &v49,
                                  &v55,
                                  (const struct tagRECT *)v33,
                                  &rc);
        v10 = v33;
LABEL_78:
        *(struct tagRECT *)a1 = *v35;
        goto LABEL_27;
      }
      if ( (unsigned int)(v10 - 3) <= 1 )
      {
        v34 = 1;
        v38 = 1;
      }
      else
      {
        pvParam[0] = 1;
        v36 = !SystemParametersInfoW(0x1Bu, 0, pvParam, 0);
        v37 = 1;
        if ( !v36 )
          v37 = pvParam[0];
        v38 = v46;
        if ( !v37 )
        {
          v34 = 3;
          v32 = 1;
        }
      }
      if ( (unsigned __int8)Windows::UI::Immersive::CanPositionRelativeOnSide(&v49, &v55, v34, &rc) )
      {
        v35 = (struct tagRECT *)Windows::UI::Immersive::PositionRelativeOnSide(
                                  (__int64)&v52,
                                  &v49,
                                  &v55,
                                  (const struct tagRECT *)v34,
                                  &rc);
        v10 = v34;
        goto LABEL_78;
      }
      if ( v38 )
      {
        if ( v47 )
          v8 = (v32 != 0) + 3;
        else
          v8 = 2;
      }
      if ( (unsigned __int8)Windows::UI::Immersive::CanPositionRelativeOnSide(&v49, &v55, v8, &rc) )
      {
        v35 = (struct tagRECT *)Windows::UI::Immersive::PositionRelativeOnSide(
                                  (__int64)&v52,
                                  &v49,
                                  &v55,
                                  (const struct tagRECT *)v8,
                                  &rc);
        v10 = v8;
        goto LABEL_78;
      }
      if ( v10 == 1 )
      {
        v43 = v55;
        v44 = rc.top - v55.top;
      }
      else
      {
        if ( v10 != 2 )
        {
          if ( v10 == 3 )
          {
            v51 = v55;
            OffsetRect(&v51, rc.left - v55.left, top - v55.top);
            v41 = v51;
          }
          else
          {
            if ( v10 != 4 )
            {
LABEL_77:
              v35 = Windows::UI::Immersive::ShiftRectIntoContainer((Windows::UI::Immersive *)&v52, &rc, a1, v39);
              goto LABEL_78;
            }
            OffsetRect(&v55, rc.right - v50, top - v55.top);
            v41 = v55;
          }
          *(struct tagRECT *)a1 = v41;
          v42 = Windows::UI::Immersive::VerticallyCenterRect(&v52, &v49, a1, v40);
LABEL_76:
          *(struct tagRECT *)a1 = *v42;
          goto LABEL_77;
        }
        v43 = v55;
        v44 = rc.bottom + top - v55.top - v51.left;
      }
      v55 = v43;
      OffsetRect(&v55, 0, v44);
      *(struct tagRECT *)a1 = v55;
      v42 = Windows::UI::Immersive::HorizontallyCenterRect(&v52, &v49, a1, v45);
      goto LABEL_76;
    }
    v31 = 1;
    v46 = 1;
    goto LABEL_50;
  }
  v26 = 0LL;
  v51 = 0LL;
  if ( v10 == 1 || v10 == 2 )
  {
    v50 = 0LL;
    if ( v10 == 1 )
      v27 = pvParam[0] - left;
    else
      v27 = v15 - v55.top;
    v49 = v55;
    OffsetRect(&v49, 0, v27);
    v55 = v49;
    OffsetRect(&v55, (int)(v14 - v49.left - _mm_srli_si128((__m128i)v49, 8).m128i_u32[0] + v12) / 2, 0);
    v26 = (__m128i)v55;
    goto LABEL_18;
  }
  if ( (unsigned int)(v10 - 3) <= 1 )
  {
    v55 = *(struct tagRECT *)Windows::UI::Immersive::MoveNearRect(&v50, &v55, &v49);
    v26 = *(__m128i *)Windows::UI::Immersive::VerticallyCenterRect(
                        &v54,
                        &v49,
                        (const struct Windows::UI::Immersive::CConstraint *)&v55,
                        v30);
LABEL_18:
    v51 = (struct tagRECT)v26;
  }
  v28 = _mm_srli_si128(v26, 8).m128i_u64[0];
  if ( v26.m128i_i32[0] > (int)v28 || v26.m128i_i32[1] > SHIDWORD(v28) )
    LOBYTE(v8) = 0;
  if ( v26.m128i_i32[0] < rc.left
    || (int)v28 > rc.right
    || v26.m128i_i32[1] < rc.top
    || SHIDWORD(v28) > rc.bottom
    || !(_BYTE)v8 )
  {
    v26 = *(__m128i *)Windows::UI::Immersive::ShiftRectIntoContainer(
                        (Windows::UI::Immersive *)&v52,
                        &rc,
                        (const struct Windows::UI::Immersive::CConstraint *)&v51,
                        v23);
  }
  *(__m128i *)a1 = v26;
LABEL_27:
  if ( v53 )
    *v53 = v10;
  return a1;
}
