/*
 * XREFs of sub_18002F2B4 @ 0x18002F2B4
 * Callers:
 *     sub_180031F90 @ 0x180031F90 (sub_180031F90.c)
 *     sub_1800336B0 @ 0x1800336B0 (sub_1800336B0.c)
 *     sub_18003385C @ 0x18003385C (sub_18003385C.c)
 *     sub_180033EE4 @ 0x180033EE4 (sub_180033EE4.c)
 *     sub_1800340C4 @ 0x1800340C4 (sub_1800340C4.c)
 *     sub_180034548 @ 0x180034548 (sub_180034548.c)
 *     sub_1800350F8 @ 0x1800350F8 (sub_1800350F8.c)
 *     sub_1800356CC @ 0x1800356CC (sub_1800356CC.c)
 *     sub_180035B30 @ 0x180035B30 (sub_180035B30.c)
 *     sub_1800577C8 @ 0x1800577C8 (sub_1800577C8.c)
 *     sub_180057AB0 @ 0x180057AB0 (sub_180057AB0.c)
 *     sub_180061990 @ 0x180061990 (sub_180061990.c)
 *     sub_180061D60 @ 0x180061D60 (sub_180061D60.c)
 *     sub_18008CD40 @ 0x18008CD40 (sub_18008CD40.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180028938 @ 0x180028938 (sub_180028938.c)
 *     sub_180036994 @ 0x180036994 (sub_180036994.c)
 *     sub_180095084 @ 0x180095084 (sub_180095084.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_18002F2B4(__int64 *a1, __int64 a2)
{
  __int64 v3; // r10
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  sub_180036994(a2, &v5);
  if ( v5 )
  {
    a1[2] = sub_180095084(v5, v3);
    sub_180028938(a1, &v5);
  }
  if ( v6 )
    sub_18001050C(v6);
  return a1;
}
