/*
 * XREFs of ?CreateRenderTargetView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_RENDER_TARGET_VIEW_DESC@@PEAPEAUID3D11RenderTargetView@@@Z @ 0x1802061CC
 * Callers:
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x1802D1D14 (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateRenderTargetView(
        CD3DDevice *this,
        struct ID3D11Resource *a2,
        const struct D3D11_RENDER_TARGET_VIEW_DESC *a3,
        struct ID3D11RenderTargetView **a4)
{
  int v5; // eax
  int v6; // ebx

  *a4 = 0LL;
  if ( *((_DWORD *)this + 278) )
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x6DFu, 0LL);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, struct ID3D11Resource *, const struct D3D11_RENDER_TARGET_VIEW_DESC *))(**((_QWORD **)this + 69) + 72LL))(
           *((_QWORD *)this + 69),
           a2,
           a3);
    v6 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x6E3u, 0LL);
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v6, 0);
}
