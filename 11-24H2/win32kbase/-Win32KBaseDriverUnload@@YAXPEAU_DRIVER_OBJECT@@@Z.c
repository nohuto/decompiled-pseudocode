/*
 * XREFs of ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140164AC0
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005A930 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005AAB0 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MultiUserNtGreCleanup @ 0x140089C68 (MultiUserNtGreCleanup.c)
 *     ?IsSessionGlobalsAreaAllocated@Base@Gre@@YA_NXZ @ 0x14008A370 (-IsSessionGlobalsAreaAllocated@Base@Gre@@YA_NXZ.c)
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x14008A594 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1COPM@@QEAA@XZ @ 0x14008AE80 (--1COPM@@QEAA@XZ.c)
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x14008C2B0 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 *     InputUnInitialize @ 0x1400D054C (InputUnInitialize.c)
 *     CoreMsgUninitialize @ 0x1400FC290 (CoreMsgUninitialize.c)
 *     ?UninitializeUserTypeIsolation@@YAXXZ @ 0x140118D78 (-UninitializeUserTypeIsolation@@YAXXZ.c)
 *     ?DestroyHandleTableObjects@@YAXXZ @ 0x14013657C (-DestroyHandleTableObjects@@YAXXZ.c)
 *     ??_GCSynchronizationManager@DirectComposition@@IEAAPEAXI@Z @ 0x140140654 (--_GCSynchronizationManager@DirectComposition@@IEAAPEAXI@Z.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x1401483DC (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     ?CleanupDomainLocks@@YAXXZ @ 0x140148598 (-CleanupDomainLocks@@YAXXZ.c)
 *     ?UninitializeWin32SiloGlobals@@YAXXZ @ 0x140152C9C (-UninitializeWin32SiloGlobals@@YAXXZ.c)
 *     ?FreeWin32KSyscallFilter@@YAXXZ @ 0x140154584 (-FreeWin32KSyscallFilter@@YAXXZ.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x140165224 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     ?UninitializeWin32PoolTracking@@YAXXZ @ 0x140197FE4 (-UninitializeWin32PoolTracking@@YAXXZ.c)
 *     FreePerSessionWin32kCall @ 0x14019DB28 (FreePerSessionWin32kCall.c)
 *     FreeWin32kApiSetTable @ 0x14019DBC4 (FreeWin32kApiSetTable.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x1401A3E34 (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 *     ??1CQoSReport@@QEAA@XZ @ 0x1401A4848 (--1CQoSReport@@QEAA@XZ.c)
 *     ?CloseCoreMsgPort@CoreMessagingKPort@@AEAAXXZ @ 0x1401A7C14 (-CloseCoreMsgPort@CoreMessagingKPort@@AEAAXXZ.c)
 *     ?UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x1401A90D8 (-UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ.c)
 *     ?UninitializeBaseWppLog@@YAXXZ @ 0x1401AD7E0 (-UninitializeBaseWppLog@@YAXXZ.c)
 *     ??_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z @ 0x1401B3EEC (--_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z.c)
 *     RIMUnInitialize @ 0x1401D3790 (RIMUnInitialize.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x140222888 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     EditionUninitializeWppLogging @ 0x14023B23C (EditionUninitializeWppLogging.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall Win32KBaseDriverUnload(struct _DRIVER_OBJECT *a1)
{
  char v1; // bl
  bool v2; // di
  __int64 UserSessionState; // rax
  int v4; // r8d
  int v5; // edx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int (*v10)(void); // rax
  void (*v11)(void); // rax
  int (*v12)(void); // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  void (*v15)(void); // rax
  unsigned int v16; // edx
  __int64 DCompSessionState; // rbx
  void *v18; // rcx
  struct _ERESOURCE *v19; // rcx
  __int64 v20; // rdx
  DirectComposition::CSynchronizationManager *v21; // rcx
  Gre::Base *v22; // rcx
  int (*v23)(void); // rax
  __int64 v24; // rdx
  void (*v25)(void); // rax
  __int64 v26; // rcx
  __int64 v27; // rdi
  OPM *v28; // rbx
  void *v29; // rdx
  Gre::Base *v30; // rcx
  __int64 v31; // rcx
  _QWORD *v32; // rcx
  __int64 v33; // rcx
  char *v34; // rdi
  __int64 v35; // rcx
  char *v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  char *v42; // rbx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rcx
  int (*v66)(void); // rax
  __int64 v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rcx
  void (__fastcall *v70)(__int64); // rax
  __int64 v71; // rcx
  __int64 v72; // rbx
  char *v73; // rdi
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  unsigned int v77; // edx
  CAsyncKeyEventMonitor *v78; // rcx
  int (*v79)(void); // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  void (*v82)(void); // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // rax
  char *v87; // rbx
  __int64 v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rbx
  char *v95; // rdi
  __int64 v96; // rcx
  PDRIVER_OBJECT v97; // rbx
  __int64 SessionState; // rax
  __int64 v99; // rcx
  __int64 v100; // rax
  _BYTE v101[256]; // [rsp+40h] [rbp-108h] BYREF

  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || (v1 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v1 = 0;
  }
  v2 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v4) = v2;
    LOBYTE(v5) = v1;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v5,
      v4,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      14,
      11,
      (__int64)&WPP_9723802cc44d3ab29e76f6ade2a2f4e4_Traceguids);
  }
  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v101);
  v9 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v7, v6) + 48);
  v10 = *(int (**)(void))(v9 + 4296);
  if ( v10 )
  {
    if ( v10() >= 0 )
    {
      v9 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v9, v8) + 48);
      v11 = *(void (**)(void))(v9 + 4304);
      if ( v11 )
        v11();
    }
  }
  v12 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v9, v8) + 48) + 248LL);
  if ( v12 )
  {
    if ( v12() >= 0 )
    {
      v15 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v14, v13) + 48) + 256LL);
      if ( v15 )
        v15();
    }
  }
  DCompSessionState = W32GetDCompSessionState();
  v18 = *(void **)(DCompSessionState + 16);
  if ( v18 )
    DirectComposition::CConnection::`scalar deleting destructor'(v18, v16);
  v19 = *(struct _ERESOURCE **)(DCompSessionState + 32);
  if ( v19 )
  {
    ExDeleteResourceLite(v19);
    GreDeleteFastMutex(*(char **)(DCompSessionState + 32));
    *(_QWORD *)(DCompSessionState + 32) = 0LL;
  }
  v21 = *(DirectComposition::CSynchronizationManager **)(W32GetDCompSessionState() + 24);
  if ( v21 )
    DirectComposition::CSynchronizationManager::`scalar deleting destructor'(v21);
  v22 = *(Gre::Base **)(W32GetWin32kBaseApiSetTable(v21, v20) + 48);
  v23 = (int (*)(void))*((_QWORD *)v22 + 35);
  if ( v23 )
  {
    if ( v23() >= 0 )
    {
      v22 = *(Gre::Base **)(W32GetWin32kBaseApiSetTable(v22, v24) + 48);
      v25 = (void (*)(void))*((_QWORD *)v22 + 36);
      if ( v25 )
        v25();
    }
  }
  if ( Gre::Base::IsSessionGlobalsAreaAllocated(v22) )
  {
    v27 = *(_QWORD *)(W32GetSessionState(v26) + 88);
    v28 = *(OPM **)(v27 + 3648);
    if ( v28 )
    {
      COPM::~COPM(*(COPM **)(v27 + 3648));
      OPM::OPMFreeMemory(v28, v29);
    }
    *(_QWORD *)(v27 + 3648) = 0LL;
  }
  HYDRA_HINT(128LL);
  MultiUserNtGreCleanup(v30);
  HYDRA_HINT(256LL);
  W32UnregisterSessionProcess();
  if ( *(_QWORD *)(W32GetUserSessionState(v31) + 57008) )
  {
    v32 = (_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v32) + 57008) + 24LL);
    if ( (_QWORD *)*v32 != v32 )
    {
      v33 = *(_QWORD *)(W32GetUserSessionState(v32) + 57008);
      v34 = *(char **)(v33 + 24);
      if ( v34 != (char *)(*(_QWORD *)(W32GetUserSessionState(v33) + 57008) + 24LL) )
      {
        do
        {
          v36 = *(char **)v34;
          GreDeleteFastMutex(v34);
          v34 = v36;
          v35 = *(_QWORD *)(W32GetUserSessionState(v37) + 57008) + 24LL;
        }
        while ( v36 != (char *)v35 );
      }
      v32 = (_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v35) + 57008) + 24LL);
      v32[1] = v32;
      *v32 = v32;
    }
  }
  InputUnInitialize((__int64)v32);
  Win32kNtUserCleanup();
  DestroyHandleTableObjects(v38);
  CleanupDomainLocks(v39);
  EnterLeaveCritMitRitHandOffHazard::UnInitialize();
  HYDRA_HINT(512LL);
  if ( *(_QWORD *)(W32GetUserSessionState(v40) + 42624) )
  {
    v42 = *(char **)(W32GetUserSessionState(v41) + 42624);
    v44 = W32GetUserSessionState(v43);
    NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
      (NSInstrumentation::CLeakTrackingAllocator *)(v44 + 72288),
      v42);
  }
  UninitializeUserTypeIsolation(v41);
  if ( *(_QWORD *)(W32GetUserSessionState(v45) + 71544) )
  {
    v47 = W32GetUserSessionState(v46);
    ObfDereferenceObject(*(PVOID *)(v47 + 71544));
    *(_QWORD *)(W32GetUserSessionState(v48) + 71544) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v46) + 19896) )
  {
    *(_QWORD *)(W32GetUserSessionState(v49) + 19928) = 0LL;
    if ( *(_QWORD *)(W32GetUserSessionState(v50) + 19912) )
    {
      v52 = W32GetUserSessionState(v51);
      RtlDestroyHeap(*(PVOID *)(v52 + 19920));
      v54 = W32GetUserSessionState(v53);
      MmUnmapViewInSessionSpace(*(PVOID *)(v54 + 19912));
    }
    v55 = W32GetUserSessionState(v51);
    ObfDereferenceObject(*(PVOID *)(v55 + 19896));
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v49) + 57008) )
  {
    v57 = W32GetUserSessionState(v56);
    GreDeleteFastMutex(*(char **)(v57 + 57008));
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v56) + 62960) )
  {
    v59 = W32GetUserSessionState(v58);
    GreDeleteFastMutex(*(char **)(v59 + 62960));
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v58) + 19904) )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v61) + 19888) )
    {
      v63 = W32GetUserSessionState(v62);
      MmUnmapViewInSessionSpace(*(PVOID *)(v63 + 19888));
    }
    v64 = W32GetUserSessionState(v62);
    ObfDereferenceObject(*(PVOID *)(v64 + 19904));
  }
  v65 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v61, v60) + 48);
  v66 = *(int (**)(void))(v65 + 296);
  if ( v66 )
  {
    if ( v66() >= 0 )
    {
      v67 = W32GetUserSessionState(v65);
      v70 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v69, v68) + 48) + 304LL);
      if ( v70 )
        v70(v67 + 66080);
    }
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v65) + 70120) )
  {
    v72 = W32GetUserSessionState(v71);
    v73 = *(char **)(v72 + 19400);
    if ( v73 )
    {
      v74 = W32GetUserSessionState(v71);
      NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
        (NSInstrumentation::CLeakTrackingAllocator *)(v74 + 72288),
        v73);
      *(_QWORD *)(v72 + 19400) = 0LL;
    }
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v71) + 14496) )
  {
    v78 = *(CAsyncKeyEventMonitor **)(W32GetUserSessionState(v76) + 14496);
    if ( v78 )
      CAsyncKeyEventMonitor::`scalar deleting destructor'(v78, v77);
    *(_QWORD *)(W32GetUserSessionState(v78) + 14496) = 0LL;
  }
  v79 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v76, v75) + 48) + 312LL);
  if ( v79 )
  {
    if ( v79() >= 0 )
    {
      v82 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v81, v80) + 48) + 320LL);
      if ( v82 )
        v82();
    }
  }
  if ( (unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline() )
  {
    v86 = W32GetUserSessionState(v84);
    v87 = *(char **)(v86 + 72440);
    if ( v87 )
    {
      CoreMessagingKPort::CloseCoreMsgPort(*(CoreMessagingKPort **)(v86 + 72440));
      GreDeleteFastMutex(v87);
    }
  }
  CoreMsgUninitialize(v84, v83, v85);
  RIMUnInitialize();
  if ( *(_QWORD *)(W32GetUserSessionState(v88) + 42600) )
  {
    v90 = W32GetUserSessionState(v89);
    ExFreePoolWithTag(*(PVOID *)(v90 + 42600), 0);
    *(_QWORD *)(W32GetUserSessionState(v91) + 42600) = 0LL;
  }
  FreeWin32KSyscallFilter(v89);
  v93 = W32GetUserSessionState(v92);
  v94 = v93;
  v95 = *(char **)(v93 + 41368);
  if ( v95 )
  {
    CQoSReport::~CQoSReport(*(CQoSReport **)(v93 + 41368));
    GreDeleteFastMutex(v95);
  }
  *(_QWORD *)(v94 + 41368) = 0LL;
  UninitializeWin32PoolTracking();
  UninitializeWin32SiloGlobals();
  v97 = gpWin32kDriverObject;
  if ( gpWin32kDriverObject )
  {
    UninitializeBaseWppLog();
    EditionUninitializeWppLogging(v97);
  }
  SessionState = W32GetSessionState(v96);
  FreePerSessionWin32kCall(SessionState + 152);
  v100 = W32GetSessionState(v99);
  FreeWin32kApiSetTable(v100 + 152);
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v101);
}
