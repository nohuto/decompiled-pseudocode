/*
 * XREFs of ?CreatePixelShader@CD3DDevice@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader@@@Z @ 0x180043B28
 * Callers:
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z @ 0x180043678 (-Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z.c)
 *     ?EnsureSurfaceShader@CSurfaceShaderComposer@@IEAAJW4SurfaceShaderType@@@Z @ 0x180205F34 (-EnsureSurfaceShader@CSurfaceShaderComposer@@IEAAJW4SurfaceShaderType@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreatePixelShader(
        CD3DDevice *this,
        const void *a2,
        __int64 a3,
        struct ID3D11ClassLinkage *a4,
        struct ID3D11PixelShader **a5)
{
  int v6; // eax
  unsigned int v7; // ebx

  *a5 = 0LL;
  if ( *((_DWORD *)this + 278) )
  {
    v7 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304307, 0x696u, 0LL);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, const void *, __int64, _QWORD, struct ID3D11PixelShader **))(**((_QWORD **)this + 69) + 120LL))(
           *((_QWORD *)this + 69),
           a2,
           a3,
           0LL,
           a5);
    v7 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x69Bu, 0LL);
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext(this, v7, 0LL);
}
