/*
 * XREFs of ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x1801A523C
 * Callers:
 *     ?ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x180028518 (-ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z.c)
 *     ?ProcessSurfaceUpdate@CGlobalCompositionSurfaceInfo@@UEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x180028760 (-ProcessSurfaceUpdate@CGlobalCompositionSurfaceInfo@@UEAAJAEBUCSM_SURFACE_UPDATE_@@@Z.c)
 * Callees:
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x180026F44 (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180157FC8 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?attach@?$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIDisplayTarget@Core@Display@Devices@Windows@@@Z @ 0x180189728 (-attach@-$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@I@Z @ 0x1801A5624 (-CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRI.c)
 *     ?EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEBG@Z @ 0x1801A6274 (-EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEBG@Z.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x1801A6D58 (McTemplateU0xx_EventWriteTransfer.c)
 *     ?Create@CFlipExSwapchainStatistics@@SAJPEBVCGlobalCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x1801A6DD0 (-Create@CFlipExSwapchainStatistics@@SAJPEBVCGlobalCompositionSurfaceInfo@@PEAPEAV1@@Z.c)
 *     ?Create@CCompositionSwapchainStatistics@@SAJPEBVCCompositionSurfaceInfo@@PEAX_KPEAPEAV1@@Z @ 0x1801A6E50 (-Create@CCompositionSwapchainStatistics@@SAJPEBVCCompositionSurfaceInfo@@PEAX_KPEAPEAV1@@Z.c)
 *     ?CheckBufferHomogeneity@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ @ 0x1801A704C (-CheckBufferHomogeneity@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ.c)
 *     McTemplateU0qqt_EventWriteTransfer @ 0x180218F8C (McTemplateU0qqt_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ?CreateAndAddSingleBuffer@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@@Z @ 0x180291358 (-CreateAndAddSingleBuffer@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::Initialize(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        __int64 a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  _DWORD *v8; // r14
  int v9; // r8d
  int v10; // r8d
  unsigned int v11; // r8d
  int v12; // eax
  const struct CGlobalCompositionSurfaceInfo *v14; // rcx
  int v15; // eax
  char *v16; // rbx
  const struct CCompositionSurfaceInfo *v17; // rcx
  int v18; // eax
  struct CFlipExSwapchainStatistics *v19; // rdx
  int v20; // eax
  unsigned int v21; // [rsp+20h] [rbp-E0h]
  struct CFlipExSwapchainStatistics *v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE v24; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v25[4]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v26[144]; // [rsp+60h] [rbp-A0h] BYREF
  char v27[4]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v28; // [rsp+F4h] [rbp-Ch]
  HANDLE hObject; // [rsp+4D8h] [rbp+3D8h]
  unsigned __int64 v30; // [rsp+4E0h] [rbp+3E0h]
  unsigned __int16 v31[64]; // [rsp+4F0h] [rbp+3F0h] BYREF

  v23 = a2;
  v3 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
    McTemplateU0xx_EventWriteTransfer(this, &CompSurfInfo_Binding_Start, *(_QWORD *)(*(_QWORD *)this + 40LL), a2);
  memset_0(v25, 0, 0x520uLL);
  if ( *((_QWORD *)this + 3) )
    CGlobalCompositionSurfaceInfo::CBindInfo::Reset(this, 0);
  v4 = NtQueryCompositionSurfaceBinding(*(_QWORD *)(*(_QWORD *)this + 32LL), &v23, v25);
  if ( v4 < 0 )
  {
    v3 = v4 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032FB98, 4u, v4 | 0x10000000, 0x3BBu, 0LL);
    v8 = (_DWORD *)((char *)this + 32);
    goto LABEL_15;
  }
  v7 = v25[0];
  v8 = (_DWORD *)((char *)this + 32);
  *((_QWORD *)this + 3) = v23;
  *((_DWORD *)this + 8) = v7;
  if ( v7 )
  {
    v9 = v7 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 != 1 )
        {
          v3 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032FB98, 4u, -2147024809, 0x3FFu, 0LL);
          goto LABEL_16;
        }
        v16 = (char *)hObject;
        v17 = *(const struct CCompositionSurfaceInfo **)this;
        v24 = hObject;
        v22 = 0LL;
        v18 = CCompositionSwapchainStatistics::Create(v17, hObject, v30, &v22);
        v3 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032FB98, 4u, v18, 0x3EDu, 0LL);
          if ( v22 )
            (*(void (__fastcall **)(struct CFlipExSwapchainStatistics *))(*(_QWORD *)v22 + 16LL))(v22);
          if ( v16 && v16 != (char *)-1LL )
            CloseHandle(v16);
          goto LABEL_16;
        }
        v19 = v22;
        v22 = 0LL;
        wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayTarget,wil::err_returncode_policy>::attach(
          (__int64 *)this + 2,
          (__int64)v19);
        v20 = CGlobalCompositionSurfaceInfo::CBindInfo::CreateAndAddSwapChainBuffers(
                this,
                (const struct CSM_BUFFER_ATTRIBUTES *)v26,
                v28);
        v3 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032FB98, 4u, v20, 0x3F1u, 0LL);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v24);
          goto LABEL_16;
        }
        CGlobalCompositionSurfaceInfo::CBindInfo::CheckBufferHomogeneity(this);
        CGlobalCompositionSurfaceInfo::CBindInfo::EnsureSwapChainTelemetryInitialized(this, v31);
        if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v16);
        goto LABEL_12;
      }
      v11 = v28;
      if ( v28 > 1 )
      {
        v14 = *(const struct CGlobalCompositionSurfaceInfo **)this;
        v22 = 0LL;
        v15 = CFlipExSwapchainStatistics::Create(v14, &v22);
        v3 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032FB98, 4u, v15, 0x3D7u, 0LL);
          if ( v22 )
            (*(void (__fastcall **)(struct CFlipExSwapchainStatistics *))(*(_QWORD *)v22 + 16LL))(v22);
          goto LABEL_16;
        }
        wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayTarget,wil::err_returncode_policy>::attach(
          (__int64 *)this + 2,
          (__int64)v22);
        v11 = v28;
      }
      v12 = CGlobalCompositionSurfaceInfo::CBindInfo::CreateAndAddSwapChainBuffers(
              this,
              (const struct CSM_BUFFER_ATTRIBUTES *)v26,
              v11);
      v3 = v12;
      if ( v12 >= 0 )
      {
        CGlobalCompositionSurfaceInfo::CBindInfo::EnsureSwapChainTelemetryInitialized(this, v31);
LABEL_12:
        v7 = v25[0];
        goto LABEL_13;
      }
      v21 = 989;
    }
    else
    {
      v12 = CGlobalCompositionSurfaceInfo::CBindInfo::CreateAndAddSingleBuffer(
              this,
              (const struct CSM_BUFFER_ATTRIBUTES *)v26,
              (const struct CSM_SINGLE_BUFFER_INFO *)v27);
      v3 = v12;
      if ( v12 >= 0 )
        goto LABEL_12;
      v21 = 968;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032FB98, 4u, v12, v21, 0LL);
    goto LABEL_16;
  }
LABEL_13:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
    McTemplateU0qqt_EventWriteTransfer(
      v6,
      v5,
      v7,
      (__int64)(*((_QWORD *)this + 10) - *((_QWORD *)this + 9)) >> 3,
      *((_BYTE *)this + 190));
LABEL_15:
  if ( v3 < 0 )
  {
LABEL_16:
    *((_QWORD *)this + 3) = 0LL;
    *v8 = 0;
  }
  return (unsigned int)v3;
}
