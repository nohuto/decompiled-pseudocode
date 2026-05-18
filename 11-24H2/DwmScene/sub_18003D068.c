/*
 * XREFs of sub_18003D068 @ 0x18003D068
 * Callers:
 *     sub_18003CD80 @ 0x18003CD80 (sub_18003CD80.c)
 *     sub_18003D034 @ 0x18003D034 (sub_18003D034.c)
 *     sub_18003FF8C @ 0x18003FF8C (sub_18003FF8C.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 */

__int64 __fastcall sub_18003D068(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v2; // rcx

  v2 = (volatile signed __int32 *)a2[4];
  if ( v2 )
    sub_180010644(v2);
  return sub_180010234(a2, 0x28uLL);
}
