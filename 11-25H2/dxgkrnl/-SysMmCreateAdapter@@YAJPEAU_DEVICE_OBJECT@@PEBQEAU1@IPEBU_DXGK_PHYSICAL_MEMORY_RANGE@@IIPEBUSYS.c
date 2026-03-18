/*
 * XREFs of ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x14027E850
 * Callers:
 *     DpiFdoCreateSysMmAdapter @ 0x1402367B0 (DpiFdoCreateSysMmAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??$SmmInitializeSpinLock@$00@@YAXPEAU?$SYSMM_SPINLOCK@$00@@@Z @ 0x140092730 (--$SmmInitializeSpinLock@$00@@YAXPEAU-$SYSMM_SPINLOCK@$00@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?SmmInitializeIommu@@YAXPEAUSYSMM_IOMMU@@PEBUSYSMM_ADAPTER_CREATE_PARAMS@@@Z @ 0x14027D0F0 (-SmmInitializeIommu@@YAXPEAUSYSMM_IOMMU@@PEBUSYSMM_ADAPTER_CREATE_PARAMS@@@Z.c)
 *     ?SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x14027DB8C (-SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x14027DF24 (-SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 *     SmmCreateHardwareReservedRanges @ 0x14027E250 (SmmCreateHardwareReservedRanges.c)
 *     SmmInitializeDmaDevices @ 0x14027E400 (SmmInitializeDmaDevices.c)
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x14027EE00 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14027F850 (-SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@.c)
 *     ?SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x14027F9C0 (-SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
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
  __int64 v11; // r9
  char v12; // bp
  void *v14; // rax
  __int64 v15; // rdi
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // r9
  __int64 Pool2; // rax
  int HardwareReservedRanges; // ebx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  __int64 v33; // rcx
  int LogicalAllocator; // eax
  unsigned int i; // esi
  __int64 v36; // rdx
  int LogicalAddressAt; // eax
  int v38; // eax
  __int128 SystemInformation; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v42; // [rsp+70h] [rbp-48h]

  v9 = a3;
  v10 = *(_QWORD *)a7;
  v42 = 0LL;
  SystemInformation = 0LL;
  if ( ZwQuerySystemInformation(SystemPrefetcherInformation|0x80, &SystemInformation, 0x18u, 0LL) >= 0 && v10 >= v42 )
  {
    v12 = 1;
  }
  else
  {
    v12 = 0;
    if ( (*((_DWORD *)a7 + 4) & 4) == 0 )
      return 3221225473LL;
    if ( (dword_14015E600 & 0x400) != 0 )
      return 3221225659LL;
  }
  v14 = (void *)operator new(0x1A0uLL, 0x30737844u, 64LL, v11);
  v15 = (__int64)v14;
  if ( !v14 )
  {
    _InterlockedIncrement(&dword_14015E628);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 524;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
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
  memset(v14, 0, 0x1A0uLL);
  *(_QWORD *)(v15 + 280) = 0LL;
  *(_DWORD *)(v15 + 256) = 56;
  *(_QWORD *)(v15 + 288) = 4096LL;
  *(_QWORD *)v15 = a1;
  *(_DWORD *)(v15 + 16) = a6;
  *(_QWORD *)(v15 + 392) = 0LL;
  *(_DWORD *)(v15 + 24) = v9;
  *(_QWORD *)(v15 + 8) = *(_QWORD *)a7;
  *(_DWORD *)(v15 + 20) = 0;
  v16 = *((_DWORD *)a7 + 3) & 1;
  *(_DWORD *)(v15 + 20) = v16;
  v17 = *((_DWORD *)a7 + 3) & 2;
  *(_QWORD *)(v15 + 384) = 0LL;
  *(_DWORD *)(v15 + 20) = v16 | v17;
  *(_DWORD *)(v15 + 32) = *((_DWORD *)a7 + 2);
  *(_DWORD *)(v15 + 28) = a5;
  *(_QWORD *)(v15 + 400) = 0LL;
  SmmInitializeSpinLock<1>((_DWORD *)(v15 + 36));
  *(_QWORD *)(v15 + 48) = v15 + 40;
  *(_QWORD *)(v15 + 40) = v15 + 40;
  SmmInitializeIommu((struct SYSMM_IOMMU *)(v15 + 64), a7);
  v18 = v9;
  Pool2 = ExAllocatePool2(256LL, 24 * v9, 930314308LL, v19);
  *(_QWORD *)(v15 + 392) = Pool2;
  if ( Pool2 )
  {
    if ( (_DWORD)v9 )
    {
      v22 = 0LL;
      do
      {
        v23 = (__int64)*a2;
        v22 += 24LL;
        ++a2;
        *(_QWORD *)(v22 + *(_QWORD *)(v15 + 392) - 8) = v23;
        --v18;
      }
      while ( v18 );
    }
    HardwareReservedRanges = SmmCreateHardwareReservedRanges(v15, (__int128 *)a4, a5);
    if ( HardwareReservedRanges < 0 )
      goto LABEL_11;
    if ( (*((_DWORD *)a7 + 3) & 1) == 0 )
    {
      HardwareReservedRanges = SmmInitializeDmaDevices((struct SYSMM_ADAPTER *)v15, v24, v25, v26);
      if ( HardwareReservedRanges < 0 )
        goto LABEL_11;
      if ( (*((_DWORD *)a7 + 3) & 2) == 0 )
      {
        v27 = SmmUnblockDevice((struct SYSMM_ADAPTER *)v15);
        HardwareReservedRanges = v27;
        if ( v27 < 0 )
        {
          WdLogSingleEntry1(4LL, v27);
          WdLogGlobalForLineNumber = 589;
          goto LABEL_11;
        }
        v28 = *(_DWORD *)(v15 + 88);
        if ( (v28 & 8) != 0 )
        {
          v29 = SysMmEnableIommu(v15, 0x80u);
          HardwareReservedRanges = v29;
          if ( v29 < 0 )
          {
            WdLogSingleEntry1(3LL, v29);
            WdLogGlobalForLineNumber = 605;
            goto LABEL_11;
          }
          *(_DWORD *)(v15 + 92) |= 2u;
        }
        else if ( (v28 & 0x10) != 0 )
        {
          v30 = SysMmEnableIommu(v15, 0x100u);
          HardwareReservedRanges = v30;
          if ( v30 < 0 )
          {
            WdLogSingleEntry1(3LL, v30);
            WdLogGlobalForLineNumber = 616;
            goto LABEL_11;
          }
          *(_DWORD *)(v15 + 92) |= 4u;
        }
        if ( (dword_14015E600 & 3) != 0 )
        {
          v31 = SysMmEnableIommu(v15, 8u);
          HardwareReservedRanges = v31;
          if ( v31 < 0 )
          {
            if ( (dword_14015E600 & 3) != 2 )
              goto LABEL_11;
            WdLogSingleEntry1(4LL, v31);
            WdLogGlobalForLineNumber = 634;
          }
        }
        if ( (*(_DWORD *)(v15 + 88) & 2) != 0 )
        {
          v32 = SysMmEnableIommu(v15, 0x20u);
          HardwareReservedRanges = v32;
          if ( v32 < 0 )
          {
            WdLogSingleEntry1(3LL, v32);
            WdLogGlobalForLineNumber = 654;
            goto LABEL_11;
          }
        }
        if ( !v12
          || (dword_14015E600 & 0x80u) != 0 && (*((_DWORD *)a7 + 4) & 4) != 0
          || (*(_DWORD *)(v15 + 88) & 0x10) != 0 )
        {
          if ( (*((_DWORD *)a7 + 4) & 4) == 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 670;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"pCreateParams->Iommu.DmaRemappingSupported",
              670LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *(_DWORD *)(v15 + 92) |= 1u;
          v33 = 0xFFFFFFFFFFFFLL;
          if ( *(_QWORD *)a7 < 0xFFFFFFFFFFFFuLL )
            v33 = *(_QWORD *)a7;
          LogicalAllocator = SmmCreateLogicalAllocator(v33 + 1, (struct SYSMM_LOGICAL_ALLOCATOR **)(v15 + 384));
          HardwareReservedRanges = LogicalAllocator;
          if ( LogicalAllocator < 0 )
          {
            WdLogSingleEntry1(4LL, LogicalAllocator);
            WdLogGlobalForLineNumber = 683;
            goto LABEL_11;
          }
          for ( i = 0; i < a5; ++i )
          {
            v36 = *(_QWORD *)(v15 + 400) + 24LL * i;
            LogicalAddressAt = SmmAllocateLogicalAddressAt(
                                 *(struct SYSMM_LOGICAL_ALLOCATOR **)(v15 + 384),
                                 *(_QWORD *)v36,
                                 *(_QWORD *)(v36 + 8),
                                 (const void *)v36,
                                 (struct SYSMM_LOGICAL_BLOCK **)(v36 + 16));
            HardwareReservedRanges = LogicalAddressAt;
            if ( LogicalAddressAt < 0 )
            {
              WdLogSingleEntry1(4LL, LogicalAddressAt);
              WdLogGlobalForLineNumber = 702;
              goto LABEL_11;
            }
          }
          v38 = SysMmEnableIommu(v15, 2u);
          HardwareReservedRanges = v38;
          if ( v38 < 0 )
          {
            WdLogSingleEntry1(4LL, v38);
            WdLogGlobalForLineNumber = 715;
            goto LABEL_11;
          }
        }
      }
    }
    *a8 = (struct SYSMM_ADAPTER *)v15;
    return 0LL;
  }
  _InterlockedIncrement(&dword_14015E628);
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 550;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    0xFFFFFFFFLL,
    L"Failed to allocate SYSMM_PHYSICAL_ADAPTER array",
    550LL,
    0LL,
    0LL,
    0LL,
    0LL);
  HardwareReservedRanges = -1073741801;
LABEL_11:
  SysMmDestroyAdapter((struct SYSMM_ADAPTER *)v15);
LABEL_55:
  *a8 = 0LL;
  return (unsigned int)HardwareReservedRanges;
}
