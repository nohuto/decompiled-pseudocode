/*
 * XREFs of sub_1800527A8 @ 0x1800527A8
 * Callers:
 *     sub_180050D78 @ 0x180050D78 (sub_180050D78.c)
 *     sub_1800C637C @ 0x1800C637C (sub_1800C637C.c)
 *     sub_1800C6484 @ 0x1800C6484 (sub_1800C6484.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 */

__int64 __fastcall sub_1800527A8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    result = sub_180010234(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFE0uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 32 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 32 * a4;
  return result;
}
