/*
 * XREFs of ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z @ 0x1802BD52C
 * Callers:
 *     ?Present@CCompSwapChain@@QEAAJII@Z @ 0x1802C7EE0 (-Present@CCompSwapChain@@QEAAJII@Z.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18003A510 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::Present(
        CD3DDevice *this,
        struct IDXGISwapChain1 *a2,
        __int64 a3,
        __int64 a4,
        const struct DXGI_PRESENT_PARAMETERS *a5)
{
  int v6; // edi
  int v7; // eax

  if ( *((_DWORD *)this + 278) )
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803BD758, 2u, -2003304307, 0xA17u, 0LL);
  }
  else
  {
    v7 = ((__int64 (__fastcall *)(struct IDXGISwapChain1 *, __int64, __int64, const struct DXGI_PRESENT_PARAMETERS *))a2->lpVtbl->Present1)(
           a2,
           1LL,
           8LL,
           a5);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803BD758, 2u, v7, 0xA1Bu, 0LL);
    }
    else
    {
      *((_QWORD *)this + 185) = GetCurrentFrameId();
      *((_BYTE *)this + 1499) = 0;
    }
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v6, 1u);
}
