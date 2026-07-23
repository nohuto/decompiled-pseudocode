/*
 * XREFs of sub_14091BDAC @ 0x14091BDAC
 * Callers:
 *     sub_14091F638 @ 0x14091F638 (sub_14091F638.c)
 * Callees:
 *     sub_14091BE04 @ 0x14091BE04 (sub_14091BE04.c)
 *     sub_14091DB84 @ 0x14091DB84 (sub_14091DB84.c)
 */

__int64 __fastcall sub_14091BDAC(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a2 + 48);
  v6 = 0LL;
  v4 = sub_14091BE04((int)a1 + 8, v2, 8, -1, (__int64)&v6);
  if ( v4 >= 0 )
    sub_14091DB84(a1, v6);
  return (unsigned int)v4;
}
