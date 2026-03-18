/*
 * XREFs of ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x14005F298
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14005E1E8 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x14018D9A8 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x14018E920 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     SendMessageTo @ 0x140048F20 (SendMessageTo.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x140053BB0 (RIMGetVirtualDesktopPhysicalSize.c)
 *     ?GetUnionRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x140053C20 (-GetUnionRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@AEBVCInputDest@@W4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x140093C48 (-SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@AEBVCInputDest@@W4INPU.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1400952AC (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     IsMiPActive @ 0x1400BD87C (IsMiPActive.c)
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@W4FindRegionStrategy@2@@Z @ 0x1400C6360 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@W4FindRegionStra.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D3998 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1400E71A0 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x140157398 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ConvertPointCoordinates @ 0x1401584C4 (ConvertPointCoordinates.c)
 *     ApiSetEditionGetInputTransform @ 0x140191BB0 (ApiSetEditionGetInputTransform.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F6360 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@AEBUInputDeliveryContext@2@PEA_K@Z @ 0x14021BD34 (-AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@.c)
 *     ApiSetResetLastSeenFrameId @ 0x140222544 (ApiSetResetLastSeenFrameId.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall CMouseProcessor::ForwardInputToISM(
        __int64 a1,
        __int64 a2,
        const struct CMouseProcessor::CMouseEvent *a3,
        struct CMouseProcessor::InputDeliveryContext *a4,
        _QWORD *a5,
        int a6,
        int a7,
        __int64 a8)
{
  unsigned int v8; // r13d
  char v9; // si
  bool v13; // al
  __int64 v15; // rcx
  __int64 v16; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  bool v18; // zf
  int v19; // eax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // eax
  _DWORD *v39; // rbx
  __int64 v40; // rcx
  int v41; // edi
  __int64 UserSessionState; // rax
  struct tagTHREADINFO *ThreadInfo; // rax
  bool v44; // bl
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  struct CMouseProcessor::InputDeliveryContext *v48[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+58h] [rbp-A8h]
  _QWORD *v50; // [rsp+60h] [rbp-A0h]
  __int128 v51; // [rsp+70h] [rbp-90h] BYREF
  __int128 v52; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v53[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v54[64]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v55[45]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v56[38]; // [rsp+3B0h] [rbp+2B0h] BYREF

  v8 = *(_DWORD *)(a2 + 4);
  v9 = 1;
  v48[0] = a4;
  v49 = a1;
  v50 = a5;
  v13 = v8 == 1 || v8 == 4;
  if ( v8 - 2 > 1 && !v13 )
    return 1LL;
  memset(v56, 0, sizeof(v56));
  v15 = *((_QWORD *)a3 + 1);
  v56[0] = *(_QWORD *)(v15 + 8);
  if ( *(_QWORD *)(v15 + 88) )
    v56[4] = *(_QWORD *)(v15 + 88);
  else
    v56[4] = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  v16 = *((_QWORD *)a3 + 1);
  PerformanceCounter = *(LARGE_INTEGER *)(v16 + 96);
  if ( !PerformanceCounter.QuadPart )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v16 = *((_QWORD *)a3 + 1);
  }
  v18 = *((_DWORD *)a3 + 4) == 3;
  v56[5] = PerformanceCounter.QuadPart;
  if ( v18 )
    v19 = *(_DWORD *)(a1 + 3660);
  else
    v19 = *(_DWORD *)(a1 + 3656);
  HIDWORD(v56[37]) = v19;
  LOWORD(v56[1]) = *(_WORD *)(v16 + 24);
  WORD1(v56[1]) = *(_WORD *)(v16 + 36);
  LODWORD(v56[2]) = *(_DWORD *)(v16 + 32);
  HIDWORD(v56[3]) = *(_DWORD *)(v16 + 40);
  (*(void (__fastcall **)(const struct CMouseProcessor::CMouseEvent *, _QWORD *))(*(_QWORD *)a3 + 24LL))(a3, &v56[1]);
  v56[7] = *a5;
  v51 = *(_OWORD *)RIMGetVirtualDesktopPhysicalSize((__int64)v53);
  v52 = *InputConfig::Mouse::GetUnionRegion(v55);
  ConvertPointCoordinates(v56[7], &v52, &v51, &v56[8]);
  v20 = *(_OWORD *)(a2 + 16);
  *(_OWORD *)&v56[9] = *(_OWORD *)a2;
  LODWORD(v56[23]) = a6;
  *(_OWORD *)&v56[13] = *(_OWORD *)(a2 + 32);
  LODWORD(v56[24]) = a7;
  v21 = *(_OWORD *)(a2 + 64);
  *(_OWORD *)&v56[11] = v20;
  v22 = *(_OWORD *)(a2 + 48);
  *(_OWORD *)&v56[17] = v21;
  v23 = *(_OWORD *)(a2 + 96);
  *(_OWORD *)&v56[15] = v22;
  v24 = *(_OWORD *)(a2 + 80);
  *(_OWORD *)&v56[21] = v23;
  *(_OWORD *)&v56[19] = v24;
  v27 = a8 | 1;
  if ( (*(_BYTE *)(W32GetUserSessionState(v25) + 14336) & 4) == 0 )
    v27 = a8;
  v29 = v27 | 2;
  if ( (*(_BYTE *)(W32GetUserSessionState(v26) + 14336) & 0x10) == 0 )
    v29 = v27;
  v31 = v29 | 0x10;
  if ( (*(_BYTE *)(W32GetUserSessionState(v28) + 14337) & 1) == 0 )
    v31 = v29;
  v33 = v31 | 0x20;
  if ( (*(_BYTE *)(W32GetUserSessionState(v30) + 14337) & 4) == 0 )
    v33 = v31;
  LOBYTE(v34) = *(_BYTE *)(W32GetUserSessionState(v32) + 14337);
  v35 = v33 | 0x40;
  v56[19] = 0LL;
  if ( (v34 & 0x10) == 0 )
    v35 = v33;
  v56[25] = v35;
  if ( (*(_BYTE *)(W32GetUserSessionState(v34) + 14340) & 4) != 0 )
    LODWORD(v56[35]) |= 8u;
  if ( (*(_BYTE *)(W32GetUserSessionState(v36) + 14340) & 1) != 0 )
    LODWORD(v56[35]) |= 4u;
  v38 = *((_DWORD *)a3 + 4);
  if ( v38 == 1 )
  {
    if ( *(_DWORD *)(*((_QWORD *)a3 + 1) + 164LL) == 1 )
      LODWORD(v56[34]) |= 1u;
  }
  else if ( v38 == 3 )
  {
    v39 = *(_DWORD **)(W32GetUserSessionState(v37) + 16728);
    CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
      (CInpLockGuardExclusiveIfNeeded *)v54,
      (struct CEResourceLock *)(v39 + 2),
      0LL);
    v41 = (*v39)++;
    if ( v41 == -1 )
    {
      *v39 = 1;
      UserSessionState = W32GetUserSessionState(v40);
      ApiSetResetLastSeenFrameId(*(_QWORD *)(UserSessionState + 19200));
    }
    CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v54);
    HIDWORD(v56[34]) = v41;
  }
  ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)a2);
  if ( ThreadInfo )
    HIDWORD(v56[23]) = IsMiPActive(ThreadInfo, 0LL);
  ApiSetEditionGetInputTransform(a2, &v56[26]);
  if ( v8 != 2
    || CMouseProcessor::BufferedMouseInputList::AddInputToList(
         (CMouseProcessor::BufferedMouseInputList *)(v49 + 4040),
         a3,
         (struct CInputDest *)a2,
         v48[0],
         &v56[6]) )
  {
    CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v48);
    InputConfig::Mouse::RegionFromPoint(*v50, v48, 0LL);
    if ( v48[0] )
      *(_OWORD *)((char *)&v56[35] + 4) = *(_OWORD *)v48[0];
    ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)v48[1]);
    InputTraceLogging::Mouse::SendToUserMode(v56, a2, v8);
    SendMessageTo(15LL, v56, 304LL);
    if ( v8 == 2 && *(_DWORD *)a2 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9211LL);
    return v8 - 2 > 1;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v9 = 0;
    }
    v44 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v45 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v46) = v44;
      LOBYTE(v47) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v47,
        v46,
        *(_QWORD *)(v45 + 69400),
        2,
        6,
        59,
        (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
    }
    InputTraceLogging::Mouse::DropInput(*(_QWORD *)(*((_QWORD *)a3 + 1) + 96LL), 20LL);
    return 2LL;
  }
}
