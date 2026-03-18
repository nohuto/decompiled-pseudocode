/*
 * XREFs of xxxSetThreadDesktop @ 0x1401071FC
 * Callers:
 *     NtUserSetThreadDesktop @ 0x140106880 (NtUserSetThreadDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x140107100 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x140107460 (xxxSetCsrssThreadDesktop.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x14023AFEC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x14023BD28 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1401565AC (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     MapDesktop @ 0x14016A320 (MapDesktop.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023413C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x140237494 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     zzzSetDesktop @ 0x14023D170 (zzzSetDesktop.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     MagContextThreadCallout @ 0x14026E5D0 (MagContextThreadCallout.c)
 */

__int64 __fastcall xxxSetThreadDesktop(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // rdi
  _QWORD *v6; // r14
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  tagQ *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // ecx
  __int64 v21; // rax
  int v22; // ecx
  _QWORD v23[5]; // [rsp+20h] [rbp-48h] BYREF
  int v24; // [rsp+48h] [rbp-20h]
  int v25; // [rsp+4Ch] [rbp-1Ch]

  v5 = PtiCurrent(a1, a2);
  v6 = (_QWORD *)*((_QWORD *)v5 + 58);
  if ( !a2 )
    goto LABEL_3;
  v23[3] = *v6;
  v23[0] = 0LL;
  v23[1] = 0LL;
  v23[2] = 1LL;
  v23[4] = a2;
  v24 = 0;
  v25 = 1;
  result = MapDesktop(v23);
  if ( (int)result >= 0 )
  {
LABEL_3:
    v8 = *(_QWORD *)(W32GetUserGdiSessionState(v4) + 40);
    if ( PsGetCurrentProcess() != v8 )
    {
      if ( *((_DWORD *)v5 + 236)
        || *((_DWORD *)v5 + 180)
        || (v11 = *((_QWORD *)v5 + 62)) != 0
        && (v12 = *(_QWORD *)(v11 + 224)) != 0
        && *(struct tagTHREADINFO **)(v12 + 32) == v5 )
      {
        UserSetLastError(170);
        return 2147483665LL;
      }
      v10 = v6 + 43;
      if ( !v6[43] && a1 )
      {
        LockObjectAssignment(v10, a2);
        v6[48] = a1;
      }
    }
    if ( *((_QWORD *)v5 + 62) != a2 )
    {
      if ( (*((_BYTE *)v5 + 1360) & 8) != 0 )
      {
        UserSessionState = W32GetUserSessionState(v10, v9);
        MagContextThreadCallout(UserSessionState + 66080, v5, 0LL, 1LL);
      }
      if ( *((_QWORD *)v5 + 62) != a2 )
      {
        if ( tagQ::AreMultipleThreadsAttached(*((tagQ **)v5 + 59)) )
        {
          v16 = (tagQ *)AllocQueue(0LL, 0LL);
          if ( !v16 )
          {
            UserSetLastError(8);
            return 3221225495LL;
          }
          tagQ::zzzAttachToQueue(v16, v5, 0LL, 0);
        }
        else
        {
          v17 = W32GetUserSessionState(v15, v14);
          v19 = *((_QWORD *)v5 + 59);
          if ( v19 == *(_QWORD *)(v17 + 18944) )
          {
            if ( !gbIgnoreStressedOutStuff )
            {
              if ( *(_QWORD *)(v19 + 136) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5241LL);
            }
            xxxSetForegroundWindow2(0LL, v5, 0LL);
          }
          else if ( !*((_QWORD *)v5 + 62) )
          {
            v20 = *(_DWORD *)(W32GetUserSessionState(v18, v19) + 68704);
            v21 = *((_QWORD *)v5 + 59);
            v22 = (v20 & 1) - 1;
            *((_DWORD *)v5 + 198) = v22;
            *(_DWORD *)(v21 + 432) = v22;
          }
        }
      }
    }
    return zzzSetDesktop(v5, a2, a1);
  }
  return result;
}
