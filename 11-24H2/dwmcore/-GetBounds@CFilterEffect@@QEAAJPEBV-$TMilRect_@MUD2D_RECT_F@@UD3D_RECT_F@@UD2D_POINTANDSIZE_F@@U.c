/*
 * XREFs of ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180228C44
 * Callers:
 *     ?GetBoundsWithEffects@CVisual@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180038220 (-GetBoundsWithEffects@CVisual@@UEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?CalcRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180038420 (-CalcRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x1800ABE30 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180228C44 (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180228C44 (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFilterEffect::GetBounds(__int64 a1, const __m128i *a2, __int64 a3)
{
  int v3; // eax
  unsigned int v6; // edx
  __int64 v7; // r14
  unsigned int v8; // ebx
  int v9; // r9d
  __m128i v10; // xmm0
  int v11; // eax
  __int64 v12; // r15
  __int64 v13; // r13
  _QWORD *v14; // rbx
  int v15; // r14d
  __int64 v16; // rcx
  char v17; // al
  __int64 v18; // rcx
  int Bounds; // eax
  __m128i v20; // xmm0
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // r8d
  int v24; // r14d
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned int v27; // eax
  unsigned int v29; // [rsp+20h] [rbp-59h]
  __int128 v30; // [rsp+30h] [rbp-49h] BYREF
  int v31; // [rsp+40h] [rbp-39h]
  unsigned int v32; // [rsp+44h] [rbp-35h]
  unsigned int v33; // [rsp+48h] [rbp-31h]
  __m128i v34; // [rsp+50h] [rbp-29h]
  __int64 v35; // [rsp+60h] [rbp-19h]
  _BYTE v36[20]; // [rsp+68h] [rbp-11h] BYREF
  __m128i v37; // [rsp+80h] [rbp+7h] BYREF

  v3 = *(_DWORD *)(a1 + 40);
  v31 = 0;
  v32 = 0;
  v6 = 0;
  v35 = a3;
  v33 = 0;
  v7 = a3;
  *(_DWORD *)(a1 + 40) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6;
  v30 = 0LL;
  if ( (((unsigned __int8)v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6) & 6) != 2 )
  {
    v8 = -2147467259;
    v29 = 212;
    v9 = -2147467259;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v29, 0LL);
    goto LABEL_31;
  }
  if ( !*(_DWORD *)(a1 + 152) )
  {
    v10 = *a2;
    *(_DWORD *)v36 = 0;
    *(__m128i *)&v36[4] = v10;
    v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v30, 20, 1, v36);
    v8 = v11;
    if ( v11 >= 0 )
      goto LABEL_30;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0xC0u, 0LL);
    v29 = 218;
LABEL_7:
    v9 = v8;
    goto LABEL_3;
  }
  v12 = 0LL;
  v13 = *(int *)(a1 + 152);
  v8 = 0;
  while ( v12 < v13 )
  {
    v14 = *(_QWORD **)(*(_QWORD *)(a1 + 144) + 8 * v12);
    v15 = *(_DWORD *)(*(_QWORD *)(a1 + 136) + 4 * v12);
    v37 = (__m128i)DirectX::g_XMZero;
    v16 = v14[3];
    if ( !v16 )
    {
      v20 = _mm_loadu_si128(a2);
LABEL_17:
      v37 = v20;
      goto LABEL_18;
    }
    v17 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 64LL))(v16, 61LL);
    v18 = v14[3];
    if ( !v17 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 64LL))(v18, 42LL) )
      {
        v8 = -2147467263;
        v29 = 256;
        goto LABEL_7;
      }
      v21 = *(_QWORD *)((char *)v14 + 12);
      v22 = *(_QWORD *)((char *)v14 + 4);
      v34.m128i_i64[0] = 0LL;
      *(float *)&v34.m128i_i32[2] = (float)(v21 - v22);
      v6 = v33;
      *(float *)&v34.m128i_i32[3] = (float)(HIDWORD(v21) - HIDWORD(v22));
      v20 = v34;
      goto LABEL_17;
    }
    Bounds = CFilterEffect::GetBounds(v18, a2, &v37);
    v8 = Bounds;
    if ( Bounds < 0 )
    {
      v9 = Bounds;
      v29 = 238;
      goto LABEL_3;
    }
    v6 = v33;
    v20 = v37;
LABEL_18:
    v23 = v6 + 1;
    *(_DWORD *)v36 = v15;
    *(__m128i *)&v36[4] = v20;
    if ( v6 + 1 < v6 )
    {
      v8 = -2147024362;
      v27 = 181;
      v24 = -2147024362;
      goto LABEL_28;
    }
    v24 = 0;
    if ( v23 > v32 )
    {
      v24 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v30, 20, 1, v36);
      v8 = v24;
      if ( v24 < 0 )
      {
        v27 = 192;
LABEL_28:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, v27, 0LL);
        v9 = v24;
        v29 = 265;
        goto LABEL_3;
      }
      v6 = v33;
    }
    else
    {
      v25 = v30;
      v26 = 5LL * v6;
      *(_OWORD *)(v30 + 4 * v26) = *(_OWORD *)v36;
      *(_DWORD *)(v25 + 4 * v26 + 16) = *(_DWORD *)&v36[16];
      v6 = v23;
      v33 = v23;
    }
    v8 = v24;
    ++v12;
  }
  v7 = v35;
LABEL_30:
  (*(void (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)a1 + 216LL))(a1, &v30, v7);
LABEL_31:
  *(_DWORD *)(a1 + 40) ^= (*(_DWORD *)(a1 + 40) ^ (2 * (*(_DWORD *)(a1 + 40) >> 1) - 2)) & 6;
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v30);
  return v8;
}
