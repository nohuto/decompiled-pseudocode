/*
 * XREFs of EtwpLogProcessPerfCtrs @ 0x1407A9EE8
 * Callers:
 *     EtwTraceProcess @ 0x1408F11B4 (EtwTraceProcess.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x1403C1FD0 (EtwTraceSiloKernelEvent.c)
 *     PsGetProcessServerSilo @ 0x14043D810 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall EtwpLogProcessPerfCtrs(__int64 a1)
{
  __int64 v2; // rax
  __int64 ProcessServerSilo; // rax
  _DWORD *v4; // [rsp+30h] [rbp-39h] BYREF
  int v5; // [rsp+38h] [rbp-31h]
  int v6; // [rsp+3Ch] [rbp-2Dh]
  _DWORD v7[4]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v8; // [rsp+50h] [rbp-19h]
  __int64 v9; // [rsp+58h] [rbp-11h]
  __int64 v10; // [rsp+60h] [rbp-9h]
  __int64 v11; // [rsp+68h] [rbp-1h]
  __int64 v12; // [rsp+70h] [rbp+7h]

  memset_0(v7, 0, 0x68uLL);
  v7[0] = *(_DWORD *)(a1 + 464);
  v8 = *(_QWORD *)(a1 + 544);
  v9 = *(_QWORD *)(a1 + 1184) << 12;
  v10 = *(_QWORD *)(a1 + 992) << 12;
  v11 = *(_QWORD *)(a1 + 536);
  v2 = *(_QWORD *)(a1 + 528);
  v6 = 0;
  v12 = v2;
  v4 = v7;
  v5 = 104;
  ProcessServerSilo = PsGetProcessServerSilo(a1);
  EtwTraceSiloKernelEvent(ProcessServerSilo, (__int64)&v4, 1u, 1u, 800, 0x601802u);
}
