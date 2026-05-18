/*
 * XREFs of sub_180086D00 @ 0x180086D00
 * Callers:
 *     sub_180084CA0 @ 0x180084CA0 (sub_180084CA0.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 */

__int64 __fastcall sub_180086D00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    sub_180010134(v6, *(_QWORD *)(a1 + 16) - (_QWORD)v6);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + a3;
  result = a2 + a4;
  *(_QWORD *)(a1 + 16) = a2 + a4;
  return result;
}
