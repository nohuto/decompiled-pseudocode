/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180226440
 * Callers:
 *     <none>
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x18000B7B0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsInfinite@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180099680 (-IsInfinite@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180099A00 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800B2860 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x180254CBC (-InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_RECT_F@@.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFilterEffect::CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive(
        _DWORD *a1,
        __int64 a2,
        float *a3,
        __int64 a4,
        float *a5,
        float *a6)
{
  int v6; // eax
  __int64 v9; // r14
  int v10; // r9d
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rcx
  char v17; // al
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // eax
  __m128i v21; // xmm0
  int v22; // eax
  unsigned int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // r14d
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // r9d
  unsigned int v31; // eax
  const struct D2D_RECT_F *v32; // rcx
  float v33; // xmm0_4
  float v34; // xmm1_4
  float v35; // xmm1_4
  __int64 v36; // rdx
  unsigned int v38; // [rsp+20h] [rbp-B9h]
  _OWORD *v39; // [rsp+40h] [rbp-99h] BYREF
  __int64 v40; // [rsp+48h] [rbp-91h]
  float *v41; // [rsp+50h] [rbp-89h]
  __int128 v42; // [rsp+58h] [rbp-81h] BYREF
  __int64 v43; // [rsp+68h] [rbp-71h]
  unsigned int v44; // [rsp+70h] [rbp-69h]
  __int64 v45; // [rsp+78h] [rbp-61h]
  struct D2D_RECT_F v46; // [rsp+80h] [rbp-59h] BYREF
  struct D2D_RECT_F v47; // [rsp+90h] [rbp-49h] BYREF
  struct D2D_RECT_F v48; // [rsp+A0h] [rbp-39h] BYREF
  _BYTE v49[20]; // [rsp+B0h] [rbp-29h] BYREF
  __int128 v50; // [rsp+C8h] [rbp-11h] BYREF
  struct D2D_RECT_F v51; // [rsp+D8h] [rbp-1h] BYREF

  v6 = a1[10];
  v42 = 0LL;
  v40 = a2;
  v41 = a5;
  v43 = 0LL;
  a1[10] = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 2)) & 6;
  v44 = 0;
  v9 = a2;
  v51 = (struct D2D_RECT_F)DirectX::g_XMZero;
  v48 = 0LL;
  v50 = 0LL;
  if ( (((unsigned __int8)v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 2)) & 6) & 6) == 2 )
  {
    (*(void (__fastcall **)(_DWORD *, __int64, float *, _DWORD *, struct D2D_RECT_F *, __int128 *))(*(_QWORD *)a1 + 256LL))(
      a1,
      a2,
      a3,
      a1 + 40,
      &v48,
      &v50);
    v12 = (int)a1[38];
    if ( (_DWORD)v12 )
    {
      v45 = (int)a1[38];
      v13 = 0LL;
      v11 = 0;
      v46 = 0LL;
      while ( v13 < v12 )
      {
        v14 = *((_QWORD *)a1 + 18);
        v46 = v48;
        v15 = *(_QWORD *)(v14 + 8 * v13);
        v16 = *(_QWORD *)(v15 + 24);
        LODWORD(v39) = *(_DWORD *)(*((_QWORD *)a1 + 17) + 4 * v13);
        if ( v16 )
        {
          v17 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 64LL))(v16, 60LL);
          v18 = *(_QWORD *)(v15 + 24);
          if ( v17 )
          {
            v9 = v40;
            *(struct D2D_RECT_F *)v49 = v46;
            v19 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, __int64, float *, struct D2D_RECT_F *))(*(_QWORD *)v18 + 240LL))(
                    v18,
                    v40,
                    v49,
                    v18 + 160,
                    v41,
                    &v46);
            v11 = v19;
            if ( v19 < 0 )
            {
              v10 = v19;
              v38 = 448;
              goto LABEL_3;
            }
          }
          else
          {
            if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 64LL))(v18, 41LL) )
            {
              v11 = -2147467263;
              v10 = -2147467263;
              v38 = 469;
              goto LABEL_3;
            }
            v20 = *(_DWORD *)(v15 + 12) - *(_DWORD *)(v15 + 4);
            v47.left = 0.0;
            v47.top = 0.0;
            v21 = _mm_cvtsi32_si128(v20);
            v22 = *(_DWORD *)(v15 + 16) - *(_DWORD *)(v15 + 8);
            v9 = v40;
            LODWORD(v47.right) = _mm_cvtepi32_ps(v21).m128_u32[0];
            v47.bottom = (float)v22;
            CMILMatrix::Transform2DBoundsHelper<1>(v40, &v47, &v47.left);
            if ( v47.left > v46.left )
              v46.left = v47.left;
            if ( v47.top > v46.top )
              v46.top = v47.top;
            if ( v46.right > v47.right )
              v46.right = v47.right;
            if ( v46.bottom > v47.bottom )
              v46.bottom = v47.bottom;
            if ( IsEmpty(&v46) )
            {
              v46.bottom = 0.0;
              v46.right = 0.0;
              v46.top = 0.0;
              v46.left = 0.0;
            }
            TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(v41, &v46.left);
          }
        }
        else
        {
          TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(v41, &v46.left);
          v9 = v40;
        }
        if ( (float)(v46.right - v46.left) > 0.0000099999997 && (float)(v46.bottom - v46.top) > 0.0000099999997 )
        {
          if ( !(unsigned __int8)CFilterEffect::InvertTransformToCalc2DBounds(v9, &v46, &v46) )
          {
            v10 = -2147467259;
            v11 = -2147467259;
            v38 = 484;
            goto LABEL_3;
          }
          *(_DWORD *)v49 = (_DWORD)v39;
          *(struct D2D_RECT_F *)&v49[4] = v46;
          v23 = v44 + 1;
          if ( v44 + 1 < v44 )
          {
            v11 = -2147024362;
            v31 = 181;
            v26 = -2147024362;
            v30 = -2147024362;
            goto LABEL_37;
          }
          v11 = 0;
          if ( v23 > HIDWORD(v43) )
          {
            v39 = v49;
            v26 = DynArrayImpl<0>::Grow((__int64)&v42, 0x14u, 1, 0, (unsigned __int64 *)&v39);
            v11 = v26;
            if ( v26 < 0 )
            {
              v30 = v26;
              v31 = 192;
LABEL_37:
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v30, v31, 0LL);
              v10 = v26;
              v38 = 487;
              goto LABEL_3;
            }
            v27 = v42;
            v9 = v40;
            v28 = (unsigned __int64)v39;
            v29 = 20 * v44;
            *(_OWORD *)(v29 + v42) = *v39;
            *(_DWORD *)(v29 + v27 + 16) = *(_DWORD *)(v28 + 16);
            ++v44;
          }
          else
          {
            v24 = v42;
            v25 = 5LL * v44;
            *(_OWORD *)(v42 + 4 * v25) = *(_OWORD *)v49;
            *(_DWORD *)(v24 + 4 * v25 + 16) = *(_DWORD *)&v49[16];
            v44 = v23;
          }
        }
        v12 = v45;
        ++v13;
      }
      (*(void (__fastcall **)(_DWORD *, __int128 *, struct D2D_RECT_F *))(*(_QWORD *)a1 + 216LL))(a1, &v42, &v51);
      CMILMatrix::Transform2DBoundsHelper<1>(v9, &v51, a6);
      if ( TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(a6) )
      {
        if ( *a3 > *a6 )
          *a6 = *a3;
        v33 = a3[1];
        if ( v33 > a6[1] )
          a6[1] = v33;
        v34 = a3[2];
        if ( a6[2] > v34 )
          a6[2] = v34;
        v35 = a3[3];
        if ( a6[3] > v35 )
          a6[3] = v35;
        if ( IsEmpty(v32) )
        {
          *((_QWORD *)a6 + 1) = v36;
          *(_QWORD *)a6 = v36;
        }
      }
    }
    else
    {
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(a5, &v48.left);
      v11 = 0;
      *(_OWORD *)a6 = v50;
    }
  }
  else
  {
    v10 = -2147467259;
    v11 = -2147467259;
    v38 = 406;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v38, 0LL);
  }
  a1[10] ^= (a1[10] ^ (2 * (a1[10] >> 1) - 2)) & 6;
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v42);
  return v11;
}
