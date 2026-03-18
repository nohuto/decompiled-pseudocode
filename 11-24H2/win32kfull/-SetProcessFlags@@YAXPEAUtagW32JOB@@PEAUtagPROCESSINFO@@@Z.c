/*
 * XREFs of ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1401FA298
 * Callers:
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1400A5C58 (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 *     ?JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1401FA120 (-JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqD @ 0x1402093EC (WPP_RECORDER_AND_TRACE_SF_qqD.c)
 *     ?UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z @ 0x14023843C (-UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall SetProcessFlags(struct tagW32JOB *a1, struct tagW32JOB **a2)
{
  __int64 v4; // rdx
  bool v5; // r15
  bool v6; // r12
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  struct tagW32JOB *v10; // rdx
  _BYTE v11[16]; // [rsp+A0h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+B0h] [rbp-68h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v11);
  v5 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v4);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_qqD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69416));
  }
  if ( a2[95] != a1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 369LL);
  if ( *((_DWORD *)a1 + 8) )
    *((_DWORD *)a2 + 3) |= 0x2000000u;
  else
    *((_DWORD *)a2 + 3) &= ~0x2000000u;
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*a2, &ApcState);
  v10 = a2[41];
  if ( *((_DWORD *)a1 + 8) )
  {
    while ( v10 )
    {
      *(_DWORD *)(*((_QWORD *)v10 + 65) + 28LL) |= 0x20000000u;
      _InterlockedOr((volatile signed __int32 *)v10 + 132, 0x20000000u);
      v10 = (struct tagW32JOB *)*((_QWORD *)v10 + 88);
    }
    if ( (*((_DWORD *)a1 + 8) & 0x100) != 0 )
      UserDisableImeForProcess((struct tagPROCESSINFO *)a2);
  }
  else
  {
    while ( v10 )
    {
      *(_DWORD *)(*((_QWORD *)v10 + 65) + 28LL) &= ~0x20000000u;
      _InterlockedAnd((volatile signed __int32 *)v10 + 132, 0xDFFFFFFF);
      v10 = (struct tagW32JOB *)*((_QWORD *)v10 + 88);
    }
  }
  KeUnstackDetachProcess(&ApcState);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v11);
}
