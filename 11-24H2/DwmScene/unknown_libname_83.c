/*
 * XREFs of unknown_libname_83 @ 0x180017608
 * Callers:
 *     sub_1800152E8 @ 0x1800152E8 (sub_1800152E8.c)
 *     sub_180069EA8 @ 0x180069EA8 (sub_180069EA8.c)
 *     sub_18007E5A4 @ 0x18007E5A4 (sub_18007E5A4.c)
 *     sub_1800C04B0 @ 0x1800C04B0 (sub_1800C04B0.c)
 *     sub_1800C24AC @ 0x1800C24AC (sub_1800C24AC.c)
 *     sub_1800C6DB0 @ 0x1800C6DB0 (sub_1800C6DB0.c)
 * Callees:
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 */

// Microsoft VisualC v14 64bit runtime
_OWORD *__fastcall unknown_libname_83(_OWORD *a1, __int64 a2)
{
  if ( a1 != (_OWORD *)a2 )
  {
    sub_180011B5C((__int64)a1);
    *a1 = *(_OWORD *)a2;
    a1[1] = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 15LL;
    *(_BYTE *)a2 = 0;
  }
  return a1;
}
