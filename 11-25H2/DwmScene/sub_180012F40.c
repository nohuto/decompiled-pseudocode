/*
 * XREFs of sub_180012F40 @ 0x180012F40
 * Callers:
 *     sub_180012080 @ 0x180012080 (sub_180012080.c)
 *     sub_18001219C @ 0x18001219C (sub_18001219C.c)
 *     sub_18006A4B8 @ 0x18006A4B8 (sub_18006A4B8.c)
 *     sub_180088FF0 @ 0x180088FF0 (sub_180088FF0.c)
 *     sub_18008C5F4 @ 0x18008C5F4 (sub_18008C5F4.c)
 *     sub_1800CAE40 @ 0x1800CAE40 (sub_1800CAE40.c)
 *     sub_1800D1EA8 @ 0x1800D1EA8 (sub_1800D1EA8.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_180012040 @ 0x180012040 (sub_180012040.c)
 */

__int64 __fastcall sub_180012F40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_180012040((__int64)v6, *(_QWORD *)(a1 + 8));
    result = sub_180010134(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
  return result;
}
