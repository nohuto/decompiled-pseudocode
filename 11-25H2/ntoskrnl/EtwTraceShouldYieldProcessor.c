/*
 * XREFs of EtwTraceShouldYieldProcessor @ 0x1402B2120
 * Callers:
 *     MiWalkVaRange @ 0x140236150 (MiWalkVaRange.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiDeleteVaDirect @ 0x1402B05C0 (MiDeleteVaDirect.c)
 *     MiPeriodicGoodCitizen @ 0x1402B22F0 (MiPeriodicGoodCitizen.c)
 *     MiWalkPageTablesRecursively @ 0x1402B2770 (MiWalkPageTablesRecursively.c)
 *     MiDecommitPages @ 0x140381AE0 (MiDecommitPages.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceShouldYieldProcessor(int a1, int a2, int a3)
{
  _DWORD v4[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  v4[0] = a1;
  v4[1] = a2;
  v5 = v4;
  v7 = 0;
  v4[2] = a3;
  v6 = 12;
  return EtwTraceKernelEvent((int)&v5, 1, 0x24000000u, 3949, 5245442);
}
