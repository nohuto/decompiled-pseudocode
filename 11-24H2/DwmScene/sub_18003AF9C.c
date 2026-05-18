/*
 * XREFs of sub_18003AF9C @ 0x18003AF9C
 * Callers:
 *     sub_18003AEFC @ 0x18003AEFC (sub_18003AEFC.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001268C @ 0x18001268C (sub_18001268C.c)
 *     sub_180032C28 @ 0x180032C28 (sub_180032C28.c)
 *     sub_18003BE3C @ 0x18003BE3C (sub_18003BE3C.c)
 */

void __fastcall __noreturn sub_18003AF9C(__int64 a1)
{
  __int64 v2; // [rsp+20h] [rbp-18h] BYREF
  __int64 v3; // [rsp+28h] [rbp-10h]

  sub_18003BE3C(a1);
  sub_18001268C(a1, &v2);
  if ( v3 )
    sub_18001060C(v3);
  sub_180032C28();
}
