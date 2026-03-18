/*
 * XREFs of EditionIVSyncForeground @ 0x140277840
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WakeRIT @ 0x1401E1108 (WakeRIT.c)
 */

void __fastcall EditionIVSyncForeground(__int64 a1)
{
  bool v2; // bl
  bool v3; // di
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  _BYTE v10[24]; // [rsp+50h] [rbp-18h] BYREF

  v2 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v3 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v2 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, *(_QWORD *)&WPP_GLOBAL_Control);
    LOBYTE(v5) = v3;
    LOBYTE(v6) = v2;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 69416),
      4,
      2,
      117,
      (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids,
      a1);
  }
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v10);
  *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19552) = a1;
  WakeRIT(256LL, v9);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v10);
}
