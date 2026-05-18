/*
 * XREFs of sub_18001AA00 @ 0x18001AA00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_180016050 @ 0x180016050 (sub_180016050.c)
 */

char __fastcall sub_18001AA00(__int64 a1, __int64 *a2)
{
  char v3; // bl
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  sub_180016050(*a2, &v5);
  v3 = 0;
  if ( v5 )
  {
    sub_18001254C(*(__int64 **)(a1 + 8), &v5);
    if ( v6 )
      sub_18001060C(v6);
  }
  else
  {
    if ( v6 )
      sub_18001060C(v6);
    return 1;
  }
  return v3;
}
