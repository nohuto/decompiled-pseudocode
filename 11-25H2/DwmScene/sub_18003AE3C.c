/*
 * XREFs of sub_18003AE3C @ 0x18003AE3C
 * Callers:
 *     sub_18003AD9C @ 0x18003AD9C (sub_18003AD9C.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18001258C @ 0x18001258C (sub_18001258C.c)
 *     sub_180032AC8 @ 0x180032AC8 (sub_180032AC8.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 */

void __fastcall __noreturn sub_18003AE3C(__int64 a1)
{
  __int64 v2; // [rsp+20h] [rbp-18h] BYREF
  __int64 v3; // [rsp+28h] [rbp-10h]

  sub_18003BCDC(a1);
  sub_18001258C(a1, &v2);
  if ( v3 )
    sub_18001050C(v3);
  sub_180032AC8();
}
