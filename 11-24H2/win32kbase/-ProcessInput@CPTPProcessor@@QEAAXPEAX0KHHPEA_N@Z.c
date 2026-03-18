/*
 * XREFs of ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x140188294
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x140188E00 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 *     ?ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x140052364 (-ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140053E64 (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?QueryInertiaStatus@CInertiaManager@@QEBA_NXZ @ 0x1400D9E04 (-QueryInertiaStatus@CInertiaManager@@QEBA_NXZ.c)
 *     ?OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z @ 0x1400E791C (-OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z.c)
 *     ?EngineInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_N@Z @ 0x140106624 (-EngineInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_N@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140182E00 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x140183FBC (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall CPTPProcessor::ProcessInput(
        CPTPProcessor *this,
        __int64 a2,
        unsigned int *a3,
        unsigned int a4,
        int a5,
        int a6,
        bool *a7)
{
  bool *v7; // r12
  __int64 v9; // rdi
  unsigned int *v10; // r13
  __int64 v11; // rsi
  unsigned int *v12; // r14
  __int64 v13; // rdx
  unsigned __int64 v14; // r12
  unsigned int *v15; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  struct CPointerInputFrame *v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  struct CPointerInputFrame *v20; // rbp
  char v21; // di
  bool v22; // si
  __int64 UserSessionState; // rax
  int v24; // r8d
  int v25; // edx
  unsigned int v26; // r15d
  __int64 v27; // rsi
  char v28; // di
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // eax
  _QWORD *v33; // rdi
  LARGE_INTEGER v34; // rax
  __int64 *v35; // r9
  LARGE_INTEGER v36; // r10
  __int64 v37; // rdx
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rax
  BOOL v48; // eax
  unsigned int v49; // r8d
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
  char *v55; // rcx
  _OWORD *v56; // rax
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm0
  __int64 v70; // rax
  __int64 v71; // [rsp+40h] [rbp-58h]

  v7 = a7;
  *((_BYTE *)this + 1984) = 0;
  *((_BYTE *)this + 40) = 0;
  v9 = a4;
  *a7 = 0;
  v10 = a3;
  v11 = HMValidateHandleNoSecure(a2, 19);
  v71 = v11;
  v12 = v10;
  v13 = (unsigned int)v9;
  if ( v10 + 60 <= (unsigned int *)((char *)v10 + v9) )
  {
    v14 = (unsigned __int64)v10 + v9;
    while ( 1 )
    {
      v15 = v12;
      v12 = (unsigned int *)((char *)v12 + *v12);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      *((LARGE_INTEGER *)this + 257) = PerformanceCounter;
      *((_QWORD *)v15 + 8) = *(_QWORD *)(v11 + 2272);
      *((LARGE_INTEGER *)v15 + 9) = PerformanceCounter;
      InputTraceLogging::TelemetryDebug::Pointer::ProcessInput((const struct TELEMETRY_POINTER_FRAME_TIMES *)(v15 + 12));
      v17 = CTouchProcessor::CommitRimCompleteFrame((PERESOURCE *)this, (struct RIMCOMPLETEFRAME *)v15, 1, 0);
      v20 = v17;
      if ( v17 )
        break;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v21 = 0;
      }
      v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v24) = v22;
        LOBYTE(v25) = v21;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v25,
          v24,
          *(_QWORD *)(UserSessionState + 69400),
          2,
          4,
          10,
          (__int64)&WPP_c9d17567e0a338e400654e2e8390aa2d_Traceguids);
      }
LABEL_54:
      v11 = v71;
      if ( (unsigned __int64)(v12 + 60) > v14 )
      {
        v13 = a4;
        v10 = a3;
        v7 = a7;
        goto LABEL_56;
      }
    }
    v26 = v15[49];
    InputTraceLogging::PTP::EngineInput(v17, v26 != 0, v18, v19);
    v27 = *(_QWORD *)(v11 + 456);
    v28 = 0;
    v30 = *(_QWORD *)(W32GetUserSessionState(v29) + 19928);
    if ( *((_DWORD *)this + 143) != (*(_DWORD *)(v30 + 1988) != 0) )
    {
      v28 = 1;
      v30 = *(_QWORD *)(W32GetUserSessionState(v30) + 19928);
      *((_DWORD *)this + 143) = *(_DWORD *)(v30 + 1988) != 0;
    }
    v32 = *(_DWORD *)(v27 + 268)
       && (!*(_QWORD *)(W32GetUserSessionState(v30) + 18960)
        || *(char *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v31) + 18960) + 464LL) + 816LL) >= 0);
    if ( v32 == *((_DWORD *)this + 141) )
    {
      if ( !v28 )
      {
LABEL_22:
        v33 = (_QWORD *)((char *)this + 720);
        *((_DWORD *)this + 136) = a5;
        *((_DWORD *)this + 137) = a6;
        *((_QWORD *)this + 66) = a2;
        *((_QWORD *)this + 67) = v20;
        memset((char *)this + 720, 0, 0x278uLL);
        *((_QWORD *)this + 90) = *(_QWORD *)(*((_QWORD *)v20 + 30) + 248LL);
        v34 = KeQueryPerformanceCounter(0LL);
        v35 = (__int64 *)*((_QWORD *)this + 249);
        v36 = v34;
        v37 = *v35;
        if ( *v35 != *((_QWORD *)this + 250) )
        {
          *((_QWORD *)this + 250) = v37;
          if ( v37 )
          {
            v38 = v37 + *v33 - v34.QuadPart;
            v39 = *v33 - 1LL;
            v40 = v38;
            if ( v38 >= v39 )
              v40 = *v33 - 1LL;
            if ( v40 <= *((_QWORD *)this + 169) + 1LL )
            {
              v39 = *((_QWORD *)this + 169) + 1LL;
            }
            else if ( v38 < v39 )
            {
              v39 = v38;
            }
            *((_QWORD *)this + 252) = v39;
          }
          else
          {
            *((_QWORD *)this + 252) = 0LL;
          }
        }
        v41 = v35[1];
        if ( v41 != *((_QWORD *)this + 251) )
        {
          *((_QWORD *)this + 251) = v41;
          if ( v41 )
          {
            v42 = v41 + *v33 - v36.QuadPart;
            v43 = *v33 - 1LL;
            v44 = v42;
            if ( v42 >= v43 )
              v44 = *v33 - 1LL;
            if ( v44 <= *((_QWORD *)this + 169) + 1LL )
            {
              v43 = *((_QWORD *)this + 169) + 1LL;
            }
            else if ( v42 < v43 )
            {
              v43 = v41 + *v33 - v36.QuadPart;
            }
            *((_QWORD *)this + 253) = v43;
          }
          else
          {
            *((_QWORD *)this + 253) = 0LL;
          }
        }
        *((_QWORD *)this + 91) = *((_QWORD *)this + 252);
        *((_QWORD *)this + 92) = *((_QWORD *)this + 253);
        v45 = *(unsigned int *)(*((_QWORD *)v20 + 30) + 232LL);
        *((_DWORD *)this + 186) = v45;
        v46 = *(_QWORD *)(W32GetUserSessionState(v45) + 19240);
        *(_QWORD *)((char *)this + 748) = v46;
        *((_DWORD *)this + 189) = v26 != 0;
        v48 = 1;
        if ( (*((_DWORD *)this + 97) & 1) == 0 )
        {
          v47 = W32GetUserSessionState(v46);
          if ( !CInertiaManager::QueryInertiaStatus((CInertiaManager *)(v47 + 16920)) )
            v48 = 0;
        }
        *((_DWORD *)this + 190) = v48;
        v49 = 0;
        *((_DWORD *)this + 193) = -__CFSHR__(*((_DWORD *)this + 97), 2);
        *((_DWORD *)this + 191) = *((_DWORD *)v20 + 10);
        *((_DWORD *)this + 192) = *((_DWORD *)v20 + 12);
        if ( *((_DWORD *)v20 + 12) )
        {
          do
          {
            v50 = v49++;
            v51 = 480 * v50;
            v52 = 3 * v50;
            v53 = *((_QWORD *)v20 + 30);
            v52 *= 32LL;
            *(_OWORD *)((char *)this + v52 + 776) = *(_OWORD *)(v53 + v51 + 168);
            *(_OWORD *)((char *)this + v52 + 792) = *(_OWORD *)(v53 + v51 + 184);
            *(_OWORD *)((char *)this + v52 + 808) = *(_OWORD *)(v53 + v51 + 200);
            *(_OWORD *)((char *)this + v52 + 824) = *(_OWORD *)(v53 + v51 + 216);
            *(_OWORD *)((char *)this + v52 + 840) = *(_OWORD *)(v53 + v51 + 232);
            *(_OWORD *)((char *)this + v52 + 856) = *(_OWORD *)(v53 + v51 + 248);
            *(_DWORD *)((char *)this + v52 + 780) = *(unsigned __int16 *)(*((_QWORD *)v20 + 30) + v51 + 160);
          }
          while ( v49 != *((_DWORD *)v20 + 12) );
        }
        PTPEngineTraceProducer::OnInput(
          *((PTPEngineTraceProducer **)this + 69),
          (CPTPProcessor *)((char *)this + 720),
          *((struct tagTPAAPSTATE **)this + 249));
        v54 = 4LL;
        v55 = (char *)this + 1352;
        v56 = (_OWORD *)((char *)this + 720);
        do
        {
          v57 = v56[1];
          *(_OWORD *)v55 = *v56;
          v58 = v56[2];
          *((_OWORD *)v55 + 1) = v57;
          v59 = v56[3];
          *((_OWORD *)v55 + 2) = v58;
          v60 = v56[4];
          *((_OWORD *)v55 + 3) = v59;
          v61 = v56[5];
          *((_OWORD *)v55 + 4) = v60;
          v62 = v56[6];
          *((_OWORD *)v55 + 5) = v61;
          v63 = v56[7];
          v56 += 8;
          *((_OWORD *)v55 + 6) = v62;
          v55 += 128;
          *((_OWORD *)v55 - 1) = v63;
          --v54;
        }
        while ( v54 );
        v64 = v56[1];
        *(_OWORD *)v55 = *v56;
        v65 = v56[2];
        *((_OWORD *)v55 + 1) = v64;
        v66 = v56[3];
        *((_OWORD *)v55 + 2) = v65;
        v67 = v56[4];
        *((_OWORD *)v55 + 3) = v66;
        v68 = v56[5];
        *((_OWORD *)v55 + 4) = v67;
        v69 = v56[6];
        v70 = *((_QWORD *)v56 + 14);
        *((_OWORD *)v55 + 5) = v68;
        *((_OWORD *)v55 + 6) = v69;
        *((_QWORD *)v55 + 14) = v70;
        if ( *((_QWORD *)this + 67) )
        {
          CTouchProcessor::FreeFrame((PERESOURCE *)this, (char *)v20, 1);
          *((_QWORD *)this + 67) = 0LL;
        }
        goto LABEL_54;
      }
    }
    else
    {
      *((_DWORD *)this + 141) = v32;
    }
    CPTPProcessor::UpdateEnvironment((__int64)this, 0, (struct tagHID_POINTER_DEVICE_INFO *)v27);
    goto LABEL_22;
  }
LABEL_56:
  if ( v12 != (unsigned int *)((char *)v10 + v13) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 192LL);
  *v7 = *((_BYTE *)this + 40);
}
