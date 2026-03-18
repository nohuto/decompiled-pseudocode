/*
 * XREFs of ?GetPixelFormatInfo@CCompositionSurfaceBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x18002A6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x18002A800 (-GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?GetPixelFormatInfo@CDxHandleBitmapRealization@@WBAA@EBA?AUPixelFormatInfo@@XZ @ 0x1802D7E60 (-GetPixelFormatInfo@CDxHandleBitmapRealization@@WBAA@EBA-AUPixelFormatInfo@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  __int64 (*v5)(void); // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 (__fastcall *v8)(_QWORD, _QWORD); // r8
  int v9; // ecx
  int v10; // ecx
  char v12; // al
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD **)(a1 + 24);
  if ( !v3 )
    goto LABEL_14;
  v5 = *(__int64 (**)(void))(*v3 + 56LL);
  if ( (char *)v5 == (char *)CGlobalCompositionSurfaceInfo::TryGetRenderingRealization )
  {
    v6 = v3[26];
    v7 = v6 + 8;
    if ( !v6 )
      v7 = 0LL;
  }
  else
  {
    v7 = v5();
  }
  if ( v7 )
  {
    v8 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v7 + 24LL);
    if ( v8 == CDxHandleBitmapRealization::GetPixelFormatInfo )
    {
      CDxHandleBitmapRealization::GetPixelFormatInfo(v7, &v13);
    }
    else if ( v8 == CDxHandleBitmapRealization::GetPixelFormatInfo )
    {
      CDxHandleBitmapRealization::GetPixelFormatInfo(v7, &v13);
    }
    else
    {
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 24LL))(v7, &v13);
    }
    v9 = HIDWORD(v13);
    if ( *(_BYTE *)(a1 + 40) )
      v9 = 3;
    HIDWORD(v13) = v9;
    v10 = v14;
    *(_QWORD *)a2 = v13;
    *(_DWORD *)(a2 + 8) = v10;
  }
  else
  {
LABEL_14:
    *(_DWORD *)a2 = 0;
    v12 = -*(_BYTE *)(a1 + 40);
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 4) = v12 != 0 ? 3 : 0;
  }
  return a2;
}
