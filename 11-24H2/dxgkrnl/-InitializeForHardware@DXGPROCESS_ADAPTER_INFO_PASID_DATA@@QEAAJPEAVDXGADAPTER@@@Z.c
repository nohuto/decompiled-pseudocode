/*
 * XREFs of ?InitializeForHardware@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1401ECDC8
 * Callers:
 *     ?Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1403ACC00 (-Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x140056FDC (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?SysMmDestroyPasidDevice@@YAJPEAU_IOMMU_DMA_PASID_DEVICE@@@Z @ 0x1402862C4 (-SysMmDestroyPasidDevice@@YAJPEAU_IOMMU_DMA_PASID_DEVICE@@@Z.c)
 */

__int64 __fastcall DXGPROCESS_ADAPTER_INFO_PASID_DATA::InitializeForHardware(
        DXGPROCESS_ADAPTER_INFO_PASID_DATA *this,
        struct DXGADAPTER *a2)
{
  __int64 i; // r14
  __int64 v5; // rdi
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // r12
  int v9; // edi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 4); i = (unsigned int)(i + 1) )
  {
    v5 = 4 * i;
    v6 = *((_QWORD *)a2 + 374) + 344LL * (unsigned int)i;
    if ( (*(_DWORD *)(v6 + 16) & 1) != 0 )
    {
      v7 = ExShareAddressSpaceWithDevice(
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 64LL) + 152LL),
             v5 + *((_QWORD *)this + 3));
      v8 = v7;
      if ( v7 < 0 )
      {
        WdLogSingleEntry2(2LL, a2, v7);
        WdLogGlobalForLineNumber = 6643;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to get PASID for the adapter 0x%I64x. Status: 0x%I64x",
          (__int64)a2,
          v8,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v8;
      }
    }
    if ( (*(_DWORD *)(v6 + 16) & 0x40) != 0 )
    {
      if ( !SmmUseIommuV3Interface() )
      {
        v9 = -1073741811;
LABEL_15:
        WdLogSingleEntry2(2LL, a2, v9);
        WdLogGlobalForLineNumber = 6652;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to create Pasid device for adapter 0x%I64x. Status: 0x%I64x",
          (__int64)a2,
          v9,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v9;
      }
      v9 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))qword_1401615E0)(
             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 28) + 392LL) + 24 * i),
             *((_QWORD *)this + 4) + 8 * i,
             v5 + *((_QWORD *)this + 3));
      if ( v9 < 0 )
        goto LABEL_15;
      if ( !SmmUseIommuV3Interface() )
      {
        v9 = -1073741811;
LABEL_13:
        WdLogSingleEntry2(2LL, a2, v9);
        WdLogGlobalForLineNumber = 6658;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to attach Pasid device for adapter 0x%I64x. Status: 0x%I64x",
          (__int64)a2,
          v9,
          0LL,
          0LL,
          0LL);
        SysMmDestroyPasidDevice(*(struct _IOMMU_DMA_PASID_DEVICE **)(*((_QWORD *)this + 4) + 8 * i));
        *(_QWORD *)(*((_QWORD *)this + 4) + 8 * i) = 0LL;
        return (unsigned int)v9;
      }
      v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1401615F0)(
             *((_QWORD *)this + 5),
             *(_QWORD *)(*((_QWORD *)this + 4) + 8 * i));
      if ( v9 < 0 )
        goto LABEL_13;
    }
  }
  return 0LL;
}
