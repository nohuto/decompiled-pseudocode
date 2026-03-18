/*
 * XREFs of ?Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z @ 0x180043678
 * Callers:
 *     ?GetShadersNoRef@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x1800433D0 (-GetShadersNoRef@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAIPEAPEAUID3D11PixelShader@@@Z.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18010C8E0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?GetCommonRenderingShaderInternalNoRef@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonRenderingShaderDesc@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18010EFA0 (-GetCommonRenderingShaderInternalNoRef@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCom.c)
 *     ?CreateResource@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z @ 0x1801FA990 (-CreateResource@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x180043AEC (--0CD3DResource@@IEAA@_N@Z.c)
 *     ?CreatePixelShader@CD3DDevice@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader@@@Z @ 0x180043B28 (-CreatePixelShader@CD3DDevice@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader@@@Z.c)
 *     ?Initialize@CD3DPixelShader@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11PixelShader@@@Z @ 0x180043BC0 (-Initialize@CD3DPixelShader@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11PixelShader@@@Z.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x180043F80 (McTemplateU0t_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DPixelShader::Create(
        struct CD3DDevice *a1,
        const void *a2,
        unsigned __int64 a3,
        struct CD3DPixelShader **a4)
{
  CD3DResource *v8; // rax
  CD3DResource *v9; // rbx
  __int64 v10; // rdx
  void (__fastcall *v11)(CD3DResource *); // rax
  struct ID3D11ClassLinkage *v12; // r9
  int v13; // eax
  unsigned int v14; // edi
  unsigned int v16; // [rsp+20h] [rbp-28h]
  struct ID3D11PixelShader *v17; // [rsp+30h] [rbp-18h] BYREF

  v17 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0t_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_D3DSHADER_CREATE_Start, 1LL);
  v8 = (CD3DResource *)operator new(0x80uLL);
  v9 = v8;
  if ( v8 )
  {
    CD3DResource::CD3DResource(v8, 0);
    *((_QWORD *)v9 + 15) &= v10;
    v11 = (void (__fastcall *)(CD3DResource *))*(&CD3DPixelShader::`vftable' + 1);
    *(_QWORD *)v9 = &CD3DPixelShader::`vftable';
    v11(v9);
    v13 = CD3DDevice::CreatePixelShader(a1, a2, a3, v12, &v17);
    v14 = v13;
    if ( v13 < 0 )
    {
      v16 = 45;
    }
    else
    {
      v13 = CD3DPixelShader::Initialize(v9, (struct CD3DDevice *)((char *)a1 + 1120), a3, v17);
      v14 = v13;
      if ( v13 >= 0 )
      {
        *a4 = v9;
        v9 = 0LL;
        goto LABEL_9;
      }
      v16 = 47;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, v16, 0LL);
  }
  else
  {
    v9 = 0LL;
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x25u, 0LL);
  }
LABEL_9:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0t_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_D3DSHADER_CREATE_Stop, 1LL);
  if ( v17 )
    ((void (__fastcall *)(struct ID3D11PixelShader *))v17->lpVtbl->Release)(v17);
  if ( v9 )
    (*(void (__fastcall **)(CD3DResource *))(*(_QWORD *)v9 + 16LL))(v9);
  return v14;
}
