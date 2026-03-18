/*
 * XREFs of ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x14020C720
 * Callers:
 *     DxgkDdiCreateVirtualGpu @ 0x14020FA0C (DxgkDdiCreateVirtualGpu.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@34444@Z @ 0x140004144 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapBuffer@U_UNICODE_STR.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x14003E6D0 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x14004CD50 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140066C98 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140066F1C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     DxgpEnableIommuFromReference @ 0x14019D504 (DxgpEnableIommuFromReference.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x14020D384 (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x14034CE14 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 *     ?GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z @ 0x1403CBAC8 (-GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateVirtualGpu(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned __int8 a4,
        char a5,
        char a6,
        __int64 a7)
{
  __int64 v7; // r12
  _DWORD *v8; // rsi
  int v11; // r13d
  __int64 *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r15
  unsigned __int8 v16; // dl
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rbx
  __int64 v25; // rcx
  struct _EPROCESS *v26; // [rsp+28h] [rbp-B1h]
  __int64 v27; // [rsp+30h] [rbp-A9h]
  __int64 v28; // [rsp+38h] [rbp-A1h]
  __int64 v29; // [rsp+40h] [rbp-99h]
  __int64 v30; // [rsp+80h] [rbp-59h]
  int v31; // [rsp+88h] [rbp-51h] BYREF
  int v32; // [rsp+8Ch] [rbp-4Dh] BYREF
  int v33; // [rsp+90h] [rbp-49h] BYREF
  int v34; // [rsp+94h] [rbp-45h] BYREF
  int v35; // [rsp+98h] [rbp-41h] BYREF
  int v36; // [rsp+9Ch] [rbp-3Dh] BYREF
  unsigned int v37; // [rsp+A0h] [rbp-39h] BYREF
  struct DXGPROCESS *Current; // [rsp+A8h] [rbp-31h] BYREF
  __int64 VirtualGpuManager; // [rsp+B0h] [rbp-29h]
  __int64 v40; // [rsp+B8h] [rbp-21h] BYREF
  unsigned __int16 *v41; // [rsp+C0h] [rbp-19h] BYREF
  __int64 v42; // [rsp+C8h] [rbp-11h] BYREF
  __int64 v43; // [rsp+D0h] [rbp-9h] BYREF
  char v44; // [rsp+D8h] [rbp-1h]

  LOBYTE(v7) = a4;
  v8 = a3;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
    McTemplateK0pqtqq_EtwWriteTransfer(a1, &CreateVirtualGpuStart, (__int64)a3, *(_QWORD *)(a1 + 16), *a3, a4, 0);
  v11 = 0;
  v12 = (__int64 *)(a1 + 16);
  LODWORD(v15) = ADAPTER_RENDER::EnsureVirtualGpuProcess((ADAPTER_RENDER *)a1);
  if ( (int)v15 < 0 )
  {
    v11 = 8;
    goto LABEL_22;
  }
  if ( (**(_DWORD **)(*v12 + 3008) & 0x200) != 0 && (_BYTE)v7 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1948;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"CreateVirtualGpu failed due to blocklist disallowing paravirtualization for a high security scenario",
      1948LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v15) = -1073741823;
    v11 = 1;
    goto LABEL_22;
  }
  v16 = 1;
  if ( !g_ForceSecureVirtualMachine )
    v16 = v7;
  v7 = v16;
  VirtualGpuManager = ADAPTER_RENDER::GetVirtualGpuManager(a1, a2);
  if ( !VirtualGpuManager )
  {
    v11 = 2;
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1962;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Creating a paravirtualzed GPU without setting partition count",
      1962LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v15) = -1073741811;
    goto LABEL_22;
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    LODWORD(v15) = DXGPROCESS::CreateDxgProcess(&Current, 0LL, 0LL, 0, 0LL);
    if ( (int)v15 < 0 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 1978;
      v11 = 3;
      goto LABEL_22;
    }
  }
  if ( a2 == 1 )
  {
    if ( !(_BYTE)v7 )
      goto LABEL_20;
    if ( *(int *)(*v12 + 2736) < 9217 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1994;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"The driver model does not support secure virtual GPU",
        1994LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v15) = -1073741637;
      v11 = 4;
      goto LABEL_22;
    }
    if ( *(_DWORD *)(*v12 + 420) == 1297040209 )
      goto LABEL_20;
    goto LABEL_36;
  }
  if ( !a2 )
  {
    v30 = (unsigned int)Feature_IoMmuIsolationForGPUP__private_featureState;
    if ( (Feature_IoMmuIsolationForGPUP__private_featureState & 0x10) == 0 )
    {
      LODWORD(v30) = Feature_IoMmuIsolationForGPUP__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_IoMmuIsolationForGPUP__private_descriptor,
        v30,
        3LL);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v30,
        3,
        (__int64)&Feature_IoMmuIsolationForGPUP__private_descriptor);
    }
LABEL_36:
    v22 = *v12;
    if ( (*(_DWORD *)(*v12 + 2468) & 0x800) != 0 )
    {
      v24 = *(_QWORD *)(v22 + 224);
      DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
        (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v43,
        (struct DXGPUSHLOCKFAST *)(a1 + 1840));
      v15 = (int)DxgpEnableIommuFromReference(v24, 4LL, (__int64 *)(a1 + 1824));
      if ( v44 )
      {
        v25 = v43;
        *(_QWORD *)(v43 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v25, 0LL);
        KeLeaveCriticalRegion();
        v44 = 0;
      }
      if ( (int)v15 < 0 )
      {
        WdLogSingleEntry3(2LL, (int)a2, v7, v15);
        WdLogGlobalForLineNumber = 2045;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to enable IoMmu for virtual GPU. VirtualGpuType=%u, Secure=%u. Status=0x%.8x",
          (int)a2,
          v7,
          v15,
          0LL,
          0LL);
        v8 = a3;
        v11 = 6;
        goto LABEL_22;
      }
    }
    else if ( (*(_DWORD *)(v22 + 3060) & 8) == 0 )
    {
      v23 = *(_DWORD *)(v22 + 444);
      if ( (v23 & 8) == 0 && (v23 & 4) == 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 2032;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"The driver does not support IOMMU isolation and does not bypass this requirement for secure mode",
          2032LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v15) = -1073741637;
        v11 = 5;
        goto LABEL_22;
      }
    }
  }
LABEL_20:
  LOBYTE(v17) = v7;
  LOBYTE(v18) = a5;
  LOBYTE(v26) = a6;
  LODWORD(v15) = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64, _DWORD, __int64))(*(_QWORD *)VirtualGpuManager
                                                                                                 + 16LL))(
                   VirtualGpuManager,
                   v8,
                   v17,
                   v18,
                   (_DWORD)v26,
                   a7);
  if ( (int)v15 < 0 )
    v11 = 7;
LABEL_22:
  if ( (unsigned int)dword_14015E650 > 5 && tlgKeywordOn((__int64)&dword_14015E650, 0x400000008000LL) )
  {
    v20 = *v12;
    v35 = v15;
    v36 = v11;
    v42 = 0x2000000LL;
    v31 = *(_DWORD *)(v20 + 432);
    v32 = *(_DWORD *)(v20 + 428);
    v33 = *(_DWORD *)(v20 + 424);
    v34 = *(_DWORD *)(v20 + 420);
    v40 = *(_QWORD *)(v20 + 412);
    v41 = *(unsigned __int16 **)(v20 + 1928);
    v37 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v20,
      (__int64)&unk_14013E672,
      v14,
      v19,
      (__int64)&v42,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      &v41,
      (__int64)&v40,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31);
  }
  if ( bTracingEnabled )
  {
    if ( (int)v15 < 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
    {
      LODWORD(v29) = v11;
      LODWORD(v28) = v15;
      LODWORD(v27) = (unsigned __int8)v7;
      LODWORD(v26) = *v8;
      McTemplateK0pqtqq_EtwWriteTransfer(v13, &CreateVirtualGpuFailed, v14, *v12, v26, v27, v28, v29);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
    {
      LODWORD(v29) = v11;
      LODWORD(v28) = v15;
      LODWORD(v27) = (unsigned __int8)v7;
      LODWORD(v26) = *v8;
      McTemplateK0pqtqq_EtwWriteTransfer(v13, &CreateVirtualGpuEnd, v14, *v12, v26, v27, v28, v29);
    }
  }
  return (unsigned int)v15;
}
