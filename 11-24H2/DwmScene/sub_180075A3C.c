/*
 * XREFs of sub_180075A3C @ 0x180075A3C
 * Callers:
 *     sub_180073F58 @ 0x180073F58 (sub_180073F58.c)
 *     sub_180073FF8 @ 0x180073FF8 (sub_180073FF8.c)
 *     sub_180075340 @ 0x180075340 (sub_180075340.c)
 *     sub_180077E60 @ 0x180077E60 (sub_180077E60.c)
 *     sub_180085308 @ 0x180085308 (sub_180085308.c)
 *     sub_180085A68 @ 0x180085A68 (sub_180085A68.c)
 *     sub_180085C64 @ 0x180085C64 (sub_180085C64.c)
 *     sub_1800DAB75 @ 0x1800DAB75 (sub_1800DAB75.c)
 *     sub_1800DB2F8 @ 0x1800DB2F8 (sub_1800DB2F8.c)
 *     sub_1800E20B5 @ 0x1800E20B5 (sub_1800E20B5.c)
 *     sub_1800E210F @ 0x1800E210F (sub_1800E210F.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 */

__int64 __fastcall sub_180075A3C(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = sub_180010234(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
