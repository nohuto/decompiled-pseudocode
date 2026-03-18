/*
 * XREFs of ?ConfigureSysMm@ADAPTER_RENDER@@QEAAJPEATSYSMM_IOMMU_STATE@@@Z @ 0x14019BFA4
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x14019D8EC (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PHYSICAL_MEMORY_RANGE@@$01@@QEAAPEAU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z @ 0x14019BE04 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PHYSICAL_MEMORY_RANGE@@$01@@QEAAPEAU_DXGK_PHYSIC.c)
 *     ?SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2PEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IW4SYSMM_LEGACY_IOMMU_FLAGS_MODE@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x1402862F0 (-SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2PEBU_DXGK_PHYSICAL_MEMOR.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x14035DC70 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::ConfigureSysMm(ADAPTER_RENDER *this, union SYSMM_IOMMU_STATE *a2)
{
  DXGADAPTER *v2; // r8
  int v5; // r9d
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rdi
  __int64 Elements; // rax
  DXGADAPTER *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // r8
  int v16; // eax
  unsigned int v17; // ebx
  _QWORD *v18; // rcx
  __int128 v19; // [rsp+50h] [rbp-49h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v20; // [rsp+60h] [rbp-39h] BYREF
  PVOID P; // [rsp+90h] [rbp-9h] BYREF
  _BYTE v22[32]; // [rsp+98h] [rbp-1h] BYREF
  int v23; // [rsp+B8h] [rbp+1Fh]

  v2 = (DXGADAPTER *)*((_QWORD *)this + 2);
  P = 0LL;
  v23 = 0;
  v5 = *((_DWORD *)v2 + 617);
  v6 = *((_DWORD *)v2 + 765);
  if ( (v5 & 0x800) != 0 && (v6 & 1) != 0 )
    v7 = 2 - ((v6 & 0x10) != 0);
  else
    v7 = 0;
  if ( (v5 & 0x800) != 0 )
  {
    *(_QWORD *)&v20.Type = 22LL;
    *(_QWORD *)&v20.InputDataSize = 0LL;
    v20.pOutputData = &v19;
    *(_QWORD *)&v20.Flags.0 = 0LL;
    v19 = 0LL;
    HIDWORD(v20.hKmdProcessHandle) = 0;
    v20.pInputData = 0LL;
    v20.OutputDataSize = 16;
    v8 = DXGADAPTER::DdiQueryAdapterInfo(v2, &v20);
    v9 = v8;
    if ( v8 < 0 )
    {
      WdLogSingleEntry1(2LL, v8);
      WdLogGlobalForLineNumber = 4524;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to query number of hardware reserved ranges. Status 0x%I64x",
        v9,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_10:
      if ( P != v22 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
      }
      return (unsigned int)v9;
    }
    if ( (_DWORD)v19 )
    {
      Elements = PagedPoolZeroedArray<_DXGK_PHYSICAL_MEMORY_RANGE,2>::AllocateElements((__int64 *)&P, v19);
      if ( !Elements )
      {
        WdLogSingleEntry1(2LL, (unsigned int)v19);
        WdLogGlobalForLineNumber = 4534;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to allocate array for hardware reserved ranges. ArraySize=%u",
          (unsigned int)v19,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_10;
      }
      v12 = (DXGADAPTER *)*((_QWORD *)this + 2);
      *((_QWORD *)&v19 + 1) = Elements;
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v12, &v20) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4540;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NT_SUCCESS(Status)", 4540LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v13 = *((_QWORD *)this + 2);
  v14 = *(_DWORD *)(v13 + 2468) >> 13;
  v15 = *(_DWORD *)(v13 + 2468) >> 11;
  LOBYTE(v14) = (*(_DWORD *)(v13 + 2468) & 0x2000) != 0;
  LOBYTE(v15) = (*(_DWORD *)(v13 + 2468) & 0x800) != 0;
  v16 = SysMmFinalizeInitialization(*(_QWORD *)(v13 + 224), *(_QWORD *)(v13 + 2400), v15, v14, P, v23, v7, a2);
  v17 = v16;
  if ( v16 >= 0 )
  {
    v18 = *(_QWORD **)(*((_QWORD *)this + 2) + 224LL);
    v18[40] = ADAPTER_RENDER::IommuOnEnable;
    v18[41] = ADAPTER_RENDER::IommuOnDisable;
    v18[42] = ADAPTER_RENDER::IommuBeginExclusiveAccess;
    v18[43] = ADAPTER_RENDER::IommuEndExclusiveAccess;
    v18[44] = ADAPTER_RENDER::IommuReserveGpuVa;
    v18[45] = ADAPTER_RENDER::IommuFreeGpuVa;
    v18[46] = this;
    if ( P != v22 && P )
      ExFreePoolWithTag(P, 0);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(3LL, v16);
    WdLogGlobalForLineNumber = 4564;
    if ( P != v22 && P )
      ExFreePoolWithTag(P, 0);
    return v17;
  }
}
