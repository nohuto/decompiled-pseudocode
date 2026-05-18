/*
 * XREFs of sub_18001E39C @ 0x18001E39C
 * Callers:
 *     sub_180084D78 @ 0x180084D78 (sub_180084D78.c)
 *     sub_180094CE8 @ 0x180094CE8 (sub_180094CE8.c)
 *     sub_1800CCD2C @ 0x1800CCD2C (sub_1800CCD2C.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 */

__int64 __fastcall sub_18001E39C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    sub_180010134(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFFCuLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 4 * a3;
  result = a2 + 4 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
