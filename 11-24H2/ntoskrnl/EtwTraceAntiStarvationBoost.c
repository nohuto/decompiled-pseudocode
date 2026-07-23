/*
 * XREFs of EtwTraceAntiStarvationBoost @ 0x14064BA40
 * Callers:
 *     KiNormalPriorityReadyScan @ 0x140282170 (KiNormalPriorityReadyScan.c)
 *     KiQuantumEnd @ 0x1402A3870 (KiQuantumEnd.c)
 *     KiScanSharedReadyThreads @ 0x14045BDC8 (KiScanSharedReadyThreads.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceAntiStarvationBoost(__int64 a1, char a2)
{
  int v2; // eax
  int v4; // [rsp+30h] [rbp-28h] BYREF
  __int16 v5; // [rsp+34h] [rbp-24h]
  char v6; // [rsp+36h] [rbp-22h]
  char v7; // [rsp+37h] [rbp-21h]
  int *v8; // [rsp+38h] [rbp-20h] BYREF
  int v9; // [rsp+40h] [rbp-18h]
  int v10; // [rsp+44h] [rbp-14h]

  v4 = *(_DWORD *)(a1 + 1296);
  v2 = *(_DWORD *)(a1 + 536);
  v10 = 0;
  v5 = v2;
  v6 = a2;
  v8 = &v4;
  v7 = 0;
  v9 = 8;
  return EtwTraceKernelEvent((int)&v8, 1, 0x40000001u, 1340, 5249026);
}
