/*
 * XREFs of sub_18001A940 @ 0x18001A940
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_180015F50 @ 0x180015F50 (sub_180015F50.c)
 */

char __fastcall sub_18001A940(__int64 a1, __int64 *a2)
{
  char v3; // bl
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  sub_180015F50(*a2, &v5);
  v3 = 0;
  if ( v5 )
  {
    sub_18001244C(*(__int64 **)(a1 + 8), &v5);
    if ( v6 )
      sub_18001050C(v6);
  }
  else
  {
    if ( v6 )
      sub_18001050C(v6);
    return 1;
  }
  return v3;
}
