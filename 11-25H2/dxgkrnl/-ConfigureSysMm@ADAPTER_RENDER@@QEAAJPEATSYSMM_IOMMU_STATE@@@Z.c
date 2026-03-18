/*
 * XREFs of ?ConfigureSysMm@ADAPTER_RENDER@@QEAAJPEATSYSMM_IOMMU_STATE@@@Z @ 0x140199AB4
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x14019B49C (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PHYSICAL_MEMORY_RANGE@@$01@@QEAAPEAU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z @ 0x140199914 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PHYSICAL_MEMORY_RANGE@@$01@@QEAAPEAU_DXGK_PHYSIC.c)
 *     ?SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2PEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IW4SYSMM_LEGACY_IOMMU_FLAGS_MODE@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x14027EF80 (-SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2PEBU_DXGK_PHYSICAL_MEMOR.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1403707B8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::ConfigureSysMm(ADAPTER_RENDER *this, union SYSMM_IOMMU_STATE *a2)
{
  DXGADAPTER *v2; // r8
  int v5; // r9d
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 Elements; // rax
  DXGADAPTER *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // r8
  int v18; // eax
  unsigned int v19; // ebx
  _QWORD *v20; // rcx
  __int128 v21; // [rsp+50h] [rbp-49h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v22; // [rsp+60h] [rbp-39h] BYREF
  PVOID P; // [rsp+90h] [rbp-9h] BYREF
  _BYTE v24[32]; // [rsp+98h] [rbp-1h] BYREF
  int v25; // [rsp+B8h] [rbp+1Fh]

  v2 = (DXGADAPTER *)*((_QWORD *)this + 2);
  P = 0LL;
  v25 = 0;
  v5 = *((_DWORD *)v2 + 617);
  v6 = *((_DWORD *)v2 + 765);
  if ( (v5 & 0x800) != 0 && (v6 & 1) != 0 )
    v7 = 2 - ((v6 & 0x10) != 0);
  else
    v7 = 0;
  if ( (v5 & 0x800) != 0 )
  {
    *(_QWORD *)&v22.Type = 22LL;
    *(_QWORD *)&v22.InputDataSize = 0LL;
    v22.pOutputData = &v21;
    *(_QWORD *)&v22.Flags.0 = 0LL;
    v21 = 0LL;
    HIDWORD(v22.hKmdProcessHandle) = 0;
    v22.pInputData = 0LL;
    v22.OutputDataSize = 16;
    v8 = DXGADAPTER::DdiQueryAdapterInfo(v2, &v22);
    v11 = v8;
    if ( v8 < 0 )
    {
      WdLogSingleEntry1(2LL, v8);
      WdLogGlobalForLineNumber = 4525;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to query number of hardware reserved ranges. Status 0x%I64x",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_10:
      if ( P != v24 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
      }
      return (unsigned int)v11;
    }
    if ( (_DWORD)v21 )
    {
      Elements = PagedPoolZeroedArray<_DXGK_PHYSICAL_MEMORY_RANGE,2>::AllocateElements((__int64 *)&P, v21, v9, v10);
      if ( !Elements )
      {
        WdLogSingleEntry1(2LL, (unsigned int)v21);
        WdLogGlobalForLineNumber = 4535;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to allocate array for hardware reserved ranges. ArraySize=%u",
          (unsigned int)v21,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_10;
      }
      v14 = (DXGADAPTER *)*((_QWORD *)this + 2);
      *((_QWORD *)&v21 + 1) = Elements;
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v14, &v22) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4541;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NT_SUCCESS(Status)", 4541LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v15 = *((_QWORD *)this + 2);
  v16 = *(_DWORD *)(v15 + 2468) >> 13;
  v17 = *(_DWORD *)(v15 + 2468) >> 11;
  LOBYTE(v16) = (*(_DWORD *)(v15 + 2468) & 0x2000) != 0;
  LOBYTE(v17) = (*(_DWORD *)(v15 + 2468) & 0x800) != 0;
  v18 = SysMmFinalizeInitialization(*(_QWORD *)(v15 + 224), *(_QWORD *)(v15 + 2400), v17, v16, P, v25, v7, a2);
  v19 = v18;
  if ( v18 >= 0 )
  {
    v20 = *(_QWORD **)(*((_QWORD *)this + 2) + 224LL);
    v20[40] = ADAPTER_RENDER::IommuOnEnable;
    v20[41] = ADAPTER_RENDER::IommuOnDisable;
    v20[42] = ADAPTER_RENDER::IommuBeginExclusiveAccess;
    v20[43] = ADAPTER_RENDER::IommuEndExclusiveAccess;
    v20[44] = ADAPTER_RENDER::IommuReserveGpuVa;
    v20[45] = ADAPTER_RENDER::IommuFreeGpuVa;
    v20[46] = this;
    if ( P != v24 && P )
      ExFreePoolWithTag(P, 0);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(3LL, v18);
    WdLogGlobalForLineNumber = 4565;
    if ( P != v24 && P )
      ExFreePoolWithTag(P, 0);
    return v19;
  }
}
