/*
 * XREFs of ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x140285BC0
 * Callers:
 *     DpiFdoCreateSysMmAdapter @ 0x14023D2B4 (DpiFdoCreateSysMmAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??$SmmInitializeSpinLock@$00@@YAXPEAU?$SYSMM_SPINLOCK@$00@@@Z @ 0x140094BE0 (--$SmmInitializeSpinLock@$00@@YAXPEAU-$SYSMM_SPINLOCK@$00@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?SmmInitializeIommu@@YAXPEAUSYSMM_IOMMU@@PEBUSYSMM_ADAPTER_CREATE_PARAMS@@@Z @ 0x140284460 (-SmmInitializeIommu@@YAXPEAUSYSMM_IOMMU@@PEBUSYSMM_ADAPTER_CREATE_PARAMS@@@Z.c)
 *     ?SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x140284EFC (-SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x140285294 (-SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 *     SmmCreateHardwareReservedRanges @ 0x1402855C0 (SmmCreateHardwareReservedRanges.c)
 *     SmmInitializeDmaDevices @ 0x140285770 (SmmInitializeDmaDevices.c)
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x140286170 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x140286BC0 (-SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@.c)
 *     ?SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x140286D30 (-SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 */

__int64 __fastcall SysMmCreateAdapter(
        struct _DEVICE_OBJECT *a1,
        struct _DEVICE_OBJECT *const *a2,
        unsigned int a3,
        struct _DXGK_PHYSICAL_MEMORY_RANGE *a4,
        unsigned int a5,
        unsigned int a6,
        const struct SYSMM_ADAPTER_CREATE_PARAMS *a7,
        struct SYSMM_ADAPTER **a8)
{
  __int64 v9; // r15
  unsigned __int64 v10; // rbx
  char v11; // bp
  void *v13; // rax
  __int64 v14; // rdi
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rbx
  __int64 Pool2; // rax
  int HardwareReservedRanges; // ebx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  __int64 v31; // rcx
  int LogicalAllocator; // eax
  unsigned int i; // esi
  __int64 v34; // rdx
  int LogicalAddressAt; // eax
  int v36; // eax
  __int128 SystemInformation; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v40; // [rsp+70h] [rbp-48h]

