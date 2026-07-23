/*
 * XREFs of KiInitializeKernel @ 0x140B5A930
 * Callers:
 *     KiSystemStartup @ 0x140B4D3E0 (KiSystemStartup.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeHaltOnAddress @ 0x1404AE0FC (KeHaltOnAddress.c)
 *     HvlEnlightenProcessor @ 0x1404CC584 (HvlEnlightenProcessor.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheck @ 0x1404F9230 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x140539A0C (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     KiFatalFilter @ 0x1405ADE60 (KiFatalFilter.c)
 *     KiInitializeProcessorCycleAccumulation @ 0x1405ADF34 (KiInitializeProcessorCycleAccumulation.c)
 *     KeCompactServiceTable @ 0x1405B2400 (KeCompactServiceTable.c)
 *     KiStartPrcbThreads @ 0x1405B4938 (KiStartPrcbThreads.c)
 *     KeGetTopologyIdForProcessor @ 0x1405B7F80 (KeGetTopologyIdForProcessor.c)
 *     KiAddProcessorToCoreControlBlock @ 0x1405B814C (KiAddProcessorToCoreControlBlock.c)
 *     KiInitializeCoreControlBlock @ 0x1405B8DB4 (KiInitializeCoreControlBlock.c)
 *     KiSetHardwareSpeculationControlFeatures @ 0x1405BC50C (KiSetHardwareSpeculationControlFeatures.c)
 *     KiInitializeAndStartInitialThread @ 0x1405C03D4 (KiInitializeAndStartInitialThread.c)
 *     KiStartIdleThread @ 0x1405C07E0 (KiStartIdleThread.c)
 *     RtlGetXSaveFeatureFlags @ 0x1405E6070 (RtlGetXSaveFeatureFlags.c)
 *     HviGetHypervisorFeatures @ 0x1406623A0 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1406AC380 (KiSetUserTbFlushPending.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HvlPhase0Initialize @ 0x14070C3D8 (HvlPhase0Initialize.c)
 *     KiEnableXSave @ 0x140B4D11C (KiEnableXSave.c)
 *     KiDetectFpuLeakage @ 0x140B4D6C0 (KiDetectFpuLeakage.c)
 *     HalInitSystem @ 0x140B4D700 (HalInitSystem.c)
 *     KiCompleteKernelInit @ 0x140B57CA0 (KiCompleteKernelInit.c)
 *     KiConfigureProcessorBlock @ 0x140B57FF8 (KiConfigureProcessorBlock.c)
 *     KeInitializeClockOtherProcessors @ 0x140B5950C (KeInitializeClockOtherProcessors.c)
 *     KiCheckEnqueueStoreFeaturePresence @ 0x140B59EF8 (KiCheckEnqueueStoreFeaturePresence.c)
 *     KiConfigureAmdTprLowerInterruptDelayWorkaround @ 0x140B59F84 (KiConfigureAmdTprLowerInterruptDelayWorkaround.c)
 *     KiInitializeTopologyStructures @ 0x140B5B318 (KiInitializeTopologyStructures.c)
 *     KiSetCacheInformation @ 0x140B5B7B0 (KiSetCacheInformation.c)
 *     KiSetControlEnforcement @ 0x140B5BBA0 (KiSetControlEnforcement.c)
 *     PoInitializePrcb @ 0x140B61F64 (PoInitializePrcb.c)
 *     KiSetPageAttributesTable @ 0x140B6F4E0 (KiSetPageAttributesTable.c)
 *     KiCheckMicrocode @ 0x140B7033C (KiCheckMicrocode.c)
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 *     KiIsKernelCfgActive @ 0x140C28C84 (KiIsKernelCfgActive.c)
 *     KiInitSystem @ 0x140C2A2B4 (KiInitSystem.c)
 *     RtlInitKernelModeSpecialMachineFrameEntries @ 0x140C38E68 (RtlInitKernelModeSpecialMachineFrameEntries.c)
 */

