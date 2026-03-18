/*
 * XREFs of KxMcheckAbort @ 0x1406BB100
 * Callers:
 *     KiMcheckAbort @ 0x1406BAAC0 (KiMcheckAbort.c)
 * Callees:
 *     KiHandleMcheck @ 0x1405B7610 (KiHandleMcheck.c)
 */

__int64 __fastcall KxMcheckAbort(__int64 a1, __int64 a2, int *a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v6; // [rsp+0h] [rbp-138h] BYREF

  *a3 = 0;
  if ( (*(_BYTE *)(v4 + 240) & 1) == 0 )
    *a3 = 16;
  return KiHandleMcheck(a1, (__int64)&v6, a3, a4);
}
