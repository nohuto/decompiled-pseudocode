/*
 * XREFs of EtwTraceShouldYieldProcessor @ 0x1402DBE00
 * Callers:
 *     MiDecommitPages @ 0x140288300 (MiDecommitPages.c)
 *     MiWalkVaRange @ 0x14028A740 (MiWalkVaRange.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiDeleteVaDirect @ 0x1402DA300 (MiDeleteVaDirect.c)
 *     MiPeriodicGoodCitizen @ 0x1402DBFC0 (MiPeriodicGoodCitizen.c)
 *     MiWalkPageTablesRecursively @ 0x1402DC430 (MiWalkPageTablesRecursively.c)
 *     MiQueryAddressState @ 0x140300420 (MiQueryAddressState.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
