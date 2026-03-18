/*
 * XREFs of sub_1408F94D0 @ 0x1408F94D0
 * Callers:
 *     sub_1408FCD58 @ 0x1408FCD58 (sub_1408FCD58.c)
 * Callees:
 *     sub_1408F9528 @ 0x1408F9528 (sub_1408F9528.c)
 *     sub_1408FB2A4 @ 0x1408FB2A4 (sub_1408FB2A4.c)
 */

__int64 __fastcall sub_1408F94D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a2 + 48);
  v6 = 0LL;
  v4 = sub_1408F9528((int)a1 + 8, v2, 8, -1, (__int64)&v6);
  if ( v4 >= 0 )
    sub_1408FB2A4(a1, v6);
  return (unsigned int)v4;
}
