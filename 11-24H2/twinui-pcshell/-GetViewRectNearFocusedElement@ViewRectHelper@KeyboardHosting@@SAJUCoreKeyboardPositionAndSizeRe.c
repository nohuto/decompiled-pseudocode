/*
 * XREFs of ?GetViewRectNearFocusedElement@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@1PEAU9Foundation@8@PEA_N3@Z @ 0x180483F5C
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x180256970 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x18013D890 (-IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z.c)
 *     ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@9@U3@UtagSIZE@@@Z @ 0x18013DA10 (-GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@UCoreKeyboardPositionAndSizeR.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall KeyboardHosting::ViewRectHelper::GetViewRectNearFocusedElement(
        __int128 *a1,
        float *a2,
        float *a3,
        __int64 a4,
        bool *a5,
        char *a6)
{
  float v6; // xmm1_4
  char v7; // si
  const struct Windows::Foundation::Rect *v11; // rdx
  int v12; // r13d
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  int v16; // eax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __m128i *RelativePosition; // rax
  float v22; // xmm4_4
  float v23; // xmm3_4
  __int64 v24; // r8
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  float v27; // xmm4_4
  float v28; // xmm3_4
  int v29; // eax
  float v30; // xmm1_4
  float v31; // xmm2_4
  bool v32; // cc
  float v33; // xmm1_4
  float v34; // xmm2_4
  __int64 result; // rax
  __m128i v36; // [rsp+30h] [rbp-79h] BYREF
  _DWORD v37[4]; // [rsp+40h] [rbp-69h] BYREF
  __int128 v38; // [rsp+50h] [rbp-59h] BYREF
  _OWORD v39[4]; // [rsp+60h] [rbp-49h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-9h]

  v6 = a3[1];
  v7 = 0;
  *(_OWORD *)a4 = 0LL;
  v11 = (const struct Windows::Foundation::Rect *)(unsigned int)(int)*a3;
  *a5 = 0;
  *a6 = 0;
  v12 = (int)v6;
  if ( KeyboardHosting::IsRectNull((KeyboardHosting *)((char *)a1 + 56), v11) )
  {
    v36.m128i_i32[0] = *((_DWORD *)a1 + 2);
    v16 = *((_DWORD *)a1 + 1);
  }
  else
  {
    v36.m128i_i32[0] = (int)*((float *)a1 + 16);
    v16 = (int)*((float *)a1 + 17);
  }
  v17 = *a1;
  v38 = *(_OWORD *)a2;
  v36.m128i_i32[1] = v16;
  v18 = a1[1];
  v39[0] = v17;
  v19 = a1[2];
  v39[1] = v18;
  v20 = a1[3];
  v39[2] = v19;
  *(_QWORD *)&v19 = *((_QWORD *)a1 + 8);
  v37[0] = v13;
  v37[2] = v15;
  v37[3] = v14;
  v39[3] = v20;
  v40 = v19;
  v37[1] = v12;
  RelativePosition = KeyboardHosting::ViewRectHelper::GetRelativePosition(
                       &v36,
                       v39,
                       (float *)&v38,
                       v37,
                       v36.m128i_i64[0]);
  v22 = *a2;
  v23 = *a2 + a2[2];
  v24 = RelativePosition->m128i_i64[1];
  v25 = RelativePosition->m128i_i64[0];
  v26 = HIDWORD(v25);
  *(float *)(a4 + 8) = (float)(v24 - (unsigned int)v25);
  v27 = fmaxf(v22, (float)(int)v25);
  *(float *)(a4 + 12) = (float)(HIDWORD(v24) - HIDWORD(v25));
  v28 = fminf(v23 - (float)(v24 - (unsigned int)v25 + 1), v27);
  if ( ((*((_DWORD *)a1 + 6) - 4) & 0xFFFFFFFB) != 0 )
  {
    v29 = *((_DWORD *)a1 + 4);
    if ( (int)v26 <= v12 )
    {
      v30 = a2[1];
      v31 = (float)((int)v26 - v29);
      v32 = v30 <= v31;
      goto LABEL_10;
    }
    v33 = a2[3] + a2[1];
    v31 = (float)((int)v26 + v29);
  }
  else
  {
    v34 = a2[1];
    v33 = v34 + a2[3];
    v31 = fmaxf(v34, (float)SHIDWORD(v25));
  }
  v30 = v33 - (float)(HIDWORD(v24) - HIDWORD(v25) + 1);
  v32 = v31 <= v30;
LABEL_10:
  if ( v32 )
    v30 = v31;
  *a5 = v27 != v28;
  if ( v31 != v30 )
    v7 = 1;
  *a6 = v7;
  result = 0LL;
  *(float *)a4 = v28;
  *(float *)(a4 + 4) = v30;
  return result;
}
