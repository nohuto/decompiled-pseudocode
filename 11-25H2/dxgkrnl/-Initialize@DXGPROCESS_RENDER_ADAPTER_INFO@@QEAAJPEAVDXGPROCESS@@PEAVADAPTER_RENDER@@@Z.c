/*
 * XREFs of ?Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1403B8AE0
 * Callers:
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x14037DFF0 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z @ 0x14002EEB0 (-IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x14002EF80 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     ?IsGpuVaIoMmuSupported@DXGADAPTER@@QEBAEXZ @ 0x1400409AC (-IsGpuVaIoMmuSupported@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsGpuVaIoMmuGlobalSupported@DXGADAPTER@@QEBAEXZ @ 0x1400409DC (-IsGpuVaIoMmuGlobalSupported@DXGADAPTER@@QEBAEXZ.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x1400577CC (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?InitializeForHardware@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1401E73CC (-InitializeForHardware@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z @ 0x1403B8F84 (-DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z.c)
 *     ?CloseVidMmAdapter@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1403B920C (-CloseVidMmAdapter@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ @ 0x1403B924C (-Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ.c)
 *     ?Allocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJI@Z @ 0x1403B9324 (-Allocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGPROCESS_RENDER_ADAPTER_INFO::Initialize(
        DXGPROCESS_RENDER_ADAPTER_INFO *this,
        struct DXGPROCESS *a2,
        struct ADAPTER_RENDER *a3)
{
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // r14
  UINT v9; // edi
  int v10; // eax
  char v11; // cl
  void *v12; // rax
  char IsVmProcessOrVmValidation; // al
  int v14; // r8d
  int v15; // eax
  int v17; // eax
  unsigned int v18; // edx
  __int64 i; // r8
  __int64 v20; // rcx
  const wchar_t *v21; // r9
  int v22; // edx
  int v23; // eax
  void *v24; // rcx
  __int64 v25; // [rsp+20h] [rbp-89h]
  __int64 v26; // [rsp+20h] [rbp-89h]
  __int64 v27; // [rsp+28h] [rbp-81h]
  _DXGKARG_CREATEPROCESS v28; // [rsp+50h] [rbp-59h] BYREF
  __int128 v29; // [rsp+90h] [rbp-19h]
  __int128 v30; // [rsp+A0h] [rbp-9h]
  __int128 v31; // [rsp+B0h] [rbp+7h]

  LODWORD(v6) = 0;
  if ( !*((_BYTE *)this + 109) )
  {
    if ( !*(_BYTE *)(*((_QWORD *)a3 + 2) + 209LL) )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)a3 + 95) + 8LL) + 1120LL))(*((_QWORD *)a3 + 96));
      v6 = v7;
      if ( v7 < 0 )
      {
        WdLogSingleEntry2(2LL, *((_QWORD *)a3 + 2), v7);
        v26 = *((_QWORD *)a3 + 2);
        WdLogGlobalForLineNumber = 2355;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to open vidmm process adapter info for adapter 0x%I64x. Status: 0x%I64x",
          v26,
          v6,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v6;
      }
      *((_BYTE *)this + 108) = 1;
    }
    v8 = *((_QWORD *)a3 + 2);
    v9 = *(_DWORD *)(v8 + 296);
    if ( (*(_DWORD *)(v8 + 2468) & 0x80u) == 0 && !DXGADAPTER::IsGpuVaIoMmuSupported(*((DXGADAPTER **)a3 + 2)) )
    {
LABEL_7:
      v10 = *(_DWORD *)(v8 + 2468);
      if ( (v10 & 0x80u) != 0
        || (v10 & 0x40) != 0
        || DXGADAPTER::IsGpuVaIoMmuSupported((DXGADAPTER *)v8)
        || DXGADAPTER::IsGpuVaIoMmuGlobalSupported((DXGADAPTER *)v8) )
      {
        v11 = *((_BYTE *)a2 + 408);
        v12 = (void *)*((_QWORD *)a2 + 8);
        memset(&v28.hKmdProcess, 0, 48);
        v28.hDxgkProcess = v12;
        v28.Flags.Value = _mm_cvtsi128_si32((__m128i)0LL) & 0xFFFFFFFC | (*((_DWORD *)a2 + 102) >> 1) & 1 | (2 * (v11 & 1));
        IsVmProcessOrVmValidation = DXGPROCESS::IsVmProcessOrVmValidation(a2, (struct DXGADAPTER *)v8);
        v14 = *((_DWORD *)a2 + 102) >> 8;
        v28.Flags.Value = v28.Flags.Value & 0xFFFFFFF3 | (4
                                                        * (IsVmProcessOrVmValidation & 1 | (2
                                                                                          * ((*((_DWORD *)a2 + 102) & 0x80) != 0))));
        if ( (v14 & 1) != 0 )
        {
          v24 = (void *)*((_QWORD *)DXGPROCESS::GetRenderAdapterInfo(*((DXGPROCESS **)a2 + 74), *(_DWORD *)(v8 + 240))
                        + 6);
          v28.pProcessName = (WCHAR *)*((_QWORD *)a2 + 78);
          v28.ProcessNameLength = *((_DWORD *)a2 + 158);
          v28.hKmdVmWorkerProcess = v24;
        }
        v28.pPasid = (ULONG *)*((_QWORD *)this + 3);
        v15 = *((_DWORD *)a2 + 102) >> 9;
        v28.NumPasid = v9;
        v29 = 0LL;
        v30 = 0LL;
        v31 = 0LL;
        if ( (v15 & 1) != 0 )
        {
          if ( !*(_BYTE *)(v8 + 3058) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2436;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"pAdapter->AllowInSessionIsolatedContainer()",
              2436LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v28.Flags.Value |= 0x10u;
        }
        LODWORD(v6) = ADAPTER_RENDER::DdiCreateProcess(a3, &v28);
        if ( (int)v6 < 0 )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 2453;
          goto LABEL_19;
        }
        *((_QWORD *)this + 6) = v28.hKmdProcess;
      }
      *((_BYTE *)this + 109) = 1;
      if ( (int)v6 >= 0 )
        return (unsigned int)v6;
LABEL_19:
      DXGPROCESS_RENDER_ADAPTER_INFO::CloseVidMmAdapter(this, a2, a3);
      DXGPROCESS_ADAPTER_INFO_PASID_DATA::Deallocate(this);
      return (unsigned int)v6;
    }
    LODWORD(v6) = DXGPROCESS_ADAPTER_INFO_PASID_DATA::Allocate(this, v9);
    if ( (int)v6 < 0 )
    {
      WdLogSingleEntry0(6LL);
      v21 = L"Failed to allocate Pasid array";
      v22 = 262145;
      v27 = 0LL;
      v25 = 2369LL;
      WdLogGlobalForLineNumber = 2369;
LABEL_27:
      DxgkLogInternalTriageEvent(0LL, v22, 0xFFFFFFFFLL, v21, v25, v27, 0LL, 0LL, 0LL);
      goto LABEL_19;
    }
    v17 = *(_DWORD *)(v8 + 444);
    if ( (v17 & 8) != 0 || (v17 & 4) != 0 || (v17 & 0x10) != 0 || (*((_DWORD *)a2 + 102) & 0x80) != 0 )
    {
      v18 = 0;
      for ( i = *(_QWORD *)(*((_QWORD *)a2 + 8) + 80LL);
            v18 < *((_DWORD *)this + 4);
            *(_DWORD *)(*((_QWORD *)this + 3) + 4 * v20) = i )
      {
        v20 = v18++;
      }
      goto LABEL_7;
    }
    if ( DXGADAPTER::IsGpuVaIoMmuSupported((DXGADAPTER *)v8) )
    {
      if ( !SmmUseIommuV3Interface() )
      {
        LODWORD(v6) = -1073741811;
LABEL_35:
        WdLogSingleEntry1(2LL, (int)v6);
        v21 = L"Failed to create Pasid domain: 0x%I64x";
        v27 = 0LL;
        v25 = (int)v6;
        WdLogGlobalForLineNumber = 2390;
LABEL_36:
        v22 = 0x40000;
        goto LABEL_27;
      }
      LODWORD(v6) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))qword_14015E520)(3LL, 0LL, 0LL);
      if ( (int)v6 < 0 )
        goto LABEL_35;
    }
    v23 = DXGPROCESS_ADAPTER_INFO_PASID_DATA::InitializeForHardware(this, (struct DXGADAPTER *)v8);
    v6 = v23;
    if ( v23 >= 0 )
      goto LABEL_7;
    WdLogSingleEntry2(2LL, v8, v23);
    v21 = L"Failed to initialize PASIDs for the adapter 0x%I64x. Status: 0x%I64x";
    v27 = v6;
    v25 = v8;
    WdLogGlobalForLineNumber = 2397;
    goto LABEL_36;
  }
  return (unsigned int)v6;
}
