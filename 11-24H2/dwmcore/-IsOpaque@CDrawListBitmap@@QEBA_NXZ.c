/*
 * XREFs of ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x18010E730
 * Callers:
 *     ?EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z @ 0x18006238C (-EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006FC50 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x1800D85C0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18016D520 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?DrawMesh2D@CRenderData@@CAJPEAVCDrawListEntryBuilder@@PEBVCMeshGeometry2D@@PEAVCRenderingEffect@@@Z @ 0x180244058 (-DrawMesh2D@CRenderData@@CAJPEAVCDrawListEntryBuilder@@PEBVCMeshGeometry2D@@PEAVCRenderingEffect.c)
 * Callees:
 *     ?GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x18002A800 (-GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?TryGetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ @ 0x18010E8A0 (-TryGetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?GetPixelFormatInfo@CDxHandleBitmapRealization@@WBAA@EBA?AUPixelFormatInfo@@XZ @ 0x1802D7E60 (-GetPixelFormatInfo@CDxHandleBitmapRealization@@WBAA@EBA-AUPixelFormatInfo@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CDrawListBitmap::IsOpaque(CDrawListBitmap *this)
{
  _BYTE *v1; // rbx
  __int64 (__fastcall *v2)(__int64, __int64); // rax
  struct IBitmapRealization *RenderingRealization; // rax
  _DWORD *(__fastcall *v4)(__int64, _DWORD *); // r8
  int v5; // eax
  __int64 *v6; // rax
  __int64 v8; // rcx
  __int64 *v9; // rdx
  bool v10; // cf
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  int v12; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+38h] [rbp-20h]

  if ( *((_BYTE *)this + 16) )
    return 1;
  v1 = *(_BYTE **)this;
  if ( *(_QWORD *)this )
  {
    if ( *(bool (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v1 + 32LL) != CCompositionSurfaceBitmap::IsOpaque )
      return (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v1 + 32LL))(v1);
    v2 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 24LL);
    if ( v2 == CCompositionSurfaceBitmap::GetPixelFormatInfo )
    {
      RenderingRealization = CCompositionSurfaceBitmap::TryGetRenderingRealization((CCompositionSurfaceBitmap *)(v1 - 72));
      if ( RenderingRealization )
      {
        v4 = *(_DWORD *(__fastcall **)(__int64, _DWORD *))(*(_QWORD *)RenderingRealization + 24LL);
        if ( (char *)v4 == (char *)CDxHandleBitmapRealization::GetPixelFormatInfo )
        {
          CDxHandleBitmapRealization::GetPixelFormatInfo(RenderingRealization, &v13);
        }
        else if ( v4 == CDxHandleBitmapRealization::GetPixelFormatInfo )
        {
          CDxHandleBitmapRealization::GetPixelFormatInfo((__int64)RenderingRealization, &v13);
        }
        else
        {
          (*(void (__fastcall **)(struct IBitmapRealization *, __int64 *))(*(_QWORD *)RenderingRealization + 24LL))(
            RenderingRealization,
            &v13);
        }
        v5 = HIDWORD(v13);
        if ( v1[40] )
          v5 = 3;
        HIDWORD(v13) = v5;
        v12 = v14;
        v6 = &v11;
        v11 = v13;
      }
      else
      {
        v10 = v1[40] != 0;
        LODWORD(v11) = 0;
        v12 = 0;
        v6 = &v11;
        HIDWORD(v11) = v10 ? 3 : 0;
      }
      return *((_DWORD *)v6 + 1) == 3;
    }
    v9 = &v11;
    v8 = *(_QWORD *)this;
  }
  else
  {
    v8 = *((_QWORD *)this + 1);
    v9 = &v13;
    v2 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 24LL);
  }
  v6 = (__int64 *)v2(v8, (__int64)v9);
  return *((_DWORD *)v6 + 1) == 3;
}
