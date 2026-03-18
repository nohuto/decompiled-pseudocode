/*
 * XREFs of ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18004FEF0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsOpaqueRect@CNineGridBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x18004B5D0 (-IsOpaqueRect@CNineGridBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800500C0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsOfType@CBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007F390 (-IsOfType@CBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801109C0 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GetDropShadow@CSpriteVisual@@IEBAPEAVCDropShadow@@XZ @ 0x18014DEF4 (-GetDropShadow@CSpriteVisual@@IEBAPEAVCDropShadow@@XZ.c)
 *     ?SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x180195400 (-SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpriteVisual::RenderContent(CSpriteVisual *this, struct CDrawingContext *a2, bool *a3)
{
  __int64 result; // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  struct CContent *DropShadow; // rax
  unsigned int v10; // r9d
  const struct D2D_SIZE_F *v11; // r10
  const struct D2D_SIZE_F *v12; // rdx
  char (__fastcall *v13)(CNineGridBrush *, const struct D2D_SIZE_F *, struct D2D_RECT_F *); // rax
  char IsOpaqueRect; // al
  CDropShadow *v15; // rax
  bool (__fastcall *v16)(__int64, unsigned __int64); // rax
  int v17; // eax
  CNineGridBrush *v18; // r9
  float v19; // xmm1_4
  struct D2D_RECT_F v20; // [rsp+30h] [rbp-38h] BYREF

  if ( *((char *)this + 106) < 0 )
  {
    if ( *((_BYTE *)g_pComposition + 6466) )
      *((_BYTE *)a2 + 7983) = 1;
    else
      *((_BYTE *)a2 + 7980) = 1;
    if ( *(_BYTE *)(*((_QWORD *)this + 3) + 6466LL) )
    {
      *a3 = 1;
      return 0LL;
    }
  }
  if ( (**((_DWORD **)this + 29) & 0x20000) != 0 )
  {
    v8 = *((_QWORD *)this + 32);
    if ( !v8 )
    {
LABEL_6:
      DropShadow = CSpriteVisual::GetDropShadow(this);
      CVisual::RenderContentWorker(this, DropShadow, 1u, v10, a2, v11);
      goto LABEL_3;
    }
    v16 = *(bool (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v8 + 64LL);
    if ( v16 == CColorBrush::IsOfType )
    {
      if ( !(unsigned __int8)CBrush::IsOfType(v8, 17LL) )
        goto LABEL_6;
    }
    else if ( !v16(v8, 17uLL) )
    {
      goto LABEL_6;
    }
    v17 = *((_DWORD *)a2 + 792);
    v18 = (CNineGridBrush *)*((_QWORD *)this + 32);
    v20 = 0LL;
    if ( v17 )
      v19 = *(float *)(*((_QWORD *)a2 + 395) + 4LL * (unsigned int)(v17 - 1));
    else
      v19 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v19 - 1.0) & _xmm) >= 0.0000011920929
      || ((v12 = (const struct D2D_SIZE_F *)((char *)this + 144),
           v13 = *(char (__fastcall **)(CNineGridBrush *, const struct D2D_SIZE_F *, struct D2D_RECT_F *))(*(_QWORD *)v18 + 320LL),
           v13 != CNineGridBrush::IsOpaqueRect)
        ? (IsOpaqueRect = v13(v18, v12, &v20))
        : (IsOpaqueRect = CNineGridBrush::IsOpaqueRect(v18, v12, &v20)),
          !IsOpaqueRect) )
    {
      v20 = 0LL;
    }
    v15 = CSpriteVisual::GetDropShadow(this);
    CDropShadow::SetOcclusionRect(v15, &v20);
    goto LABEL_6;
  }
LABEL_3:
  result = CVisual::RenderContent(this, a2, a3);
  v7 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0xB5u, 0LL);
    return v7;
  }
  return result;
}
