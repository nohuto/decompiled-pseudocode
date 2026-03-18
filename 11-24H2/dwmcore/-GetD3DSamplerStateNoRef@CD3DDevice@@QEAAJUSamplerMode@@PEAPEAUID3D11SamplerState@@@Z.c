/*
 * XREFs of ?GetD3DSamplerStateNoRef@CD3DDevice@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x180064AE0
 * Callers:
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x180064500 (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     ?SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1801B4E10 (-SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ?ToD3D11TextureAddressMode@ExtendMode@@YA?AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z @ 0x180064C84 (-ToD3D11TextureAddressMode@ExtendMode@@YA-AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::GetD3DSamplerStateNoRef(__int64 a1, unsigned __int8 *a2, _QWORD *a3)
{
  unsigned int v3; // edi
  __int64 v5; // rbx
  int v7; // eax
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // r8
  __int64 *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int16 v18; // [rsp+30h] [rbp-68h]
  _DWORD v19[3]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v20; // [rsp+4Ch] [rbp-4Ch]
  int v21; // [rsp+54h] [rbp-44h]
  int v22; // [rsp+58h] [rbp-40h]
  __int128 v23; // [rsp+5Ch] [rbp-3Ch]
  int v24; // [rsp+6Ch] [rbp-2Ch]
  int v25; // [rsp+70h] [rbp-28h]

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
    v8 = a2[2];
    v18 = *(_WORD *)a2;
    if ( (unsigned __int8)*(_WORD *)a2 == 2 || (unsigned __int8)*(_WORD *)a2 )
      v9 = 21;
    else
      v9 = 0;
    v19[0] = v9;
    v19[1] = ExtendMode::ToD3D11TextureAddressMode(HIBYTE(v18), a2, a1, v8);
    v13 = ExtendMode::ToD3D11TextureAddressMode((unsigned __int8)v10, v11, v12, v10);
    v15 = *(__int64 **)(v14 + 552);
    v19[2] = v13;
    v20 = 3LL;
    v21 = 1;
    v22 = 8;
    v23 = 0LL;
    v24 = 0;
    v25 = 2139095039;
    v16 = *v15;
    *(_QWORD *)(v5 + 1768) = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, __int64))(v16 + 184))(v15, v19, v5 + 1768);
    v3 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xC1Du, 0LL);
      return v3;
    }
LABEL_2:
    *a3 = *(_QWORD *)(v5 + 1768);
    return v3;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xC18u, 0LL);
  return 2147942487LL;
}
