/*
 * XREFs of HalpMmAllocCtxAlloc @ 0x140338EDC
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x140334FBC (HalpDmaAllocateMapRegisters.c)
 *     HalpBuddyAllocatorSplitNode @ 0x1403389E8 (HalpBuddyAllocatorSplitNode.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x140412974 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpCmciInitializeErrorPacket @ 0x14047BD0C (HalpCmciInitializeErrorPacket.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x14048FFC4 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpIommuGetHardwareDomain @ 0x1404CE25C (HalpIommuGetHardwareDomain.c)
 *     HalpHvInitMcaPcrContext @ 0x1404CE418 (HalpHvInitMcaPcrContext.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x1404D2F18 (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpIommuCloneDeviceId @ 0x1404DACA4 (HalpIommuCloneDeviceId.c)
 *     HalpTimerInitSystem @ 0x1405387F0 (HalpTimerInitSystem.c)
 *     HalInitializeBios @ 0x140539590 (HalInitializeBios.c)
 *     HalpAcpiAllocateMemory @ 0x14053A890 (HalpAcpiAllocateMemory.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x14053B280 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x14054019C (HalpInterruptSetLineSpecificOverride.c)
 *     HalpAllocatePmcCounterSetEx @ 0x140542820 (HalpAllocatePmcCounterSetEx.c)
 *     HalpTscReserveResources @ 0x140546E00 (HalpTscReserveResources.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x140548150 (HalpHvInitMcaStatusMsrCache.c)
 *     HalpIommuCreateDevice @ 0x14054ACF8 (HalpIommuCreateDevice.c)
 *     IommupPasidDeviceCreate @ 0x14054BC9C (IommupPasidDeviceCreate.c)
 *     HalpDmaAllocateMapRegisterFrame @ 0x14054C488 (HalpDmaAllocateMapRegisterFrame.c)
 *     HalpDmaAllocateDomain @ 0x14054DE6C (HalpDmaAllocateDomain.c)
 *     HalpDmaGetReservedRegionsForDeviceResources @ 0x14054E274 (HalpDmaGetReservedRegionsForDeviceResources.c)
 *     HalpDmaGetReservedRegionsForHybridPassthroughDomain @ 0x14054E500 (HalpDmaGetReservedRegionsForHybridPassthroughDomain.c)
 *     HalpDmaGetReservedRegionsForTranslateDomain @ 0x14054E588 (HalpDmaGetReservedRegionsForTranslateDomain.c)
 *     HalpDmaInitializeControllers @ 0x14054F4A8 (HalpDmaInitializeControllers.c)
 *     HalpIommuGetDeviceId @ 0x14054F980 (HalpIommuGetDeviceId.c)
 *     HalpIommuAllocateDmaDomain @ 0x140550BC4 (HalpIommuAllocateDmaDomain.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x140550F70 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpNumaAddRangeProximity @ 0x140555180 (HalpNumaAddRangeProximity.c)
 *     EmonAddProfileSource @ 0x140557F20 (EmonAddProfileSource.c)
 *     EmonAllocateResources @ 0x14055848C (EmonAllocateResources.c)
 *     ExtEnvAllocateMemory @ 0x14055D130 (ExtEnvAllocateMemory.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14055D1A4 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpRegisterUsbController @ 0x14055F828 (HalpRegisterUsbController.c)
 *     IommuEnableDevicePasid @ 0x140561280 (IommuEnableDevicePasid.c)
 *     IommuGetLibraryContext @ 0x140561AC0 (IommuGetLibraryContext.c)
 *     IommupGetSystemContext @ 0x140562450 (IommupGetSystemContext.c)
 *     IommupMapDeviceInternal @ 0x1405625B8 (IommupMapDeviceInternal.c)
 *     IommuDomainAttachDevice @ 0x140563B20 (IommuDomainAttachDevice.c)
 *     IommuDomainAttachDeviceEx @ 0x140563D20 (IommuDomainAttachDeviceEx.c)
 *     IommuRegisterInterfaceStateChangeCallback @ 0x1405643C0 (IommuRegisterInterfaceStateChangeCallback.c)
 *     IommuReserveLogicalAddressRange @ 0x140564530 (IommuReserveLogicalAddressRange.c)
 *     HalpIommuCreateDmarPageTable @ 0x140564CBC (HalpIommuCreateDmarPageTable.c)
 *     Amd64AddProfileSource @ 0x1405670A0 (Amd64AddProfileSource.c)
 *     Amd64InitializeCacheStatusEnhanced @ 0x140568184 (Amd64InitializeCacheStatusEnhanced.c)
 *     Amd64InitializeCacheStatusOriginal @ 0x1405683C0 (Amd64InitializeCacheStatusOriginal.c)
 *     Amd64InitializeDataFabricStatusEnhanced @ 0x1405685BC (Amd64InitializeDataFabricStatusEnhanced.c)
 *     Amd64InitializeDataFabricStatusOriginal @ 0x14056874C (Amd64InitializeDataFabricStatusOriginal.c)
 *     Amd64InitializeUncoreStatusEnhanced @ 0x140568AF8 (Amd64InitializeUncoreStatusEnhanced.c)
 *     Amd64InitializeUncoreStatusOriginal @ 0x140568B94 (Amd64InitializeUncoreStatusOriginal.c)
 *     HalpBuddyAllocatorCreateAllocator @ 0x14057155C (HalpBuddyAllocatorCreateAllocator.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1406F3974 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1406F3C64 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpMcaInitializePcrContext @ 0x140B3BDB0 (HalpMcaInitializePcrContext.c)
 *     HalpInitMemoryCachingRequirementsTable @ 0x140B3C1A4 (HalpInitMemoryCachingRequirementsTable.c)
 *     HalpBuildResumeStructures @ 0x140B3CE28 (HalpBuildResumeStructures.c)
 *     HalpMapCR3Ex @ 0x140B3E6CC (HalpMapCR3Ex.c)
 *     HalpMapNvsArea @ 0x140B5E5F0 (HalpMapNvsArea.c)
 *     HalpMceInitializeErrorPacket @ 0x140B5E84C (HalpMceInitializeErrorPacket.c)
 *     HalpAcpiDetectPiix4 @ 0x140BFE300 (HalpAcpiDetectPiix4.c)
 *     HalpAcpiPopulateTableCache @ 0x140BFE3A8 (HalpAcpiPopulateTableCache.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140BFF07C (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateMappingResources @ 0x140BFF19C (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateReservedMapping @ 0x140BFF338 (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140BFF394 (HalpDmaAllocateReservedMappingArray.c)
 *     HalpDmaAllocateTranslationBuffer @ 0x140BFF468 (HalpDmaAllocateTranslationBuffer.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140BFFB18 (HalpDmaInitializeMasterAdapter.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     RtlSetBits @ 0x140339430 (RtlSetBits.c)
 *     HalpMmAllocCtxAllocBuffer @ 0x1403394D8 (HalpMmAllocCtxAllocBuffer.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpMmAllocCtxAlloc(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r14
  KIRQL v6; // al
  __int64 v7; // rdi
  unsigned int v8; // r8d
  unsigned int v9; // esi
  __int64 v10; // r12
  unsigned int v11; // ecx
  __int64 v12; // r9
  unsigned int v13; // eax
  int v14; // r11d
  unsigned int v15; // edx
  unsigned int v16; // r10d
  __int64 v17; // r12
  unsigned int v18; // r13d
  unsigned __int64 v19; // rsi
  unsigned __int64 *v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rax
  unsigned int v23; // edx
  __int64 v24; // rsi
  KIRQL v25; // bl
  __int64 v26; // rdx
  __int64 *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  bool v31; // zf
  __int64 v32; // rax
  int v33; // r9d
  unsigned int v34; // ecx
  int v35; // edx
  unsigned __int64 *v36; // r11
  __int64 v37; // rax
  unsigned int v38; // r10d
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // r10
  __int64 v41; // rax
  int v42; // ecx
  char v43; // r9
  unsigned __int64 *v44; // rcx
  unsigned int v45; // ecx
  __int64 v46; // rax
  unsigned int v47; // r9d
  __int64 v48; // rcx
  unsigned __int64 *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  int v52; // [rsp+30h] [rbp-58h]
  __int64 v53; // [rsp+38h] [rbp-50h]
  KIRQL NewIrql; // [rsp+90h] [rbp+8h]
  unsigned int v55; // [rsp+A8h] [rbp+20h]

  v2 = 0LL;
  if ( !a2 )
    KeBugCheckEx(0xACu, 0LL, 0xA0A0uLL, (ULONG_PTR)"minkernel\\hals\\lib\\mm\\memory.c", 0xBDCuLL);
  v3 = (a2 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v4 = v3 + 16;
  if ( v3 >= 0x1000 )
    v4 = (a2 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v5 = v4 >> 4;
  if ( v4 >= 0x1000 )
  {
    v4 = (v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v29 = v4;
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&qword_140FC1750);
    v7 = HalpNPPoolAllocCtx;
    NewIrql = v6;
    while ( (__int64 *)v7 != &HalpNPPoolAllocCtx )
    {
      v8 = *(_DWORD *)(v7 + 32);
      v10 = *(_QWORD *)(v7 + 40);
      v9 = *(_DWORD *)(v7 + 24);
      v11 = v8 - 1;
      if ( (_DWORD)v5 )
      {
        v12 = *(_QWORD *)(v7 + 40) & 4LL;
        v53 = v12;
        v13 = v9 < v8 ? v9 : 0;
        v14 = v12 != 0 ? 0x20 : 0;
        v52 = v14;
        while ( 1 )
        {
          v55 = v13;
          v15 = v14 + v13;
          v16 = v14 + v11;
          v17 = v10 - (v12 != 0 ? 4 : 0);
          if ( v11 - v13 + 1 >= (unsigned int)v5 )
            break;
          v23 = -1;
LABEL_37:
          if ( !v55 )
            goto LABEL_19;
          v14 = v52;
          v34 = v5 + v9;
          v10 = *(_QWORD *)(v7 + 40);
          v13 = 0;
          if ( (unsigned int)v5 + v9 > v8 )
            v34 = v8;
          v11 = v34 - 1;
        }
        v18 = v16 - v5 + 1;
        v19 = v17 + 8 * ((unsigned __int64)v18 >> 6);
        v20 = (unsigned __int64 *)(v17 + 8 * ((unsigned __int64)v15 >> 6));
        v21 = *v20 | ((1LL << (v15 & 0x3F)) - 1);
        if ( (unsigned int)v5 > 0x7F )
        {
          v40 = v19 + 8;
          if ( (v18 & 0x3F) == 0 )
            v40 = v17 + 8 * ((unsigned __int64)v18 >> 6);
          if ( !v21 )
          {
            v42 = 0;
            goto LABEL_67;
          }
          if ( *++v20 )
            goto LABEL_85;
          v31 = !_BitScanReverse64((unsigned __int64 *)&v41, v21);
          if ( !v31 )
          {
            v42 = 63 - v41;
            goto LABEL_67;
          }
LABEL_91:
          v42 = 64;
LABEL_67:
          while ( 1 )
          {
            v23 = ((unsigned int)(((__int64)v20 - v17) >> 3) << 6) - v42;
            if ( v23 > v18 )
              goto LABEL_35;
            v43 = v5 - v42;
            v44 = &v20[(unsigned __int64)(unsigned int)(v5 - v42) >> 6];
            while ( ++v20 != v44 )
            {
              if ( *v20 )
                goto LABEL_85;
            }
            v47 = v43 & 0x3F;
            if ( !v47 )
              goto LABEL_17;
            v31 = !_BitScanForward64((unsigned __int64 *)&v48, *v20);
            if ( v31 )
              LODWORD(v48) = 64;
            if ( (unsigned int)v48 >= v47 )
              goto LABEL_17;
            do
            {
LABEL_85:
              v49 = v20;
              if ( (unsigned __int64)v20 > v40 )
                goto LABEL_35;
              ++v20;
            }
            while ( *v20 );
            v31 = !_BitScanReverse64((unsigned __int64 *)&v50, *v49);
            if ( v31 )
              goto LABEL_91;
            v42 = 63 - v50;
          }
        }
        if ( (unsigned int)v5 < 0x40 )
        {
          if ( (unsigned int)v5 > 1 )
          {
            v35 = 0;
            v36 = (unsigned __int64 *)(v17 + 8 * ((unsigned __int64)v16 >> 6));
            while ( 1 )
            {
              if ( v21 == -1 )
              {
                while ( 1 )
                {
                  if ( (unsigned __int64)++v20 > v19 )
                    goto LABEL_35;
                  v21 = *v20;
                  if ( *v20 != -1LL )
                  {
                    v35 = 0;
                    break;
                  }
                }
              }
              v31 = !_BitScanForward64((unsigned __int64 *)&v37, v21);
              if ( v31 )
                LODWORD(v37) = 64;
              if ( v35 + (int)v37 >= (unsigned int)v5 )
                break;
              v38 = v4 >> 4;
              v39 = ~v21;
              while ( 1 )
              {
                v39 &= v39 >> (v38 >> 1);
                if ( !v39 )
                  break;
                v38 -= v38 >> 1;
                if ( v38 <= 1 )
                {
                  _BitScanForward64(&v39, v39);
                  goto LABEL_51;
                }
              }
              if ( v20 == v36 )
                goto LABEL_35;
              v31 = !_BitScanReverse64((unsigned __int64 *)&v51, v21);
              if ( v31 )
                v35 = 64;
              else
                v35 = 63 - v51;
              v21 = *++v20;
            }
            LODWORD(v39) = -v35;
LABEL_51:
            v23 = ((unsigned int)(((__int64)v20 - v17) >> 3) << 6) + v39;
            if ( v23 <= v18 )
            {
              v14 = v52;
              goto LABEL_17;
            }
          }
          else
          {
            while ( v21 == -1 )
            {
              if ( (unsigned __int64)++v20 > v19 )
                goto LABEL_35;
              v21 = *v20;
            }
            _BitScanForward64(&v22, ~v21);
            v23 = v22 + ((unsigned int)(((__int64)v20 - v17) >> 3) << 6);
            if ( v23 <= v18 )
            {
LABEL_17:
              if ( v23 != -1 )
              {
                v23 -= v14;
                goto LABEL_19;
              }
              goto LABEL_36;
            }
          }
LABEL_35:
          v23 = -1;
LABEL_36:
          v9 = *(_DWORD *)(v7 + 24);
          v12 = v53;
          v8 = *(_DWORD *)(v7 + 32);
          goto LABEL_37;
        }
        while ( 1 )
        {
          while ( v21 < 0 )
          {
            if ( (unsigned __int64)++v20 > v19 )
              goto LABEL_35;
            v21 = *v20;
          }
          v31 = !_BitScanReverse64((unsigned __int64 *)&v32, v21);
          if ( v31 )
            v33 = 64;
          else
            v33 = 63 - v32;
          v23 = (((unsigned int)(((__int64)v20 - v17) >> 3) + 1) << 6) - v33;
          if ( v23 > v18 )
            goto LABEL_35;
          v45 = v5 - v33;
          if ( (_DWORD)v5 == v33 )
            goto LABEL_17;
          v21 = *++v20;
          if ( v45 >= 0x40 )
          {
            if ( *v20 )
              continue;
            v45 -= 64;
            if ( !v45 )
              goto LABEL_17;
            v21 = *++v20;
          }
          v31 = !_BitScanForward64((unsigned __int64 *)&v46, v21);
          if ( v31 )
            LODWORD(v46) = 64;
          if ( (unsigned int)v46 >= v45 )
            goto LABEL_17;
        }
      }
      v23 = (v9 < v8 ? v9 : 0) & 0xFFFFFFF8;
LABEL_19:
      v24 = v23;
      if ( v23 != 0xFFFFFFFFLL )
      {
        v25 = NewIrql;
        goto LABEL_21;
      }
      v7 = *(_QWORD *)v7;
    }
    KeReleaseSpinLock(&qword_140FC1750, NewIrql);
    v29 = 0x4000LL;
  }
  v7 = HalpMmAllocCtxAllocBuffer(a1, v29);
  if ( !v7 )
    return v2;
  v24 = 0LL;
  v25 = KeAcquireSpinLockRaiseToDpc(&qword_140FC1750);
LABEL_21:
  RtlSetBits((PRTL_BITMAP)(v7 + 32), v24, v5);
  *(_DWORD *)(v7 + 24) = v5 + v24;
  v26 = *(_QWORD *)v7;
  if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7
    || (v27 = *(__int64 **)(v7 + 8), *v27 != v7)
    || (*v27 = v26,
        *(_QWORD *)(v26 + 8) = v27,
        v28 = HalpNPPoolAllocCtx,
        *(__int64 **)(HalpNPPoolAllocCtx + 8) != &HalpNPPoolAllocCtx) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v7 = HalpNPPoolAllocCtx;
  *(_QWORD *)(v7 + 8) = &HalpNPPoolAllocCtx;
  *(_QWORD *)(v28 + 8) = v7;
  HalpNPPoolAllocCtx = v7;
  KeReleaseSpinLock(&qword_140FC1750, v25);
  v2 = *(_QWORD *)(v7 + 16) + 16 * v24;
  if ( v4 < 0x1000 )
  {
    *(_QWORD *)v2 = v7;
    *(_DWORD *)(v2 + 8) = v5;
    v2 += 16LL;
  }
  else
  {
    *(_DWORD *)(v7 + 28) = v5;
  }
  return v2;
}
