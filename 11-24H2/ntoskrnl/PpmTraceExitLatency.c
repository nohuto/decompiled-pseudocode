/*
 * XREFs of PpmTraceExitLatency @ 0x1405CCB04
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140371030 (PpmIdleExecuteTransition.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     PpmConvertTimeTo @ 0x140370A00 (PpmConvertTimeTo.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall PpmTraceExitLatency(__int64 a1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
  int v8; // r9d
  LARGE_INTEGER PerformanceCounter; // rax
  int v11; // ecx
  _DWORD v12[6]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v13[2]; // [rsp+48h] [rbp-20h] BYREF

  v8 = -1;
  if ( PopFxSystemLatencyLimit == -1 )
    return 3221226614LL;
  if ( a5 != -1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v8 = a5 + PpmConvertTimeTo(PerformanceCounter.QuadPart - a6, 0x989680uLL);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x4000000) != 0 )
  {
    v12[4] = v8;
    v12[1] = a3;
    v11 = 4;
    v12[2] = a2;
    if ( a5 != -1 )
      v11 = 0;
    v12[3] = a5;
    v12[0] = v11;
    v13[0] = v12;
    v13[1] = 20LL;
    EtwTraceKernelEvent((int)v13, 1, 0x44000000u, 4668, 1538);
  }
  return 0LL;
}
