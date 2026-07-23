/*
 * XREFs of PopPolicyWorkerAction @ 0x140A83F10
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     PopSetPowerActionState @ 0x1402B8248 (PopSetPowerActionState.c)
 *     PopGetPolicyWorker @ 0x1403E6B24 (PopGetPolicyWorker.c)
 *     PopThermalSxExit @ 0x1405D1508 (PopThermalSxExit.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PopIssueActionRequest @ 0x140A84124 (PopIssueActionRequest.c)
 *     PopCompleteAction @ 0x140A84608 (PopCompleteAction.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopPolicyWorkerAction(__int64 a1, __int64 a2)
{
  char v2; // si
  char v3; // bp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r15
  unsigned int v9; // edi
  unsigned int v10; // ebx
  int v11; // r14d
  unsigned int v12; // edi
  __int64 *i; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-58h]
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-40h]
  int v20; // [rsp+3Ch] [rbp-3Ch]
  __int64 *v21; // [rsp+40h] [rbp-38h] BYREF
  int v22; // [rsp+48h] [rbp-30h]
  int v23; // [rsp+4Ch] [rbp-2Ch]

  v2 = 0;
  v3 = 0;
  PopAcquirePolicyLock(a1, a2);
  qword_140F0BB48 = (__int64)KeGetCurrentThread();
  if ( byte_140F0B981 == 1 )
  {
    v8 = dword_140F0B984;
    v9 = dword_140F0B988;
    v10 = dword_140F0B98C;
    PopSetPowerActionState(2);
    v11 = dword_140F0B994;
    v12 = PopIssueActionRequest(0LL, (unsigned int)v8, v9, v10);
    v3 = 1;
    if ( (PopAction & 2) != 0 )
    {
      if ( dword_140F0B988 == 5 )
        v11 = 6;
      dword_140F0B994 = v11;
      dword_140F0B98C = dword_140F0B98C & 0x7FFFFFDC | 0x80000020;
      LOBYTE(PopAction) = PopAction & 0xFD;
      PopSetPowerActionState(1);
      PopGetPolicyWorker(2);
    }
    else
    {
      if ( (xmmword_140FC6B50 & 0x8000) != 0 )
      {
        v20 = 0;
        v23 = 0;
        v21 = &v18;
        v18 = v8;
        v19 = v12;
        v22 = 16;
        EtwTraceKernelEvent((int)&v21, 1, 0x80008000, 4643, 5249026);
      }
      dword_140F0B990 = v12;
      PopSetPowerActionState(0);
      for ( i = (__int64 *)PopActionWaiters; i != &PopActionWaiters; i = (__int64 *)*i )
        PopCompleteAction(i[2], v12);
      PopGetPolicyWorker(1);
      v2 = 1;
    }
  }
  qword_140F0BB48 = 0LL;
  PopReleasePolicyLock(v5, v4, v6, v7, v17);
  if ( v2 )
    PopThermalSxExit();
  PoResumeFromHibernate = 0;
  if ( v3 && PoPdcCallbacks )
    guard_dispatch_icall_no_overrides(v15, v14);
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
