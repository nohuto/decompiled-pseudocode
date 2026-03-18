/*
 * XREFs of ?GetD3DSamplerStateNoRef@CD3DDevice@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x180190210
 * Callers:
 *     ?SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18018EDE0 (-SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x18018FCA4 (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ToD3D11TextureAddressMode@ExtendMode@@YA?AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z @ 0x1801903B4 (-ToD3D11TextureAddressMode@ExtendMode@@YA-AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::GetD3DSamplerStateNoRef(__int64 a1, unsigned __int8 *a2, _QWORD *a3)
{
  unsigned int v3; // edi
  __int64 v5; // rbx
  int v7; // eax
  int v8; // eax
  unsigned __int8 v9; // r9
  int v10; // eax
  __int64 v11; // r8
  __int64 *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int16 v15; // [rsp+30h] [rbp-68h]
  _DWORD v16[3]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v17; // [rsp+4Ch] [rbp-4Ch]
  int v18; // [rsp+54h] [rbp-44h]
  int v19; // [rsp+58h] [rbp-40h]
  __int128 v20; // [rsp+5Ch] [rbp-3Ch]
  int v21; // [rsp+6Ch] [rbp-2Ch]
  int v22; // [rsp+70h] [rbp-28h]

  v3 = 0;
  v5 = a1 + 8 * (a2[2] + 4 * (a2[1] + 4LL * *a2));
  if ( *(_QWORD *)(v5 + 1768) )
    goto LABEL_2;
  if ( HIBYTE(*(_WORD *)a2) && a2[2] )
    v7 = 37120;
  else
    v7 = 37632;
  if ( *(_DWORD *)(a1 + 616) >= v7 )
  {
    v15 = *(_WORD *)a2;
    if ( (unsigned __int8)*(_WORD *)a2 == 2 || (unsigned __int8)*(_WORD *)a2 )
      v8 = 21;
    else
      v8 = 0;
    v16[0] = v8;
    v16[1] = ExtendMode::ToD3D11TextureAddressMode(HIBYTE(v15));
    v10 = ExtendMode::ToD3D11TextureAddressMode(v9);
    v12 = *(__int64 **)(v11 + 552);
    v16[2] = v10;
    v17 = 3LL;
    v18 = 1;
    v19 = 8;
    v20 = 0LL;
    v21 = 0;
    v22 = 2139095039;
    v13 = *v12;
    *(_QWORD *)(v5 + 1768) = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, __int64))(v13 + 184))(v12, v16, v5 + 1768);
    v3 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0xC39u, 0LL);
      return v3;
    }
LABEL_2:
    *a3 = *(_QWORD *)(v5 + 1768);
    return v3;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0xC34u, 0LL);
  return 2147942487LL;
}
