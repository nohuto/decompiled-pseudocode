/*
 * XREFs of ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x140205FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14005F94C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x14009483C (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x140094F38 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x140095280 (-UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1400967F8 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1400C38DC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1400C3A98 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x1400C3B18 (-RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C3C74 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?TouchHitTest@CTouchProcessor@@CA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@@KKKPEAHPEAU_InputHitTestResult@@@Z @ 0x1400C3C98 (-TouchHitTest@CTouchProcessor@@CA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C47E4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1400C49F8 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1400C4F30 (-SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CFC50 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@VCInputDest@@$0A@$00$0A@$00@@AEAAX_N0@Z @ 0x1400D1134 (-UnlockWorker@-$Win32RawLockedItemBase@VCInputDest@@$0A@$00$0A@$00@@AEAAX_N0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400D11B0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1400D24E0 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1400DE5D0 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UCPointerInputFrame@@$0A@$0A@$00$00@@AEAAX_N0@Z @ 0x14010EEF4 (-UnlockWorker@-$Win32RawLockedItemBase@UCPointerInputFrame@@$0A@$0A@$00$00@@AEAAX_N0@Z.c)
 *     ?HasDelegationThread@CInputDest@@QEBA_NXZ @ 0x1401110FC (-HasDelegationThread@CInputDest@@QEBA_NXZ.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x140123ACC (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     ApiSetEditionPointerActivate @ 0x140192AE0 (ApiSetEditionPointerActivate.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A2C38 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1401F32F4 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1401F33F8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1401F359C (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F6318 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F63B8 (--0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1401FA358 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1401FA77C (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1401FB5D0 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePha.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1401FEFCC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x140200A18 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x140200BD0 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x140200EE0 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ @ 0x14020111C (-IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x140201464 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1402019E0 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x140201A6C (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x140201AC0 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1402022B8 (-PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140205418 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x140205F48 (-SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x140206FEC (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x140208B58 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x140208EB4 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerFrameTargetWindows(
        PERESOURCE *this,
        struct tagTHREADINFO *a2,
        void *a3,
        unsigned int a4,
        int *a5)
{
  void *v6; // rdi
  struct tagTHREADINFO *v7; // r12
  unsigned int v9; // ebx
  int v10; // edx
  CTouchProcessor *v11; // rcx
  int v12; // r8d
  struct CPointerMsgData *NonConstMsgData; // rax
  int v14; // edx
  int v15; // r8d
  struct CPointerMsgData *v16; // rdi
  CTouchProcessor *v17; // rcx
  __int64 v18; // rax
  ULONG_PTR v19; // r14
  int v20; // edx
  int v21; // r8d
  _DWORD *v22; // rsi
  __int64 v23; // rcx
  struct tagTHREADINFO *v24; // rax
  CPointerInfoNode *v25; // r13
  int v26; // r8d
  __int64 v27; // rax
  int v28; // r12d
  __int64 v29; // rcx
  struct tagTHREADINFO *v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rdi
  __int64 v33; // rax
  CPointerInfoNode *v34; // rcx
  struct tagTHREADINFO *v35; // r8
  int IsTargetSetForRetrieval; // eax
  CTouchProcessor *v37; // rcx
  CInputDest *v38; // r9
  int v39; // eax
  unsigned int v40; // ecx
  int IsAnyMessageNonDelegated; // eax
  CInputDest *Queue; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  CInputDest *v50; // rax
  char HasDelegationThread; // al
  int WindowHandle; // eax
  __int64 v53; // rax
  CTouchProcessor *v54; // rcx
  __int64 v55; // rax
  unsigned __int64 v56; // rdx
  CTouchProcessor *v57; // rcx
  struct CPointerInfoNode *v58; // rax
  __int64 v59; // r8
  __int128 v60; // xmm1
  __int64 v61; // rdx
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  unsigned __int64 v67; // rdx
  __int64 v68; // r13
  CPointerInfoNode *v69; // rcx
  int v70; // r9d
  char v71; // al
  _UNKNOWN **v72; // rcx
  __int64 UserSessionState; // rax
  int v74; // r8d
  int v75; // edx
  __int64 v76; // rdx
  unsigned int v77; // edi
  __int64 v78; // rax
  int v79; // edx
  int v80; // r8d
  __int16 v82; // [rsp+30h] [rbp-D0h]
  unsigned int v83; // [rsp+50h] [rbp-B0h]
  CInputDest *v84; // [rsp+58h] [rbp-A8h] BYREF
  int v85; // [rsp+60h] [rbp-A0h] BYREF
  char v86; // [rsp+64h] [rbp-9Ch]
  bool v87; // [rsp+65h] [rbp-9Bh]
  unsigned int v88; // [rsp+68h] [rbp-98h]
  struct tagTHREADINFO *v89; // [rsp+70h] [rbp-90h]
  int v90; // [rsp+78h] [rbp-88h]
  int v91; // [rsp+7Ch] [rbp-84h]
  int IsMessageDelegated; // [rsp+80h] [rbp-80h]
  struct tagQ *QueueForCurrentNode; // [rsp+88h] [rbp-78h]
  int v94; // [rsp+90h] [rbp-70h]
  int v95; // [rsp+94h] [rbp-6Ch]
  int v96[6]; // [rsp+98h] [rbp-68h] BYREF
  struct tagPOINT v97; // [rsp+B0h] [rbp-50h] BYREF
  int *v98; // [rsp+B8h] [rbp-48h]
  _BYTE v99[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v100; // [rsp+C8h] [rbp-38h]
  ULONG_PTR v101[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v102; // [rsp+E0h] [rbp-20h]
  CPointerInfoNode *v103; // [rsp+E8h] [rbp-18h]
  ULONG_PTR BugCheckParameter2[3]; // [rsp+F0h] [rbp-10h] BYREF
  PERESOURCE *v105[7]; // [rsp+108h] [rbp+8h] BYREF
  PERESOURCE *v106[6]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v107[64]; // [rsp+170h] [rbp+70h] BYREF
  _OWORD v108[7]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v109[128]; // [rsp+220h] [rbp+120h] BYREF

  v98 = a5;
  v6 = a3;
  v88 = a4;
  v7 = a2;
  v89 = a2;
  v9 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      (_DWORD)a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      90,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v106, this + 4, v6);
  v85 = 0;
  v97 = 0LL;
  v96[0] = 0;
  *a5 = 0;
  if ( a4 == 595 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v12) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      LOBYTE(v12) = 0;
    }
    if ( (_BYTE)v10 || (_BYTE)v12 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v10,
        v12,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        91,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
    goto LABEL_206;
  }
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v11, (__int64)v6);
  v16 = NonConstMsgData;
  if ( !NonConstMsgData )
  {
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v14) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      LOBYTE(v9) = 0;
    if ( !(_BYTE)v14 && !(_BYTE)v9 )
      goto LABEL_67;
    v82 = 92;
LABEL_66:
    LOBYTE(v15) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)v17 + 3),
      v14,
      v15,
      *((_QWORD *)v17 + 8),
      5,
      4,
      v82,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
LABEL_67:
    v9 = 0;
    goto LABEL_206;
  }
  v18 = CTouchProcessor::ReferenceFrame((__int64)this, *((_DWORD *)NonConstMsgData + 7));
  v19 = v18;
  if ( !v18 )
  {
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v14) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      LOBYTE(v9) = 0;
    if ( !(_BYTE)v14 && !(_BYTE)v9 )
      goto LABEL_67;
    v82 = 93;
    goto LABEL_66;
  }
  if ( (*(_DWORD *)(v18 + 228) & 0x10) != 0 )
  {
    CTouchProcessor::UnreferenceFrame(this, v18);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v20) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v20) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v21) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      LOBYTE(v21) = 0;
    }
    if ( (_BYTE)v20 || (_BYTE)v21 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v21,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        94,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
    goto LABEL_206;
  }
  v22 = (_DWORD *)Win32AllocPoolZInitImpl(256LL, 0x78uLL, 0x70697355u);
  if ( !v22 )
  {
    CTouchProcessor::UnreferenceFrame(this, v19);
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v14) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      LOBYTE(v9) = 0;
    if ( !(_BYTE)v14 && !(_BYTE)v9 )
      goto LABEL_67;
    v82 = 95;
    goto LABEL_66;
  }
  *(_DWORD *)((char *)v22 + 113) = 0;
  *(_WORD *)((char *)v22 + 117) = 0;
  *((_BYTE *)v22 + 119) = 0;
  memset(v22, 0, 0x70uLL);
  *((_BYTE *)v22 + 112) = 0;
  v24 = PtiCurrent(v23);
  v101[0] = *((_QWORD *)v24 + 48);
  *((_QWORD *)v24 + 48) = v101;
  v102 = (__int64)lambda_0e67b526681aa6a0208369450a9126fb_::_lambda_invoker_cdecl_;
  v101[1] = (ULONG_PTR)v22;
  if ( *((_DWORD *)v16 + 8) >= *(_DWORD *)(v19 + 48) )
  {
    LODWORD(v84) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3987);
  }
  v103 = (CPointerInfoNode *)(*(_QWORD *)(v19 + 240) + 480LL * *((unsigned int *)v16 + 8));
  v25 = v103;
  if ( !(unsigned int)CPointerInfoNode::IsValid(v103) )
  {
    LODWORD(v84) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3990);
  }
  if ( *((_WORD *)v25 + 86) != *((_WORD *)v16 + 8) )
  {
    LODWORD(v84) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3991);
  }
  switch ( v88 )
  {
    case 0x249u:
      if ( (*(_DWORD *)v25 & 0x800000) == 0 )
      {
        v26 = 3992;
LABEL_86:
        LODWORD(v84) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v26);
      }
      break;
    case 0x24Au:
      if ( (*(_DWORD *)v25 & 0x8000000) == 0 )
      {
        v26 = 3993;
        goto LABEL_86;
      }
      break;
    case 0x251u:
      if ( *(int *)v25 >= 0 )
      {
        v26 = 3994;
        goto LABEL_86;
      }
      break;
    default:
      if ( v88 == 594 && (*((_DWORD *)v25 + 1) & 8) == 0 )
      {
        v26 = 3995;
        goto LABEL_86;
      }
      break;
  }
  if ( (*(_DWORD *)v25 & 0x100) == 0 && !*((_QWORD *)v25 + 24) )
  {
    LODWORD(v84) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4003);
  }
  v27 = *((_QWORD *)v7 + 170);
  if ( (v27 & 0x2000) != 0 || (v28 = 0, (v27 & 0x2000000000LL) != 0) )
    v28 = 1;
  IsMessageDelegated = CPointerInfoNode::IsMessageDelegated(v25, v88);
  QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(this, v89, v28, v88, IsMessageDelegated, v25);
  if ( !QueueForCurrentNode )
  {
    LODWORD(v84) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4026);
  }
  v30 = PtiCurrent(v29);
  v90 = 1;
  v91 = 1;
  v83 = 0;
  BugCheckParameter2[0] = *((_QWORD *)v30 + 48);
  *((_QWORD *)v30 + 48) = BugCheckParameter2;
  BugCheckParameter2[2] = (ULONG_PTR)CTouchProcessor::DereferencePointerInputFrame;
  BugCheckParameter2[1] = v19;
  v31 = *(unsigned int *)(v19 + 48);
  v32 = *(_QWORD *)(v19 + 240);
  if ( (_DWORD)v31 )
  {
    do
    {
      if ( v32 >= *(_QWORD *)(v19 + 240) + 480 * v31 )
      {
        v94 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4044);
      }
      CInputDest::~CInputDest((CInputDest *)v22);
      if ( v28 )
      {
        v33 = *((_QWORD *)v89 + 170);
        if ( (v33 & 0x2000) == 0 && (v33 & 0x2000000000LL) == 0 )
          break;
      }
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v32) )
        goto LABEL_106;
      IsTargetSetForRetrieval = CPointerInfoNode::IsTargetSetForRetrieval(v34, v35);
      v38 = 0LL;
      if ( IsTargetSetForRetrieval )
      {
        v39 = CTouchProcessor::HandlePointerNodeWithTarget(this, v25, v88, v32);
        if ( v39 == 1 )
          goto LABEL_186;
        if ( (v39 & 0xFFFFFFFD) != 0 )
        {
          v95 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4079);
        }
        goto LABEL_106;
      }
      if ( *(_DWORD *)(v32 + 8) == *((_DWORD *)v25 + 2)
        && ((CPointerInfoNode *)v32 == v25
         || (v28
          || (IsAnyMessageNonDelegated = CPointerInfoNode::IsAnyMessageNonDelegated((CPointerInfoNode *)v32),
              LODWORD(v38) = 0,
              IsAnyMessageNonDelegated))
         && (Queue = CPointerInfoNode::GetQueue((CPointerInfoNode *)v32, v96), v38 = 0LL, v84 = Queue, !v96[0])
         && (!Queue
          || (v43 = CInputDest::GetQueue(Queue, 2), v38 = 0LL, !v43)
          || CInputDest::UsesQueue(v84, QueueForCurrentNode))) )
      {
        v44 = *((_QWORD *)v89 + 170);
        if ( (v44 & 0x2000) == 0 && (v44 & 0x2000000000LL) == 0 )
          goto LABEL_134;
        v45 = *(_QWORD *)(v32 + 16);
        v84 = v38;
        if ( (unsigned int)CTouchProcessor::RecheckPointerCapture((CTouchProcessor *)this, v45, v28, &v84, &v85) )
        {
          CInputDest::operator=((__int64)v22, (__int64)v84);
        }
        else
        {
          v85 = 1;
          if ( *(_DWORD *)(v32 + 24) )
          {
            if ( !CInputDest::IsEqualByWindowHandle(v32 + 24, *(_QWORD *)(v32 + 192), 0) )
            {
              v96[1] = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4134);
            }
            CInputDest::operator=((__int64)v22, v32 + 24);
          }
          if ( !*v22 )
          {
            CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v105, (struct CInputDest *)(v32 + 352));
            memset(v108, 0, sizeof(v108));
            if ( (unsigned int)IsCurrentProcessDwm(v47, v46, v48, v49) )
            {
              v96[2] = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4143);
            }
            v50 = CTouchProcessor::TouchHitTest(
                    (CInputDest *)v109,
                    v32 + 160,
                    0,
                    0,
                    0,
                    *(_DWORD *)(v19 + 48),
                    0LL,
                    (__int64)v108);
            CInputDest::operator=(v22, v50);
            CInputDest::~CInputDest((CInputDest *)v109);
            CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v105);
          }
        }
        HasDelegationThread = CInputDest::HasDelegationThread((CInputDest *)v22);
        v37 = 0LL;
        if ( HasDelegationThread )
        {
          CTouchProcessor::SetPointerInfoNodeTarget(
            (CTouchProcessor *)this,
            (const struct CPointerInputFrame *)v19,
            v83,
            (const struct CInputDest *)v22,
            v85,
            &v97,
            0,
            0,
            1,
            1);
          v90 = 0;
          if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v32) )
          {
            v99[0] = 0;
            v100 = 0LL;
            AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v99);
            WindowHandle = (unsigned int)CInputDest::GetWindowHandle((CInputDest *)v22);
            CBaseProcessor::PostQEventWork(0LL, WindowHandle, 2u, 0, 0LL, *(_QWORD *)(v32 + 16));
            v40 = v83;
            if ( v99[0] )
            {
              v53 = v100;
              v100 = 0LL;
              v99[0] = 0;
              --*(_DWORD *)(v53 + 28);
            }
            goto LABEL_107;
          }
        }
        else
        {
LABEL_134:
          v54 = (CTouchProcessor *)*((unsigned int *)CTouchProcessor::GetPointerInfoNodeQFrame(
                                                       v37,
                                                       (const struct CPointerInputFrame *)v19,
                                                       (const struct CPointerInfoNode *)v32)
                                   + 35);
          if ( ((unsigned __int8)v54 & 1) != 0 )
          {
            v55 = *((_QWORD *)v89 + 170);
            if ( (v55 & 0x2000) == 0 && (v55 & 0x2000000000LL) == 0 )
              CTouchProcessor::SetQFrameNonCoalescable(
                v54,
                (const struct CPointerInputFrame *)v19,
                (const struct CPointerInfoNode *)v32);
          }
          v85 = 1;
          if ( (unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v32) )
          {
            CTouchProcessor::DetermineTouchpadPointerTargetWindow(
              (CTouchProcessor *)this,
              v89,
              (const struct CPointerInputFrame *)v19,
              (struct CPointerInfoNode *)v32,
              QueueForCurrentNode,
              v83,
              v28,
              &v85,
              &v97,
              (struct CInputDest *)v22);
            if ( !*v22 )
              goto LABEL_106;
          }
          else
          {
            CTouchProcessor::DeterminePointerTargetWindow(
              (CTouchProcessor *)this,
              v89,
              (struct CPointerInfoNode *)v32,
              QueueForCurrentNode,
              v28,
              &v85,
              &v97,
              (struct CInputDest *)v22);
          }
          QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(this, v89, v28, v88, IsMessageDelegated, v25);
          if ( !QueueForCurrentNode )
            goto LABEL_186;
          if ( (unsigned int)CTouchProcessor::RevalidateFrameProcessing(
                               0LL,
                               v89,
                               v28,
                               (const struct CPointerInfoNode *)v32,
                               0) )
          {
            if ( !*v22 )
              goto LABEL_157;
            if ( (*(_DWORD *)(v32 + 180) & 0x10000) != 0
              && !(unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v32)
              && (*(_DWORD *)(v32 + 4) & 0x80u) == 0 )
            {
              CTouchProcessor::PointerParentNotify(this, (struct CInputDest *)v22, (void **)v32);
              QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                                      this,
                                      v89,
                                      v28,
                                      v88,
                                      IsMessageDelegated,
                                      v25);
              if ( !QueueForCurrentNode )
                goto LABEL_186;
              if ( !(unsigned int)CTouchProcessor::RevalidateFrameProcessing(
                                    0LL,
                                    v89,
                                    v28,
                                    (const struct CPointerInfoNode *)v32,
                                    0) )
                goto LABEL_106;
              v56 = *(_QWORD *)(v32 + 16);
              v84 = 0LL;
              if ( (unsigned int)CTouchProcessor::RecheckPointerCapture((CTouchProcessor *)this, v56, v28, &v84, &v85) )
                CInputDest::operator=((__int64)v22, (__int64)v84);
            }
            if ( !*v22 || !(unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v32) )
              goto LABEL_157;
            v58 = CTouchProcessor::LookupNode(v57, (const struct CPointerInputFrame *)v19, v83);
            *((_DWORD *)v58 + 36) = v85;
            CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v107, (struct CInputDest *)v22);
            CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
              (CInpUnlockGuardExclusive *)v105,
              (struct CEResourceLock *)(this + 4),
              *(void **)(v32 + 16));
            v59 = *(_QWORD *)(v32 + 16);
            v60 = *((_OWORD *)v22 + 1);
            v61 = *(unsigned __int16 *)(v32 + 144);
            v108[0] = *(_OWORD *)v22;
            v62 = *((_OWORD *)v22 + 2);
            v108[1] = v60;
            v63 = *((_OWORD *)v22 + 3);
            v108[2] = v62;
            v64 = *((_OWORD *)v22 + 4);
            v108[3] = v63;
            v65 = *((_OWORD *)v22 + 5);
            v108[4] = v64;
            v66 = *((_OWORD *)v22 + 6);
            v108[5] = v65;
            v108[6] = v66;
            ApiSetEditionPointerActivate(v108, v61, v59, v32 + 160);
            CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v105);
            CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v107);
            QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(this, v89, v28, v88, IsMessageDelegated, v25);
            if ( !QueueForCurrentNode )
            {
LABEL_186:
              v91 = 0;
              *v98 = 1;
              break;
            }
            if ( (unsigned int)CTouchProcessor::RevalidateFrameProcessing(
                                 0LL,
                                 v89,
                                 v28,
                                 (const struct CPointerInfoNode *)v32,
                                 0) )
            {
              v67 = *(_QWORD *)(v32 + 16);
              v84 = 0LL;
              if ( (unsigned int)CTouchProcessor::RecheckPointerCapture((CTouchProcessor *)this, v67, v28, &v84, &v85) )
                CInputDest::operator=((__int64)v22, (__int64)v84);
LABEL_157:
              if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval((CPointerInfoNode *)v32, v89) )
              {
                v96[3] = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4329);
              }
              CTouchProcessor::SetPointerInfoNodeTarget(
                (CTouchProcessor *)this,
                (const struct CPointerInputFrame *)v19,
                v83,
                (const struct CInputDest *)v22,
                v85,
                &v97,
                0,
                0,
                1,
                0);
              if ( *v22 )
              {
                if ( (*(_DWORD *)(v32 + 180) & 0x10000) != 0 )
                {
                  CTouchProcessor::SetPointerImplicitCapture(
                    (CTouchProcessor *)this,
                    *(_QWORD *)(v32 + 16),
                    (const struct CInputDest *)v22,
                    v85,
                    v28);
                }
                else if ( v88 == 593 )
                {
                  CTouchProcessor::SetPointerExplicitCapture(
                    this,
                    *(_QWORD *)(v32 + 16),
                    (const struct CInputDest *)v22,
                    v85,
                    v28);
                }
              }
              if ( (unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v32) )
              {
                v40 = v83;
                if ( (*(_DWORD *)(v32 + 180) & 0x2000) != 0 )
                {
                  LODWORD(v84) = 0;
                  if ( v83 )
                  {
                    v68 = 0LL;
                    do
                    {
                      if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)(v68 + *(_QWORD *)(v19 + 240)))
                        && *(_DWORD *)(v32 + 8) == *((_DWORD *)v69 + 2) )
                      {
                        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
                          || (v71 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
                        {
                          v71 = v70;
                        }
                        v72 = &WPP_RECORDER_INITIALIZED;
                        v86 = v71;
                        v87 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                        if ( v71 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        {
                          LOBYTE(v72) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                          UserSessionState = W32GetUserSessionState(v72);
                          LOBYTE(v74) = v87;
                          LOBYTE(v75) = v86;
                          WPP_RECORDER_AND_TRACE_SF_(
                            *((_QWORD *)WPP_GLOBAL_Control + 3),
                            v75,
                            v74,
                            *(_QWORD *)(UserSessionState + 69400),
                            4,
                            4,
                            96,
                            (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
                          v70 = 0;
                        }
                        CTouchProcessor::SetPointerInfoNodeTarget(
                          (CTouchProcessor *)this,
                          (const struct CPointerInputFrame *)v19,
                          (unsigned int)v84,
                          (const struct CInputDest *)v22,
                          v85,
                          &v97,
                          v70,
                          v70,
                          1,
                          v70);
                        if ( *v22 )
                        {
                          v76 = *(_QWORD *)(v19 + 240);
                          if ( (*(_DWORD *)(v76 + v68 + 180) & 0x10000) != 0 )
                          {
                            CTouchProcessor::SetPointerImplicitCapture(
                              (CTouchProcessor *)this,
                              *(_QWORD *)(v76 + v68 + 16),
                              (const struct CInputDest *)v22,
                              v85,
                              v28);
                          }
                          else if ( v88 == 593 )
                          {
                            CTouchProcessor::SetPointerExplicitCapture(
                              this,
                              *(_QWORD *)(v32 + 16),
                              (const struct CInputDest *)v22,
                              v85,
                              v28);
                          }
                        }
                      }
                      else if ( (unsigned int)CPointerInfoNode::IsValid(v69) )
                      {
                        v96[4] = 0x20000;
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4399);
                      }
                      v68 += 480LL;
                      v40 = v83;
                      LODWORD(v84) = (_DWORD)v84 + 1;
                    }
                    while ( (unsigned int)v84 < v83 );
                    v25 = v103;
                  }
                }
                goto LABEL_107;
              }
            }
          }
        }
      }
      else
      {
        v90 = (int)v38;
      }
LABEL_106:
      v40 = v83;
LABEL_107:
      v31 = *(unsigned int *)(v19 + 48);
      v32 += 480LL;
      v83 = v40 + 1;
    }
    while ( v40 + 1 < (unsigned int)v31 );
  }
  Win32RawLockedItemBase<CPointerInputFrame,0,0,1,1>::UnlockWorker(BugCheckParameter2, 0);
  Win32RawLockedItemBase<CInputDest,0,1,0,1>::UnlockWorker((ULONG_PTR)v101, 0);
  v77 = v91;
  if ( v91 )
  {
    if ( (*(_DWORD *)(v19 + 228) & 0x10) == 0 )
    {
      if ( v90 )
      {
        if ( !v28 )
        {
          v78 = CTouchProcessor::FindAndReferenceFrameById((__int64)this, *(_DWORD *)(v19 + 40), 4u);
          if ( v78 )
          {
            *(_DWORD *)(v78 + 228) |= 0x10u;
            CTouchProcessor::UnreferenceFrameInt(this, v78);
          }
        }
      }
    }
  }
  CTouchProcessor::UnreferenceFrame(this, v19);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v79) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v79) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v80) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v80) = 0;
  }
  if ( (_BYTE)v79 || (_BYTE)v80 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v79,
      v80,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      97,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  Win32RawLockedItemBase<CPointerInputFrame,0,0,1,1>::UnlockWorker(BugCheckParameter2, 1);
  if ( v102 != -1 )
  {
    PopAndFreeAlwaysW32ThreadLock((__int64)v101);
    v102 = -1LL;
  }
  v9 = v77;
LABEL_206:
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v106);
  return v9;
}
