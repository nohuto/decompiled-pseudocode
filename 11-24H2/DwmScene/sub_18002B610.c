/*
 * XREFs of sub_18002B610 @ 0x18002B610
 * Callers:
 *     sub_180028FCC @ 0x180028FCC (sub_180028FCC.c)
 *     sub_1800290E4 @ 0x1800290E4 (sub_1800290E4.c)
 *     sub_18006D0AC @ 0x18006D0AC (sub_18006D0AC.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_180028E14 @ 0x180028E14 (sub_180028E14.c)
 */

__int64 __fastcall sub_18002B610(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_180028E14((__int64)v6, *(_QWORD *)(a1 + 8));
    sub_180010234(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 152 * a3;
  result = a2 + 152 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
