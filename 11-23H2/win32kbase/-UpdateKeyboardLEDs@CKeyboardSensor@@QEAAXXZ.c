/*
 * XREFs of ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C006F340
 * Callers:
 *     UpdateKeyLights @ 0x1C006EB00 (UpdateKeyLights.c)
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C006F160 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ??1RIMDropAndReAcquireSyncLock@@QEAA@XZ @ 0x1C006EC64 (--1RIMDropAndReAcquireSyncLock@@QEAA@XZ.c)
 *     ??0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z @ 0x1C006EC9C (--0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z.c)
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C006EE40 (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     RIMDeviceIoControl @ 0x1C0070F20 (RIMDeviceIoControl.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC58 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD0C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E25C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E628 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5AC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA4C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

void __fastcall CKeyboardSensor::UpdateKeyboardLEDs(CKeyboardSensor *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  int v19; // ebx
  __int16 v20; // di
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  int v40; // ebx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  int v46; // ebx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  struct RawInputManagerObject *v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // r15
  __int64 v58; // rdx
  __int64 i; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  NSInstrumentation::CLeakTrackingAllocator *v62; // rbx
  unsigned __int64 v63; // rdi
  int v64; // eax
  _QWORD *UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  _QWORD *v66; // rax
  unsigned int v67; // edx
  __int64 v68; // r10
  char v69; // r12
  _QWORD *v70; // r14
  int v71; // edi
  int v72; // r12d
  int v73; // eax
  int v74; // r13d
  struct _IO_STATUS_BLOCK *v75; // rbx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  int v80; // eax
  struct _IO_STATUS_BLOCK *v81; // rbx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  int v86; // eax
  struct _IO_STATUS_BLOCK *v87; // rbx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  int v92; // eax
  struct tagTHREADINFO *v93; // rax
  __int64 v94; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v96; // rax
  __int64 *v97; // rbx
  SIZE_T Length; // [rsp+30h] [rbp-D0h]
  __int64 Pool2; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v100; // [rsp+68h] [rbp-98h] BYREF
  __int64 v101; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v102; // [rsp+78h] [rbp-88h] BYREF
  int v103[2]; // [rsp+80h] [rbp-80h]
  PVOID v104; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v105[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v106; // [rsp+A0h] [rbp-60h] BYREF
  char v107; // [rsp+A8h] [rbp-58h]
  PVOID BackTrace[26]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v109; // [rsp+190h] [rbp+90h]
  int v110; // [rsp+190h] [rbp+90h]
  __int64 v111; // [rsp+198h] [rbp+98h] BYREF
  __int64 v112; // [rsp+1A0h] [rbp+A0h] BYREF
  int v113; // [rsp+1A8h] [rbp+A8h]

  if ( *((_DWORD *)this + 335) != (unsigned int)PsGetCurrentThreadId() )
    return;
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 157) + 8LL) == CurrentThread )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 153LL);
  if ( !*(_DWORD *)(SGDGetUserSessionState(v2, CurrentThread, v3, v4) + 12616) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 154LL);
  v9 = *((_QWORD *)this + 2);
  if ( !v9
    || *((_QWORD *)this + 1) == -1LL
    || *(struct _KTHREAD **)(v9 + 40) != KeGetCurrentThread()
    || !*((_QWORD *)this + 160) )
  {
    return;
  }
  v113 = gbNonServiceSession;
  v109 = *(_DWORD *)(SGDGetUserSessionState(v9, v6, v7, v8) + 12616);
  v13 = SGDGetUserSessionState(v109, v10, v11, v12);
  *(_DWORD *)(v13 + 12616) &= 0xFFFFFFF8;
  v18 = SGDGetUserSessionState(v15, v14, v16, v17);
  v19 = *(_DWORD *)(v18 + 12604);
  v20 = *(_WORD *)(v18 + 12608);
  v25 = SGDGetUserSessionState(v22, v21, v23, v24);
  *(_DWORD *)(v25 + 12684) = v19;
  *(_WORD *)(v25 + 12688) = v20;
  v30 = *(_DWORD *)(SGDGetUserSessionState(v27, v26, v28, v29) + 12596);
  *(_DWORD *)(SGDGetUserSessionState(v32, v31, v33, v34) + 12680) = v30;
  v39 = SGDGetUserSessionState(v36, v35, v37, v38);
  v40 = *(_DWORD *)(v39 + 13984);
  v111 = *(_QWORD *)(v39 + 13976);
  v45 = SGDGetUserSessionState(v42, v41, v43, v44);
  *(_QWORD *)(v45 + 12692) = v111;
  *(_DWORD *)(v45 + 12700) = v40;
  v46 = dword_1C0290268;
  v111 = gRemoteClientKeyboardType;
  v51 = SGDGetUserSessionState(v48, v47, v49, v50);
  *(_QWORD *)(v51 + 12704) = v111;
  *(_DWORD *)(v51 + 12712) = v46;
  v52 = (struct RawInputManagerObject *)*((_QWORD *)this + 2);
  *(_QWORD *)v103 = *((_QWORD *)this + 1);
  RIMDropAndReAcquireSyncLock::RIMDropAndReAcquireSyncLock((RIMDropAndReAcquireSyncLock *)&v104, v52);
  UserSessionSwitchLeaveCrit(v54, v53, v55, v56);
  v57 = 0LL;
  CInpLockSharedIfNeeded::CInpLockSharedIfNeeded((CInpLockSharedIfNeeded *)&v106, *((struct CInpPushLock **)this + 157));
  v62 = gpLeakTrackingAllocator;
  v63 = 16LL * *((_QWORD *)this + 160);
  LODWORD(v111) = 1885947971;
  v64 = *(_DWORD *)gpLeakTrackingAllocator;
  v101 = 260LL;
  v102 = v63;
  if ( !v64 )
  {
    Pool2 = ExAllocatePool2(260LL, v63, 1885947971LL);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (_QWORD *)Pool2;
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v62 + 14);
    goto LABEL_30;
  }
  if ( v64 != 1 )
  {
    if ( v64 == 2 )
    {
      v100 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x70694843u, &v100) )
      {
        v105[0] = &v101;
        v105[1] = &v111;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (_QWORD *)NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                                     (__int64)v62,
                                                                                                     (__int64)v105,
                                                                                                     &v102);
        Pool2 = (__int64)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
        goto LABEL_30;
      }
      v69 = 0;
      if ( v63 < 0x1000 || (v63 & 0xFFF) != 0 )
      {
        v63 += 16LL;
        v69 = 1;
        v102 = v63;
      }
      Pool2 = ExAllocatePool2(v68, v63, v67);
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v62 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v69 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v62,
                                  Pool2,
                                  v100,
                                  BackTrace) )
          {
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (_QWORD *)(Pool2 + 16);
            Pool2 += 16LL;
            goto LABEL_30;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v62,
                                     Pool2,
                                     v100,
                                     BackTrace) )
        {
          goto LABEL_33;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v62 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_43:
    Pool2 = 0LL;
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
    goto LABEL_44;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70694843u)
    || v63 + 16 < v63 )
  {
    goto LABEL_43;
  }
  v66 = (_QWORD *)ExAllocatePool2(v101 & 0xFFFFFFFFFFFFFFFDuLL, v63 + 16, (unsigned int)v111);
  Pool2 = (__int64)v66;
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = v66;
  if ( !v66
    || (_InterlockedIncrement64((volatile signed __int64 *)v62 + 14),
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = v66 + 2,
        *v66 = 1885947971LL,
        Pool2 = (__int64)(v66 + 2),
        v66 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v62 + 1),
      (const void *)0x70694843);
  }
LABEL_30:
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
LABEL_33:
    for ( i = **((_QWORD **)this + 158); i; i = *(_QWORD *)(i + 56) )
    {
      if ( *(_BYTE *)(i + 48) == 1 && *(_QWORD *)(i + 224) && *(_QWORD *)(i + 232) )
      {
        if ( (unsigned __int64)(unsigned int)v57 >= *((_QWORD *)this + 160) )
        {
          LODWORD(v112) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 219LL);
          break;
        }
        v58 = 2LL * (unsigned int)v57;
        v57 = (unsigned int)(v57 + 1);
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64[v58] = *(_QWORD *)(i + 16);
        LOWORD(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64[v58 + 1]) = *(_WORD *)(i + 456);
      }
    }
  }
LABEL_44:
  if ( !v107 )
  {
    ExReleasePushLockSharedEx(v106, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (_DWORD)v57 )
  {
    v70 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
    v71 = v103[0];
    v72 = v109 & 1;
    v73 = v109 & 4;
    v74 = v109 & 2;
    v110 = v73;
    while ( 1 )
    {
      LODWORD(v112) = 0;
      if ( v72 )
      {
        v75 = (struct _IO_STATUS_BLOCK *)(SGDGetUserSessionState(i, v58, v60, v61) + 12624);
        v80 = SGDGetUserSessionState(v77, v76, v78, v79);
        LODWORD(Length) = 0;
        RIMDeviceIoControl(v71, *v70, 720900, v80 + 12684, 6u, 0LL, Length, (__int64)&v112, v75, 1, 0, 0);
        v73 = v110;
      }
      if ( v74 )
      {
        v81 = (struct _IO_STATUS_BLOCK *)(SGDGetUserSessionState(i, v58, v60, v61) + 12624);
        v86 = SGDGetUserSessionState(v83, v82, v84, v85);
        LODWORD(Length) = 0;
        RIMDeviceIoControl(v71, *v70, 720904, v86 + 12680, 4u, 0LL, Length, (__int64)&v112, v81, 1, 0, 0);
        v73 = v110;
      }
      if ( !v73 )
        goto LABEL_60;
      if ( *((_BYTE *)v70 + 8) == 7 && *((_BYTE *)v70 + 9) == 82 )
        goto LABEL_58;
      if ( v113 )
        break;
LABEL_60:
      v70 += 2;
      if ( !--v57 )
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (_QWORD *)Pool2;
        goto LABEL_62;
      }
    }
    if ( *(_DWORD *)(SGDGetUserSessionState(i, v58, v60, v61) + 12704) == 7
      && *(_DWORD *)(SGDGetUserSessionState(i, v58, v60, v61) + 12708) == 131074 )
    {
LABEL_58:
      LODWORD(v112) = 0;
      v87 = (struct _IO_STATUS_BLOCK *)(SGDGetUserSessionState(i, v58, v60, v61) + 12624);
      v92 = SGDGetUserSessionState(v89, v88, v90, v91);
      LODWORD(Length) = 0;
      RIMDeviceIoControl(v71, *v70, 724996, v92 + 12692, 0xCu, 0LL, Length, (__int64)&v112, v87, 1, 0, 0);
    }
    v73 = v110;
    goto LABEL_60;
  }
LABEL_62:
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      gpLeakTrackingAllocator,
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
  v93 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v58, v60, v61);
  gptiCurrent = v93;
  if ( v93 )
  {
    *((_DWORD *)v93 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v94);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v97 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v96 = *v97;
          v97[2] = 0LL;
          if ( !*(_DWORD *)(v96 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
          HMUnlockObject(*v97);
        }
      }
    }
  }
  if ( qword_1C0296810 && (int)qword_1C0296810() >= 0 )
  {
    if ( qword_1C0296818 )
      qword_1C0296818();
  }
  RIMDropAndReAcquireSyncLock::~RIMDropAndReAcquireSyncLock(&v104);
}
