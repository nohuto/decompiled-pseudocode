/*
 * XREFs of sub_18000E15C @ 0x18000E15C
 * Callers:
 *     sub_18000CE30 @ 0x18000CE30 (sub_18000CE30.c)
 *     sub_18000CEA4 @ 0x18000CEA4 (sub_18000CEA4.c)
 *     sub_18000E1C8 @ 0x18000E1C8 (sub_18000E1C8.c)
 * Callees:
 *     sub_18000CF8C @ 0x18000CF8C (sub_18000CF8C.c)
 */

DWORD __fastcall sub_18000E15C(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  DWORD result; // eax

  result = GetLastError();
  if ( !result )
  {
    sub_18000CF8C(a1, a2, a3, 0LL, 0LL, a6, 0x8007029C);
    return 668;
  }
  return result;
}
