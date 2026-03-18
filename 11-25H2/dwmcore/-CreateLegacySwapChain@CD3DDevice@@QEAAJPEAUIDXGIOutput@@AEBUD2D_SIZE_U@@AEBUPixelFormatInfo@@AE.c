/*
 * XREFs of ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVCLegacySwapChain@@@Z @ 0x18023598C
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ @ 0x18023EE50 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180142A00 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?GetSwapchainBufferUsage@CD3DDevice@@QEAAI_N0W4DXGI_FORMAT@@I@Z @ 0x1801C5A10 (-GetSwapchainBufferUsage@CD3DDevice@@QEAAI_N0W4DXGI_FORMAT@@I@Z.c)
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x1801D8C2C (-Trim@CD3DDevice@@QEAAXXZ.c)
 *     ?Create@CLegacySwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@FrontBufferRender@@PEAPEAV1@@Z @ 0x1801EF0F8 (-Create@CLegacySwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@A.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_NewDWMFailFastErrors@@@details@wil@@QEAA_NXZ @ 0x18024A5F0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_NewDWMFailFastErrors@@@details@wi.c)
 *     ??1CFailFastError@@QEAA@XZ @ 0x18024C9D8 (--1CFailFastError@@QEAA@XZ.c)
 *     ?TrimAllDevices@CDeviceManager@@QEAAXXZ @ 0x180257C2C (-TrimAllDevices@CDeviceManager@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ?GetSwapChainCreationError@CD3DDevice@@SAJI_N@Z @ 0x18028A0E8 (-GetSwapChainCreationError@CD3DDevice@@SAJI_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateLegacySwapChain(
        CD3DDevice *this,
        struct IDXGIOutput *a2,
        const struct D2D_SIZE_U *a3,
        enum DXGI_FORMAT *a4,
        const struct RenderTargetInfo *a5,
        unsigned int a6,
        bool a7,
        struct CLegacySwapChain **a8)
{
  bool v8; // bl
  int v13; // esi
  int v14; // eax
  int v15; // eax
  CDeviceManager *v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // ecx
  int SwapChainCreationError; // eax
  enum DXGI_FORMAT v20; // r9d
  int v21; // r8d
  __int64 v22; // rbx
  __int64 v23; // rdx
  UINT32 height; // eax
  __int64 v25; // r8
  int SwapchainBufferUsage; // eax
  __int64 *v27; // rdx
  struct IDXGIOutputVtbl *lpVtbl; // rax
  HRESULT (__stdcall *GetParent)(IDXGIOutput *, const IID *const, void **); // rbx
  int v30; // eax
  __int64 *v31; // rdx
  __int64 *v32; // rbx
  __int64 v33; // rax
  __int64 (__fastcall *v34)(__int64 *, GUID *, __int64 **); // r15
  int v35; // eax
  __int64 v36; // rcx
  __int64 *v37; // rbx
  __int64 v38; // rax
  __int64 (__fastcall *v39)(__int64 *, _QWORD, UINT32 *, struct IDXGIOutput *, __int64 *); // r15
  int v40; // eax
  int v41; // eax
  int v42; // eax
  enum DXGI_FORMAT v43; // r9d
  UINT32 v44; // eax
  __int64 v45; // r8
  struct IDXGIOutputVtbl *v46; // rax
  HRESULT (__stdcall *v47)(IDXGIOutput *, const IID *const, void **); // rbx
  int v48; // eax
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  unsigned int v55; // ebx
  int v57; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v58; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v59; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v60; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v61; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v62; // [rsp+68h] [rbp-98h] BYREF
  int v63; // [rsp+70h] [rbp-90h] BYREF
  int *v64; // [rsp+78h] [rbp-88h]
  const struct RenderTargetInfo *v65; // [rsp+80h] [rbp-80h]
  UINT32 width; // [rsp+90h] [rbp-70h] BYREF
  UINT32 v67; // [rsp+94h] [rbp-6Ch]
  __int64 v68; // [rsp+98h] [rbp-68h]
  enum DXGI_FORMAT v69; // [rsp+A0h] [rbp-60h]
  int v70; // [rsp+A4h] [rbp-5Ch]
  int v71; // [rsp+A8h] [rbp-58h]
  __int64 v72; // [rsp+ACh] [rbp-54h]
  int v73; // [rsp+B4h] [rbp-4Ch]
  unsigned int v74; // [rsp+B8h] [rbp-48h]
  int v75; // [rsp+BCh] [rbp-44h]
  __int64 v76; // [rsp+C0h] [rbp-40h]
  int v77; // [rsp+C8h] [rbp-38h]
  int v78; // [rsp+CCh] [rbp-34h]
  int v79; // [rsp+D0h] [rbp-30h]
  int v80; // [rsp+D4h] [rbp-2Ch]
  _BYTE v81[40]; // [rsp+E0h] [rbp-20h] BYREF
  int v82; // [rsp+108h] [rbp+8h]
  int v83; // [rsp+10Ch] [rbp+Ch]
  __int64 v84; // [rsp+118h] [rbp+18h]
  int v85; // [rsp+128h] [rbp+28h]
  unsigned int v86; // [rsp+14Ch] [rbp+4Ch]

  v8 = 0;
  v65 = a5;
  v62 = 0LL;
  *a8 = 0LL;
  v13 = 0;
  v61 = 0LL;
  v60 = 0LL;
  v59 = 0LL;
  v58 = 0LL;
  if ( *((_DWORD *)this + 278) )
  {
    v57 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18038F3B8, 3u, -2003304307, 0x110u, 0LL);
    goto LABEL_54;
  }
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v62);
  v14 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976,
          &v62);
  v57 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18038F3B8, 3u, v14, 0x112u, 0LL);
  }
  else
  {
    memset_0(v81, 0, 0xC8uLL);
    v15 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v62 + 32LL))(v62, v81);
    v57 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18038F3B8, 3u, v15, 0x115u, 0LL);
    }
    else if ( v82 && v83 )
    {
      if ( (v86 & 0x100) != 0 )
      {
        v8 = 1;
        CDeviceManager::TrimAllDevices(v16);
      }
      else if ( *((_BYTE *)this + 1500) )
      {
        CD3DDevice::Trim(this);
      }
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_NewDWMFailFastErrors>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_NewDWMFailFastErrors>::GetImpl'::`2'::impl) )
      {
        v18 = *((_DWORD *)this + 224);
        v64 = &v57;
        v63 = g_hrNoHardwareDeviceOverride;
        SwapChainCreationError = CD3DDevice::GetSwapChainCreationError(v18, v8);
        v20 = *a4;
        v22 = (unsigned int)(v21 + 1);
        LOBYTE(v23) = a7;
        g_hrNoHardwareDeviceOverride = SwapChainCreationError;
        width = a3->width;
        height = a3->height;
        v75 = v21;
        v80 = v21;
        v67 = height;
        v25 = v86 >> 8;
        v68 = v84;
        LOBYTE(v25) = v22 & BYTE1(v86);
        v70 = v85;
        v69 = v20;
        v71 = 0;
        v72 = v22;
        SwapchainBufferUsage = CD3DDevice::GetSwapchainBufferUsage(this, v23, v25, v20, 0x40u);
        v27 = v61;
        v73 = SwapchainBufferUsage;
        v74 = a6;
        lpVtbl = a2->lpVtbl;
        v78 = v22;
        v79 = v22;
        v76 = 0LL;
        GetParent = lpVtbl->GetParent;
        v77 = 0;
        v61 = 0LL;
        if ( v27 )
          (*(void (__fastcall **)(__int64 *))(*v27 + 16))(v27);
        v30 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 **))GetParent)(
                a2,
                &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
                &v61);
        v57 = v30;
        if ( v30 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18038F3B8, 3u, v30, 0x14Bu, 0LL);
        }
        else
        {
          v31 = v60;
          v32 = v61;
          v33 = *v61;
          v60 = 0LL;
          v34 = *(__int64 (__fastcall **)(__int64 *, GUID *, __int64 **))(v33 + 48);
          if ( v31 )
            (*(void (__fastcall **)(__int64 *))(*v31 + 16))(v31);
          v35 = v34(v32, &GUID_713f394e_92ca_47e7_ab81_1159c2791e54, &v60);
          v57 = v35;
          if ( v35 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18038F3B8, 3u, v35, 0x14Cu, 0LL);
          }
          else
          {
            v36 = v59;
            v37 = v60;
            v38 = *v60;
            v59 = 0LL;
            v39 = *(__int64 (__fastcall **)(__int64 *, _QWORD, UINT32 *, struct IDXGIOutput *, __int64 *))(v38 + 24);
            if ( v36 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
            v40 = v39(v37, *((_QWORD *)this + 69), &width, a2, &v59);
            v57 = v40;
            if ( v40 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18038F3B8, 3u, v40, 0x152u, 0LL);
            }
            else
            {
              wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v58);
              v41 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v59)(
                      v59,
                      &GUID_fc4f7700_8c88_43fb_aa4f_44c4a584dc19,
                      &v58);
              v57 = v41;
              if ( v41 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18038F3B8, 3u, v41, 0x154u, 0LL);
              }
              else
              {
                if ( (v73 & 0x400) == 0 )
                  goto LABEL_28;
                if ( *((int *)this + 155) < 2600 )
                {
                  v13 = 2;
LABEL_28:
                  v42 = CLegacySwapChain::Create(
                          (__int64)this,
                          (const struct DXGI_OUTPUT_DWM_DESC *)v81,
                          v58,
                          (__int64)a4,
                          (__int64)v65,
                          v13,
                          (__int64 *)a8);
                  v57 = v42;
                  if ( v42 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18038F3B8, 3u, v42, 0x175u, 0LL);
                  goto LABEL_34;
                }
                if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v58 + 264LL))(v58) == 2 )
                {
                  v13 = 1;
                  goto LABEL_28;
                }
                v57 = -2003304306;
                MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18038F3B8, 3u, -2003304306, 0x164u, 0LL);
              }
            }
          }
        }
LABEL_34:
        CFailFastError::~CFailFastError((CFailFastError *)&v63);
        goto LABEL_54;
      }
      v43 = *a4;
      LOBYTE(v17) = a7;
      width = a3->width;
      v44 = a3->height;
      v75 = 0;
      v80 = 0;
      v67 = v44;
      v45 = v86 >> 8;
      v68 = v84;
      LOBYTE(v45) = BYTE1(v86) & 1;
      v69 = v43;
      v70 = v85;
      v71 = 0;
      v72 = 1LL;
      v73 = CD3DDevice::GetSwapchainBufferUsage(this, v17, v45, v43, 0x40u);
      v74 = a6;
      v46 = a2->lpVtbl;
      v78 = 1;
      v79 = 1;
      v76 = 0LL;
      v47 = v46->GetParent;
      v77 = 0;
      v61 = 0LL;
      v48 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 **))v47)(
              a2,
              &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
              &v61);
      v57 = v48;
      if ( v48 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18038F3B8, 3u, v48, 0x18Eu, 0LL);
      }
      else
      {
        v49 = *v61;
        v60 = 0LL;
        v50 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 **))(v49 + 48))(
                v61,
                &GUID_713f394e_92ca_47e7_ab81_1159c2791e54,
                &v60);
        v57 = v50;
        if ( v50 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18038F3B8, 3u, v50, 0x18Fu, 0LL);
        }
        else
        {
          v51 = *v60;
          v59 = 0LL;
          v52 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, UINT32 *, struct IDXGIOutput *, __int64 *))(v51 + 24))(
                  v60,
                  *((_QWORD *)this + 69),
                  &width,
                  a2,
                  &v59);
          v57 = v52;
          if ( v52 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18038F3B8, 3u, v52, 0x195u, 0LL);
          }
          else
          {
            wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v58);
            v53 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v59)(
                    v59,
                    &GUID_fc4f7700_8c88_43fb_aa4f_44c4a584dc19,
                    &v58);
            v57 = v53;
            if ( v53 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18038F3B8, 3u, v53, 0x197u, 0LL);
            }
            else
            {
              if ( (v73 & 0x400) != 0 )
              {
                if ( *((int *)this + 155) < 2600 )
                {
                  v13 = 2;
                }
                else
                {
                  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v58 + 264LL))(v58) != 2 )
                  {
                    v57 = -2003304306;
                    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18038F3B8, 3u, -2003304306, 0x1A7u, 0LL);
                    goto LABEL_54;
                  }
                  v13 = 1;
                }
              }
              v54 = CLegacySwapChain::Create(
                      (__int64)this,
                      (const struct DXGI_OUTPUT_DWM_DESC *)v81,
                      v58,
                      (__int64)a4,
                      (__int64)v65,
                      v13,
                      (__int64 *)a8);
              v57 = v54;
              if ( v54 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18038F3B8, 3u, v54, 0x1B8u, 0LL);
            }
          }
        }
      }
    }
    else
    {
      v57 = -2003304442;
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18038F3B8, 3u, -2003304442, 0x11Au, 0LL);
    }
  }
LABEL_54:
  v55 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v57, 2u);
  v57 = v55;
  if ( v58 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
  if ( v59 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
  if ( v60 )
    (*(void (__fastcall **)(__int64 *))(*v60 + 16))(v60);
  if ( v61 )
    (*(void (__fastcall **)(__int64 *))(*v61 + 16))(v61);
  if ( v62 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
  return v55;
}
