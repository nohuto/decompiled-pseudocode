/*
 * XREFs of ?EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ @ 0x1801B5880
 * Callers:
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x180235DA0 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x1802C27F4 (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@I.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateSwapChainBuffer@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@IW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MAEBUDDisplayTargetResources@@PEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@PEAPEAVCDDisplaySwapChainBuffer@@@Z @ 0x1801B5B00 (-CreateSwapChainBuffer@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@IW4DXGI_ALPHA_MODE.c)
 *     ?CreatePrimaryDescription@CDDisplayManager@@QEAAJAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAPEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@@Z @ 0x1801B5D70 (-CreatePrimaryDescription@CDDisplayManager@@QEAAJAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAPEAUID.c)
 *     ?GetSwapchainBufferUsage@CD3DDevice@@QEAAI_N0W4DXGI_FORMAT@@I@Z @ 0x1801B6020 (-GetSwapchainBufferUsage@CD3DDevice@@QEAAI_N0W4DXGI_FORMAT@@I@Z.c)
 *     ?TransitionAwayCurrentPrimaries@CDDisplaySwapChain@@IEAAXXZ @ 0x1801B6078 (-TransitionAwayCurrentPrimaries@CDDisplaySwapChain@@IEAAXXZ.c)
 *     ?AddResourceNotify@CDDisplaySwapChainBuffer@@QEAAXPEAVIDeviceResourceNotify@@@Z @ 0x1801B6174 (-AddResourceNotify@CDDisplaySwapChainBuffer@@QEAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VISwapChainBuffer@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1801B6CD4 (-InternalRelease@-$CMILRefCountBaseT@VISwapChainBuffer@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?IsFrontBufferRenderingSupported@CD3DDevice@@QEBA_NW4DXGI_FORMAT@@@Z @ 0x18021F4D4 (-IsFrontBufferRenderingSupported@CD3DDevice@@QEBA_NW4DXGI_FORMAT@@@Z.c)
 *     ?IsDriverWhitelisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDevice@@@Z @ 0x18022A93C (-IsDriverWhitelisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDevice@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1802BDBA4 (--$_Emplace_reallocate@V-$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplaySwapChain::EnsureDisplayBuffers(CDDisplaySwapChain *this)
{
  unsigned int v2; // r14d
  unsigned int SwapchainBufferUsage; // eax
  CDDisplayManager *v5; // rcx
  unsigned int v6; // r9d
  int v7; // eax
  __int64 v8; // rax
  struct Windows::Devices::Display::Core::IDisplayPrimaryDescription *v9; // rbx
  unsigned int i; // r15d
  __int64 v11; // rdx
  int v12; // eax
  CDDisplaySwapChainBuffer *v13; // rdi
  CDDisplaySwapChainBuffer **v14; // rdx
  bool v15; // zf
  enum DXGI_FORMAT v16; // edx
  CD3DDevice *v17; // rcx
  __int64 v18; // rcx
  __int64 *v19; // rcx
  __int64 v20; // rdx
  int v21; // ebx
  __int64 v22; // rax
  int v23; // edi
  int v24; // eax
  __int64 v25; // rax
  __int64 (__fastcall *v26)(CDDisplaySwapChainBuffer *, __int64, _QWORD, _QWORD, _DWORD, __int64 *, __int64 *, _DWORD, int); // r10
  __int64 *v27; // rax
  __int64 v28; // rdx
  int v29; // eax
  int v30; // [rsp+28h] [rbp-59h]
  int v31; // [rsp+30h] [rbp-51h]
  int v32; // [rsp+38h] [rbp-49h]
  int v33; // [rsp+40h] [rbp-41h]
  CDDisplaySwapChainBuffer *v34; // [rsp+68h] [rbp-19h] BYREF
  struct Windows::Devices::Display::Core::IDisplayPrimaryDescription *v35; // [rsp+70h] [rbp-11h] BYREF
  int v36; // [rsp+78h] [rbp-9h] BYREF
  void (__fastcall ***v37)(_QWORD, GUID *, CDDisplaySwapChainBuffer **); // [rsp+80h] [rbp-1h] BYREF
  __int64 v38; // [rsp+88h] [rbp+7h] BYREF
  int v39; // [rsp+90h] [rbp+Fh]
  int v40; // [rsp+94h] [rbp+13h]
  __int64 v41; // [rsp+98h] [rbp+17h] BYREF
  int v42; // [rsp+A0h] [rbp+1Fh]
  int v43; // [rsp+A4h] [rbp+23h]

  v2 = 0;
  if ( !*((_BYTE *)this + 664) )
    return v2;
  CDDisplaySwapChain::TransitionAwayCurrentPrimaries(this);
  SwapchainBufferUsage = CD3DDevice::GetSwapchainBufferUsage(
                           *((CD3DDevice **)this + 8),
                           *((_BYTE *)this + 666),
                           0,
                           *((enum DXGI_FORMAT *)this + 23),
                           0);
  v35 = 0LL;
  v6 = SwapchainBufferUsage | 0x1000000;
  if ( !*((_BYTE *)this + 124) )
    v6 = SwapchainBufferUsage;
  v7 = CDDisplayManager::CreatePrimaryDescription(
         v5,
         (CDDisplaySwapChain *)((char *)this + 92),
         (const struct D2D_SIZE_U *)((char *)this + 516),
         v6,
         &v35);
  v2 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AFF8, 2u, v7, 0x35Cu, 0LL);
    if ( v35 )
    {
      v8 = *(_QWORD *)v35;
LABEL_8:
      (*(void (**)(void))(v8 + 16))();
    }
    return v2;
  }
  v9 = v35;
  for ( i = 0; ; ++i )
  {
    if ( i >= *((_DWORD *)this + 128) )
    {
      v15 = *((_DWORD *)this + 68) == -1;
      *((_DWORD *)this + 131) = 0;
      if ( v15 )
      {
        v16 = *((_DWORD *)this + 23);
        v17 = (CD3DDevice *)*((_QWORD *)this + 8);
        *((_DWORD *)this + 68) = 0;
        if ( CD3DDevice::IsFrontBufferRenderingSupported(v17, v16) )
        {
          if ( CComputeScribbleRenderer::IsDriverWhitelisted(*((const struct CD3DDevice **)this + 8)) )
          {
            *((_DWORD *)this + 68) = 2;
          }
          else if ( *(int *)(v18 + 620) >= 2600 )
          {
            v19 = (__int64 *)*((_QWORD *)this + 48);
            v20 = *((_QWORD *)this + 53);
            v21 = *((_DWORD *)this + 129);
            v34 = 0LL;
            v22 = *v19;
            v23 = *((_DWORD *)this + 130);
            v37 = 0LL;
            v24 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v22 + 48))(v19, v20, &v37);
            v2 = v24;
            if ( v24 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AFF8, 2u, v24, 0x398u, 0LL);
            }
            else
            {
              if ( v34 )
                (*(void (__fastcall **)(CDDisplaySwapChainBuffer *))(*(_QWORD *)v34 + 16LL))(v34);
              (**v37)(v37, &GUID_2e5eba29_7eb8_5e77_a328_83a2ab9877d7, &v34);
              v40 = v23;
              v43 = v23;
              v25 = *(_QWORD *)v34;
              v38 = 0LL;
              v39 = v21;
              v26 = *(__int64 (__fastcall **)(CDDisplaySwapChainBuffer *, __int64, _QWORD, _QWORD, _DWORD, __int64 *, __int64 *, _DWORD, int))(v25 + 48);
              v27 = (__int64 *)*((_QWORD *)this + 58);
              v41 = 0LL;
              v42 = v21;
              v28 = *v27;
              LOBYTE(v28) = 1;
              v29 = v26(v34, v28, 0LL, *(_QWORD *)(*v27 + 200), 0, &v41, &v38, 0, 1);
              v2 = v29;
              if ( v29 >= 0 )
              {
                if ( (*(int (__fastcall **)(CDDisplaySwapChainBuffer *))(*(_QWORD *)v34 + 72LL))(v34) >= 0 )
                {
                  v36 = 0;
                  if ( (*(int (__fastcall **)(CDDisplaySwapChainBuffer *, _QWORD, int *))(*(_QWORD *)v34 + 88LL))(
                         v34,
                         0LL,
                         &v36) >= 0
                    && v36 == 2 )
                  {
                    *((_DWORD *)this + 68) = 1;
                  }
                }
                wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v34);
                wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v37);
                goto LABEL_35;
              }
              MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AFF8, 2u, v29, 0x3A3u, 0LL);
            }
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v34);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v37);
            goto LABEL_36;
          }
        }
      }
LABEL_35:
      *((_BYTE *)this + 277) = 0;
      *((_WORD *)this + 332) = 256;
LABEL_36:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v35);
      return v2;
    }
    v11 = *((_QWORD *)this + 8);
    v33 = *((_DWORD *)this + 30);
    v32 = *((_DWORD *)this + 28);
    v31 = *((_DWORD *)this + 25);
    v30 = *((_DWORD *)this + 24);
    v34 = 0LL;
    v12 = CDDisplayManager::CreateSwapChainBuffer(
            (char *)this + 368,
            v11,
            (char *)this + 516,
            i,
            v30,
            v31,
            v32,
            v33,
            (char *)this + 368,
            v9,
            &v34);
    v2 = v12;
    if ( v12 < 0 )
      break;
    v13 = v34;
    CDDisplaySwapChainBuffer::AddResourceNotify(
      v34,
      (struct IDeviceResourceNotify *)(((unsigned __int64)this + 280) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
    v14 = (CDDisplaySwapChainBuffer **)*((_QWORD *)this + 59);
    if ( v14 == *((CDDisplaySwapChainBuffer ***)this + 60) )
    {
      std::vector<wil::com_ptr_t<CDDisplaySwapChainBuffer,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CDDisplaySwapChainBuffer,wil::err_returncode_policy>>(
        (char *)this + 464,
        v14,
        &v34);
      if ( v34 )
        CMILRefCountBaseT<ISwapChainBuffer,CMilObjectDeleter>::InternalRelease();
    }
    else
    {
      *v14 = v13;
      *((_QWORD *)this + 59) += 8LL;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AFF8, 2u, v12, 0x36Eu, 0LL);
  if ( v34 )
    CMILRefCountBaseT<ISwapChainBuffer,CMilObjectDeleter>::InternalRelease();
  if ( v9 )
  {
    v8 = *(_QWORD *)v9;
    goto LABEL_8;
  }
  return v2;
}
