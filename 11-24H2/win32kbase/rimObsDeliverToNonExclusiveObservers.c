/*
 * XREFs of rimObsDeliverToNonExclusiveObservers @ 0x1400BCD88
 * Callers:
 *     rimProcessInput @ 0x1400BC820 (rimProcessInput.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140122404 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimObsIsObserverTarget_0 @ 0x1401EEBBC (rimObsIsObserverTarget_0.c)
 *     rimObsIsRegisteredObserverAllowed @ 0x1401EEBF8 (rimObsIsRegisteredObserverAllowed.c)
 *     rimObsDeliverInputToObserver @ 0x1401EFE74 (rimObsDeliverInputToObserver.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall rimObsDeliverToNonExclusiveObservers(struct RIMDEV *a1)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  CTouchProcessor *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  int v15; // ebp
  CTouchProcessor *v16; // rcx
  char v17; // di
  bool v18; // si
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  char v22; // di
  bool v23; // si
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  char v30; // bl
  bool v31; // di
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-60h] BYREF

  UserSessionState = W32GetUserSessionState(a1);
  RIMLockExclusive(UserSessionState + 72);
  v4 = W32GetUserSessionState(v3);
  RIMLockExclusive(v4 + 56);
  v6 = *(_QWORD **)(W32GetUserSessionState(v5) + 152);
  if ( v6 != (_QWORD *)(W32GetUserSessionState(v7) + 152) )
  {
    do
    {
      v9 = v6 - 2;
      if ( (unsigned int)rimObsIsObserverTarget_0(v6 - 2, a1) )
      {
        if ( (unsigned int)rimObsIsRegisteredObserverAllowed() )
        {
          v14 = *((_DWORD *)v9 + 30);
          v15 = 0;
          memset(&ApcState, 0, sizeof(ApcState));
          if ( (v14 & 1) == 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 959LL);
          v16 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v17 = 0;
          }
          v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v19 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v20) = v18;
            LOBYTE(v21) = v17;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v21,
              v20,
              *(_QWORD *)(v19 + 69400),
              4,
              1,
              51,
              (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
          }
          if ( v9[4] != PsGetCurrentProcess(v16, v11, v12, v13) )
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v22 = 0;
            }
            v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v24 = W32GetUserSessionState(WPP_GLOBAL_Control);
              LOBYTE(v25) = v23;
              LOBYTE(v26) = v22;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v26,
                v25,
                *(_QWORD *)(v24 + 69400),
                4,
                1,
                52,
                (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
            }
            KeStackAttachProcess((PRKPROCESS)v9[4], &ApcState);
            v15 = 1;
          }
          rimObsDeliverInputToObserver(a1, (struct RawInputManagerInputObserverObject *)(v6 - 2));
          if ( v15 )
            KeUnstackDetachProcess(&ApcState);
        }
        else
        {
          v10 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v30 = 0;
          }
          v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v32 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v33) = v31;
            LOBYTE(v34) = v30;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v34,
              v33,
              *(_QWORD *)(v32 + 69400),
              3,
              1,
              53,
              (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
          }
        }
      }
      v6 = (_QWORD *)*v6;
    }
    while ( v6 != (_QWORD *)(W32GetUserSessionState(v10) + 152) );
  }
  v27 = W32GetUserSessionState(v8);
  RIMUnlockExclusive(v27 + 56);
  v29 = W32GetUserSessionState(v28);
  RIMUnlockExclusive(v29 + 72);
}
