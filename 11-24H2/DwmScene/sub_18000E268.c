/*
 * XREFs of sub_18000E268 @ 0x18000E268
 * Callers:
 *     sub_18000D8D4 @ 0x18000D8D4 (sub_18000D8D4.c)
 *     sub_18000FD34 @ 0x18000FD34 (sub_18000FD34.c)
 * Callees:
 *     sub_18000E1FC @ 0x18000E1FC (sub_18000E1FC.c)
 */

signed int __fastcall sub_18000E268(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed int result; // eax
  __int64 v5; // [rsp+20h] [rbp-18h]
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  result = sub_18000E1FC(0LL, 0, 0LL, a4, v5, retaddr);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