__int64 __fastcall KiInitializeKernel(
        struct _KPROCESS *a1,
        unsigned __int64 a2,
        __int64 a3,
        struct _KPRCB *a4,
        int a5,
        __int64 a6)
{
  unsigned __int8 CpuVendor; // al
  int v8; // eax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  ULONG_PTR v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  int v17; // r12d
  int v18; // eax
  ULONG_PTR v19; // rbx
  char XSaveFeatureFlags; // al
  ULONG_PTR v21; // rcx
  ULONG_PTR v22; // rbx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  ULONG_PTR v25; // r8
  __int64 v26; // r10
  __int64 v27; // r9
  int TopologyIdForProcessor; // eax
  __int64 v29; // rcx
  int v30; // r9d
  int v31; // r11d
  __int64 v32; // r12
  __int64 v33; // rbx
  int v34; // r12d
  unsigned int v35; // ebx
  __int64 result; // rax
  ULONG_PTR BugCheckParameter1; // [rsp+30h] [rbp-2A8h] BYREF
  __int64 v38; // [rsp+38h] [rbp-2A0h] BYREF
  unsigned __int64 v39; // [rsp+40h] [rbp-298h]
  __int64 v40; // [rsp+48h] [rbp-290h]
  unsigned __int8 *p_CpuVendor; // [rsp+50h] [rbp-288h]
  struct _KPROCESS *v42; // [rsp+58h] [rbp-280h]
  unsigned __int64 v43; // [rsp+60h] [rbp-278h]
  struct _KPRCB *v44; // [rsp+68h] [rbp-270h]
  __int64 v45; // [rsp+70h] [rbp-268h]
  __int128 v46; // [rsp+78h] [rbp-260h] BYREF
  _DWORD v47[7]; // [rsp+90h] [rbp-248h] BYREF
  int v48; // [rsp+ACh] [rbp-22Ch]

  v38 = a3;
  v39 = a2;
  v42 = a1;
  v43 = a2;
  v44 = a4;
  v40 = a6;
  v45 = a6;
  v46 = 0LL;
  if ( !a5 )
  {
    HvlPhase0Initialize(a6);
    if ( KiSystemCallSelector == 1 && (HvlEnlightenments & 0x80000) != 0 )
      *(_DWORD *)(MmWriteableSharedUserData + 776) = 1;
  }
  BugCheckParameter1 = a4->FeatureBits;
  p_CpuVendor = &a4->CpuVendor;
  CpuVendor = a4->CpuVendor;
  if ( CpuVendor == 2 || ((CpuVendor - 1) & 0xFD) == 0 )
    KiSetHardwareSpeculationControlFeatures((__int64)a4, BugCheckParameter1);
  KiCheckMicrocode(a4);
  memset_0(v47, 0, 0x200uLL);
  _fxsave(v47);
  if ( a5 )
  {
    if ( KiFpuLeakage )
      BugCheckParameter1 |= 0x20000000000uLL;
    KiSetPageAttributesTable();
    KiInitializeTopologyStructures((ULONG_PTR)a4);
    v17 = 65471;
  }
  else
  {
    KiDetectFpuLeakage();
    KiFpuLeakage = v8;
    if ( v8 )
      BugCheckParameter1 |= 0x20000000000uLL;
    if ( KiFlushPcid )
    {
      v9 = __readcr3();
      __writecr3(v9);
      if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
        KiSetUserTbFlushPending();
    }
    else
    {
      v10 = __readcr4();
      if ( (v10 & 0x20080) != 0 )
      {
        __writecr4(v10 ^ 0x80);
        __writecr4(v10);
      }
      else
      {
        v11 = __readcr3();
        __writecr3(v11);
      }
    }
    KiSetPageAttributesTable();
    if ( MEMORY[0xFFFFF78000000280] )
      v12 = BugCheckParameter1 | 0x80000000;
    else
      v12 = BugCheckParameter1 & 0xFFFFFFFF3FFFFFFFuLL | 0x40000000;
    BugCheckParameter1 = v12;
    v13 = __readcr4();
    __writecr4(v13 | 0x18);
    if ( KiFlushPcid )
    {
      v14 = __readcr3();
      __writecr3(v14);
      if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
        KiSetUserTbFlushPending();
    }
    else
    {
      v15 = __readcr4();
      if ( (v15 & 0x20080) != 0 )
      {
        __writecr4(v15 ^ 0x80);
        __writecr4(v15);
      }
      else
      {
        v16 = __readcr3();
        __writecr3(v16);
      }
    }
    KiConfigureProcessorBlock((__int64)a4);
    KiInitializeTopologyStructures((ULONG_PTR)a4);
    v17 = 65471;
    v18 = 65471;
    if ( v48 )
      v18 = v48;
    KiMxCsrMask = v18;
    KeCompactServiceTable((int *)KiServiceTable, (unsigned __int8 *)KiArgumentTable, KiServiceLimit, 0LL, 0x40000000);
  }
  KiInitializeCoreControlBlock((__int64)&a4->LocalCoreControlBlock, &a4->LocalCoreControlBlockShadow.Lock);
  KiAddProcessorToCoreControlBlock(&a4->LocalCoreControlBlock.ProcessorCount, (ULONG_PTR)a4);
  KiSetCacheInformation();
  PoInitializePrcb(a4);
  a4->ProcessorProfileControlArea = 0LL;
  a4->ProfileEventIndexAddress = &a4->ProfileEventIndexAddress;
  if ( MEMORY[0xFFFFF780000003D8] )
  {
    BugCheckParameter1 |= 0x800000uLL;
    v19 = BugCheckParameter1;
    XSaveFeatureFlags = RtlGetXSaveFeatureFlags();
    v21 = BugCheckParameter1;
    if ( (XSaveFeatureFlags & 8) != 0 )
    {
      v19 = BugCheckParameter1 | 0x8000;
      BugCheckParameter1 = v19;
      v21 = v19;
    }
    if ( (XSaveFeatureFlags & 0x10) != 0 )
    {
      v21 = v19 | 0x4000000000LL;
      BugCheckParameter1 = v19 | 0x4000000000LL;
    }
    if ( (XSaveFeatureFlags & 0x40) != 0 )
      BugCheckParameter1 = v21 | 0x80000000000000LL;
  }
  KiSetControlEnforcement(a4, &BugCheckParameter1);
  KiCheckEnqueueStoreFeaturePresence((__int64)a4, &BugCheckParameter1);
  v22 = BugCheckParameter1;
  if ( a5 )
  {
    if ( v48 )
      v17 = v48;
    v25 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL | 0x8000000;
    if ( (BugCheckParameter1 & 0x8000000) == 0 )
      v25 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL;
    if ( *p_CpuVendor == 2 && a4->CpuType == 6 && a4->CpuModel == 23 && a4->CpuStepping == 10 )
    {
      KeGetTopologyIdForProcessor((__int64)a4, 4);
      v27 = 0LL;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        while ( 1 )
        {
          TopologyIdForProcessor = KeGetTopologyIdForProcessor(KiProcessorBlock[v27], 4);
          if ( v31 == TopologyIdForProcessor )
            break;
          v27 = (unsigned int)(v30 + 1);
          if ( (unsigned int)v27 >= (unsigned int)KeNumberProcessors_0 )
            goto LABEL_59;
        }
        v26 = v29;
      }
LABEL_59:
      v22 = BugCheckParameter1 & 0xFFFFFFFFFFEFFFFFuLL;
      if ( (*(_DWORD *)(v26 + 36768) & 0x100000) != 0 )
        v22 |= 0x100000uLL;
    }
    if ( v22 != v25
      || v17 != KiMxCsrMask
      || *(_DWORD *)(KiProcessorBlock[0] + 232) != a4->CFlushSize
      || *(_DWORD *)(KiProcessorBlock[0] + 160) != a4->CoresPerPhysicalProcessor
      || *(_DWORD *)(KiProcessorBlock[0] + 164) != a4->LogicalProcessorsPerCore )
    {
      KeBugCheckEx(0x3Eu, v22, v25, 0LL, 0LL);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 2u);
    __writecr8(2uLL);
    HvlEnlightenProcessor(0);
  }
  else
  {
    KeProcessorArchitecture = 9;
    KeProcessorLevel = a4->CpuType;
    KeProcessorRevision = a4->CpuStep;
    KeFeatureBits = BugCheckParameter1;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 1u);
    __writecr8(1uLL);
    KiFreezeExecutionLock = 0LL;
    KiInitSystem(v42);
    v23 = __rdtsc();
    KiWaitNever = __ROR8__(v23 ^ __ROL8__(v23, 43), v23 & 0xF);
    v24 = __rdtsc();
    KiWaitAlways = __ROL8__(__ROR8__(v24, 47) ^ v24, v24 & 0xF);
    HviGetHypervisorFeatures(&v46);
    if ( (WORD6(v46) & 0x1000) != 0 )
      KiNPIEPEnabled = 1;
    if ( (unsigned int)KiIsKernelCfgActive() )
      RtlInitKernelModeSpecialMachineFrameEntries();
  }
  if ( KiNPIEPEnabled )
    __writemsr(0x40000040u, 0xFuLL);
  KiEnableXSave(0LL);
  *(_QWORD *)(MmWriteableSharedUserData + 760) = 195LL;
  *(_BYTE *)(MmWriteableSharedUserData + 630) = 1;
  *(_BYTE *)(MmWriteableSharedUserData + 631) = 1;
  *(_BYTE *)(MmWriteableSharedUserData + 634) = 1;
  *(_BYTE *)(MmWriteableSharedUserData + 636) = 1;
  *(_BYTE *)(MmWriteableSharedUserData + 637) = 1;
  *(_BYTE *)(MmWriteableSharedUserData + 638) = 1;
  *(_BYTE *)(MmWriteableSharedUserData + 642) = 1;
  if ( (v22 & 0x80000) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 641) = 1;
  if ( (v22 & 0x4000) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 635) = 1;
  if ( (v22 & 0x800000) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 645) = 1;
  if ( (v22 & 0x10000000) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 650) = 1;
  if ( (v22 & 0x4000000) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 648) = 1;
  if ( (v22 & 0x8000000) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 649) = 1;
  if ( (v22 & 0x100000000LL) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 656) = 1;
  if ( (v22 & 0x400000000LL) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 660) = 1;
  if ( (v22 & 0x800000000000LL) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 664) = 1;
  if ( (v22 & 0x1000000000000LL) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 665) = 1;
  if ( (v22 & 0x2000000000000LL) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 666) = 1;
  if ( (v22 & 0x4000000000000LL) != 0 && (MEMORY[0xFFFFF780000003D8] & 4) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 667) = 1;
  if ( (v22 & 0x8000000000000LL) != 0 && (MEMORY[0xFFFFF780000003D8] & 4) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 668) = 1;
  if ( (v22 & 0x10000000000000LL) != 0 && (MEMORY[0xFFFFF780000003D8] & 0xE0) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 669) = 1;
  if ( (v22 & 0x40000000000000LL) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 670) = 1;
  if ( (v22 & 0x200000000000000LL) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 688) = 1;
  if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() && (v22 & 0x400000000000000LL) != 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 689) = 1;
  *(_BYTE *)(MmWriteableSharedUserData + 749) = KiVirtFlags;
  v32 = v39;
  if ( a5 )
  {
    KiStartIdleThread(v39, a4, v38);
    v33 = v40;
  }
  else
  {
    v33 = v40;
    KiInitializeAndStartInitialThread(v39, v38, (__int64)a4, v40);
  }
  if ( a5 )
  {
    KiStartPrcbThreads((__int64)a4);
    if ( !(unsigned __int8)HalInitSystem(1uLL, 0LL) )
      KeBugCheck(0x5Cu);
  }
  else
  {
    InitBootProcessor(v33);
  }
  if ( *p_CpuVendor == 1 )
    KiConfigureAmdTprLowerInterruptDelayWorkaround((ULONG_PTR)a4, a5);
  KiCompleteKernelInit((__int64)a4, v32, a5);
  v34 = KiBootProcessorsStarted;
  *(_QWORD *)(v33 + 136) = 0LL;
  v35 = 0;
  while ( 1 )
  {
    result = (unsigned int)KiBarrierWait;
    LODWORD(v38) = KiBarrierWait;
    if ( !KiBarrierWait )
      break;
    if ( (++v35 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      if ( v34 )
        HvlNotifyLongSpinWait(v35);
      else
        KeHaltOnAddress((__int64)&KiBarrierWait, (__int64)&v38, 4LL);
    }
    else
    {
      _mm_pause();
    }
  }
  if ( a5 )
    result = KiInitializeProcessorCycleAccumulation((__int64)a4);
  if ( KiClockTimerPerCpuTickScheduling )
  {
    if ( a5 )
      return KeInitializeClockOtherProcessors((__int64)a4);
  }
  return result;
}
