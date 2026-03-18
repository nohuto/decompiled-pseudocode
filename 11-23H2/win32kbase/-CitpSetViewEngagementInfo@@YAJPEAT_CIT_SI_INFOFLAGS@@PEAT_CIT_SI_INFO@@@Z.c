/*
 * XREFs of ?CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C00B674C
 * Callers:
 *     CitSetInfo @ 0x1C0033570 (CitSetInfo.c)
 * Callees:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C0033220 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C003330C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0233E00 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpSetViewEngagementInfo(union _CIT_SI_INFOFLAGS *a1, __int128 **a2)
{
  struct _CIT_IMPACT_CONTEXT *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  __int64 ProcessWin32Process; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  struct _CIT_INTERACTION_SUMMARY *v11; // rax
  __int128 v13; // [rsp+28h] [rbp-20h]
  PEPROCESS Process; // [rsp+50h] [rbp+8h] BYREF

  Process = a1;
  v2 = xmmword_1C0293D20;
  if ( ((unsigned __int8)*a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = **a2;
  Process = 0LL;
  if ( PsLookupProcessByProcessId((HANDLE)SDWORD2(v13), &Process) >= 0 )
  {
    v7 = *(_DWORD *)SGDGetUserSessionState(v4, v3, v5, v6);
    if ( (unsigned int)PsGetProcessSessionId(Process) == v7 )
    {
      ProcessWin32Process = PsGetProcessWin32Process(Process);
      v10 = ProcessWin32Process;
      if ( ProcessWin32Process )
      {
        v9 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
        v10 = v9 & ProcessWin32Process;
      }
      if ( v10 && CitpProcessEnsureContext((struct tagPROCESSINFO *)v10, (const char *)v9) )
      {
        v11 = CitpInteractionSummaryEnsure(v2, *(struct tagPROCESSINFO ***)(v10 + 944), 1);
        if ( v11 )
          *((_QWORD *)v11 + 2) |= v13;
        **(_QWORD **)(v10 + 944) = v13;
      }
    }
    ObfDereferenceObject(Process);
  }
  return 0LL;
}
