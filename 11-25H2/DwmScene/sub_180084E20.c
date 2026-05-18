/*
 * XREFs of sub_180084E20 @ 0x180084E20
 * Callers:
 *     sub_180085CC0 @ 0x180085CC0 (sub_180085CC0.c)
 *     sub_180085F18 @ 0x180085F18 (sub_180085F18.c)
 *     sub_180086160 @ 0x180086160 (sub_180086160.c)
 *     sub_180086554 @ 0x180086554 (sub_180086554.c)
 * Callees:
 *     memmove @ 0x18000CD6D (memmove.c)
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_1800108F8 @ 0x1800108F8 (sub_1800108F8.c)
 *     sub_180084FC8 @ 0x180084FC8 (sub_180084FC8.c)
 */

__int64 __fastcall sub_180084E20(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rbp
  unsigned __int64 v7; // rcx
  __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  char *v10; // r14
  __int64 result; // rax
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  v3 = 0xFFFFFFFFFFFFFFFLL;
  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v6 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v7 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4;
  v8 = v6 >> 4;
  v9 = v7 >> 1;
  if ( v7 <= 0xFFFFFFFFFFFFFFFLL - (v7 >> 1) )
  {
    v3 = v9 + v7;
    if ( v9 + v7 < a2 )
      v3 = a2;
  }
  v12 = v3;
  v10 = (char *)sub_1800108F8(v7, &v12);
  sub_180084FC8(&v10[16 * v8], a2 - v8, a1);
  result = (__int64)memmove(v10, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  if ( *(_QWORD *)a1 )
    result = sub_180010134(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
  *(_QWORD *)a1 = v10;
  *(_QWORD *)(a1 + 8) = &v10[16 * a2];
  *(_QWORD *)(a1 + 16) = &v10[16 * v3];
  return result;
}
