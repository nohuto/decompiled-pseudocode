/*
 * XREFs of ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C005649C
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C00557D8 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C01F9444 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01FA2E8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0057318 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C00588B8 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ??1CLockedInputSpace@@QEAA@XZ @ 0x1C0058A20 (--1CLockedInputSpace@@QEAA@XZ.c)
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C00641C0 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x1C0064430 (RIMGetVirtualDesktopPhysicalSize.c)
 *     ?GetUnionRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x1C00644A0 (-GetUnionRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 *     SendMessageTo @ 0x1C006A100 (SendMessageTo.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00B9418 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00B9500 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     IsMiPActive @ 0x1C012E5F4 (IsMiPActive.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01DEC2C (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ConvertPointCoordinates @ 0x1C01EFBE8 (ConvertPointCoordinates.c)
 *     ?AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@AEBUInputDeliveryContext@2@PEA_K@Z @ 0x1C01F5174 (-AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@.c)
 *     ?SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@AEBVCInputDest@@W4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C01FAF30 (-SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@AEBVCInputDest@@W4INPU.c)
 *     ApiSetEditionGetInputTransform @ 0x1C0206244 (ApiSetEditionGetInputTransform.c)
 */

__int64 __fastcall CMouseProcessor::ForwardInputToISM(
        __int64 a1,
        __int64 a2,
        const struct CMouseProcessor::CMouseEvent *a3,
        struct CMouseProcessor::InputDeliveryContext *a4,
        struct tagPOINT *a5,
        int a6,
        int a7,
        __int64 a8)
{
  unsigned int v8; // r13d
  char v9; // si
  bool v13; // al
  __int64 v15; // rcx
  unsigned __int128 v16; // rax
  __int64 v17; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  bool v19; // zf
  int v20; // eax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  int v63; // eax
  _DWORD *v64; // rbx
  int v65; // edi
  struct tagDESKTOP *v66; // rbx
  struct tagTHREADINFO *ThreadInfo; // rax
  __int64 v68; // r8
  int v69; // edx
  struct CMouseProcessor::InputDeliveryContext *v70[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v71; // [rsp+58h] [rbp-A8h]
  struct tagPOINT *v72; // [rsp+60h] [rbp-A0h]
  __int128 v73; // [rsp+70h] [rbp-90h]
  __int128 v74; // [rsp+80h] [rbp-80h]
  _BYTE v75[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v76[64]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v77[720]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v78[38]; // [rsp+3B0h] [rbp+2B0h] BYREF

  v8 = *(_DWORD *)(a2 + 4);
  v9 = 1;
  v70[0] = a4;
  v71 = a1;
  v72 = a5;
  v13 = v8 == 1 || v8 == 4;
  if ( v8 - 2 > 1 && !v13 )
    return 1LL;
  memset(v78, 0, sizeof(v78));
  v15 = *((_QWORD *)a3 + 1);
  v78[0] = *(_QWORD *)(v15 + 8);
  *((_QWORD *)&v16 + 1) = *(_QWORD *)(v15 + 80);
  if ( !*((_QWORD *)&v16 + 1) )
    v16 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
  v17 = *((_QWORD *)a3 + 1);
  v78[4] = *((_QWORD *)&v16 + 1);
  PerformanceCounter = *(LARGE_INTEGER *)(v17 + 88);
  if ( !PerformanceCounter.QuadPart )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v17 = *((_QWORD *)a3 + 1);
  }
  v19 = *((_DWORD *)a3 + 4) == 3;
  v78[5] = PerformanceCounter.QuadPart;
  if ( v19 )
    v20 = *(_DWORD *)(a1 + 3436);
  else
    v20 = *(_DWORD *)(a1 + 3432);
  HIDWORD(v78[37]) = v20;
  LOWORD(v78[1]) = *(_WORD *)(v17 + 24);
  WORD1(v78[1]) = *(_WORD *)(v17 + 36);
  LODWORD(v78[2]) = *(_DWORD *)(v17 + 32);
  HIDWORD(v78[3]) = *(_DWORD *)(v17 + 40);
  (*(void (__fastcall **)(const struct CMouseProcessor::CMouseEvent *, _QWORD *))(*(_QWORD *)a3 + 24LL))(a3, &v78[1]);
  v78[7] = *a5;
  v73 = *(_OWORD *)RIMGetVirtualDesktopPhysicalSize(v75);
  v74 = *(_OWORD *)InputConfig::Mouse::GetUnionRegion(v77);
  ConvertPointCoordinates(v78[7]);
  v21 = *(_OWORD *)(a2 + 16);
  *(_OWORD *)&v78[9] = *(_OWORD *)a2;
  LODWORD(v78[23]) = a6;
  *(_OWORD *)&v78[13] = *(_OWORD *)(a2 + 32);
  LODWORD(v78[24]) = a7;
  v22 = *(_OWORD *)(a2 + 64);
  *(_OWORD *)&v78[11] = v21;
  v23 = *(_OWORD *)(a2 + 48);
  *(_OWORD *)&v78[17] = v22;
  v24 = *(_OWORD *)(a2 + 96);
  *(_OWORD *)&v78[15] = v23;
  v25 = *(_OWORD *)(a2 + 80);
  *(_OWORD *)&v78[21] = v24;
  *(_OWORD *)&v78[19] = v25;
  v34 = a8 | 1;
  if ( (*(_BYTE *)(SGDGetUserSessionState(v27, v26, v28, v29) + 13992) & 4) == 0 )
    v34 = a8;
  v39 = v34 | 2;
  if ( (*(_BYTE *)(SGDGetUserSessionState(v31, v30, v32, v33) + 13992) & 0x10) == 0 )
    v39 = v34;
  v44 = v39 | 0x10;
  if ( (*(_BYTE *)(SGDGetUserSessionState(v36, v35, v37, v38) + 13993) & 1) == 0 )
    v44 = v39;
  v49 = v44 | 0x20;
  if ( (*(_BYTE *)(SGDGetUserSessionState(v41, v40, v42, v43) + 13993) & 4) == 0 )
    v49 = v44;
  LOBYTE(v51) = *(_BYTE *)(SGDGetUserSessionState(v46, v45, v47, v48) + 13993);
  v54 = v49 | 0x40;
  v78[19] = 0LL;
  if ( (v51 & 0x10) == 0 )
    v54 = v49;
  v78[25] = v54;
  if ( (*(_BYTE *)(SGDGetUserSessionState(v51, v50, v52, v53) + 13996) & 4) != 0 )
    LODWORD(v78[35]) |= 8u;
  if ( (*(_BYTE *)(SGDGetUserSessionState(v56, v55, v57, v58) + 13996) & 1) != 0 )
    LODWORD(v78[35]) |= 4u;
  v63 = *((_DWORD *)a3 + 4);
  if ( v63 == 1 )
  {
    if ( *(_DWORD *)(*((_QWORD *)a3 + 1) + 148LL) == 1 )
      LODWORD(v78[34]) |= 1u;
  }
  else if ( v63 == 3 )
  {
    v64 = *(_DWORD **)(SGDGetUserSessionState(v60, v59, v61, v62) + 16368);
    CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
      (CInpLockGuardExclusiveIfNeeded *)v76,
      (struct CInpLockGuard *)(v64 + 2),
      0LL);
    v65 = (*v64)++;
    if ( v65 == -1 )
    {
      *v64 = 1;
      v66 = grpdeskRitInput;
      if ( qword_1C0296850 )
      {
        if ( (int)qword_1C0296850() >= 0 && qword_1C0296858 )
          qword_1C0296858(v66);
      }
    }
    CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v76);
    HIDWORD(v78[34]) = v65;
  }
  ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)a2);
  if ( ThreadInfo )
    HIDWORD(v78[23]) = IsMiPActive(ThreadInfo, 0LL);
  ApiSetEditionGetInputTransform(a2, &v78[26]);
  if ( v8 != 2
    || CMouseProcessor::BufferedMouseInputList::AddInputToList(
         (CMouseProcessor::BufferedMouseInputList *)(v71 + 3848),
         a3,
         (struct CInputDest *)a2,
         v70[0],
         &v78[6]) )
  {
    CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v70);
    InputConfig::Mouse::RegionFromPoint(*v72, (struct CLockedInputSpaceRegion *)v70);
    if ( v70[0] )
      *(_OWORD *)((char *)&v78[35] + 4) = *(_OWORD *)v70[0];
    CLockedInputSpace::~CLockedInputSpace((CLockedInputSpace *)v70);
    InputTraceLogging::Mouse::SendToUserMode(v78, a2, v8);
    SendMessageTo(15LL, v78, 304LL);
    if ( v8 == 2 && *(_DWORD *)a2 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8757LL);
    return v8 - 2 > 1;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v9 = 0;
    }
    LOBYTE(v68) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v69 = 53;
      LOBYTE(v69) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v69,
        v68,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        6,
        53,
        (__int64)&WPP_f645abfb8f443aa578495af70e8984ab_Traceguids);
    }
    InputTraceLogging::Mouse::DropInput(*(_QWORD *)(*((_QWORD *)a3 + 1) + 88LL), 21LL, v68);
    return 2LL;
  }
}
