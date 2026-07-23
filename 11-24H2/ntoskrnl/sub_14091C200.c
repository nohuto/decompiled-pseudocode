/*
 * XREFs of sub_14091C200 @ 0x14091C200
 * Callers:
 *     sub_14091D164 @ 0x14091D164 (sub_14091D164.c)
 *     sub_14091EE7C @ 0x14091EE7C (sub_14091EE7C.c)
 *     sub_1409D9820 @ 0x1409D9820 (sub_1409D9820.c)
 *     sub_1409DA1F4 @ 0x1409DA1F4 (sub_1409DA1F4.c)
 * Callees:
 *     sub_14091C0E8 @ 0x14091C0E8 (sub_14091C0E8.c)
 *     sub_14091F4A0 @ 0x14091F4A0 (sub_14091F4A0.c)
 */

__int64 __fastcall sub_14091C200(unsigned int *a1, __int64 a2, __int64 a3, int a4, int a5, unsigned int a6)
{
  unsigned int v8; // r9d

  v8 = a6;
  if ( a6 == -1 )
  {
    sub_14091F4A0((_DWORD)a1, a4, a5, 0, (__int64)&a6);
    v8 = a6;
  }
  return sub_14091C0E8(a1, a2, a3, v8);
}
