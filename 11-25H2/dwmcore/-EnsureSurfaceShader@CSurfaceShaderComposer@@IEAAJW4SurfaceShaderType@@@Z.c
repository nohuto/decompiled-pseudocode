/*
 * XREFs of ?EnsureSurfaceShader@CSurfaceShaderComposer@@IEAAJW4SurfaceShaderType@@@Z @ 0x18018FBB4
 * Callers:
 *     ?GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11PixelShader@@@Z @ 0x18018FB28 (-GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11Pixel.c)
 * Callees:
 *     ?CreatePixelShader@CD3DDevice@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader@@@Z @ 0x18006D7A8 (-CreatePixelShader@CD3DDevice@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CSurfaceShaderComposer::EnsureSurfaceShader(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  struct ID3D11PixelShader **v3; // rbp
  __int64 v4; // rdi
  CD3DDevice *v6; // rsi
  struct ID3D11ClassLinkage *v7; // r9
  int PixelShader; // eax

  v2 = 0;
  v3 = (struct ID3D11PixelShader **)(a1 + 8LL * a2);
  v4 = 3LL * a2;
  if ( !*v3 )
  {
    v6 = *(CD3DDevice **)(a1 + 96);
    if ( *((_DWORD *)v6 + 154) >= *((_DWORD *)&unk_180306DD0 + 6 * a2 + 5) )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 8LL * a2));
      PixelShader = CD3DDevice::CreatePixelShader(
                      v6,
                      *((const void **)&unk_180306DD0 + v4 + 1),
                      *((_QWORD *)&unk_180306DD0 + v4),
                      v7,
                      v3);
      v2 = PixelShader;
      if ( PixelShader < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, PixelShader, 0x206u, 0LL);
    }
  }
  return v2;
}
