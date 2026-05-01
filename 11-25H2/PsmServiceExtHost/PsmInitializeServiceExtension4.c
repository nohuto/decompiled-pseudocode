/*
 * XREFs of PsmInitializeServiceExtension4 @ 0x1800778B0
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180001954 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     ?ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800067CC (-ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18001B7B0 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D360 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockAcquireExclusive @ 0x18002B8B0 (CempLockAcquireExclusive.c)
 *     CempLockTrackerMarkAcquired @ 0x1800380B0 (CempLockTrackerMarkAcquired.c)
 *     CempLockTrackerMarkReleased @ 0x1800381B0 (CempLockTrackerMarkReleased.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18007249C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     IsQueryUserTokenPresent @ 0x180072B2C (IsQueryUserTokenPresent.c)
 *     IsPsmQueryBackgroundActivationTypePresent @ 0x180072C0C (IsPsmQueryBackgroundActivationTypePresent.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180072E04 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     RmpLaunchAllRpcServers @ 0x180073D2C (RmpLaunchAllRpcServers.c)
 *     ?ArManagerCreate@@YAJPEAU_TP_CALLBACK_ENVIRON_V3@@PEAPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180078064 (-ArManagerCreate@@YAJPEAU_TP_CALLBACK_ENVIRON_V3@@PEAPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArManagerDestroy@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180078138 (-ArManagerDestroy@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ??0ModernResourceEnforcer@@QEAA@PEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@@Z @ 0x180084AD4 (--0ModernResourceEnforcer@@QEAA@PEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@@Z.c)
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800852F8 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180085508 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800856B0 (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800859E4 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180085B48 (-RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z @ 0x180085F78 (-RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z.c)
 *     SystemStateTrackerCreate @ 0x18009C85C (SystemStateTrackerCreate.c)
 *     SystemStateTrackerStart @ 0x18009C91C (SystemStateTrackerStart.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall PsmInitializeServiceExtension4(struct _PSM_EXT_INTERNAL_FUNCTION_TABLE4 *a1)
{
  struct _ACTIVITY_RESTARTER *v2; // rsi
  ModernResourceEnforcer *v3; // rax
  struct ModernResourceEnforcer *v4; // rdi
  int AllModuleState; // ebx
  struct ModernResourceEnforcer *v6; // rcx
  struct _RM_SERVICE_GLOBALS *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rdx
  struct _RM_SERVICE_GLOBALS *v10; // r14
  struct _RM_SERVICE_GLOBALS *v11; // rbx
  struct _ACTIVITY_RESTARTER *v12; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v13[5]; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v14[176]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v15[144]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v16[144]; // [rsp+190h] [rbp+90h] BYREF

  memset_0(v15, 0, 0x88uLL);
  memset_0(v16, 0, 0x88uLL);
  HampLockTrackerId = TlsAlloc();
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v15);
  v2 = 0LL;
  v12 = 0LL;
  if ( IsPsmQueryBackgroundActivationTypePresent() && IsQueryUserTokenPresent() )
  {
    v3 = (ModernResourceEnforcer *)operator new(0x130uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v3 || (v4 = ModernResourceEnforcer::ModernResourceEnforcer(v3, a1)) == 0LL )
    {
LABEL_20:
      v11 = RmSvcGlobals;
      if ( RmSvcGlobals )
      {
        RmpRundownAllModules(RmSvcGlobals);
        RmpCleanupAllModules(v11);
        RmSvcGlobals = 0LL;
      }
      goto LABEL_22;
    }
    AllModuleState = SystemStateTrackerCreate();
    v6 = v4;
    if ( AllModuleState < 0 )
      goto LABEL_14;
    AllModuleState = SystemStateTrackerStart(v4);
    v6 = v4;
    if ( AllModuleState < 0 )
      goto LABEL_14;
    RmSvcGlobals = (struct _RM_SERVICE_GLOBALS *)&RmpSvcGlobals;
    TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_1800E7278, 0LL, 0LL);
    TraceLoggingRegisterEx_EventRegister_EventSetInformation(
      (ULONGLONG *)&dword_1800E72B0,
      (ULONGLONG)HampManagerTracingControlCallback,
      (ULONGLONG)RmSvcGlobals + 2248);
    v7 = RmSvcGlobals;
    memset_0(v14, 0, sizeof(v14));
    RmpGetResourceManagerRuntimeConfiguration((struct _RM_RUNTIME_CONFIGURATION *)v14);
    RmpInitializeAllModules((struct _RM_RUNTIME_CONFIGURATION *)v14, v7);
    AllModuleState = RmpAllocateAllModuleState(v4, v7);
    if ( AllModuleState >= 0 )
    {
      AllModuleState = RmpStartAllModules(v7);
      if ( AllModuleState >= 0 )
      {
        g_pResourceManager = (ExecutionModel::ResourceManager *)*((_QWORD *)RmSvcGlobals + 442);
        (*(void (__fastcall **)(ExecutionModel::ResourceManager *))(*(_QWORD *)g_pResourceManager + 8LL))(g_pResourceManager);
        AllModuleState = RmpLaunchAllRpcServers();
        v6 = v4;
        if ( AllModuleState < 0 )
        {
LABEL_14:
          (*(void (__fastcall **)(struct ModernResourceEnforcer *))(*(_QWORD *)v6 + 16LL))(v6);
          goto LABEL_17;
        }
        ArLockTrackerId = TlsAlloc();
        AllModuleState = ArManagerCreate((struct _TP_CALLBACK_ENVIRON_V3 *)((char *)RmSvcGlobals + 3224), &v12);
        v6 = v4;
        if ( AllModuleState < 0 )
        {
          v2 = v12;
          goto LABEL_14;
        }
        ArUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v16);
        CempLockTrackerMarkAcquired(ArLockTrackerId, v8, 0, 0);
        CempLockAcquireExclusive((__int64)&ArGlobalLock);
        dword_1800E8470 = 0;
        ArGlobals = v12;
        RtlReleaseSRWLockExclusive(&ArGlobalLock);
        CempLockTrackerMarkReleased(ArLockTrackerId, v9, 0);
        CempLockTrackerClearForThread(ArLockTrackerId);
        v10 = RmSvcGlobals;
        if ( IsNotifyGameModeExtensionRecipientsPresentPresent() )
        {
          v13[0] = RmGameModeCpuSetManagerCreateClientContext;
          v13[1] = RmGameModeCpuSetManagerAcquireExplicitCpuSets;
          v13[2] = RmGameModeCpuSetManagerRegisterProcessWithAllocation;
          v13[3] = RmGameModeCpuSetManagerReleaseAllocation;
          v13[4] = RmGameModeCpuSetManagerReleaseProcessRegistration;
          InitializeGameModeExtension(v13, v10);
        }
      }
    }
    v6 = v4;
    goto LABEL_14;
  }
  AllModuleState = -1073741822;
LABEL_17:
  if ( v2 )
    ArManagerDestroy(v2);
  if ( AllModuleState < 0 )
    goto LABEL_20;
LABEL_22:
  CempLockTrackerClearForThread(HampLockTrackerId);
}
