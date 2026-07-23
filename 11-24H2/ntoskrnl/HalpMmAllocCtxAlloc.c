/*
 * XREFs of HalpMmAllocCtxAlloc @ 0x14027C378
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x14038829C (HalpDmaAllocateMapRegisters.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x1403976A0 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x14039A69C (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpBuddyAllocatorSplitNode @ 0x14039AA18 (HalpBuddyAllocatorSplitNode.c)
 *     HalpCmciInitializeErrorPacket @ 0x140477DA0 (HalpCmciInitializeErrorPacket.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x140489B60 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpIommuGetHardwareDomain @ 0x1404C7308 (HalpIommuGetHardwareDomain.c)
 *     HalpHvInitMcaPcrContext @ 0x1404C74C4 (HalpHvInitMcaPcrContext.c)
 *     HalpIommuCloneDeviceId @ 0x1404D36B0 (HalpIommuCloneDeviceId.c)
 *     HalpTimerInitSystem @ 0x1405387E0 (HalpTimerInitSystem.c)
 *     HalInitializeBios @ 0x140539620 (HalInitializeBios.c)
 *     HalpAcpiAllocateMemory @ 0x14053A9C0 (HalpAcpiAllocateMemory.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x14053B3B0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x14054031C (HalpInterruptSetLineSpecificOverride.c)
 *     HalpAllocatePmcCounterSetEx @ 0x1405429D0 (HalpAllocatePmcCounterSetEx.c)
 *     HalpTscReserveResources @ 0x140546FB0 (HalpTscReserveResources.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x140548300 (HalpHvInitMcaStatusMsrCache.c)
 *     HalpIommuCreateDevice @ 0x14054AEFC (HalpIommuCreateDevice.c)
 *     IommupPasidDeviceCreate @ 0x14054BED8 (IommupPasidDeviceCreate.c)
 *     HalpDmaAllocateMapRegisterFrame @ 0x14054C72C (HalpDmaAllocateMapRegisterFrame.c)
 *     HalpDmaAllocateDomain @ 0x14054E10C (HalpDmaAllocateDomain.c)
 *     HalpDmaGetReservedRegionsForDeviceResources @ 0x14054E514 (HalpDmaGetReservedRegionsForDeviceResources.c)
 *     HalpDmaGetReservedRegionsForHybridPassthroughDomain @ 0x14054E7A0 (HalpDmaGetReservedRegionsForHybridPassthroughDomain.c)
 *     HalpDmaGetReservedRegionsForTranslateDomain @ 0x14054E828 (HalpDmaGetReservedRegionsForTranslateDomain.c)
 *     HalpDmaInitializeControllers @ 0x14054F6E8 (HalpDmaInitializeControllers.c)
 *     HalpIommuGetDeviceId @ 0x14054FBC0 (HalpIommuGetDeviceId.c)
 *     HalpIommuAllocateDmaDomain @ 0x140550E04 (HalpIommuAllocateDmaDomain.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x1405511B0 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpNumaAddRangeProximity @ 0x1405553C0 (HalpNumaAddRangeProximity.c)
 *     HalpInterruptAllocateCacheDomainTable @ 0x14055691C (HalpInterruptAllocateCacheDomainTable.c)
 *     EmonAddProfileSource @ 0x140558450 (EmonAddProfileSource.c)
 *     EmonAllocateResources @ 0x1405589BC (EmonAllocateResources.c)
 *     ExtEnvAllocateMemory @ 0x14055D660 (ExtEnvAllocateMemory.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14055D6D4 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpRegisterUsbController @ 0x14055FD58 (HalpRegisterUsbController.c)
 *     IommuEnableDevicePasid @ 0x140561750 (IommuEnableDevicePasid.c)
 *     IommuGetLibraryContext @ 0x140561F90 (IommuGetLibraryContext.c)
 *     IommupGetSystemContext @ 0x140562910 (IommupGetSystemContext.c)
 *     IommupMapDeviceInternal @ 0x140562A78 (IommupMapDeviceInternal.c)
 *     IommuDomainAttachDevice @ 0x140564090 (IommuDomainAttachDevice.c)
 *     IommuDomainAttachDeviceEx @ 0x140564290 (IommuDomainAttachDeviceEx.c)
 *     IommuRegisterInterfaceStateChangeCallback @ 0x140564930 (IommuRegisterInterfaceStateChangeCallback.c)
 *     IommuReserveLogicalAddressRange @ 0x140564B30 (IommuReserveLogicalAddressRange.c)
 *     HalpIommuCreateDmarPageTable @ 0x14056537C (HalpIommuCreateDmarPageTable.c)
 *     Amd64AddProfileSource @ 0x140567830 (Amd64AddProfileSource.c)
 *     Amd64InitializeCacheStatusEnhanced @ 0x140568914 (Amd64InitializeCacheStatusEnhanced.c)
 *     Amd64InitializeCacheStatusOriginal @ 0x140568B50 (Amd64InitializeCacheStatusOriginal.c)
 *     Amd64InitializeDataFabricStatusEnhanced @ 0x140568D4C (Amd64InitializeDataFabricStatusEnhanced.c)
 *     Amd64InitializeDataFabricStatusOriginal @ 0x140568EDC (Amd64InitializeDataFabricStatusOriginal.c)
 *     Amd64InitializeUncoreStatusEnhanced @ 0x140569288 (Amd64InitializeUncoreStatusEnhanced.c)
 *     Amd64InitializeUncoreStatusOriginal @ 0x140569324 (Amd64InitializeUncoreStatusOriginal.c)
 *     HalpBuddyAllocatorCreateAllocator @ 0x140571CEC (HalpBuddyAllocatorCreateAllocator.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1406FD3A4 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1406FD694 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpMcaInitializePcrContext @ 0x140B4DDF0 (HalpMcaInitializePcrContext.c)
 *     HalpInitMemoryCachingRequirementsTable @ 0x140B4E1E4 (HalpInitMemoryCachingRequirementsTable.c)
 *     HalpBuildResumeStructures @ 0x140B4EE68 (HalpBuildResumeStructures.c)
 *     HalpMapCR3Ex @ 0x140B5071C (HalpMapCR3Ex.c)
 *     HalpMapNvsArea @ 0x140B6EF40 (HalpMapNvsArea.c)
 *     HalpMceInitializeErrorPacket @ 0x140B6F19C (HalpMceInitializeErrorPacket.c)
 *     HalpAcpiDetectPiix4 @ 0x140C11300 (HalpAcpiDetectPiix4.c)
 *     HalpAcpiPopulateTableCache @ 0x140C113A8 (HalpAcpiPopulateTableCache.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140C1207C (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateMappingResources @ 0x140C1219C (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateReservedMapping @ 0x140C12338 (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140C12394 (HalpDmaAllocateReservedMappingArray.c)
 *     HalpDmaAllocateTranslationBuffer @ 0x140C12468 (HalpDmaAllocateTranslationBuffer.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140C12B98 (HalpDmaInitializeMasterAdapter.c)
 * Callees:
 *     RtlSetBits @ 0x14027C2D0 (RtlSetBits.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxAllocBuffer @ 0x14048E2EC (HalpMmAllocCtxAllocBuffer.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
  bool v30; // zf
  __int64 v31; // rax
  int v32; // r9d
  unsigned int v33; // ecx
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
    v6 = KeAcquireSpinLockRaiseToDpc(&qword_140FC2150);
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
LABEL_34:
          if ( !v55 )
            goto LABEL_19;
          v14 = v52;
          v33 = v5 + v9;
          v10 = *(_QWORD *)(v7 + 40);
          v13 = 0;
          if ( (unsigned int)v5 + v9 > v8 )
            v33 = v8;
          v11 = v33 - 1;
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
            goto LABEL_66;
          }
          if ( *++v20 )
            goto LABEL_84;
          v30 = !_BitScanReverse64((unsigned __int64 *)&v41, v21);
          if ( !v30 )
          {
            v42 = 63 - v41;
            goto LABEL_66;
          }
LABEL_90:
          v42 = 64;
LABEL_66:
          while ( 1 )
          {
            v23 = ((unsigned int)(((__int64)v20 - v17) >> 3) << 6) - v42;
            if ( v23 > v18 )
              goto LABEL_32;
            v43 = v5 - v42;
            v44 = &v20[(unsigned __int64)(unsigned int)(v5 - v42) >> 6];
            while ( ++v20 != v44 )
            {
              if ( *v20 )
                goto LABEL_84;
            }
            v47 = v43 & 0x3F;
            if ( !v47 )
              goto LABEL_17;
            v30 = !_BitScanForward64((unsigned __int64 *)&v48, *v20);
            if ( v30 )
              LODWORD(v48) = 64;
            if ( (unsigned int)v48 >= v47 )
              goto LABEL_17;
            do
            {
LABEL_84:
              v49 = v20;
              if ( (unsigned __int64)v20 > v40 )
                goto LABEL_32;
              ++v20;
            }
            while ( *v20 );
            v30 = !_BitScanReverse64((unsigned __int64 *)&v50, *v49);
            if ( v30 )
              goto LABEL_90;
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
                    goto LABEL_32;
                  v21 = *v20;
                  if ( *v20 != -1LL )
                  {
                    v35 = 0;
                    break;
                  }
                }
              }
              v30 = !_BitScanForward64((unsigned __int64 *)&v37, v21);
              if ( v30 )
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
                goto LABEL_32;
              v30 = !_BitScanReverse64((unsigned __int64 *)&v51, v21);
              if ( v30 )
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
                goto LABEL_32;
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
              goto LABEL_33;
            }
          }
LABEL_32:
          v23 = -1;
LABEL_33:
          v9 = *(_DWORD *)(v7 + 24);
          v12 = v53;
          v8 = *(_DWORD *)(v7 + 32);
          goto LABEL_34;
        }
        while ( 1 )
        {
          while ( v21 < 0 )
          {
            if ( (unsigned __int64)++v20 > v19 )
              goto LABEL_32;
            v21 = *v20;
          }
          v30 = !_BitScanReverse64((unsigned __int64 *)&v31, v21);
          if ( v30 )
            v32 = 64;
          else
            v32 = 63 - v31;
          v23 = (((unsigned int)(((__int64)v20 - v17) >> 3) + 1) << 6) - v32;
          if ( v23 > v18 )
            goto LABEL_32;
          v45 = v5 - v32;
          if ( (_DWORD)v5 == v32 )
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
          v30 = !_BitScanForward64((unsigned __int64 *)&v46, v21);
          if ( v30 )
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
    KeReleaseSpinLock(&qword_140FC2150, NewIrql);
    v29 = 0x4000LL;
  }
  v7 = HalpMmAllocCtxAllocBuffer(a1, v29);
  if ( !v7 )
    return v2;
  v24 = 0LL;
  v25 = KeAcquireSpinLockRaiseToDpc(&qword_140FC2150);
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
  KeReleaseSpinLock(&qword_140FC2150, v25);
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
