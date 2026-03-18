/*
 * XREFs of ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x140187B70
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x1400D9C78 (-CacheInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?CancelInertiaTimer@CPTPProcessor@@AEAAXXZ @ 0x1400DA260 (-CancelInertiaTimer@CPTPProcessor@@AEAAXXZ.c)
 *     ?HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1400DA360 (-HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 *     EvaluateEventForCompositionFrameRateBoost @ 0x1400DCDB0 (EvaluateEventForCompositionFrameRateBoost.c)
 *     IsMouseInterceptEnabled @ 0x1400DE3A0 (IsMouseInterceptEnabled.c)
 *     ?CreateGestureCache@CPTPProcessor@@AEAAPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1400E2550 (-CreateGestureCache@CPTPProcessor@@AEAAPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z.c)
 *     ?CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1400E29F0 (-CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N.c)
 *     InitiatePTPMouseProcessing @ 0x1400F7C60 (InitiatePTPMouseProcessing.c)
 *     ?MouseOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_KPEBUPTPEngineOutput@@@Z @ 0x140107BEC (-MouseOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_KPEBUPTPEngineOutput@@@Z.c)
 *     ?GestureOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUPTPEngineOutput@@_N@Z @ 0x140118A6C (-GestureOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUPTPEngineOutput@@_N@Z.c)
 *     ?QueuePTPMouseEvent@CPTPProcessor@@AEAA_NUtagPOINT@@K_K11HPEBUtagUIPI_INFO_INT@@@Z @ 0x1401888A0 (-QueuePTPMouseEvent@CPTPProcessor@@AEAA_NUtagPOINT@@K_K11HPEBUtagUIPI_INFO_INT@@@Z.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x140192280 (ApiSetEditionInternalSetCursorPos.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x140204F50 (-ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x14020DD9C (-EndInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z @ 0x14020E204 (-SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z.c)
 *     ?SendShellAction@CPTPProcessor@@AEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z @ 0x14020E260 (-SendShellAction@CPTPProcessor@@AEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z.c)
 */

