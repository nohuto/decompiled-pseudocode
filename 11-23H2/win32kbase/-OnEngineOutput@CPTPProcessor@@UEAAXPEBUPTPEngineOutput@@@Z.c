/*
 * XREFs of ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01DF570
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0056A68 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00590FC (HMValidateHandleNoSecure.c)
 *     ?EvaluateEventForCompositionFrameRateBoost@CCompositionRefreshRateBooster@@QEAAXPEBUCompositionFrameRateBoostCandidateEvent@InputHelper@@@Z @ 0x1C00A783C (-EvaluateEventForCompositionFrameRateBoost@CCompositionRefreshRateBooster@@QEAAXPEBUCompositionF.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     ?MouseOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_KPEBUPTPEngineOutput@@@Z @ 0x1C00E5150 (-MouseOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_KPEBUPTPEngineOutput@@@Z.c)
 *     ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C01D17C8 (-ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x1C01DE740 (-CacheInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?CancelInertiaTimer@CPTPProcessor@@AEAAXXZ @ 0x1C01DE8AC (-CancelInertiaTimer@CPTPProcessor@@AEAAXXZ.c)
 *     ?CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1C01DE900 (-CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N.c)
 *     ?CreateGestureCache@CPTPProcessor@@AEAAPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1C01DEA08 (-CreateGestureCache@CPTPProcessor@@AEAAPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z.c)
 *     ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x1C01DEDF4 (-EndInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?GestureOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUPTPEngineOutput@@_N@Z @ 0x1C01DEF38 (-GestureOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUPTPEngineOutput@@_N@Z.c)
 *     ?QueuePTPMouseEvent@CPTPProcessor@@AEAA_NUtagPOINT@@K_K11HPEBUtagUIPI_INFO_INT@@@Z @ 0x1C01E0374 (-QueuePTPMouseEvent@CPTPProcessor@@AEAA_NUtagPOINT@@K_K11HPEBUtagUIPI_INFO_INT@@@Z.c)
 *     ?SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01E05E8 (-SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z.c)
 *     ?HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C01E25A4 (-HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 *     InitiatePTPMouseProcessing @ 0x1C01E83B0 (InitiatePTPMouseProcessing.c)
 *     IsMouseInterceptEnabled @ 0x1C01E85F0 (IsMouseInterceptEnabled.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x1C020684C (ApiSetEditionInternalSetCursorPos.c)
 */

