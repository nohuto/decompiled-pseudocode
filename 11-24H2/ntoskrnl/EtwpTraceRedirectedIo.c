/*
 * XREFs of EtwpTraceRedirectedIo @ 0x14064D360
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x1403C1FD0 (EtwTraceSiloKernelEvent.c)
 *     PsGetThreadServerSilo @ 0x1403C24D0 (PsGetThreadServerSilo.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall EtwpTraceRedirectedIo(__int64 a1, __int64 a2)
{
  __int64 ThreadServerSilo; // rax
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+38h] [rbp-30h]
  __int64 *v6; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  ThreadServerSilo = *(_QWORD *)(a1 + 152);
  v4 = a1;
  if ( ThreadServerSilo )
    ThreadServerSilo = PsGetThreadServerSilo(ThreadServerSilo);
  if ( a2 )
    v5 = *(_QWORD *)(a2 + 24);
  else
    v5 = 0LL;
  v8 = 0;
  v6 = &v4;
  v7 = 16;
  EtwTraceSiloKernelEvent(ThreadServerSilo, (__int64)&v6, 1u, 0x300u, 272, 0x11601902u);
}
