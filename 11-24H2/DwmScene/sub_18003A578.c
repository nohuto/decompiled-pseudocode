/*
 * XREFs of sub_18003A578 @ 0x18003A578
 * Callers:
 *     sub_18003A3E0 @ 0x18003A3E0 (sub_18003A3E0.c)
 *     sub_18003A578 @ 0x18003A578 (sub_18003A578.c)
 *     sub_180057828 @ 0x180057828 (sub_180057828.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180012654 @ 0x180012654 (sub_180012654.c)
 *     sub_18003A578 @ 0x18003A578 (sub_18003A578.c)
 *     sub_18003BE3C @ 0x18003BE3C (sub_18003BE3C.c)
 *     sub_18003C99C @ 0x18003C99C (sub_18003C99C.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_18003A578(__int64 a1)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  sub_18003BE3C(a1);
  if ( *(_QWORD *)(a1 + 216) == sub_18003C99C(&qword_1801C3BE0) )
    return *(_QWORD *)(a1 + 216);
  v3 = *(_QWORD *)(a1 + 208);
  sub_180012654(a1, &v5);
  if ( v5 )
  {
    v4 = sub_18003A578(v5);
    if ( v3 < v4 )
      v3 = v4;
  }
  *(_QWORD *)(a1 + 216) = v3;
  if ( v6 )
    sub_18001060C(v6);
  return v3;
}
