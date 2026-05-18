/*
 * XREFs of sub_18001E4FC @ 0x18001E4FC
 * Callers:
 *     sub_180084ED8 @ 0x180084ED8 (sub_180084ED8.c)
 *     sub_180094E48 @ 0x180094E48 (sub_180094E48.c)
 *     sub_1800CCE8C @ 0x1800CCE8C (sub_1800CCE8C.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 */

__int64 __fastcall sub_18001E4FC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    sub_180010234(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFFCuLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 4 * a3;
  result = a2 + 4 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
