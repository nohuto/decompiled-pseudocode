/*
 * XREFs of sub_1800C24F8 @ 0x1800C24F8
 * Callers:
 *     sub_1800BF9CC @ 0x1800BF9CC (sub_1800BF9CC.c)
 *     sub_1800BFAD4 @ 0x1800BFAD4 (sub_1800BFAD4.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 */

__int64 __fastcall sub_1800C24F8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    result = sub_180010134(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF0uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
  return result;
}
