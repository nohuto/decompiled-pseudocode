/*
 * XREFs of ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01D4A80
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C004C624 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00563C4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0056A68 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00572B4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0058B74 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009CB48 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00B9674 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C00B96E0 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1C00B9720 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00B9790 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x1C00BCDF0 (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     ?HasDelegationThread@CInputDest@@QEBA_NXZ @ 0x1C00E395C (-HasDelegationThread@CInputDest@@QEBA_NXZ.c)
 *     ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x1C00E39A2 (-UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00E3A96 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C00E442E (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00E4A0E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C00E4B22 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C00E4C14 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC58 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD0C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E25C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E628 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5AC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA4C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C01B52A4 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C01B537C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C01B53CC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01B5624 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01C14C8 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01C1940 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C01C25F0 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePha.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01C7400 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C01C9DD8 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C01CBF2C (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C01CC394 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ @ 0x1C01CC944 (-IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C01CCBF0 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C01CD15C (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C01CD230 (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x1C01CD284 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C01CDD8C (-PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C01D1D94 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x1C01D2AB0 (-RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z.c)
 *     ?SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C01D49F4 (-SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C01D5C00 (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01D6688 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C01D6BF4 (-SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z.c)
 *     ?TouchHitTest@CTouchProcessor@@CA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x1C01D79D4 (-TouchHitTest@CTouchProcessor@@CA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C01D82E0 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C01D8688 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ApiSetEditionPointerActivate @ 0x1C0206F78 (ApiSetEditionPointerActivate.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerFrameTargetWindows(
        struct _KTHREAD **this,
        struct tagTHREADINFO *a2,
        void *a3,
        unsigned int a4,
        int *a5)
{
  void *v6; // rdi
  int v8; // ebx
  int v9; // edx
  CTouchProcessor *v10; // rcx
  int v11; // r8d
  struct CPointerMsgData *NonConstMsgData; // rax
  int v13; // edx
  struct CPointerMsgData *v14; // r12
  PDEVICE_OBJECT v15; // rcx
  __int16 v16; // ax
  __int64 v17; // rax
  __int64 v18; // r14
  int v19; // edx
  int v20; // r8d
  NSInstrumentation::CLeakTrackingAllocator *v21; // rsi
  int v22; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  _QWORD *Pool2; // rax
  unsigned int v25; // r10d
  __int64 v26; // r11
  void *v27; // r8
  unsigned int v28; // edi
  CPointerInfoNode *v30; // r13
  int v31; // r8d
  CTouchProcessor *v32; // rsi
  BOOL v33; // r12d
  struct tagQ *QueueForCurrentNode; // rax
  CInputDest *v35; // r9
  __int64 v36; // rax
  unsigned __int64 v37; // rsi
  CPointerInfoNode *v38; // rcx
  struct tagTHREADINFO *v39; // r8
  int IsTargetSetForRetrieval; // eax
  int v41; // eax
  __int64 v42; // rax
  int IsAnyMessageNonDelegated; // eax
  CInputDest *Queue; // rax
  __int64 v45; // rax
  CTouchProcessor *v46; // rcx
  unsigned __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 CurrentProcess; // rax
  _QWORD *v52; // rax
  char HasDelegationThread; // al
  int ShouldForegroundActivate; // eax
  __int64 v55; // rdx
  __int64 v56; // r8
  HWND WindowHandle; // rax
  struct tagQ *v58; // rax
  CTouchProcessor *v59; // rcx
  int v60; // eax
  struct tagQ *v61; // rax
  CTouchProcessor *v62; // rcx
  int v63; // eax
  unsigned __int64 v64; // rdx
  CTouchProcessor *v65; // rcx
  struct CPointerInfoNode *v66; // rax
  __int64 v67; // r9
  __int64 v68; // r8
  __int128 v69; // xmm1
  __int64 v70; // rdx
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  struct tagQ *v79; // rax
  CTouchProcessor *v80; // rcx
  int v81; // eax
  unsigned __int64 v82; // rdx
  int IsTouchpad; // eax
  __int64 v84; // r13
  int v85; // edx
  __int64 v86; // rcx
  int v87; // r8d
  __int64 v88; // rdx
  int v89; // edx
  void *v90; // r8
  int v91; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v92; // [rsp+58h] [rbp-A8h]
  unsigned int v93; // [rsp+5Ch] [rbp-A4h]
  CInputDest *v94; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v95[8]; // [rsp+68h] [rbp-98h] BYREF
  CTouchProcessor *v96; // [rsp+70h] [rbp-90h]
  int v97; // [rsp+78h] [rbp-88h]
  unsigned int v98; // [rsp+80h] [rbp-80h]
  struct tagQ *v99; // [rsp+88h] [rbp-78h] BYREF
  int IsMessageDelegated; // [rsp+90h] [rbp-70h]
  _DWORD v101[4]; // [rsp+98h] [rbp-68h] BYREF
  int v102[6]; // [rsp+A8h] [rbp-58h] BYREF
  struct tagPOINT v103; // [rsp+C0h] [rbp-40h] BYREF
  int *v104; // [rsp+C8h] [rbp-38h]
  __int64 v105; // [rsp+D0h] [rbp-30h] BYREF
  CPointerInfoNode *v106[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v107; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v108; // [rsp+100h] [rbp+0h]
  __int128 v109; // [rsp+108h] [rbp+8h] BYREF
  __int64 v110; // [rsp+118h] [rbp+18h]
  _BYTE v111[40]; // [rsp+120h] [rbp+20h] BYREF
  CInpLockGuard *v112; // [rsp+148h] [rbp+48h]
  _OWORD v113[7]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v114[48]; // [rsp+1D0h] [rbp+D0h] BYREF
  PVOID BackTrace[20]; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v116[112]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v117[128]; // [rsp+310h] [rbp+210h] BYREF

  v104 = a5;
  v6 = a3;
  v92 = a4;
  v96 = a2;
  v8 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      4,
      90,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v114, (struct CInpLockGuard *)(this + 4), v6);
  v91 = 0;
  v108 = 0LL;
  v110 = 0LL;
  v103 = 0LL;
  v102[0] = 0;
  *a5 = 0;
  v107 = 0LL;
  v109 = 0LL;
  if ( a4 == 595 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v11) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v11) = 0;
    }
    if ( (_BYTE)v9 || (_BYTE)v11 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v11,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        4,
        91,
        (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
    goto LABEL_83;
  }
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v10, (__int64)v6);
  v14 = NonConstMsgData;
  if ( !NonConstMsgData )
  {
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v8) = 0;
    if ( !(_BYTE)v13 && !(_BYTE)v8 )
      goto LABEL_82;
    v16 = 92;
LABEL_81:
    v27 = &WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids;
    LOBYTE(v27) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      v15->AttachedDevice,
      v13,
      (_DWORD)v27,
      v15->DeviceExtension,
      5,
      4,
      v16,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
LABEL_82:
    v8 = 0;
LABEL_83:
    v28 = v8;
    goto LABEL_84;
  }
  v17 = CTouchProcessor::ReferenceFrame((__int64)this, *((_DWORD *)NonConstMsgData + 7));
  v18 = v17;
  if ( !v17 )
  {
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v8) = 0;
    if ( !(_BYTE)v13 && !(_BYTE)v8 )
      goto LABEL_82;
    v16 = 93;
    goto LABEL_81;
  }
  if ( (*(_DWORD *)(v17 + 228) & 0x10) != 0 )
  {
    CTouchProcessor::UnreferenceFrame(this, v17);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v19) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v20) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v20) = 0;
    }
    if ( (_BYTE)v19 || (_BYTE)v20 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v19,
        v20,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        4,
        94,
        (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
    goto LABEL_83;
  }
  v21 = gpLeakTrackingAllocator;
  v94 = (CInputDest *)120;
  v101[0] = 1885958997;
  v105 = 260LL;
  v22 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v22 != 1 )
    {
      if ( v22 != 2 )
        goto LABEL_71;
      v99 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
              gpLeakTrackingAllocator,
              1885958997,
              (unsigned __int64 *)&v99) )
      {
        v106[0] = (CPointerInfoNode *)&v105;
        v106[1] = (CPointerInfoNode *)v101;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v21,
                                                                                           (__int64)v106,
                                                                                           &v94);
        goto LABEL_87;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(v26, 136LL, v25);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        goto LABEL_71;
      _InterlockedAdd64((volatile signed __int64 *)v21 + 16, 1uLL);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v21,
               (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
               (__int64)v99,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_87;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v21,
                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                  (__int64)v99,
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        goto LABEL_88;
      }
      _InterlockedAdd64((volatile signed __int64 *)v21 + 17, 1uLL);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      goto LABEL_71;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70697355u) )
      goto LABEL_71;
    Pool2 = (_QWORD *)ExAllocatePool2(v105 & 0xFFFFFFFFFFFFFFFDuLL, 136LL, v101[0]);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedAdd64((volatile signed __int64 *)v21 + 14, 1uLL),
          *Pool2 = 1885958997LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v21 + 1),
        0x70697355uLL);
    }
  }
  else
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       120LL,
                                                                                       1885958997LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedAdd64((volatile signed __int64 *)v21 + 14, 1uLL);
  }
LABEL_87:
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
LABEL_71:
    CTouchProcessor::UnreferenceFrame(this, v18);
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v8) = 0;
    if ( !(_BYTE)v13 && !(_BYTE)v8 )
      goto LABEL_82;
    v16 = 95;
    goto LABEL_81;
  }
LABEL_88:
  memset((void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64, 0, 0x78uLL);
  *(_BYTE *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 112) = 0;
  if ( qword_1C0295450 )
    qword_1C0295450(
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
      &v109,
      lambda_0e67b526681aa6a0208369450a9126fb_::_lambda_invoker_cdecl_);
  if ( *((_DWORD *)v14 + 8) >= *(_DWORD *)(v18 + 48) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3920);
  v106[0] = (CPointerInfoNode *)(*(_QWORD *)(v18 + 240) + 480LL * *((unsigned int *)v14 + 8));
  v30 = v106[0];
  if ( !(unsigned int)CPointerInfoNode::IsValid(v106[0]) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3923);
  if ( *((_WORD *)v30 + 86) != *((_WORD *)v14 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3924);
  switch ( v92 )
  {
    case 0x249u:
      if ( (*(_DWORD *)v30 & 0x800000) == 0 )
      {
        v31 = 3925;
LABEL_108:
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v31);
      }
      break;
    case 0x24Au:
      if ( (*(_DWORD *)v30 & 0x8000000) == 0 )
      {
        v31 = 3926;
        goto LABEL_108;
      }
      break;
    case 0x251u:
      if ( *(int *)v30 >= 0 )
      {
        v31 = 3927;
        goto LABEL_108;
      }
      break;
    default:
      if ( v92 == 594 && (*((_DWORD *)v30 + 1) & 8) == 0 )
      {
        v31 = 3928;
        goto LABEL_108;
      }
      break;
  }
  if ( (*(_DWORD *)v30 & 0x100) == 0 && !*((_QWORD *)v30 + 24) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3936);
  v32 = v96;
  v33 = (*((_DWORD *)v96 + 318) & 0x2000) != 0 || (*((_DWORD *)v96 + 319) & 0x40) != 0;
  IsMessageDelegated = CPointerInfoNode::IsMessageDelegated(v30, v92);
  QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(this, v32, v33, v92, IsMessageDelegated, v30);
  LODWORD(v35) = 0;
  v99 = QueueForCurrentNode;
  if ( !QueueForCurrentNode )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3959);
    LODWORD(v35) = 0;
  }
  if ( qword_1C0295450 )
  {
    qword_1C0295450(v18, &v107, CTouchProcessor::DereferencePointerInputFrame);
    LODWORD(v35) = 0;
  }
  v36 = *(unsigned int *)(v18 + 48);
  v37 = *(_QWORD *)(v18 + 240);
  v97 = 1;
  v93 = 0;
  if ( !(_DWORD)v36 )
  {
LABEL_133:
    v28 = 1;
    goto LABEL_134;
  }
  while ( 1 )
  {
    if ( v37 >= *(_QWORD *)(v18 + 240) + 480 * v36 )
    {
      v101[2] = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3979);
    }
    CInputDest::SetEmpty((CInputDest *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
    LODWORD(v35) = 0;
    if ( v33 && (*((_DWORD *)v96 + 318) & 0x2000) == 0 && (*((_DWORD *)v96 + 319) & 0x40) == 0 )
      goto LABEL_133;
    if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v37) )
      goto LABEL_132;
    IsTargetSetForRetrieval = CPointerInfoNode::IsTargetSetForRetrieval(v38, v39);
    v35 = 0LL;
    if ( IsTargetSetForRetrieval )
      break;
    if ( *(_DWORD *)(v37 + 8) != *((_DWORD *)v30 + 2)
      || (CPointerInfoNode *)v37 != v30
      && (!v33
       && (IsAnyMessageNonDelegated = CPointerInfoNode::IsAnyMessageNonDelegated((CPointerInfoNode *)v37),
           LODWORD(v35) = 0,
           !IsAnyMessageNonDelegated)
       || (Queue = CPointerInfoNode::GetQueue((CPointerInfoNode *)v37, v102), v35 = 0LL, v94 = Queue, v102[0])
       || Queue && (v45 = CInputDest::GetQueue((__int64)Queue, 2), v35 = 0LL, v45) && !CInputDest::UsesQueue(v94, v99)) )
    {
      v97 = (int)v35;
      goto LABEL_132;
    }
    v46 = v96;
    if ( (*((_DWORD *)v96 + 318) & 0x2000) != 0 || (*((_DWORD *)v96 + 319) & 0x40) != 0 )
    {
      v47 = *(_QWORD *)(v37 + 16);
      v94 = v35;
      if ( (unsigned int)CTouchProcessor::RecheckPointerCapture((CTouchProcessor *)this, v47, v33, &v94, &v91) )
      {
        CInputDest::operator=(
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
          (__int64)v94);
      }
      else
      {
        v91 = 1;
        if ( *(_DWORD *)(v37 + 24) )
        {
          if ( !CInputDest::IsEqualByWindowHandle(v37 + 24, *(_QWORD *)(v37 + 192), 0) )
          {
            v102[1] = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4069);
          }
          CInputDest::operator=(
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
            v37 + 24);
        }
        if ( !*(_DWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        {
          CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v111, (struct CInputDest *)(v37 + 352));
          memset(v116, 0, sizeof(v116));
          CurrentProcess = PsGetCurrentProcess(v49, v48, v50);
          if ( CurrentProcess && CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
          {
            v102[2] = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4078);
          }
          v52 = (_QWORD *)CTouchProcessor::TouchHitTest(v117, v37 + 160, 0LL, 0LL, 0, 0LL, v116);
          CInputDest::operator=(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64, v52);
          CInputDest::SetEmpty((CInputDest *)v117);
          CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v111);
        }
      }
      HasDelegationThread = CInputDest::HasDelegationThread((CInputDest *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      v46 = 0LL;
      if ( HasDelegationThread )
      {
        CTouchProcessor::SetPointerInfoNodeTarget(
          (CTouchProcessor *)this,
          (const struct CPointerInputFrame *)v18,
          v93,
          (const struct CInputDest *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
          v91,
          &v103,
          0,
          0,
          1,
          1);
        v97 = 0;
        ShouldForegroundActivate = CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v37);
        LODWORD(v35) = 0;
        if ( !ShouldForegroundActivate )
          goto LABEL_132;
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v95, v55, v56, 0LL);
        WindowHandle = CInputDest::GetWindowHandle((CInputDest *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
        CBaseProcessor::PostQEventWork(0LL, (__int64)WindowHandle, 2LL, 0LL, 0LL, *(_QWORD *)(v37 + 16));
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v95);
LABEL_131:
        LODWORD(v35) = 0;
        goto LABEL_132;
      }
    }
    if ( (*((_DWORD *)CTouchProcessor::GetPointerInfoNodeQFrame(
                        v46,
                        (const struct CPointerInputFrame *)v18,
                        (const struct CPointerInfoNode *)v37)
          + 35) & 1) != 0
      && (*((_DWORD *)v96 + 318) & 0x2000) == 0
      && (*((_DWORD *)v96 + 319) & 0x40) == 0 )
    {
      CTouchProcessor::SetQFrameNonCoalescable(
        v96,
        (const struct CPointerInputFrame *)v18,
        (const struct CPointerInfoNode *)v37);
    }
    v91 = 1;
    if ( (unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v37) )
    {
      CTouchProcessor::DetermineTouchpadPointerTargetWindow(
        (CTouchProcessor *)this,
        v96,
        (const struct CPointerInputFrame *)v18,
        (struct CPointerInfoNode *)v37,
        v99,
        v93,
        v33,
        &v91,
        &v103,
        (struct CInputDest *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      LODWORD(v35) = 0;
      if ( !*(_DWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        goto LABEL_132;
    }
    else
    {
      CTouchProcessor::DeterminePointerTargetWindow(
        (CTouchProcessor *)this,
        v96,
        (struct CPointerInfoNode *)v37,
        v99,
        v33,
        &v91,
        &v103,
        (struct CInputDest *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
    }
    v58 = CTouchProcessor::GetQueueForCurrentNode(this, v96, v33, v92, IsMessageDelegated, v30);
    LODWORD(v35) = 0;
    v99 = v58;
    if ( !v58 )
      goto LABEL_222;
    v60 = CTouchProcessor::RevalidateFrameProcessing(v59, v96, v33, (const struct CPointerInfoNode *)v37, 0);
    LODWORD(v35) = 0;
    if ( !v60 )
      goto LABEL_132;
    if ( *(_DWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    {
      if ( (*(_DWORD *)(v37 + 180) & 0x10000) != 0
        && !(unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v37)
        && (*(_DWORD *)(v37 + 4) & 0x80u) == 0 )
      {
        CTouchProcessor::PointerParentNotify(
          this,
          (struct CInputDest *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
          (void **)v37);
        v61 = CTouchProcessor::GetQueueForCurrentNode(this, v96, v33, v92, IsMessageDelegated, v30);
        LODWORD(v35) = 0;
        v99 = v61;
        if ( !v61 )
          goto LABEL_222;
        v63 = CTouchProcessor::RevalidateFrameProcessing(v62, v96, v33, (const struct CPointerInfoNode *)v37, 0);
        LODWORD(v35) = 0;
        if ( !v63 )
          goto LABEL_132;
        v64 = *(_QWORD *)(v37 + 16);
        v94 = 0LL;
        if ( (unsigned int)CTouchProcessor::RecheckPointerCapture((CTouchProcessor *)this, v64, v33, &v94, &v91) )
          CInputDest::operator=(
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
            (__int64)v94);
      }
      if ( *(_DWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
        && (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v37) )
      {
        v66 = CTouchProcessor::LookupNode(v65, (const struct CPointerInputFrame *)v18, v93);
        *((_DWORD *)v66 + 36) = v91;
        CThreadLockInputDest::CThreadLockInputDest(
          (CThreadLockInputDest *)v116,
          (struct CInputDest *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
        CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
          (CInpUnlockGuardExclusive *)v111,
          (struct CInpLockGuard *)(this + 4),
          *(void **)(v37 + 16),
          v67);
        v68 = *(_QWORD *)(v37 + 16);
        v69 = *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16);
        v70 = *(unsigned __int16 *)(v37 + 144);
        v113[0] = *(_OWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
        v71 = *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 32);
        v113[1] = v69;
        v72 = *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 48);
        v113[2] = v71;
        v73 = *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 64);
        v113[3] = v72;
        v74 = *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 80);
        v113[4] = v73;
        v75 = *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 96);
        v113[5] = v74;
        v113[6] = v75;
        ApiSetEditionPointerActivate(v113, v70, v68, v37 + 160);
        CInpLockGuard::LockExclusive(v112);
        CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v111, v76, v77, v78);
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v116);
        v79 = CTouchProcessor::GetQueueForCurrentNode(this, v96, v33, v92, IsMessageDelegated, v30);
        LODWORD(v35) = 0;
        v99 = v79;
        if ( !v79 )
          goto LABEL_222;
        v81 = CTouchProcessor::RevalidateFrameProcessing(v80, v96, v33, (const struct CPointerInfoNode *)v37, 0);
        LODWORD(v35) = 0;
        if ( !v81 )
          goto LABEL_132;
        v82 = *(_QWORD *)(v37 + 16);
        v94 = 0LL;
        if ( (unsigned int)CTouchProcessor::RecheckPointerCapture((CTouchProcessor *)this, v82, v33, &v94, &v91) )
          CInputDest::operator=(
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
            (__int64)v94);
      }
    }
    if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval((CPointerInfoNode *)v37, v96) )
    {
      v102[3] = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4263);
    }
    CTouchProcessor::SetPointerInfoNodeTarget(
      (CTouchProcessor *)this,
      (const struct CPointerInputFrame *)v18,
      v93,
      (const struct CInputDest *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
      v91,
      &v103,
      0,
      0,
      1,
      0);
    if ( *(_DWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    {
      if ( (*(_DWORD *)(v37 + 180) & 0x10000) != 0 )
      {
        CTouchProcessor::SetPointerImplicitCapture(
          (CTouchProcessor *)this,
          *(_QWORD *)(v37 + 16),
          (const struct CInputDest *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
          v91,
          v33);
      }
      else if ( v92 == 593 )
      {
        CTouchProcessor::SetPointerExplicitCapture(
          this,
          *(_QWORD *)(v37 + 16),
          (const struct CInputDest *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
          v91,
          v33);
      }
    }
    IsTouchpad = CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v37);
    LODWORD(v35) = 0;
    if ( IsTouchpad )
    {
      if ( (*(_DWORD *)(v37 + 180) & 0x2000) != 0 )
      {
        v98 = 0;
        if ( v93 )
        {
          v84 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)(v84 + *(_QWORD *)(v18 + 240))) )
            {
              if ( *(_DWORD *)(v37 + 8) != *(_DWORD *)(v86 + 8) )
              {
                v102[4] = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4333);
                goto LABEL_218;
              }
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
                || (LOBYTE(v85) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
              {
                LOBYTE(v85) = (_BYTE)v35;
              }
              if ( (_BYTE)v85 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v87) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v85,
                  v87,
                  WPP_MAIN_CB.Queue.ListEntry.Flink,
                  4,
                  4,
                  96,
                  (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
                LODWORD(v35) = 0;
              }
              CTouchProcessor::SetPointerInfoNodeTarget(
                (CTouchProcessor *)this,
                (const struct CPointerInputFrame *)v18,
                v98,
                (const struct CInputDest *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                v91,
                &v103,
                (int)v35,
                (int)v35,
                1,
                (int)v35);
              LODWORD(v35) = 0;
              if ( !*(_DWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
                goto LABEL_219;
              v88 = *(_QWORD *)(v18 + 240);
              if ( (*(_DWORD *)(v88 + v84 + 180) & 0x10000) != 0 )
              {
                CTouchProcessor::SetPointerImplicitCapture(
                  (CTouchProcessor *)this,
                  *(_QWORD *)(v88 + v84 + 16),
                  (const struct CInputDest *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                  v91,
                  v33);
LABEL_218:
                LODWORD(v35) = 0;
                goto LABEL_219;
              }
              if ( v92 == 593 )
              {
                CTouchProcessor::SetPointerExplicitCapture(
                  this,
                  *(_QWORD *)(v37 + 16),
                  (const struct CInputDest *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                  v91,
                  v33);
                goto LABEL_218;
              }
            }
LABEL_219:
            v84 += 480LL;
            if ( ++v98 >= v93 )
            {
              v30 = v106[0];
              break;
            }
          }
        }
      }
    }
LABEL_132:
    ++v93;
    v37 += 480LL;
    v36 = *(unsigned int *)(v18 + 48);
    if ( v93 >= (unsigned int)v36 )
      goto LABEL_133;
  }
  v41 = CTouchProcessor::HandlePointerNodeWithTarget(this, v30, v92, v37);
  if ( v41 != 1 )
  {
    if ( (v41 & 0xFFFFFFFD) != 0 )
    {
      v101[3] = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4014);
    }
    goto LABEL_131;
  }
  LODWORD(v35) = 0;
LABEL_222:
  v28 = 0;
  *v104 = 1;
LABEL_134:
  if ( qword_1C0295460 )
  {
    qword_1C0295460(&v107);
    LODWORD(v35) = 0;
  }
  if ( qword_1C0295558 )
  {
    qword_1C0295558(&v109);
    LODWORD(v35) = 0;
  }
  if ( v28 )
  {
    if ( (*(_DWORD *)(v18 + 228) & 0x10) == 0 && v97 != (_DWORD)v35 && !v33 )
    {
      v42 = CTouchProcessor::FindAndReferenceFrameById((__int64)this, *(_DWORD *)(v18 + 40), 4u);
      if ( v42 )
      {
        *(_DWORD *)(v42 + 228) |= 0x10u;
        CTouchProcessor::UnreferenceFrameInt(this, v42);
      }
    }
  }
  CTouchProcessor::UnreferenceFrame(this, v18);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (LOBYTE(v89) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v89) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    LOBYTE(v8) = 0;
  if ( (_BYTE)v89 || (_BYTE)v8 )
  {
    v90 = &WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids;
    LOBYTE(v90) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v89,
      (_DWORD)v90,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      4,
      97,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
  }
LABEL_84:
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v114);
  return v28;
}
