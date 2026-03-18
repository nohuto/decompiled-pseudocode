/*
 * XREFs of ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z @ 0x1801BD550
 * Callers:
 *     ?Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z @ 0x1801DEA48 (-Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GenerateShaders@CD3DDevice@@AEAAJXZ @ 0x1801927D0 (-GenerateShaders@CD3DDevice@@AEAAJXZ.c)
 *     ?Initialize@CKMAdapterHandle@@QEAAJPEAUIDXGIAdapter@@@Z @ 0x1801BD8F0 (-Initialize@CKMAdapterHandle@@QEAAJPEAUIDXGIAdapter@@@Z.c)
 *     ?CalcMaxTextureSize@CD3DDevice@@AEAAXXZ @ 0x1801BD9B0 (-CalcMaxTextureSize@CD3DDevice@@AEAAXXZ.c)
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDevice3@@@Z @ 0x1801BDAE0 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDevice3@@@Z.c)
 *     ?IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z @ 0x1801BDD54 (-IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z.c)
 *     ?QueryWarpExtension@CD3DDevice@@AEAAJXZ @ 0x1801BDE14 (-QueryWarpExtension@CD3DDevice@@AEAAJXZ.c)
 *     ?GatherSupportedTextureFormats@CD3DDevice@@AEAAJXZ @ 0x1801BDF8C (-GatherSupportedTextureFormats@CD3DDevice@@AEAAJXZ.c)
 *     ?CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ @ 0x1801BE5E0 (-CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ.c)
 *     ?InitSystemDevice@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@@Z @ 0x1802BA50C (-InitSystemDevice@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@@Z.c)
 *     McTemplateU0pqnz_EventWriteTransfer @ 0x1802BD830 (McTemplateU0pqnz_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::Init(CD3DDevice *this, struct IDXGIAdapter *a2, struct ID3D11Device1 *a3)
{
  HRESULT (__stdcall *QueryInterface)(IDXGIAdapter *, const IID *const, void **); // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  _QWORD *v12; // r14
  __int64 v13; // rcx
  int v14; // eax
  struct IDXGIDevice3 **v15; // rsi
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rbx
  void (__fastcall *v19)(__int64, __int64 *); // rbp
  __int64 v20; // rcx
  int v21; // eax
  int WarpExtension; // eax
  int v23; // eax
  bool IsShaderLinkingBlacklistedGpu; // al
  struct IDXGIDevice3 *v25; // rdx
  int v26; // eax
  int Shaders; // eax
  int RenderingResources; // eax
  int inited; // eax
  __int64 v31; // [rsp+78h] [rbp+10h] BYREF
  __int64 v32; // [rsp+88h] [rbp+20h] BYREF

  QueryInterface = a2->lpVtbl->QueryInterface;
  v31 = 0LL;
  v32 = 0LL;
  v7 = ((__int64 (__fastcall *)(struct IDXGIAdapter *, GUID *, __int64 *))QueryInterface)(
         a2,
         &GUID_3c8d99d1_4fbf_4181_a82c_af66bf7bd24e,
         &v32);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x1A5u, 0LL);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v32 + 144LL))(v32, (char *)this + 640);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x1A6u, 0LL);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0pqnz_EventWriteTransfer(v11, v10, (_DWORD)this, *((_DWORD *)this + 154));
      CKMAdapterHandle::Initialize((CD3DDevice *)((char *)this + 632), a2);
      v12 = (_QWORD *)((char *)this + 552);
      *((_QWORD *)this + 150) = this;
      v13 = *((_QWORD *)this + 69);
      *((_QWORD *)this + 69) = 0LL;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      v14 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, char *))a3->lpVtbl->QueryInterface)(
              a3,
              &GUID_8ffde202_a0e7_45df_9e01_e837801b5ea0,
              (char *)this + 552);
      v8 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x1B2u, 0LL);
      }
      else
      {
        v15 = (struct IDXGIDevice3 **)((char *)this + 536);
        v16 = *((_QWORD *)this + 67);
        *((_QWORD *)this + 67) = 0LL;
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        v17 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v12)(
                *v12,
                &GUID_6007896c_3244_4afd_bf18_a6d3beda5023,
                (char *)this + 536);
        v8 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x1B3u, 0LL);
        }
        else
        {
          ((void (__fastcall *)(struct IDXGIDevice3 *, __int64))(*v15)->lpVtbl->SetMaximumFrameLatency)(*v15, 16LL);
          v18 = *v12;
          v19 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v12 + 320LL);
          if ( v31 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
          v19(v18, &v31);
          v20 = *((_QWORD *)this + 70);
          *((_QWORD *)this + 70) = 0LL;
          if ( v20 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          v21 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v31)(
                  v31,
                  &GUID_917600da_f58c_4c33_98d8_3e15b390fa24,
                  (char *)this + 560);
          v8 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x1B8u, 0LL);
          }
          else
          {
            WarpExtension = CD3DDevice::QueryWarpExtension(this);
            v8 = WarpExtension;
            if ( WarpExtension < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, WarpExtension, 0x1BAu, 0LL);
            }
            else
            {
              CD3DDevice::CalcMaxTextureSize(this);
              v23 = CD3DDevice::GatherSupportedTextureFormats(this);
              v8 = v23;
              if ( v23 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x1C0u, 0LL);
              }
              else
              {
                IsShaderLinkingBlacklistedGpu = CCommonRegistryData::IsShaderLinkingBlacklistedGpu(
                                                  *((_DWORD *)this + 224),
                                                  *((_DWORD *)this + 225));
                v25 = *v15;
                *((_BYTE *)this + 1497) = IsShaderLinkingBlacklistedGpu;
                v26 = CD2DContext::InitializeD2D((CD3DDevice *)((char *)this + 16), v25);
                v8 = v26;
                if ( v26 >= 0 )
                {
                  Shaders = CD3DDevice::GenerateShaders(this);
                  v8 = Shaders;
                  if ( Shaders < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Shaders, 0x1C8u, 0LL);
                  }
                  else
                  {
                    RenderingResources = CDrawListBatchManager::CreateRenderingResources((CD3DDevice *)((char *)this + 24));
                    v8 = RenderingResources;
                    if ( RenderingResources < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, RenderingResources, 0x1CAu, 0LL);
                    }
                    else
                    {
                      inited = CD3DDevice::InitSystemDevice(this, a2);
                      v8 = inited;
                      if ( inited < 0 )
                        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, inited, 0x1CCu, 0LL);
                    }
                  }
                }
                else
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0x1C6u, 0LL);
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  return v8;
}
