/*
 * XREFs of sub_18009662C @ 0x18009662C
 * Callers:
 *     sub_180096188 @ 0x180096188 (sub_180096188.c)
 *     sub_180096260 @ 0x180096260 (sub_180096260.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 *     sub_180027298 @ 0x180027298 (sub_180027298.c)
 */

_QWORD *__fastcall sub_18009662C(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // r9
  _QWORD *v5; // r10
  __int64 *v6; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a3;
  sub_18001C420(&v8);
  v6 = sub_180027298(v5, v4);
  sub_180010234(v6, 0x28uLL);
  *a2 = v8;
  return a2;
}
