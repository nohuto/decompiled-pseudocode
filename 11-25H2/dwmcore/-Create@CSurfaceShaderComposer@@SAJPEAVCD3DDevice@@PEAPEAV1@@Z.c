/*
 * XREFs of ?Create@CSurfaceShaderComposer@@SAJPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x18018E178
 * Callers:
 *     ?GenerateShaders@CD3DDevice@@AEAAJXZ @ 0x1801B0AF0 (-GenerateShaders@CD3DDevice@@AEAAJXZ.c)
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x18006DBC8 (McTemplateU0t_EventWriteTransfer.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CSurfaceShaderComposer@@IEAA@PEAUID3D11VertexShader@@PEAUID3D11InputLayout@@PEAUID3D11Buffer@@PEAUID3DDeviceContextState@@PEAVCD3DDevice@@PEAVCCompositingShaderCache@@@Z @ 0x18018DFF0 (--0CSurfaceShaderComposer@@IEAA@PEAUID3D11VertexShader@@PEAUID3D11InputLayout@@PEAUID3D11Buffer@.c)
 *     ?EnsureCache@CCompositingShaderCache@@SAJPEAPEAV1@@Z @ 0x18018E0E8 (-EnsureCache@CCompositingShaderCache@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceShaderComposer::Create(struct CD3DDevice *a1, struct CSurfaceShaderComposer **a2)
{
  __int64 v2; // rdi
  __int64 v3; // r15
  __int64 (__fastcall *v6)(__int64, void *, __int64, _QWORD, struct ID3D11VertexShader **); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 (__fastcall *v9)(__int64, const char **, __int64, void *, __int64, struct ID3D11InputLayout **); // rbx
  __int64 v10; // rcx
  struct ID3DDeviceContextState *v11; // rcx
  struct ID3D11Buffer *v12; // rcx
  struct ID3D11InputLayout *v13; // rcx
  struct ID3D11VertexShader *v14; // rcx
  __int64 (__fastcall *v16)(__int64, __int128 *, __int128 *, struct ID3D11Buffer **); // rbx
  __int64 (__fastcall *v17)(__int64, __int64, _DWORD *, __int64, int, GUID *, _QWORD, struct ID3DDeviceContextState **); // rbx
  void (__fastcall *v18)(__int64, struct ID3DDeviceContextState *, __int64 *); // rbx
  CSurfaceShaderComposer *v19; // rax
  struct CSurfaceShaderComposer *v20; // rax
  unsigned int v21; // [rsp+20h] [rbp-E0h]
  struct ID3DDeviceContextState *v22; // [rsp+50h] [rbp-B0h] BYREF
  struct ID3D11Buffer *v23; // [rsp+58h] [rbp-A8h] BYREF
  struct ID3D11InputLayout *v24; // [rsp+60h] [rbp-A0h] BYREF
  struct ID3D11VertexShader *v25; // [rsp+68h] [rbp-98h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v27[2]; // [rsp+78h] [rbp-88h] BYREF
  struct CCompositingShaderCache *v28; // [rsp+80h] [rbp-80h] BYREF
  __int128 v29; // [rsp+88h] [rbp-78h] BYREF
  __int128 v30; // [rsp+98h] [rbp-68h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-58h]
  const char *v32; // [rsp+B0h] [rbp-50h] BYREF
  int v33; // [rsp+B8h] [rbp-48h]
  __int64 v34; // [rsp+BCh] [rbp-44h]
  int v35; // [rsp+C4h] [rbp-3Ch]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  const char *v37; // [rsp+D0h] [rbp-30h]
  int v38; // [rsp+D8h] [rbp-28h]
  __int64 v39; // [rsp+DCh] [rbp-24h]
  int v40; // [rsp+E4h] [rbp-1Ch]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  const char *v42; // [rsp+F0h] [rbp-10h]
  int v43; // [rsp+F8h] [rbp-8h]
  __int64 v44; // [rsp+FCh] [rbp-4h]
  int v45; // [rsp+104h] [rbp+4h]
  __int64 v46; // [rsp+108h] [rbp+8h]

  v2 = *((_QWORD *)a1 + 69);
  v3 = *((_QWORD *)a1 + 70);
  v32 = "POSITION";
  v25 = 0LL;
  v37 = "TEXCOORD";
  v42 = "TEXCOORD";
  v24 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v26 = 0LL;
  v27[0] = 37632;
  v27[1] = 40960;
  v33 = 0;
  v34 = 16LL;
  v35 = -1;
  v36 = 0LL;
  v38 = 0;
  v39 = 16LL;
  v40 = -1;
  v41 = 0LL;
  v43 = 1;
  v44 = 16LL;
  v45 = -1;
  v46 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v29 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0t_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_D3DSHADER_CREATE_Start,
      0LL);
  v6 = *(__int64 (__fastcall **)(__int64, void *, __int64, _QWORD, struct ID3D11VertexShader **))(*(_QWORD *)v2 + 96LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
  v7 = v6(v2, &unk_180338930, 832LL, 0LL, &v25);
  v8 = v7;
  if ( v7 < 0 )
  {
    v21 = 134;
    goto LABEL_8;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0t_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_D3DSHADER_CREATE_Stop,
      0LL);
  v9 = *(__int64 (__fastcall **)(__int64, const char **, __int64, void *, __int64, struct ID3D11InputLayout **))(*(_QWORD *)v2 + 88LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
  v7 = v9(v2, &v32, 3LL, &unk_180338930, 832LL, &v24);
  v8 = v7;
  if ( v7 < 0 )
  {
    v21 = 143;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, v21, 0LL);
    goto LABEL_9;
  }
  *(_QWORD *)&v30 = 0x200000090LL;
  *(_QWORD *)&v29 = &unk_180338C80;
  *((_QWORD *)&v30 + 1) = 0x1000000000001LL;
  v16 = *(__int64 (__fastcall **)(__int64, __int128 *, __int128 *, struct ID3D11Buffer **))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
  v7 = v16(v2, &v30, &v29, &v23);
  v8 = v7;
  if ( v7 < 0 )
  {
    v21 = 156;
    goto LABEL_8;
  }
  v17 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *, __int64, int, GUID *, _QWORD, struct ID3DDeviceContextState **))(*(_QWORD *)v2 + 376LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  v7 = v17(v2, 1LL, v27, 2LL, 7, &GUID_a04bfb29_08ef_43d6_a49c_a9bdbdcbe686, 0LL, &v22);
  v8 = v7;
  if ( v7 < 0 )
  {
    v21 = 166;
    goto LABEL_8;
  }
  v18 = *(void (__fastcall **)(__int64, struct ID3DDeviceContextState *, __int64 *))(*(_QWORD *)v3 + 1048LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
  v18(v3, v22, &v26);
  (*(void (__fastcall **)(__int64, struct ID3D11InputLayout *))(*(_QWORD *)v3 + 136LL))(v3, v24);
  (*(void (__fastcall **)(__int64, _QWORD, __int64, struct ID3D11Buffer **, void *, float *))(*(_QWORD *)v3 + 144LL))(
    v3,
    0LL,
    1LL,
    &v23,
    &unk_180338D10,
    &`CVisual::SetWorldRenderingScaleOverride'::`2'::sc_defaultValue);
  (*(void (__fastcall **)(__int64, struct ID3D11VertexShader *, _QWORD, _QWORD))(*(_QWORD *)v3 + 88LL))(
    v3,
    v25,
    0LL,
    0LL);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 344LL))(v3, *((_QWORD *)a1 + 269));
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 288LL))(v3, *((_QWORD *)a1 + 270), 0LL);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 192LL))(v3, 4LL);
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v3 + 1048LL))(v3, v26, 0LL);
  v28 = 0LL;
  v7 = CCompositingShaderCache::EnsureCache(&v28);
  v8 = v7;
  if ( v7 < 0 )
  {
    v21 = 201;
    goto LABEL_8;
  }
  v19 = (CSurfaceShaderComposer *)MIDL_user_allocate(0x70uLL);
  if ( v19 )
  {
    v20 = CSurfaceShaderComposer::CSurfaceShaderComposer(v19, v25, v24, v23, v22, a1, v28);
    *a2 = v20;
    if ( v20 )
      goto LABEL_9;
  }
  else
  {
    *a2 = 0LL;
  }
  v8 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xD3u, 0LL);
LABEL_9:
  v10 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    ((void (__fastcall *)(struct ID3DDeviceContextState *))v11->lpVtbl->Release)(v11);
  }
  v12 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    ((void (__fastcall *)(struct ID3D11Buffer *))v12->lpVtbl->Release)(v12);
  }
  v13 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    ((void (__fastcall *)(struct ID3D11InputLayout *))v13->lpVtbl->Release)(v13);
  }
  v14 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    ((void (__fastcall *)(struct ID3D11VertexShader *))v14->lpVtbl->Release)(v14);
  }
  return v8;
}
