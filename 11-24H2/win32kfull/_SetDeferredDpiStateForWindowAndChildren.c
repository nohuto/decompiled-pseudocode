/*
 * XREFs of _SetDeferredDpiStateForWindowAndChildren @ 0x140281DB8
 * Callers:
 *     UpdateWindowMonitor @ 0x140045CB0 (UpdateWindowMonitor.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxNotifyMonitorChanged @ 0x14008CEB0 (xxxNotifyMonitorChanged.c)
 *     NtUserDeferWindowDpiChanges @ 0x1402072E0 (NtUserDeferWindowDpiChanges.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x140282294 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqss @ 0x140281A40 (WPP_RECORDER_AND_TRACE_SF_dqss.c)
 */

__int64 __fastcall SetDeferredDpiStateForWindowAndChildren(__int64 *a1, __int64 a2, int a3)
{
  int v3; // esi
  char v4; // r15
  int v5; // r14d
  int v6; // r12d
  __int64 v8; // rcx
  __int16 v10; // r13
  char v11; // r14
  __int64 v12; // rbx
  __int64 UserSessionState; // rax
  const char *v14; // r10
  const char *v15; // rcx
  char v16; // bp
  char v17; // si
  __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  __int64 *v22; // rbx
  __int64 *v23; // rsi
  _DWORD *v24; // rax
  _DWORD *v25; // rax
  _DWORD *v26; // rcx
  int v27; // [rsp+20h] [rbp-88h]
  int v28; // [rsp+28h] [rbp-80h]
  int v29; // [rsp+30h] [rbp-78h]
  int v30; // [rsp+38h] [rbp-70h]
  _BYTE v31[8]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v32; // [rsp+68h] [rbp-40h]

  v3 = *((_DWORD *)a1 + 95);
  v4 = 0;
  v5 = a3;
  v6 = a2;
  if ( (v3 & 0x40) != 0 && !a3 )
    return 0LL;
  v8 = a1[5];
  if ( (_DWORD)a2 == (*(_WORD *)(v8 + 286) != 0) )
  {
    if ( (v3 & 0x40) == 0 && a3 )
    {
      *((_DWORD *)a1 + 95) = v3 | 0x40;
      return 1LL;
    }
    return 0LL;
  }
  if ( (_DWORD)a2 )
  {
    v10 = *(_WORD *)(v8 + 284);
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
    {
      v4 = 1;
    }
    v11 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
       && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
    if ( v4 || v11 )
    {
      v12 = *a1;
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      v14 = "true";
      v15 = "true";
      if ( (v3 & 0x40000) == 0 )
        v15 = "false";
      if ( (v3 & 0x40) == 0 )
        v14 = "false";
      WPP_RECORDER_AND_TRACE_SF_dqss(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v4,
        v11,
        *(_QWORD *)(UserSessionState + 69416),
        v27,
        v28,
        v29,
        v30,
        v10,
        v12,
        v14,
        v15);
    }
    v5 = a3;
  }
  else
  {
    v10 = 0;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v16 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v16 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v17 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v17 = 0;
    }
    if ( v16 || v17 )
    {
      v18 = *a1;
      v19 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      LOBYTE(v20) = v17;
      LOBYTE(v21) = v16;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v21,
        v20,
        *(_QWORD *)(v19 + 69416),
        5,
        4,
        22,
        (__int64)&WPP_1b25774d2ec6355ca4d29f861006c482_Traceguids,
        v18);
    }
  }
  v31[0] = 0;
  v22 = a1;
  v32 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v31, a2);
  while ( 1 )
  {
    while ( 1 )
    {
      v23 = v22;
      if ( v22 != a1 && (*((_DWORD *)v22 + 95) & 0x40) != 0 )
        goto LABEL_53;
      *(_WORD *)(v22[5] + 286) = v10;
      if ( v6 )
      {
        if ( !gbIgnoreStressedOutStuff && v22[37] )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2819);
        v24 = (_DWORD *)a1[36];
        v22[37] = (__int64)v24;
        ++*v24;
      }
      else
      {
        if ( !gbIgnoreStressedOutStuff && !v22[37] )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2828);
        v25 = (_DWORD *)v22[37];
        if ( v25 )
        {
          --*v25;
          v26 = (_DWORD *)v22[37];
          if ( !*v26 )
            Win32FreePool(v26);
          v22[37] = 0LL;
        }
      }
      if ( !v22[14] )
        break;
      v22 = (__int64 *)v22[14];
    }
    if ( v22 == a1 )
      break;
LABEL_53:
    v22 = (__int64 *)v22[11];
    if ( !v22 )
    {
      while ( 1 )
      {
        v22 = (__int64 *)v23[11];
        if ( v22 )
          break;
        v23 = (__int64 *)v23[13];
        if ( v23 == a1 )
          goto LABEL_58;
      }
      if ( v23 == a1 )
        break;
    }
  }
LABEL_58:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v31);
  if ( v5 && v6 )
    *((_DWORD *)a1 + 95) |= 0x40u;
  else
    *((_DWORD *)a1 + 95) &= ~0x40u;
  return 1LL;
}
