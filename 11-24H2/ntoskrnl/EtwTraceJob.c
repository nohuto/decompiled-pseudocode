/*
 * XREFs of EtwTraceJob @ 0x14085C728
 * Callers:
 *     NtTerminateJobObject @ 0x14085BC20 (NtTerminateJobObject.c)
 *     NtOpenJobObject @ 0x14085BE00 (NtOpenJobObject.c)
 *     NtCreateJobObject @ 0x14085C390 (NtCreateJobObject.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x14085C7FC (PspTerminateAllProcessesInJobHierarchy.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwpPsProvTraceJob @ 0x14085AAB0 (EtwpPsProvTraceJob.c)
 */

__int64 __fastcall EtwTraceJob(__int64 a1, int a2, int a3, __int16 a4)
{
  __int128 v5; // xmm0
  __int128 v7; // [rsp+30h] [rbp-40h] BYREF
  int v8; // [rsp+40h] [rbp-30h]
  int v9; // [rsp+44h] [rbp-2Ch]
  int v10; // [rsp+48h] [rbp-28h]
  _QWORD v11[2]; // [rsp+50h] [rbp-20h] BYREF

  v7 = 0uLL;
  if ( a1 )
  {
    v5 = *(_OWORD *)(a1 + 1472);
    v8 = *(_DWORD *)(a1 + 1468);
    v7 = v5;
  }
  else
  {
    v8 = 0;
  }
  v9 = a2;
  v11[0] = &v7;
  v10 = a3;
  v11[1] = 28LL;
  if ( a1 && EtwpHostSiloState != -4812 && (*(_DWORD *)(EtwpHostSiloState + 4812) & 0x80000) != 0 )
    EtwpPsProvTraceJob(a1, a3, a4);
  return EtwTraceKernelEvent((int)v11, 1, 0x80000u, a4, 6297860);
}
