/*
 * XREFs of ?IsOpaque@CBitmapResource@@UEBA_NXZ @ 0x1801C8D40
 * Callers:
 *     <none>
 * Callees:
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x18004E2E4 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ?GetPixelFormatInfo@CWICBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801C8DF0 (-GetPixelFormatInfo@CWICBitmapRealization@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CBitmapResource::IsOpaque(CBitmapResource *this)
{
  __int64 (__fastcall *v1)(__int64, __int64); // rax
  char *v2; // rbx
  __int64 v3; // rcx
  void (__fastcall *v4)(__int64, __int64 *); // rax
  __int64 *v5; // rax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+28h] [rbp-20h]

  v1 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)this + 24LL);
  if ( v1 == CBitmapResource::GetPixelFormatInfo )
  {
    v2 = (char *)this + 8;
    if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>((_QWORD *)this + 1) )
    {
      v3 = *(_QWORD *)v2;
      v4 = *(void (__fastcall **)(__int64, __int64 *))(**(_QWORD **)v2 + 24LL);
      if ( (char *)v4 == (char *)CWICBitmapRealization::GetPixelFormatInfo )
        CWICBitmapRealization::GetPixelFormatInfo(v3, &v7);
      else
        v4(v3, &v7);
      v5 = &v7;
    }
    else
    {
      v7 = 0LL;
      v8 = 0;
      v5 = &v7;
    }
  }
  else
  {
    v5 = (__int64 *)v1((__int64)this, (__int64)&v7);
  }
  return *((_DWORD *)v5 + 1) == 3;
}