void __fastcall CPTPProcessor::OnEngineOutput(CPTPProcessor *this, const struct PTPEngineOutput *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ecx
  void (*v9)(void); // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  void *v12; // r9
  unsigned int v13; // r8d
  bool v14; // dl
  __int64 v15; // r8
  char v16; // si
  unsigned int v17; // edx
  _DWORD *v18; // rcx
  CPTPProcessor *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  struct CPointerInputFrame *GestureCache; // rbp
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  LARGE_INTEGER PerformanceCounter; // rbp
  unsigned __int64 v33; // r14
  _QWORD *v34; // r8
  unsigned __int64 QuadPart; // r9
  int *v36; // rdx
  int v37; // eax
  _QWORD *v38; // rcx
  int v39; // ecx
  int v40; // eax
  int v41; // ecx
  int v42; // ecx
  _OWORD v43[4]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v44; // [rsp+80h] [rbp-38h]

  v5 = HMValidateHandleNoSecure(*((_QWORD *)this + 45), 19);
  if ( !v5 )
    return;
  switch ( *(_DWORD *)a2 )
  {
    case 0:
      v40 = *((_DWORD *)this + 55);
      if ( (v40 & 1) != 0 || (v40 & 2) == 0 )
      {
        v41 = *((_DWORD *)a2 + 1);
        if ( v41 )
        {
          v42 = v41 - 1;
          if ( v42 )
          {
            if ( (unsigned int)(v42 - 1) <= 1 )
              CPTPProcessor::EndInertia((CPTPProcessor *)((char *)this - 176), v4, v6, v7);
          }
          else
          {
            CPTPProcessor::CancelInertiaTimer((void **)this - 22, v4, v6, v7);
          }
        }
        else
        {
          CPTPProcessor::CacheInertia((CPTPProcessor *)((char *)this - 176));
        }
      }
      else
      {
        CPTPProcessor::SendPTPInertiaEndToContainer((CPTPProcessor *)((char *)this - 176), a2);
      }
      break;
    case 1:
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v33 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      InputTraceLogging::PTP::MouseOutput(
        *((const struct CPointerInputFrame **)this + 46),
        PerformanceCounter.QuadPart,
        a2);
      v34 = (_QWORD *)*((_QWORD *)this + 46);
      if ( v34 )
        QuadPart = v34[27];
      else
        QuadPart = PerformanceCounter.QuadPart;
      v36 = (int *)((char *)this + 376);
      v37 = *((_DWORD *)this + 95);
      *(_QWORD *)&v43[0] = *(_QWORD *)(*(_QWORD *)(v5 + 472) + 944LL);
      DWORD2(v43[0]) = v37;
      if ( !v34 || *v36 )
      {
        *((_OWORD *)this + 141) = 0LL;
        v44 = 0LL;
        *((_OWORD *)this + 142) = 0LL;
        *((_OWORD *)this + 143) = 0LL;
        *((_QWORD *)this + 288) = v44;
      }
      else
      {
        *((_QWORD *)this + 284) = v34[10];
        *((_QWORD *)this + 282) = v34[9];
        v38 = *(_QWORD **)(v34[32] + 16LL);
        if ( v38 )
        {
          *((_QWORD *)this + 287) = v38[285];
          *((_QWORD *)this + 288) = v38[287];
          *((_QWORD *)this + 283) = v38[284];
        }
      }
      v39 = *((_DWORD *)a2 + 1);
      if ( v39 == 5 )
      {
        ApiSetEditionInternalSetCursorPos(*((unsigned int *)a2 + 2), *((unsigned int *)a2 + 3), 2LL);
      }
      else if ( CPTPProcessor::QueuePTPMouseEvent(
                  (CPTPProcessor *)((char *)this - 176),
                  *(struct tagPOINT *)((char *)a2 + 8),
                  1 << v39,
                  PerformanceCounter.QuadPart,
                  v33,
                  QuadPart,
                  *v36,
                  (const struct tagUIPI_INFO_INT *)v43) )
      {
        if ( *((_QWORD *)this + 46) )
          *((_BYTE *)this + 2212) = 1;
        else
          InitiatePTPMouseProcessing();
      }
      break;
    case 2:
      if ( *((_DWORD *)a2 + 1) == 2 )
      {
        *((_BYTE *)this + 2213) = 0;
        if ( !(unsigned __int8)IsMouseInterceptEnabled() )
        {
          GestureCache = CPTPProcessor::CreateGestureCache(
                           (CPTPProcessor *)((char *)this - 176),
                           v25,
                           (const struct PTPEngineOutput *)((char *)a2 + 20),
                           *((_DWORD *)a2 + 2) != 0);
          if ( GestureCache )
          {
            if ( (*((_DWORD *)this + 89) & 4) != 0 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 550);
            *((_DWORD *)this + 89) &= ~4u;
            CInputDest::SetEmpty((CPTPProcessor *)((char *)this + 232));
            *((_BYTE *)this + 2213) = 1;
            InputTraceLogging::PTP::GestureOutput(GestureCache, a2);
            v31 = SGDGetUserSessionState(v28, v27, v29, v30);
            CTouchProcessor::ProcessTouchpadInput(
              *(CTouchProcessor **)(v31 + 3424),
              GestureCache,
              *((_DWORD *)this + 94),
              *((_DWORD *)this + 95));
          }
        }
      }
      else if ( *((_DWORD *)a2 + 1) == 3 && *((_BYTE *)this + 2213) )
      {
        InputTraceLogging::PTP::GestureOutput(*((const struct CPointerInputFrame **)this + 46), a2);
        v15 = *((unsigned int *)a2 + 4);
        v16 = 1;
        v17 = 0;
        if ( (_DWORD)v15 )
        {
          v18 = (_DWORD *)((char *)a2 + 32);
          while ( (*v18 & 4) == 0 )
          {
            ++v17;
            v18 += 24;
            if ( v17 >= (unsigned int)v15 )
              goto LABEL_32;
          }
          v16 = 0;
        }
LABEL_32:
        v19 = (CPTPProcessor *)*((_QWORD *)this + 46);
        *((_DWORD *)v19 + 57) ^= (*((_DWORD *)v19 + 57) ^ (*((_DWORD *)a2 + 2) << 8)) & 0x100;
        CPTPProcessor::CopyPointersIntoFrame(
          v19,
          *((struct CPointerInputFrame **)this + 46),
          v15,
          (const struct PTPEngineOutput *)((char *)a2 + 20),
          0);
        v24 = SGDGetUserSessionState(v21, v20, v22, v23);
        CTouchProcessor::ProcessTouchpadInput(
          *(CTouchProcessor **)(v24 + 3424),
          *((struct CPointerInputFrame **)this + 46),
          *((_DWORD *)this + 94),
          *((_DWORD *)this + 95));
        *((_QWORD *)this + 46) = 0LL;
        if ( v16 )
        {
          *((_BYTE *)this + 2213) = 0;
          *((_DWORD *)this + 89) &= ~4u;
          CInputDest::SetEmpty((CPTPProcessor *)((char *)this + 232));
        }
      }
      break;
    case 3:
      v10 = *((unsigned int *)a2 + 1);
      if ( (_DWORD)v10 )
      {
        if ( (_DWORD)v10 != 1 )
          break;
        v11 = SGDGetUserSessionState(v10, v4, v6, v7);
        v12 = 0LL;
        v13 = 0;
        v14 = 1;
      }
      else
      {
        v11 = SGDGetUserSessionState(v10, v4, v6, v7);
        v12 = (void *)*((_QWORD *)this + 45);
        v14 = 0;
        v13 = *((_DWORD *)a2 + 2);
      }
      CHidInput::HandlePTPTimer(*(CHidInput **)(v11 + 16840), v14, v13, v12);
      break;
    default:
      if ( *(_DWORD *)a2 == 4 && !(unsigned __int8)IsMouseInterceptEnabled() )
      {
        v8 = *((_DWORD *)a2 + 1);
        if ( v8 )
        {
          if ( v8 == 1 && qword_1C0296CF0 && (int)qword_1C0296CF0() >= 0 )
          {
            v9 = (void (*)(void))qword_1C0296CF8;
            goto LABEL_13;
          }
        }
        else if ( qword_1C0296CE0 && (int)qword_1C0296CE0() >= 0 )
        {
          v9 = (void (*)(void))qword_1C0296CE8;
LABEL_13:
          if ( v9 )
            v9();
        }
      }
      break;
  }
  if ( ((*(_DWORD *)a2 - 2) & 0xFFFFFFFD) == 0 )
  {
    if ( WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
    {
      v43[0] = 0LL;
      LODWORD(v43[0]) = 2;
      CCompositionRefreshRateBooster::EvaluateEventForCompositionFrameRateBoost(
        (CCompositionRefreshRateBooster *)((char *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 96),
        (const struct InputHelper::CompositionFrameRateBoostCandidateEvent *)v43);
    }
  }
}
