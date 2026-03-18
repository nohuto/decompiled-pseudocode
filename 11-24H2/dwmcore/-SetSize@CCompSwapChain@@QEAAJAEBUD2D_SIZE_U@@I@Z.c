/*
 * XREFs of ?SetSize@CCompSwapChain@@QEAAJAEBUD2D_SIZE_U@@I@Z @ 0x1802C8238
 * Callers:
 *     ?Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180281524 (-Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?SetSize@CRemoteAppRenderTarget@@IEAAJAEBUD2D_SIZE_U@@@Z @ 0x180281C48 (-SetSize@CRemoteAppRenderTarget@@IEAAJAEBUD2D_SIZE_U@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x1801CA98C (-Trim@CD3DDevice@@QEAAXXZ.c)
 *     ?Initialize@CCompSwapChain@@IEAAJXZ @ 0x1802C7B08 (-Initialize@CCompSwapChain@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompSwapChain::SetSize(CCompSwapChain *this, const struct D2D_SIZE_U *a2, int a3)
{
  __int64 *v3; // r15
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v3 = (__int64 *)((char *)this + 80);
  v7 = 0;
  (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 10) + 88LL))(*((_QWORD *)this + 10), &v11);
  if ( v11 != *a2 || *((_DWORD *)this + 26) != a3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v3 + 80LL))(
      *v3,
      ((unsigned __int64)this + 48) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v3);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 11);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 12);
    CD3DDevice::Trim(*((CD3DDevice **)this + 7));
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, int))(**((_QWORD **)this + 8) + 104LL))(
           *((_QWORD *)this + 8),
           0LL,
           a2->width,
           a2->height,
           *((_DWORD *)this + 27),
           a3);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xDBu, 0LL);
    }
    else
    {
      v9 = CCompSwapChain::Initialize(this);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xDEu, 0LL);
      else
        *((_DWORD *)this + 26) = a3;
    }
  }
  return v7;
}
