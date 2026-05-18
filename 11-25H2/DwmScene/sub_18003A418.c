/*
 * XREFs of sub_18003A418 @ 0x18003A418
 * Callers:
 *     sub_18003A280 @ 0x18003A280 (sub_18003A280.c)
 *     sub_18003A418 @ 0x18003A418 (sub_18003A418.c)
 *     sub_1800576C8 @ 0x1800576C8 (sub_1800576C8.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180012554 @ 0x180012554 (sub_180012554.c)
 *     sub_18003A418 @ 0x18003A418 (sub_18003A418.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 *     sub_18003C83C @ 0x18003C83C (sub_18003C83C.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_18003A418(__int64 a1)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  sub_18003BCDC(a1);
  if ( *(_QWORD *)(a1 + 216) == sub_18003C83C(&qword_1801C2BB0) )
    return *(_QWORD *)(a1 + 216);
  v3 = *(_QWORD *)(a1 + 208);
  sub_180012554(a1, &v5);
  if ( v5 )
  {
    v4 = sub_18003A418(v5);
    if ( v3 < v4 )
      v3 = v4;
  }
  *(_QWORD *)(a1 + 216) = v3;
  if ( v6 )
    sub_18001050C(v6);
  return v3;
}
