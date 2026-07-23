/*
 * XREFs of PerfInfoLogVirtualFree @ 0x1408DA818
 * Callers:
 *     MiFreeVadRange @ 0x14026731C (MiFreeVadRange.c)
 *     MiFreeVirtualMemory @ 0x1408D9E68 (MiFreeVirtualMemory.c)
 *     MiPreparePlaceholderVadReplacement @ 0x140A6031C (MiPreparePlaceholderVadReplacement.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x1403C1FD0 (EtwTraceSiloKernelEvent.c)
 *     PsGetProcessServerSilo @ 0x14043D810 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PerfInfoLogVirtualFree(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // eax
  __int64 ProcessServerSilo; // rax
  _QWORD v6[2]; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+44h] [rbp-24h]
  _QWORD *v9; // [rsp+48h] [rbp-20h] BYREF
  int v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+54h] [rbp-14h]

  v4 = *(_DWORD *)(a3 + 464);
  v6[0] = a1;
  v6[1] = a2;
  v7 = v4;
  v9 = v6;
  v11 = 0;
  v10 = 24;
  v8 = a4;
  ProcessServerSilo = PsGetProcessServerSilo(a3);
  EtwTraceSiloKernelEvent(ProcessServerSilo, (__int64)&v9, 1u, 0x20008000u, 611, 0x601902u);
}