  v9 = a3;
  v10 = *(_QWORD *)a7;
  v40 = 0LL;
  SystemInformation = 0LL;
  if ( ZwQuerySystemInformation(SystemPrefetcherInformation|0x80, &SystemInformation, 0x18u, 0LL) >= 0 && v10 >= v40 )
  {
    v11 = 1;
  }
  else
  {
    v11 = 0;
    if ( (*((_DWORD *)a7 + 4) & 4) == 0 )
      return 3221225473LL;
    if ( (dword_140161610 & 0x400) != 0 )
      return 3221225659LL;
  }
  v13 = (void *)operator new(0x1A0uLL, 0x30737844u, 64LL);
  v14 = (__int64)v13;
  if ( !v13 )
  {
    _InterlockedIncrement(&dword_140161638);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 524;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate SYSMM_ADAPTER",
      524LL,
      0LL,
      0LL,
      0LL,
      0LL);
    HardwareReservedRanges = -1073741801;
    goto LABEL_55;
  }
  memset(v13, 0, 0x1A0uLL);
  *(_QWORD *)(v14 + 280) = 0LL;
  *(_DWORD *)(v14 + 256) = 56;
  *(_QWORD *)(v14 + 288) = 4096LL;
  *(_QWORD *)v14 = a1;
  *(_DWORD *)(v14 + 16) = a6;
  *(_QWORD *)(v14 + 392) = 0LL;
  *(_DWORD *)(v14 + 24) = v9;
  *(_QWORD *)(v14 + 8) = *(_QWORD *)a7;
  *(_DWORD *)(v14 + 20) = 0;
  v15 = *((_DWORD *)a7 + 3) & 1;
  *(_DWORD *)(v14 + 20) = v15;
  v16 = *((_DWORD *)a7 + 3) & 2;
  *(_QWORD *)(v14 + 384) = 0LL;
  *(_DWORD *)(v14 + 20) = v15 | v16;
  *(_DWORD *)(v14 + 32) = *((_DWORD *)a7 + 2);
  *(_DWORD *)(v14 + 28) = a5;
  *(_QWORD *)(v14 + 400) = 0LL;
  SmmInitializeSpinLock<1>((_DWORD *)(v14 + 36));
  *(_QWORD *)(v14 + 48) = v14 + 40;
  *(_QWORD *)(v14 + 40) = v14 + 40;
  SmmInitializeIommu((struct SYSMM_IOMMU *)(v14 + 64), a7);
  v17 = v9;
  Pool2 = ExAllocatePool2(256LL, 24 * v9, 930314308LL);
  *(_QWORD *)(v14 + 392) = Pool2;
  if ( Pool2 )
  {
    if ( (_DWORD)v9 )
    {
      v20 = 0LL;
      do
      {
        v21 = (__int64)*a2;
        v20 += 24LL;
        ++a2;
        *(_QWORD *)(v20 + *(_QWORD *)(v14 + 392) - 8) = v21;
        --v17;
      }
      while ( v17 );
    }
    HardwareReservedRanges = SmmCreateHardwareReservedRanges(v14, (__int128 *)a4, a5);
    if ( HardwareReservedRanges < 0 )
      goto LABEL_11;
    if ( (*((_DWORD *)a7 + 3) & 1) == 0 )
    {
      HardwareReservedRanges = SmmInitializeDmaDevices((struct SYSMM_ADAPTER *)v14, v22, v23, v24);
      if ( HardwareReservedRanges < 0 )
        goto LABEL_11;
      if ( (*((_DWORD *)a7 + 3) & 2) == 0 )
      {
        v25 = SmmUnblockDevice((struct SYSMM_ADAPTER *)v14);
        HardwareReservedRanges = v25;
        if ( v25 < 0 )
        {
          WdLogSingleEntry1(4LL, v25);
          WdLogGlobalForLineNumber = 589;
          goto LABEL_11;
        }
        v26 = *(_DWORD *)(v14 + 88);
        if ( (v26 & 8) != 0 )
        {
          v27 = SysMmEnableIommu(v14, 0x80u);
          HardwareReservedRanges = v27;
          if ( v27 < 0 )
          {
            WdLogSingleEntry1(3LL, v27);
            WdLogGlobalForLineNumber = 605;
            goto LABEL_11;
          }
          *(_DWORD *)(v14 + 92) |= 2u;
        }
        else if ( (v26 & 0x10) != 0 )
        {
          v28 = SysMmEnableIommu(v14, 0x100u);
          HardwareReservedRanges = v28;
          if ( v28 < 0 )
          {
            WdLogSingleEntry1(3LL, v28);
            WdLogGlobalForLineNumber = 616;
            goto LABEL_11;
          }
          *(_DWORD *)(v14 + 92) |= 4u;
        }
        if ( (dword_140161610 & 3) != 0 )
        {
          v29 = SysMmEnableIommu(v14, 8u);
          HardwareReservedRanges = v29;
          if ( v29 < 0 )
          {
            if ( (dword_140161610 & 3) != 2 )
              goto LABEL_11;
            WdLogSingleEntry1(4LL, v29);
            WdLogGlobalForLineNumber = 634;
          }
        }
        if ( (*(_DWORD *)(v14 + 88) & 2) != 0 )
        {
          v30 = SysMmEnableIommu(v14, 0x20u);
          HardwareReservedRanges = v30;
          if ( v30 < 0 )
          {
            WdLogSingleEntry1(3LL, v30);
            WdLogGlobalForLineNumber = 654;
            goto LABEL_11;
          }
        }
        if ( !v11
          || (dword_140161610 & 0x80u) != 0 && (*((_DWORD *)a7 + 4) & 4) != 0
          || (*(_DWORD *)(v14 + 88) & 0x10) != 0 )
        {
          if ( (*((_DWORD *)a7 + 4) & 4) == 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 670;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"pCreateParams->Iommu.DmaRemappingSupported",
              670LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *(_DWORD *)(v14 + 92) |= 1u;
          v31 = 0xFFFFFFFFFFFFLL;
          if ( *(_QWORD *)a7 < 0xFFFFFFFFFFFFuLL )
            v31 = *(_QWORD *)a7;
          LogicalAllocator = SmmCreateLogicalAllocator(v31 + 1, (struct SYSMM_LOGICAL_ALLOCATOR **)(v14 + 384));
          HardwareReservedRanges = LogicalAllocator;
          if ( LogicalAllocator < 0 )
          {
            WdLogSingleEntry1(4LL, LogicalAllocator);
            WdLogGlobalForLineNumber = 683;
            goto LABEL_11;
          }
          for ( i = 0; i < a5; ++i )
          {
            v34 = *(_QWORD *)(v14 + 400) + 24LL * i;
            LogicalAddressAt = SmmAllocateLogicalAddressAt(
                                 *(struct SYSMM_LOGICAL_ALLOCATOR **)(v14 + 384),
                                 *(_QWORD *)v34,
                                 *(_QWORD *)(v34 + 8),
                                 (const void *)v34,
                                 (struct SYSMM_LOGICAL_BLOCK **)(v34 + 16));
            HardwareReservedRanges = LogicalAddressAt;
            if ( LogicalAddressAt < 0 )
            {
              WdLogSingleEntry1(4LL, LogicalAddressAt);
              WdLogGlobalForLineNumber = 702;
              goto LABEL_11;
            }
          }
          v36 = SysMmEnableIommu(v14, 2u);
          HardwareReservedRanges = v36;
          if ( v36 < 0 )
          {
            WdLogSingleEntry1(4LL, v36);
            WdLogGlobalForLineNumber = 715;
            goto LABEL_11;
          }
        }
      }
    }
    *a8 = (struct SYSMM_ADAPTER *)v14;
    return 0LL;
  }
  _InterlockedIncrement(&dword_140161638);
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 550;
  DxgkLogInternalTriageEvent(
    0LL,
    262145LL,
    0xFFFFFFFFLL,
    L"Failed to allocate SYSMM_PHYSICAL_ADAPTER array",
    550LL,
    0LL,
    0LL,
    0LL,
    0LL);
  HardwareReservedRanges = -1073741801;
LABEL_11:
  SysMmDestroyAdapter((struct SYSMM_ADAPTER *)v14);
LABEL_55:
  *a8 = 0LL;
  return (unsigned int)HardwareReservedRanges;
}
