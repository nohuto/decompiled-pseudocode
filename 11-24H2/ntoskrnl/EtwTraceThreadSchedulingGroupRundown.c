/*
 * XREFs of EtwTraceThreadSchedulingGroupRundown @ 0x14064C840
 * Callers:
 *     KeTraceSchedulingGroupRundown @ 0x1405C4F40 (KeTraceSchedulingGroupRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

int __fastcall EtwTraceThreadSchedulingGroupRundown(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  __int64 v5; // rdx
  _QWORD *ServerSiloGlobals; // rax
  int v7; // eax
  _DWORD v9[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+38h] [rbp-30h]
  _DWORD *v11; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+4Ch] [rbp-1Ch]

  v4 = a2;
  v5 = a1;
  if ( a1 == EtwpHostSiloState
    || (ServerSiloGlobals = PsGetServerSiloGlobals(*(_QWORD *)(*(_QWORD *)(a3 + 544) + 1520LL)),
        ServerSiloGlobals[104] == v5) )
  {
    v7 = *(_DWORD *)(a3 + 1296);
    v9[1] = 0;
    v13 = 0;
    v9[0] = v7;
    v10 = a4;
    v11 = v9;
    v12 = 16;
    LODWORD(ServerSiloGlobals) = EtwpLogKernelEvent((__int64)&v11, v5, v4, 1u, 1377, 0x600102u);
  }
  return (int)ServerSiloGlobals;
}
