/*
 * XREFs of ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18014A270
 * Callers:
 *     ?IsOpaque@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@@Z @ 0x1801D8320 (-IsOpaque@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@@Z.c)
 * Callees:
 *     ?GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x180063B40 (-GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?TryGetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ @ 0x18014A4E0 (-TryGetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetPixelFormatInfo@CDxHandleBitmapRealization@@WBAA@EBA?AUPixelFormatInfo@@XZ @ 0x1802E1100 (-GetPixelFormatInfo@CDxHandleBitmapRealization@@WBAA@EBA-AUPixelFormatInfo@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CCompositionSurfaceBitmap::IsOpaque(CCompositionSurfaceBitmap *this)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax
  struct IBitmapRealization *RenderingRealization; // rax
  _DWORD *(__fastcall *v4)(__int64, _DWORD *); // r8
  int v5; // eax
  __int64 *v6; // rax
  bool v8; // cf
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  int v10; // [rsp+28h] [rbp-30h]
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+38h] [rbp-20h]

  v2 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)this + 24LL);
  if ( v2 == CCompositionSurfaceBitmap::GetPixelFormatInfo )
  {
    RenderingRealization = CCompositionSurfaceBitmap::TryGetRenderingRealization((CCompositionSurfaceBitmap *)((char *)this - 72));
    if ( RenderingRealization )
    {
      v4 = *(_DWORD *(__fastcall **)(__int64, _DWORD *))(*(_QWORD *)RenderingRealization + 24LL);
      if ( (char *)v4 == (char *)CDxHandleBitmapRealization::GetPixelFormatInfo )
      {
        CDxHandleBitmapRealization::GetPixelFormatInfo(RenderingRealization, &v11);
      }
      else if ( v4 == CDxHandleBitmapRealization::GetPixelFormatInfo )
      {
        CDxHandleBitmapRealization::GetPixelFormatInfo((__int64)RenderingRealization, &v11);
      }
      else
      {
        (*(void (__fastcall **)(struct IBitmapRealization *, __int64 *))(*(_QWORD *)RenderingRealization + 24LL))(
          RenderingRealization,
          &v11);
      }
      v5 = HIDWORD(v11);
      if ( *((_BYTE *)this + 40) )
        v5 = 3;
      HIDWORD(v11) = v5;
      v10 = v12;
      v6 = &v9;
      v9 = v11;
    }
    else
    {
      v8 = *((_BYTE *)this + 40) != 0;
      LODWORD(v9) = 0;
      v10 = 0;
      v6 = &v9;
      HIDWORD(v9) = v8 ? 3 : 0;
    }
  }
  else
  {
    v6 = (__int64 *)v2((__int64)this, (__int64)&v9);
  }
  return *((_DWORD *)v6 + 1) == 3;
}
