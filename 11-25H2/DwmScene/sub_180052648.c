/*
 * XREFs of sub_180052648 @ 0x180052648
 * Callers:
 *     sub_180050C18 @ 0x180050C18 (sub_180050C18.c)
 *     sub_1800C621C @ 0x1800C621C (sub_1800C621C.c)
 *     sub_1800C6324 @ 0x1800C6324 (sub_1800C6324.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 */

__int64 __fastcall sub_180052648(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    result = sub_180010134(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFE0uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 32 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 32 * a4;
  return result;
}
