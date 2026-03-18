/*
 * XREFs of ?_HasLegacyForegroundActivateRight@CForegroundLaunch@@AEBA_NPEAU_EPROCESS@@@Z @ 0x140189068
 * Callers:
 *     ?_CheckAllowForeground2@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z @ 0x14028DBDC (-_CheckAllowForeground2@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z.c)
 *     ?_CheckAllowForeground@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z @ 0x14028E6F0 (-_CheckAllowForeground@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

char __fastcall CForegroundLaunch::_HasLegacyForegroundActivateRight(CForegroundLaunch *this, struct _EPROCESS *a2)
{
  __int64 ProcessInheritedFromUniqueProcessId; // rax
  char v4; // bl
  char v5; // r14
  __int64 v6; // rdx
  char v7; // di
  bool v8; // si
  __int64 v9; // rax
  int v10; // r8d
  int v11; // edx
  char v13; // si
  bool v14; // bp
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx

  ProcessInheritedFromUniqueProcessId = PsGetProcessInheritedFromUniqueProcessId(a2);
  v4 = 0;
  v5 = ProcessInheritedFromUniqueProcessId;
  v6 = 0LL;
  v7 = 1;
  while ( (unsigned int)v6 < 5 )
  {
    if ( *((_QWORD *)this + 2 * (unsigned int)v6 + 1) == ProcessInheritedFromUniqueProcessId )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || (v13 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v13 = 0;
      }
      v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v6);
        LOBYTE(v16) = v14;
        LOBYTE(v17) = v13;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v17,
          v16,
          *(_QWORD *)(UserSessionState + 69416),
          4,
          2,
          51,
          (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
          v5);
      }
      return 1;
    }
    v6 = (unsigned int)(v6 + 1);
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v7 = 0;
  }
  v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v9 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v6);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v11,
      v10,
      *(_QWORD *)(v9 + 69416),
      4,
      2,
      52,
      (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
      v5);
  }
  return v4;
}
