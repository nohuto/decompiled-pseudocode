/*
 * XREFs of ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800315A0 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ @ 0x18004B308 (-ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004C640 (-InternalQueryInterface@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??A?$CPtrArray@$$CBX@@QEBAPEBX_K@Z @ 0x18007EFA0 (--A-$CPtrArray@$$CBX@@QEBAPEBX_K@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800BF1E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x1800D27D0 (-GetSizePreference@CCompositionSurfaceBitmap@@QEBA-AW4SizePreference@@XZ.c)
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x1800D29C0 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18010FF8C (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?Release@CGenericInk@@WJA@EAAKXZ @ 0x1802781B0 (-Release@CGenericInk@@WJA@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowNode::OnChanged(__int64 a1, int a2, CMaskBrush *a3)
{
  unsigned int v5; // r14d
  __int64 Count; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  CMaskBrush *v9; // rbx
  __int64 (__fastcall **v11)(CMaskBrush *); // rax
  __int64 (__fastcall *v12)(CMaskBrush *); // rax
  int Interface; // eax
  __int64 v14; // rax
  float v15; // xmm6_4
  __m128i v16; // xmm7
  __int64 v17; // rax
  float v18; // xmm7_4
  bool (__fastcall *v19)(CCompositionSurfaceBitmap *__hidden, const struct D2D_SIZE_F *, struct CRectanglesShape *); // rax
  bool DirtyRegion; // al
  const __m128i *v21; // rbx
  const __m128i *v22; // rsi
  void (*v23)(void); // rax
  __m128i v24; // xmm0
  __int64 v25; // rax
  CCachedVisualImage *v26; // [rsp+28h] [rbp-59h] BYREF
  CMaskBrush *v27; // [rsp+30h] [rbp-51h]
  struct D2D_RECT_F v28; // [rsp+38h] [rbp-49h] BYREF
  struct D2D_SIZE_F v29; // [rsp+48h] [rbp-39h] BYREF
  _QWORD v30[2]; // [rsp+58h] [rbp-29h] BYREF
  const __m128i *v31; // [rsp+68h] [rbp-19h]
  const __m128i *v32; // [rsp+70h] [rbp-11h]
  __int64 *v33; // [rsp+78h] [rbp-9h]
  _BYTE v34[16]; // [rsp+80h] [rbp-1h] BYREF
  __int64 v35; // [rsp+90h] [rbp+Fh] BYREF

  v5 = 4;
  if ( a2 == 5 )
  {
    CVisual::ClearContentTreeDataCaches((CVisual *)a1);
  }
  else
  {
    v27 = 0LL;
    if ( a2 == 1 && (*(_BYTE *)(a1 + 96) & 4) == 0 )
    {
      if ( a3 )
      {
        if ( (*(_BYTE *)(a1 + 896) & 0x10) != 0 )
        {
          if ( !*(_BYTE *)(a1 + 755)
            || (v25 = __A__CPtrArray___CBX__QEBAPEBX_K_Z(a1 + 840, 0LL),
                (unsigned int)CCompositionSurfaceBitmap::GetSizePreference(v25) != 1) )
          {
            Count = CPtrArray<CVisual>::GetCount(a1 + 840);
            if ( Count )
            {
              if ( Count == 1 )
                v9 = (CMaskBrush *)(*v8 & 0xFFFFFFFFFFFFFFFCuLL);
              else
                v9 = *(CMaskBrush **)((*v8 & 0xFFFFFFFFFFFFFFFCuLL) + 16);
            }
            else
            {
              v9 = 0LL;
            }
            if ( v7 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
            if ( (int)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalQueryInterface(v9) >= 0 && a3 == v27 )
            {
              v11 = *(__int64 (__fastcall ***)(CMaskBrush *))a3;
              v26 = 0LL;
              v12 = *v11;
              if ( v12 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalQueryInterface )
                Interface = CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalQueryInterface(a3);
              else
                Interface = ((__int64 (__fastcall *)(CMaskBrush *, GUID *, CCachedVisualImage **))v12)(
                              a3,
                              &GUID_c155b649_2c5b_416a_b836_bbda56b2ec27,
                              &v26);
              if ( Interface >= 0 )
              {
                v14 = *(_QWORD *)(a1 + 696);
                v30[1] = 0LL;
                v35 = 0LL;
                v15 = (float)(int)v14;
                v16 = _mm_cvtsi32_si128(HIDWORD(v14));
                v17 = *(_QWORD *)(a1 + 704);
                v18 = _mm_cvtepi32_ps(v16).m128_f32[0];
                v29.width = (float)(int)v17 - v15;
                v30[0] = &CRectanglesShape::`vftable';
                v31 = (const __m128i *)v34;
                v32 = (const __m128i *)v34;
                v33 = &v35;
                v29.height = (float)SHIDWORD(v17) - v18;
                v19 = *(bool (__fastcall **)(CCompositionSurfaceBitmap *__hidden, const struct D2D_SIZE_F *, struct CRectanglesShape *))(*(_QWORD *)v26 + 24LL);
                if ( v19 == CCompositionSurfaceBitmap::GetDirtyRegion )
                  DirtyRegion = CCompositionSurfaceBitmap::GetDirtyRegion(v26, &v29, (struct CRectanglesShape *)v30);
                else
                  DirtyRegion = v19(v26, &v29, (struct CRectanglesShape *)v30);
                if ( DirtyRegion )
                {
                  v21 = v31;
                  v22 = v32;
                  while ( v21 != v22 )
                  {
                    v24 = _mm_loadu_si128(v21);
                    v28.left = *(float *)v24.m128i_i32 + v15;
                    v28.right = *(float *)&v24.m128i_i32[2] + v15;
                    v28.top = *(float *)&v24.m128i_i32[1] + v18;
                    v28.bottom = *(float *)&v24.m128i_i32[3] + v18;
                    CVisual::AddAdditionalDirtyRect(a1, &v28, 1);
                    ++v21;
                  }
                  v5 = 0;
                }
                CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v30);
              }
              if ( v26 )
              {
                v23 = *(void (**)(void))(*(_QWORD *)v26 + 16LL);
                if ( (char *)v23 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
                {
                  CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v26);
                }
                else if ( (char *)v23 == (char *)CGenericInk::Release )
                {
                  CGenericInk::Release();
                }
                else
                {
                  v23();
                }
              }
            }
          }
        }
      }
    }
    if ( !CWindowNode::ProcessReadyFlipExSurfaces((CWindowNode *)a1) && v5 )
      CVisual::PropagateFlags(a1, v5);
    if ( v27 )
      (*(void (__fastcall **)(CMaskBrush *))(*(_QWORD *)v27 + 16LL))(v27);
  }
  return 0LL;
}
