/*
 * XREFs of rimCheckForRegistrationConflicts @ 0x1400CFAA4
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x14014F6E0 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     RIMIsCurrentProcessTrusted @ 0x1400CFC20 (RIMIsCurrentProcessTrusted.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqd @ 0x1401D9150 (WPP_RECORDER_AND_TRACE_SF_qqqd.c)
 */

__int64 __fastcall rimCheckForRegistrationConflicts(__int64 a1)
{
  int v1; // edi
  __int64 UserSessionState; // rax
  unsigned int v3; // r14d
  __int64 v4; // rcx
  CTouchProcessor *v5; // rcx
  _QWORD *i; // rbx
  _QWORD *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  char v14; // r15
  bool v15; // r12
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx

  v1 = a1;
  UserSessionState = W32GetUserSessionState(a1);
  RIMLockExclusive(UserSessionState + 56);
  v3 = 0;
  for ( i = *(_QWORD **)(W32GetUserSessionState(v4) + 120);
        i != (_QWORD *)(W32GetUserSessionState(v5) + 120);
        i = (_QWORD *)*i )
  {
    v7 = i - 2;
    if ( !*((_BYTE *)i + 64) && !*((_BYTE *)v7 + 81) && (v1 & *((_DWORD *)v7 + 21)) != 0 && *((_DWORD *)v7 + 264) )
    {
      if ( !(unsigned int)RIMIsCurrentProcessTrusted() || v7[4] == PsGetCurrentProcess(v9, v8, v10, v11) )
      {
        v3 = 1;
        v5 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v14 = 0;
        }
        v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v16 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v17) = v15;
          LOBYTE(v18) = v14;
          WPP_RECORDER_AND_TRACE_SF_qqqd(*((_QWORD *)WPP_GLOBAL_Control + 3), v18, v17, *(_QWORD *)(v16 + 69400));
        }
      }
      else
      {
        v3 = 2;
      }
      break;
    }
  }
  v12 = W32GetUserSessionState(v5);
  RIMUnlockExclusive(v12 + 56);
  return v3;
}
