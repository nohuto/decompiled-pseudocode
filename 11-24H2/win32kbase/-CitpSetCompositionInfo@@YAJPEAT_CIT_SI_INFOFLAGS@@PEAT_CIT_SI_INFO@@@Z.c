/*
 * XREFs of ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1400B3DCC
 * Callers:
 *     CitSetInfo @ 0x1400B3B80 (CitSetInfo.c)
 * Callees:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x140016D60 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     UserIsCurrentProcessDwm @ 0x140024300 (UserIsCurrentProcessDwm.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1400B3D28 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1400B4140 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x14015C9F4 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x14019EC50 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXW4LockProcessOptions@@_K@Z @ 0x1401A2A60 (--0CLockProcessByPid@@QEAA@PEAXW4LockProcessOptions@@_K@Z.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x1401A726C (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x1401A9E14 (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 */

__int64 __fastcall CitpSetCompositionInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2)
{
  struct _CIT_IMPACT_CONTEXT *v4; // r12
  const char *v5; // rdx
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned __int16 i; // di
  struct tagPROCESSINFO *ProcessInfo; // rax
  struct tagPROCESSINFO *v11; // rbx
  struct _CIT_INTERACTION_SUMMARY *v12; // rax
  struct _CIT_INTERACTION_SUMMARY *v13; // r9
  int ProcessSessionId; // ebx
  __int64 ProcessWin32Process; // rax
  struct tagPROCESSINFO ***v16; // rbx
  struct _CIT_INTERACTION_SUMMARY *v17; // rax
  struct _CIT_INTERACTION_SUMMARY *v18; // r9
  __int128 v19; // [rsp+28h] [rbp-90h]
  __int64 v20; // [rsp+38h] [rbp-80h]
  _BYTE v21[8]; // [rsp+40h] [rbp-78h] BYREF
  int v22; // [rsp+48h] [rbp-70h]
  __int64 v23; // [rsp+58h] [rbp-60h]
  PEPROCESS Process; // [rsp+D0h] [rbp+18h] BYREF

  v4 = *(struct _CIT_IMPACT_CONTEXT **)(*(_QWORD *)(W32GetUserSessionState(a1) + 18968) + 32LL);
  if ( !UserIsCurrentProcessDwm() )
    return 3221225506LL;
  v7 = *(_QWORD *)a2;
  v8 = *((unsigned __int16 *)a1 + 1);
  for ( i = 0; i < (unsigned __int16)v8; ++i )
  {
    if ( (unsigned __int64)(24 * v8 - 1) > 0xFFFE )
    {
      CitpLogFailureWorker(-1073741823, v5, 0x11D1u);
      return 3221225473LL;
    }
    if ( (v7 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v19 = *(_OWORD *)(v7 + 24LL * i);
    v20 = *(_QWORD *)(v7 + 24LL * i + 16);
    if ( (_QWORD)v19 )
    {
      if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
      {
        CLockProcessByPid::CLockProcessByPid(v21, (int)v20, 3LL, *((_QWORD *)&v19 + 1));
        if ( v22 >= 0 )
        {
          PsUpdateComponentPower(v23, 7LL);
          ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v21);
          v11 = ProcessInfo;
          if ( ProcessInfo )
          {
            if ( CitpProcessEnsureContext(ProcessInfo) )
            {
              v12 = CitpInteractionSummaryEnsure(v4, *((struct tagPROCESSINFO ***)v11 + 115), 4);
              v13 = v12;
              if ( v12 )
              {
                if ( (_WORD)v19 )
                  CitpStatIncrement((unsigned __int16 *)v12 + 54, 1u);
                if ( WORD1(v19) )
                  CitpStatIncrement((unsigned __int16 *)v13 + 55, 1u);
                if ( WORD2(v19) )
                  CitpStatIncrement((unsigned __int16 *)v13 + 56, 1u);
              }
            }
          }
        }
        CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v21);
      }
      else
      {
        Process = 0LL;
        if ( PsLookupProcessByProcessId((HANDLE)(int)v20, &Process) >= 0 )
        {
          if ( PsGetProcessSequenceNumber(Process) == *((_QWORD *)&v19 + 1) )
          {
            ProcessSessionId = PsGetProcessSessionIdEx(Process);
            if ( ProcessSessionId == (unsigned int)W32GetCurrentWin32kSessionId() )
            {
              PsUpdateComponentPower(Process, 7LL);
              ProcessWin32Process = PsGetProcessWin32Process(Process);
              v16 = (struct tagPROCESSINFO ***)ProcessWin32Process;
              if ( ProcessWin32Process )
                v16 = (struct tagPROCESSINFO ***)(-(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process);
              if ( v16 )
              {
                if ( CitpProcessEnsureContext((struct tagPROCESSINFO *)v16) )
                {
                  v17 = CitpInteractionSummaryEnsure(v4, v16[115], 4);
                  v18 = v17;
                  if ( v17 )
                  {
                    if ( (_WORD)v19 )
                      CitpStatIncrement((unsigned __int16 *)v17 + 54, 1u);
                    if ( WORD1(v19) )
                      CitpStatIncrement((unsigned __int16 *)v18 + 55, 1u);
                    if ( WORD2(v19) )
                      CitpStatIncrement((unsigned __int16 *)v18 + 56, 1u);
                  }
                }
              }
            }
          }
          ObfDereferenceObject(Process);
        }
      }
    }
  }
  return 0LL;
}
