/*
 * XREFs of PopPolicyWorkerAction @ 0x140A82EF0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     PopSetPowerActionState @ 0x140354C84 (PopSetPowerActionState.c)
 *     PopGetPolicyWorker @ 0x1404769F4 (PopGetPolicyWorker.c)
 *     PopThermalSxExit @ 0x1405CF378 (PopThermalSxExit.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PopIssueActionRequest @ 0x140A83104 (PopIssueActionRequest.c)
 *     PopCompleteAction @ 0x140A835E8 (PopCompleteAction.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
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
  __int64 v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-58h]
  __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-40h]
  int v19; // [rsp+3Ch] [rbp-3Ch]
  __int64 *v20; // [rsp+40h] [rbp-38h] BYREF
  int v21; // [rsp+48h] [rbp-30h]
  int v22; // [rsp+4Ch] [rbp-2Ch]

  v2 = 0;
  v3 = 0;
  PopAcquirePolicyLock(a1, a2);
  qword_140F0B028 = (__int64)KeGetCurrentThread();
  if ( byte_140F0AE61 == 1 )
  {
    v8 = dword_140F0AE64;
    v9 = dword_140F0AE68;
    v10 = dword_140F0AE6C;
    PopSetPowerActionState(2);
    v11 = dword_140F0AE74;
    v12 = PopIssueActionRequest(0LL, (unsigned int)v8, v9, v10);
    v3 = 1;
    if ( (PopAction & 2) != 0 )
    {
      if ( dword_140F0AE68 == 5 )
        v11 = 6;
      dword_140F0AE74 = v11;
      dword_140F0AE6C = dword_140F0AE6C & 0x7FFFFFDC | 0x80000020;
      LOBYTE(PopAction) = PopAction & 0xFD;
      PopSetPowerActionState(1);
      PopGetPolicyWorker(2);
    }
    else
    {
      if ( (xmmword_140FC5B10 & 0x8000) != 0 )
      {
        v19 = 0;
        v22 = 0;
        v20 = &v17;
        v17 = v8;
        v18 = v12;
        v21 = 16;
        EtwTraceKernelEvent((int)&v20, 1, 0x80008000, 4643, 5249026);
      }
      dword_140F0AE70 = v12;
      PopSetPowerActionState(0);
      for ( i = (__int64 *)PopActionWaiters; i != &PopActionWaiters; i = (__int64 *)*i )
        PopCompleteAction(i[2], v12);
      PopGetPolicyWorker(1);
      v2 = 1;
    }
  }
  qword_140F0B028 = 0LL;
  PopReleasePolicyLock(v5, v4, v6, v7, v16);
  if ( v2 )
    PopThermalSxExit();
  PoResumeFromHibernate = 0;
  if ( v3 && PoPdcCallbacks )
    guard_dispatch_icall_no_overrides(v14);
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
