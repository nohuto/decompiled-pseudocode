/*
 * XREFs of HalpMmAllocCtxAlloc @ 0x14024BD68
 * Callers:
 *     HalpBuddyAllocatorSplitNode @ 0x14024B038 (HalpBuddyAllocatorSplitNode.c)
 *     HalpDmaAllocateMapRegisters @ 0x14038E95C (HalpDmaAllocateMapRegisters.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x1403ABF8C (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x14041011C (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpCmciInitializeErrorPacket @ 0x14047CC18 (HalpCmciInitializeErrorPacket.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x14048F950 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpIommuGetHardwareDomain @ 0x1404CE03C (HalpIommuGetHardwareDomain.c)
 *     HalpHvInitMcaPcrContext @ 0x1404CE1F8 (HalpHvInitMcaPcrContext.c)
 *     HalpIommuCloneDeviceId @ 0x1404D9C34 (HalpIommuCloneDeviceId.c)
 *     HalpTimerInitSystem @ 0x14053AFA0 (HalpTimerInitSystem.c)
 *     HalInitializeBios @ 0x14053BD40 (HalInitializeBios.c)
 *     HalpAcpiAllocateMemory @ 0x14053D0C0 (HalpAcpiAllocateMemory.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x14053DAB0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x1405429CC (HalpInterruptSetLineSpecificOverride.c)
 *     HalpAllocatePmcCounterSetEx @ 0x140545110 (HalpAllocatePmcCounterSetEx.c)
 *     HalpTscReserveResources @ 0x1405496F0 (HalpTscReserveResources.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x14054AA40 (HalpHvInitMcaStatusMsrCache.c)
 *     HalpIommuCreateDevice @ 0x14054D63C (HalpIommuCreateDevice.c)
 *     IommupPasidDeviceCreate @ 0x14054E5AC (IommupPasidDeviceCreate.c)
 *     HalpDmaAllocateMapRegisterFrame @ 0x14054EDEC (HalpDmaAllocateMapRegisterFrame.c)
 *     HalpDmaAllocateDomain @ 0x1405507CC (HalpDmaAllocateDomain.c)
 *     HalpDmaGetReservedRegionsForDeviceResources @ 0x140550BD4 (HalpDmaGetReservedRegionsForDeviceResources.c)
 *     HalpDmaGetReservedRegionsForHybridPassthroughDomain @ 0x140550E60 (HalpDmaGetReservedRegionsForHybridPassthroughDomain.c)
 *     HalpDmaGetReservedRegionsForTranslateDomain @ 0x140550EE8 (HalpDmaGetReservedRegionsForTranslateDomain.c)
 *     HalpDmaInitializeControllers @ 0x140551DA8 (HalpDmaInitializeControllers.c)
 *     HalpIommuGetDeviceId @ 0x140552280 (HalpIommuGetDeviceId.c)
 *     HalpIommuAllocateDmaDomain @ 0x1405534C4 (HalpIommuAllocateDmaDomain.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x140553870 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpNumaAddRangeProximity @ 0x140557A80 (HalpNumaAddRangeProximity.c)
 *     EmonAddProfileSource @ 0x14055A820 (EmonAddProfileSource.c)
 *     EmonAllocateResources @ 0x14055AD8C (EmonAllocateResources.c)
 *     ExtEnvAllocateMemory @ 0x14055FA30 (ExtEnvAllocateMemory.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14055FAA4 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpRegisterUsbController @ 0x140562128 (HalpRegisterUsbController.c)
 *     IommuEnableDevicePasid @ 0x140563B20 (IommuEnableDevicePasid.c)
 *     IommuGetLibraryContext @ 0x140564360 (IommuGetLibraryContext.c)
 *     IommupGetSystemContext @ 0x140564CE0 (IommupGetSystemContext.c)
 *     IommupMapDeviceInternal @ 0x140564E48 (IommupMapDeviceInternal.c)
 *     IommuDomainAttachDevice @ 0x140566390 (IommuDomainAttachDevice.c)
 *     IommuDomainAttachDeviceEx @ 0x140566590 (IommuDomainAttachDeviceEx.c)
 *     IommuRegisterInterfaceStateChangeCallback @ 0x140566C30 (IommuRegisterInterfaceStateChangeCallback.c)
 *     IommuRegisterInterfaceStateChangeCallbackLegacy @ 0x140566E30 (IommuRegisterInterfaceStateChangeCallbackLegacy.c)
 *     IommuReserveLogicalAddressRange @ 0x140566FA0 (IommuReserveLogicalAddressRange.c)
 *     HalpIommuCreateDmarPageTable @ 0x14056788C (HalpIommuCreateDmarPageTable.c)
 *     Amd64AddProfileSource @ 0x14056A3A0 (Amd64AddProfileSource.c)
 *     Amd64InitializeCacheStatusEnhanced @ 0x14056B484 (Amd64InitializeCacheStatusEnhanced.c)
 *     Amd64InitializeCacheStatusOriginal @ 0x14056B6C0 (Amd64InitializeCacheStatusOriginal.c)
 *     Amd64InitializeDataFabricStatusEnhanced @ 0x14056B8BC (Amd64InitializeDataFabricStatusEnhanced.c)
 *     Amd64InitializeDataFabricStatusOriginal @ 0x14056BA4C (Amd64InitializeDataFabricStatusOriginal.c)
 *     Amd64InitializeUncoreStatusEnhanced @ 0x14056BDF8 (Amd64InitializeUncoreStatusEnhanced.c)
 *     Amd64InitializeUncoreStatusOriginal @ 0x14056BE94 (Amd64InitializeUncoreStatusOriginal.c)
 *     HalpBuddyAllocatorCreateAllocator @ 0x14057485C (HalpBuddyAllocatorCreateAllocator.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1406FF764 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1406FFA54 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpMcaInitializePcrContext @ 0x140B4BDB0 (HalpMcaInitializePcrContext.c)
 *     HalpInitMemoryCachingRequirementsTable @ 0x140B4C1A4 (HalpInitMemoryCachingRequirementsTable.c)
 *     HalpBuildResumeStructures @ 0x140B4CE28 (HalpBuildResumeStructures.c)
 *     HalpMapCR3Ex @ 0x140B4E6CC (HalpMapCR3Ex.c)
 *     HalpMapNvsArea @ 0x140B6D6A0 (HalpMapNvsArea.c)
 *     HalpMceInitializeErrorPacket @ 0x140B6D8FC (HalpMceInitializeErrorPacket.c)
 *     HalpAcpiDetectPiix4 @ 0x140C0F300 (HalpAcpiDetectPiix4.c)
 *     HalpAcpiPopulateTableCache @ 0x140C0F3A8 (HalpAcpiPopulateTableCache.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140C1007C (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateMappingResources @ 0x140C1019C (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateReservedMapping @ 0x140C10338 (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140C10394 (HalpDmaAllocateReservedMappingArray.c)
 *     HalpDmaAllocateTranslationBuffer @ 0x140C10468 (HalpDmaAllocateTranslationBuffer.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140C10B98 (HalpDmaInitializeMasterAdapter.c)
 * Callees:
 *     RtlSetBits @ 0x14024BCC0 (RtlSetBits.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxAllocBuffer @ 0x14037DBE0 (HalpMmAllocCtxAllocBuffer.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
    v6 = KeAcquireSpinLockRaiseToDpc(&qword_140FC2B30);
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
    KeReleaseSpinLock(&qword_140FC2B30, NewIrql);
    v29 = 0x4000LL;
  }
  v7 = HalpMmAllocCtxAllocBuffer(a1, v29);
  if ( !v7 )
    return v2;
  v24 = 0LL;
  v25 = KeAcquireSpinLockRaiseToDpc(&qword_140FC2B30);
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
  KeReleaseSpinLock(&qword_140FC2B30, v25);
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
