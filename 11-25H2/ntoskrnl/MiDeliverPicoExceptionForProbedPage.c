/*
 * XREFs of MiDeliverPicoExceptionForProbedPage @ 0x140662F94
 * Callers:
 *     MiFaultInProbeAddress @ 0x1402FC28C (MiFaultInProbeAddress.c)
 * Callees:
 *     PsPicoDispatchException @ 0x1404ABB38 (PsPicoDispatchException.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiDeliverPicoExceptionForProbedPage(__int64 a1, int a2)
{
  _DWORD v5[8]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v6; // [rsp+50h] [rbp-98h]
  __int64 v7; // [rsp+58h] [rbp-90h]

  memset_0(v5, 0, 0x98uLL);
  v5[0] = -1073741819;
  v5[6] = 2;
  v7 = a1;
  if ( a2 )
    v6 = 1LL;
  return (unsigned __int8)PsPicoDispatchException((__int64)v5, 0LL) == 0 ? 0xC0000005 : 0;
}
