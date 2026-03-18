/*
 * XREFs of rimObsDeliverToExclusiveObservers @ 0x14005BBE8
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x140122404 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1400D75DC (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     rimObsIsObserverTarget_0 @ 0x1401EEBBC (rimObsIsObserverTarget_0.c)
 *     rimObsIsRegisteredObserverAllowed @ 0x1401EEBF8 (rimObsIsRegisteredObserverAllowed.c)
 *     rimObsDeliverInputToObserver @ 0x1401EFE74 (rimObsDeliverInputToObserver.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall rimObsDeliverToExclusiveObservers(struct RIMDEV *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rbx
  CTouchProcessor *v5; // rcx
  unsigned int v6; // ebx
  char v7; // di
  bool v8; // si
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  struct RawInputManagerInputObserverObject *v12; // rdi
  CTouchProcessor *v13; // rcx
  _QWORD *i; // r14
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  int v19; // r14d
  CTouchProcessor *v20; // rcx
  char v21; // si
  bool v22; // bp
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  char v29; // si
  bool v30; // bp
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  int v34; // eax
  char v35; // si
  bool v36; // bp
  __int64 v37; // rax
  int v38; // edx
  int v39; // r8d
  char v40; // si
  bool v41; // bp
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  char v45; // si
  bool v46; // bp
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  __int64 v50; // [rsp+20h] [rbp-88h]
  __int16 v51; // [rsp+30h] [rbp-78h]
  _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v2 = W32GetUserSessionState(a1) + 72;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  *(_QWORD *)(v2 + 8) = KeGetCurrentThread();
  v4 = W32GetUserSessionState(v3) + 56;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
  v5 = WPP_GLOBAL_Control;
  v6 = 0;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      1,
      44,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
  }
  v12 = 0LL;
  for ( i = *(_QWORD **)(W32GetUserSessionState(v5) + 152);
        i != (_QWORD *)(W32GetUserSessionState(v13) + 152);
        i = (_QWORD *)*i )
  {
    if ( (i[13] & 2) != 0 && (unsigned int)rimObsIsObserverTarget_0(i - 2, a1) )
    {
      if ( (unsigned int)rimObsIsRegisteredObserverAllowed() )
      {
        v12 = (struct RawInputManagerInputObserverObject *)(i - 2);
        if ( i == (_QWORD *)16 )
          break;
        if ( (i[13] & 1) != 0 )
        {
          v19 = 0;
          memset(&ApcState, 0, sizeof(ApcState));
          v20 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v21 = 0;
          }
          v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v23 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v24) = v22;
            LOBYTE(v25) = v21;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v25,
              v24,
              *(_QWORD *)(v23 + 69400),
              4,
              1,
              46,
              (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
          }
          if ( *((_QWORD *)v12 + 4) != PsGetCurrentProcess(v20, v26, v27, v28, v50) )
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v29 = 0;
            }
            v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v31 = W32GetUserSessionState(WPP_GLOBAL_Control);
              LOBYTE(v32) = v30;
              LOBYTE(v33) = v29;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v33,
                v32,
                *(_QWORD *)(v31 + 69400),
                4,
                1,
                47,
                (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
            }
            KeStackAttachProcess(*((PRKPROCESS *)v12 + 4), &ApcState);
            v19 = 1;
          }
          rimObsDeliverInputToObserver(a1, v12);
          if ( v19 )
            KeUnstackDetachProcess(&ApcState);
        }
        else
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v45 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v45 = 0;
          }
          v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v45 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v47 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v48) = v46;
            LOBYTE(v49) = v45;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v49,
              v48,
              *(_QWORD *)(v47 + 69400),
              4,
              1,
              48,
              (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
          }
        }
        if ( (*((_DWORD *)a1 + 42) & 0x2000) != 0 )
        {
          v34 = *((_DWORD *)a1 + 12);
          if ( v34 )
          {
            if ( v34 == 1 )
            {
              *((_DWORD *)a1 + 168) = 0;
              if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || (v35 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
              {
                v35 = 0;
              }
              v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v37 = W32GetUserSessionState(WPP_GLOBAL_Control);
                v51 = 50;
LABEL_68:
                LOBYTE(v39) = v36;
                LOBYTE(v38) = v35;
                WPP_RECORDER_AND_TRACE_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v38,
                  v39,
                  *(_QWORD *)(v37 + 69400),
                  4,
                  1,
                  v51,
                  (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
              }
            }
          }
          else
          {
            *((_DWORD *)a1 + 224) = 0;
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v35 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v35 = 0;
            }
            v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v37 = W32GetUserSessionState(WPP_GLOBAL_Control);
              v51 = 49;
              goto LABEL_68;
            }
          }
        }
        InputTraceLogging::RIM::DropInput(a1, 11LL);
        break;
      }
      v13 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v40 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v40 = 0;
      }
      v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v42 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v43) = v41;
        LOBYTE(v44) = v40;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v44,
          v43,
          *(_QWORD *)(v42 + 69400),
          3,
          1,
          45,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
      }
    }
  }
  v15 = W32GetUserSessionState(v13);
  *(_QWORD *)(v15 + 64) = 0LL;
  ExReleasePushLockExclusiveEx(v15 + 56, 0LL);
  KeLeaveCriticalRegion();
  v17 = W32GetUserSessionState(v16);
  *(_QWORD *)(v17 + 80) = 0LL;
  ExReleasePushLockExclusiveEx(v17 + 72, 0LL);
  KeLeaveCriticalRegion();
  LOBYTE(v6) = v12 != 0LL;
  return v6;
}
