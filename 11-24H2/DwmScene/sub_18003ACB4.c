/*
 * XREFs of sub_18003ACB4 @ 0x18003ACB4
 * Callers:
 *     sub_18003B094 @ 0x18003B094 (sub_18003B094.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_180039D60 @ 0x180039D60 (sub_180039D60.c)
 *     sub_18003B060 @ 0x18003B060 (sub_18003B060.c)
 *     sub_18003B3FC @ 0x18003B3FC (sub_18003B3FC.c)
 *     sub_18003BE3C @ 0x18003BE3C (sub_18003BE3C.c)
 *     sub_18003BE7C @ 0x18003BE7C (sub_18003BE7C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18003ACB4(__int64 a1, __int64 *a2)
{
  __int64 *i; // rbx
  __int64 *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+28h] [rbp-28h]
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h]
  __int128 v13; // [rsp+40h] [rbp-10h] BYREF

  sub_18003BE7C();
  for ( i = *(__int64 **)(a1 + 32); i != *(__int64 **)(a1 + 40); i += 2 )
  {
    if ( *i == *a2 )
      break;
  }
  v5 = *(__int64 **)(a1 + 40);
  while ( 1 )
  {
    i += 2;
    if ( i == v5 )
      break;
    sub_180011110(i - 2, i);
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) - 8LL);
  if ( v6 )
    sub_18001060C(v6);
  *(_QWORD *)(a1 + 40) -= 16LL;
  v7 = *a2;
  sub_18003BE3C(*a2);
  sub_180011C04(v7 + 112, &v11);
  result = (__int64)sub_180039D60(*a2, &v9);
  if ( v11 )
  {
    sub_18003B060(v11, &v9);
    v13 = 0LL;
    result = sub_18003B3FC(*a2, &v13);
  }
  if ( v9 )
  {
    sub_18003B3FC(v9, &v11);
    v13 = 0LL;
    result = sub_18003B060(*a2, &v13);
  }
  if ( v10 )
    result = sub_18001060C(v10);
  if ( v12 )
    return sub_18001060C(v12);
  return result;
}
