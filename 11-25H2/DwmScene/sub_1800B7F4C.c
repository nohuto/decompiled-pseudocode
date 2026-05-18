/*
 * XREFs of sub_1800B7F4C @ 0x1800B7F4C
 * Callers:
 *     sub_1800B9D90 @ 0x1800B9D90 (sub_1800B9D90.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001CE14 @ 0x18001CE14 (sub_18001CE14.c)
 *     sub_1800B7FEC @ 0x1800B7FEC (sub_1800B7FEC.c)
 */

__int64 __fastcall sub_1800B7F4C(__int64 a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // r10
  _BYTE v6[6]; // [rsp+5Ah] [rbp-1Eh] BYREF

  if ( a2 >= 0 )
  {
    v3 = sub_1800B7FEC(v6);
  }
  else
  {
    v3 = sub_1800B7FEC(v6) - 2;
    *(_WORD *)v3 = 45;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 24) = v4;
  if ( (_BYTE *)v3 == v6 )
  {
    *(_QWORD *)(a1 + 16) = v4;
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_WORD *)a1 = v4;
  }
  else
  {
    sub_18001CE14((char **)a1, (const void *)v3, (__int64)&v6[-v3] >> 1);
  }
  return a1;
}
