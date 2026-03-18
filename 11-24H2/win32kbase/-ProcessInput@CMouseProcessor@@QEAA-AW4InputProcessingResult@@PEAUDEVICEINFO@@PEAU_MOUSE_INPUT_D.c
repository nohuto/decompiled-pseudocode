/*
 * XREFs of ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x14018D338
 * Callers:
 *     ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1401893B0 (-ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1400501A8 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     ?ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z @ 0x140050724 (-ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14005081C (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 *     IsMouseIVEnabled @ 0x140050CD0 (IsMouseIVEnabled.c)
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x140050D10 (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x140051ED8 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x140051F28 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 *     isChildPartition @ 0x1400525E0 (isChildPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140062674 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     EtwTraceMouseInputApc @ 0x140092700 (EtwTraceMouseInputApc.c)
 *     UpconvertTime @ 0x1400E7650 (UpconvertTime.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1400EC220 (ResetAccessibilityCountersOnMouseInput.c)
 *     ?HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z @ 0x1400EF498 (-HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x140157398 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ApiSetEditionStopSonar @ 0x1401933CC (ApiSetEditionStopSonar.c)
 *     ?SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ @ 0x14019D65C (-SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall CMouseProcessor::ProcessInput(CMouseProcessor *a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 v6; // rdi
  CMouseProcessor *v7; // r13
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  bool v13; // bl
  bool v14; // di
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // r14d
  bool v21; // bl
  bool v22; // di
  __int64 UserSessionState; // rax
  int v24; // r8d
  int v25; // edx
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  __int64 v28; // r14
  unsigned int v29; // ecx
  unsigned __int64 v30; // rax
  CMouseProcessor *v31; // rcx
  unsigned __int64 QuadPart; // r13
  int v33; // edi
  __int64 v34; // rcx
  struct tagUIPI_INFO_INT *v35; // r14
  int v36; // edi
  _QWORD *v37; // rdx
  __int16 v38; // cx
  __int64 v39; // rax
  __int128 v40; // xmm0
  __int64 v41; // r9
  bool v42; // di
  bool v43; // si
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  struct tagUIPI_INFO_INT *v48; // [rsp+28h] [rbp-D8h]
  int v50; // [rsp+58h] [rbp-A8h]
  unsigned int v51; // [rsp+5Ch] [rbp-A4h]
  struct tagUIPI_INFO_INT *v52; // [rsp+60h] [rbp-A0h]
  struct _MOUSE_INPUT_DATA *v53; // [rsp+68h] [rbp-98h]
  unsigned __int64 v54; // [rsp+70h] [rbp-90h]
  __int128 v55; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v56; // [rsp+90h] [rbp-70h]
  __int64 v57; // [rsp+A0h] [rbp-60h]
  CMouseProcessor *v58; // [rsp+A8h] [rbp-58h]
  __int64 *v59[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v60[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v61; // [rsp+D0h] [rbp-30h]
  __int64 v62; // [rsp+E0h] [rbp-20h]
  __int64 v63; // [rsp+E8h] [rbp-18h]
  __int64 v64; // [rsp+F0h] [rbp-10h]
  LARGE_INTEGER PerformanceCounter; // [rsp+F8h] [rbp-8h]
  LARGE_INTEGER v66; // [rsp+100h] [rbp+0h]
  int v67; // [rsp+108h] [rbp+8h]
  int v68; // [rsp+10Ch] [rbp+Ch]
  __int128 v69; // [rsp+110h] [rbp+10h] BYREF
  __int64 v70; // [rsp+120h] [rbp+20h]
  struct tagPOINT v71; // [rsp+130h] [rbp+30h] BYREF
  __int64 v72; // [rsp+138h] [rbp+38h]
  _OWORD v73[3]; // [rsp+140h] [rbp+40h] BYREF
  int v74; // [rsp+170h] [rbp+70h]
  int v75; // [rsp+174h] [rbp+74h]
  unsigned __int64 v76[12]; // [rsp+180h] [rbp+80h] BYREF

  v6 = a2;
  v58 = a1;
  v7 = a1;
  v8 = a4;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v59, "ProcessMouseInput", 0LL);
  v9 = 0;
  v62 = 0LL;
  v68 = 0;
  v61 = 0LL;
  if ( a5 )
    v9 = 2;
  v50 = v9;
  v67 = v9;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v60[0] = *(_QWORD *)(v6 + 2256);
  v60[1] = *(_QWORD *)(v6 + 2272);
  v63 = *(_QWORD *)(v6 + 2280);
  v64 = *(_QWORD *)(v6 + 2296);
  v51 = 0;
  EtwTraceMouseInputApc(v10);
  v12 = *(_DWORD **)(W32GetUserSessionState(v11) + 19928);
  if ( (*v12 & 0x2000) == 0 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v12) + 19000) )
    {
LABEL_13:
      InputTraceLogging::Mouse::DropInput();
      goto LABEL_65;
    }
    if ( (*(_DWORD *)(W32GetUserSessionState(v18) + 67056) & 0x100) != 0 )
      ResetAccessibilityCountersOnMouseInput(v19);
    ApiSetEditionStopSonar();
    v20 = *(_DWORD *)(v6 + 240);
    if ( v20 < 0 )
    {
      v21 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v24) = v22;
        LOBYTE(v25) = v21;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v25,
          v24,
          *(_QWORD *)(UserSessionState + 69400),
          3,
          6,
          13,
          (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids,
          v20);
      }
      goto LABEL_13;
    }
    if ( IsMouseIVEnabled() && isChildPartition(v26) )
      CMouseProcessor::RootCursorAsync::SynchronizeCursorPosition((CMouseProcessor *)((char *)v7 + 4064));
    v72 = 0LL;
    v71 = *(struct tagPOINT *)(W32GetUserSessionState(v26) + 19240);
    v52 = (struct tagUIPI_INFO_INT *)((v6 + 376) & -(__int64)(a5 != 0));
    if ( !a3 )
    {
LABEL_64:
      v66 = KeQueryPerformanceCounter(0LL);
      W32AcquirePushLockExclusiveEx((CMouseProcessor *)((char *)v7 + 3648), 0);
      MousePerfSummary::CollectMousePerfTelemetry(
        (CMouseProcessor *)((char *)v7 + 3024),
        (const struct _MousePerf *)v60);
      W32ReleasePushLockExclusiveEx((CMouseProcessor *)((char *)v7 + 3648), 0LL);
      goto LABEL_65;
    }
    v27 = a3 + v8;
    v54 = a3 + v8;
    while ( 1 )
    {
      v28 = (a3 + 24) & -(__int64)(a3 + 24 < v27);
      v53 = (struct _MOUSE_INPUT_DATA *)v28;
      if ( (*(_BYTE *)(a3 + 2) & 4) == 0 )
        break;
      v51 = 1;
LABEL_63:
      a3 = v28;
      if ( !v28 )
        goto LABEL_64;
    }
    if ( a5 && (v29 = *(_DWORD *)(a3 + 20)) != 0 )
    {
      v30 = UpconvertTime(v29);
      *(_DWORD *)(a3 + 20) = 0;
      v57 = v30;
      QuadPart = gliQpcFreq.QuadPart * v30 / 0x3E8;
    }
    else
    {
      v57 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
      v50 = v67;
    }
    CMouseProcessor::HandleMouseForLegacyTouchpad(v31, (struct _MOUSE_INPUT_DATA *)a3, (struct DEVICEINFO *)v6);
    v33 = v28 == 0 ? 0x100 : 0;
    if ( IsMouseIVEnabled() && isChildPartition(v34) )
      v33 |= 4u;
    if ( a5 )
    {
      v35 = v52;
      v36 = v33 | (*((_DWORD *)v52 + 3) != 0 ? 112 : 48);
      if ( (*(_BYTE *)(a3 + 2) & 1) != 0 || *(_DWORD *)(a3 + 12) )
      {
        v37 = (_QWORD *)a2;
LABEL_52:
        *((_QWORD *)&v55 + 1) = *v37;
        v39 = v37[3];
        *(_QWORD *)&v55 = 2LL;
        v40 = v55;
        *(_QWORD *)&v55 = v57;
        v69 = v40;
        v70 = v39;
        *((_QWORD *)&v55 + 1) = QuadPart;
        v56 = QuadPart;
        CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)v76, a3, &v55, v36, (__int64)&v69, 0LL);
        v6 = a2;
        InputTraceLogging::Mouse::ProcessInput(
          (const struct RIMDEV *)a2,
          (const struct CMouseProcessor::MouseInputDataEx *)v76,
          0LL,
          v41);
        v7 = v58;
        if ( (unsigned int)CMouseProcessor::HandleMouseInterceptWorker(v58, v76) == 1 )
        {
          v42 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v43 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v44 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v45) = v43;
            LOBYTE(v46) = v42;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v46,
              v45,
              *(_QWORD *)(v44 + 69400),
              4,
              6,
              14,
              (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
          }
          v28 = (__int64)v53;
          v6 = a2;
        }
        else
        {
          if ( !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)v76, 2048)
            && (v76[0] & 0x2AA00000000LL) != 0 )
          {
            PoLatencySensitivityHint(0LL);
          }
          v48 = v35;
          v28 = (__int64)v53;
          v74 = v50;
          v75 = WORD2(v76[0]);
          memset(v73, 0, sizeof(v73));
          CMouseProcessor::ProcessMouseInputData(
            v7,
            (struct CMouseProcessor::MouseInputDataEx *)v76,
            &v71,
            (struct _MousePacketPerf *)v73,
            v53,
            v48);
        }
        v27 = v54;
        goto LABEL_63;
      }
      v37 = (_QWORD *)a2;
    }
    else
    {
      v38 = *(_WORD *)(a3 + 2);
      v36 = v33 | 0x40;
      v37 = (_QWORD *)a2;
      if ( (v38 & 1) != 0 && (*(_DWORD *)(a2 + 888) & 1) != 0 )
        *(_WORD *)(a3 + 2) = v38 | 2;
      v35 = v52;
      if ( *(_DWORD *)(a3 + 12) )
        goto LABEL_52;
    }
    if ( !*(_DWORD *)(a3 + 16) )
      v36 |= 8u;
    goto LABEL_52;
  }
  InputTraceLogging::Mouse::DropInput();
  v13 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v16) = v14;
    LOBYTE(v17) = v13;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v17,
      v16,
      *(_QWORD *)(v15 + 69400),
      4,
      6,
      12,
      (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
  }
LABEL_65:
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v59);
  return v51;
}