void __fastcall CPTPProcessor::OnEngineOutput(CPTPProcessor *this, const struct PTPEngineOutput *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rax
  void *v9; // r9
  int v10; // r8d
  char v11; // dl
  __int64 v12; // r8
  char v13; // bp
  unsigned int v14; // edx
  _DWORD *v15; // rcx
  CPTPProcessor *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  struct CPointerInputFrame *GestureCache; // r14
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 UserSessionState; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // r9
  __int64 v28; // rax
  int *v29; // rdx
  _QWORD *v30; // rcx
  __int64 v31; // xmm0_8
  _QWORD *v32; // rcx
  int v33; // ecx
  int v34; // eax
  int v35; // ecx
  unsigned __int64 v36; // [rsp+20h] [rbp-88h]
  __int64 v37; // [rsp+40h] [rbp-68h] BYREF
  int v38; // [rsp+48h] [rbp-60h]
  int v39; // [rsp+4Ch] [rbp-5Ch]
  __int64 v40; // [rsp+80h] [rbp-28h]

  v5 = HMValidateHandleNoSecure(*((_QWORD *)this + 45), 19);
  if ( v5 )
  {
    switch ( *(_DWORD *)a2 )
    {
      case 0:
        v34 = *((_DWORD *)this + 55);
        if ( (v34 & 1) != 0 || (v34 & 2) == 0 )
        {
          v35 = *((_DWORD *)a2 + 1);
          if ( v35 )
          {
            v7 = (unsigned int)(v35 - 1);
            if ( (_DWORD)v7 )
            {
              if ( (_DWORD)v7 == 2 )
                CPTPProcessor::EndInertia((CPTPProcessor *)((char *)this - 168));
            }
            else
            {
              CPTPProcessor::CancelInertiaTimer((CPTPProcessor *)((char *)this - 168));
            }
          }
          else
          {
            CPTPProcessor::CacheInertia((CPTPProcessor *)((char *)this - 168));
          }
        }
        else
        {
          CPTPProcessor::SendPTPInertiaEndToContainer((CPTPProcessor *)((char *)this - 168), a2);
        }
        goto LABEL_63;
      case 1:
        if ( *((_BYTE *)this + 1817) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131074LL, 521LL);
        v25 = *((_QWORD *)this + 46);
        if ( v25 )
          v26 = *(_QWORD *)(v25 + 216);
        else
          v26 = 0LL;
        InputTraceLogging::PTP::MouseOutput((const struct CPointerInputFrame *)v25, v4, a2);
        v28 = *(_QWORD *)(v5 + 456);
        v29 = (int *)((char *)this + 376);
        v30 = (_QWORD *)*((_QWORD *)this + 46);
        v31 = *(_QWORD *)(v28 + 952);
        v38 = *(_DWORD *)(v28 + 960);
        v39 = *((_DWORD *)this + 95);
        v37 = v31;
        if ( !v30 || *v29 )
        {
          *(_OWORD *)((char *)this + 1864) = 0LL;
          v40 = 0LL;
          *(_OWORD *)((char *)this + 1880) = 0LL;
          *(_OWORD *)((char *)this + 1896) = 0LL;
          *((_QWORD *)this + 239) = v40;
        }
        else
        {
          *((_QWORD *)this + 235) = v30[10];
          *((_QWORD *)this + 233) = v30[9];
          v32 = *(_QWORD **)(v30[32] + 16LL);
          if ( v32 )
          {
            *((_QWORD *)this + 238) = v32[285];
            *((_QWORD *)this + 239) = v32[287];
            *((_QWORD *)this + 234) = v32[284];
          }
        }
        v33 = *((_DWORD *)a2 + 1);
        if ( v33 == 5 )
        {
          ApiSetEditionInternalSetCursorPos(*((unsigned int *)a2 + 2), *((unsigned int *)a2 + 3), 2LL);
        }
        else if ( CPTPProcessor::QueuePTPMouseEvent(
                    (CPTPProcessor *)((char *)this - 168),
                    *(struct tagPOINT *)((char *)a2 + 8),
                    1 << v33,
                    v27,
                    v36,
                    v26,
                    *v29,
                    (const struct tagUIPI_INFO_INT *)&v37) )
        {
          if ( *((_QWORD *)this + 46) )
            *((_BYTE *)this + 1816) = 1;
          else
            InitiatePTPMouseProcessing(v7);
        }
        goto LABEL_63;
      case 2:
        v7 = (unsigned int)(*((_DWORD *)a2 + 1) - 2);
        if ( *((_DWORD *)a2 + 1) == 2 )
        {
          if ( *((_BYTE *)this + 1817) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131074LL, 587LL);
          *((_BYTE *)this + 1817) = 0;
          if ( !IsMouseInterceptEnabled(v7) )
          {
            GestureCache = CPTPProcessor::CreateGestureCache(
                             (CPTPProcessor *)((char *)this - 168),
                             v19,
                             (const struct PTPEngineOutput *)((char *)a2 + 20),
                             *((_DWORD *)a2 + 2) != 0);
            if ( GestureCache )
            {
              if ( (*((_DWORD *)this + 89) & 1) != 0 )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131074LL, 601LL);
              *((_DWORD *)this + 89) = 0;
              CInputDest::~CInputDest((CPTPProcessor *)((char *)this + 232));
              *((_BYTE *)this + 1817) = 1;
              LOBYTE(v21) = 1;
              *((_BYTE *)this + 1818) = *((_DWORD *)a2 + 2) != 0;
              InputTraceLogging::PTP::GestureOutput(GestureCache, a2, v21, v22);
              UserSessionState = W32GetUserSessionState(v23);
              CTouchProcessor::ProcessTouchpadInput(
                *(CTouchProcessor **)(UserSessionState + 3264),
                GestureCache,
                *((_DWORD *)this + 94),
                *((_DWORD *)this + 95));
            }
          }
        }
        else if ( *((_DWORD *)a2 + 1) == 3 && *((_BYTE *)this + 1817) )
        {
          if ( *((_BYTE *)this + 1818) != (*((_DWORD *)a2 + 2) != 0) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131074LL, 616LL);
          InputTraceLogging::PTP::GestureOutput(*((const struct CPointerInputFrame **)this + 46), a2, 0LL, v6);
          v12 = *((unsigned int *)a2 + 4);
          v13 = 1;
          v14 = 0;
          if ( (_DWORD)v12 )
          {
            v15 = (_DWORD *)((char *)a2 + 32);
            while ( (*v15 & 4) == 0 )
            {
              ++v14;
              v15 += 24;
              if ( v14 >= (unsigned int)v12 )
                goto LABEL_29;
            }
            v13 = 0;
          }
LABEL_29:
          v16 = (CPTPProcessor *)(unsigned int)(*((_DWORD *)a2 + 2) << 8);
          *(_DWORD *)(*((_QWORD *)this + 46) + 228LL) = (unsigned int)v16 ^ (*(_DWORD *)(*((_QWORD *)this + 46) + 228LL) ^ (*((_DWORD *)a2 + 2) << 8)) & 0xFFFFFEFF;
          CPTPProcessor::CopyPointersIntoFrame(
            v16,
            *((struct CPointerInputFrame **)this + 46),
            v12,
            (const struct PTPEngineOutput *)((char *)a2 + 20),
            0);
          v18 = W32GetUserSessionState(v17);
          CTouchProcessor::ProcessTouchpadInput(
            *(CTouchProcessor **)(v18 + 3264),
            *((struct CPointerInputFrame **)this + 46),
            *((_DWORD *)this + 94),
            *((_DWORD *)this + 95));
          *((_QWORD *)this + 46) = 0LL;
          if ( v13 )
          {
            *((_BYTE *)this + 1817) = 0;
            *((_DWORD *)this + 89) = 0;
            CInputDest::~CInputDest((CPTPProcessor *)((char *)this + 232));
          }
        }
        goto LABEL_63;
    }
    v7 = (unsigned int)(*(_DWORD *)a2 - 3);
    if ( *(_DWORD *)a2 != 3 )
    {
      if ( *(_DWORD *)a2 == 4 && !IsMouseInterceptEnabled(v7) )
      {
        if ( *((_BYTE *)this + 1817) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131074LL, 663LL);
        CPTPProcessor::SendShellAction((char *)this - 168, *((unsigned int *)a2 + 1));
      }
      goto LABEL_63;
    }
    if ( *((_BYTE *)this + 1817) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131074LL, 647LL);
    v7 = *((unsigned int *)a2 + 1);
    if ( (_DWORD)v7 )
    {
      if ( (_DWORD)v7 != 1 )
        goto LABEL_63;
      v8 = W32GetUserSessionState(v7);
      v9 = 0LL;
      v10 = 0;
      v11 = 1;
    }
    else
    {
      v8 = W32GetUserSessionState(v7);
      v9 = (void *)*((_QWORD *)this + 45);
      v11 = 0;
      v10 = *((_DWORD *)a2 + 2);
    }
    CHidInput::HandlePTPTimer(*(CHidInput **)(v8 + 16840), v11, v10, v9);
LABEL_63:
    if ( ((*(_DWORD *)a2 - 2) & 0xFFFFFFFD) == 0 )
      EvaluateEventForCompositionFrameRateBoost(v7);
  }
}
