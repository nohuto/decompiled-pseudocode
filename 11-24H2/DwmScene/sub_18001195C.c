/*
 * XREFs of sub_18001195C @ 0x18001195C
 * Callers:
 *     sub_180010C10 @ 0x180010C10 (sub_180010C10.c)
 *     sub_18002CAD8 @ 0x18002CAD8 (sub_18002CAD8.c)
 *     sub_18002D740 @ 0x18002D740 (sub_18002D740.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_180010BA8 @ 0x180010BA8 (sub_180010BA8.c)
 */

__int64 __fastcall sub_18001195C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_180010BA8((__int64)v6, *(_QWORD *)(a1 + 8));
    result = sub_180010234(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
  return result;
}
