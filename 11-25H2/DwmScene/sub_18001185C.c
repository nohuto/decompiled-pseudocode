/*
 * XREFs of sub_18001185C @ 0x18001185C
 * Callers:
 *     sub_180010B10 @ 0x180010B10 (sub_180010B10.c)
 *     sub_18002C978 @ 0x18002C978 (sub_18002C978.c)
 *     sub_18002D5E0 @ 0x18002D5E0 (sub_18002D5E0.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_180010AA8 @ 0x180010AA8 (sub_180010AA8.c)
 */

__int64 __fastcall sub_18001185C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_180010AA8((__int64)v6, *(_QWORD *)(a1 + 8));
    result = sub_180010134(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
  return result;
}
