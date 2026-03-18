/*
 * XREFs of PopPolicyWorkerAction @ 0x140A87A20
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     PopSetPowerActionState @ 0x1403CB224 (PopSetPowerActionState.c)
 *     PopGetPolicyWorker @ 0x1403F2E04 (PopGetPolicyWorker.c)
 *     PopThermalSxExit @ 0x1405D3D88 (PopThermalSxExit.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopIssueActionRequest @ 0x140A87C34 (PopIssueActionRequest.c)
 *     PopCompleteAction @ 0x140A88118 (PopCompleteAction.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
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
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-40h]
  int v22; // [rsp+3Ch] [rbp-3Ch]
  __int64 *v23; // [rsp+40h] [rbp-38h] BYREF
  int v24; // [rsp+48h] [rbp-30h]
  int v25; // [rsp+4Ch] [rbp-2Ch]

  v2 = 0;
  v3 = 0;
  PopAcquirePolicyLock(a1, a2);
  qword_140F0B2C8 = (__int64)KeGetCurrentThread();
  if ( byte_140F0B101 == 1 )
  {
    v8 = dword_140F0B104;
    v9 = dword_140F0B108;
    v10 = dword_140F0B10C;
    PopSetPowerActionState(2);
    v11 = dword_140F0B114;
    v12 = PopIssueActionRequest(0LL, (unsigned int)v8, v9, v10);
    v3 = 1;
    if ( (PopAction & 2) != 0 )
    {
      if ( dword_140F0B108 == 5 )
        v11 = 6;
      dword_140F0B114 = v11;
      dword_140F0B10C = dword_140F0B10C & 0x7FFFFFDC | 0x80000020;
      LOBYTE(PopAction) = PopAction & 0xFD;
      PopSetPowerActionState(1);
      PopGetPolicyWorker(2);
    }
    else
    {
      if ( (xmmword_140FC5B10 & 0x8000) != 0 )
      {
        v22 = 0;
        v25 = 0;
        v23 = &v20;
        v20 = v8;
        v21 = v12;
        v24 = 16;
        EtwTraceKernelEvent((int)&v23, 1, 0x80008000, 4643, 5249026);
      }
      dword_140F0B110 = v12;
      PopSetPowerActionState(0);
      for ( i = (__int64 *)PopActionWaiters; i != &PopActionWaiters; i = (__int64 *)*i )
        PopCompleteAction(i[2], v12);
      PopGetPolicyWorker(1);
      v2 = 1;
    }
  }
  qword_140F0B2C8 = 0LL;
  PopReleasePolicyLock(v5, v4, v6, v7, v19);
  if ( v2 )
    PopThermalSxExit();
  PoResumeFromHibernate = 0;
  if ( v3 && PoPdcCallbacks )
    guard_dispatch_icall_no_overrides(v15, v14, v16, v17);
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
