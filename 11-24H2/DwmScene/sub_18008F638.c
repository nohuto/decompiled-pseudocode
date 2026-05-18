/*
 * XREFs of sub_18008F638 @ 0x18008F638
 * Callers:
 *     sub_18008DEE8 @ 0x18008DEE8 (sub_18008DEE8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180015E88 @ 0x180015E88 (sub_180015E88.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_180027D84 @ 0x180027D84 (sub_180027D84.c)
 *     sub_1800508B0 @ 0x1800508B0 (sub_1800508B0.c)
 *     sub_18006D058 @ 0x18006D058 (sub_18006D058.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_18008F638(__int64 *a1, __int64 a2, _BYTE *a3)
{
  int v4; // edi
  int v5; // r15d
  int v6; // r14d
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rax
  _DWORD v11[7]; // [rsp+28h] [rbp-61h] BYREF
  __int128 v12; // [rsp+44h] [rbp-45h]
  int v13; // [rsp+54h] [rbp-35h]
  int v14; // [rsp+58h] [rbp-31h]
  __int64 *v15; // [rsp+60h] [rbp-29h]
  _BYTE v16[32]; // [rsp+70h] [rbp-19h] BYREF
  _QWORD v17[4]; // [rsp+90h] [rbp+7h] BYREF

  v15 = a1;
  v4 = 1;
  if ( a3 )
  {
    if ( *a3 == 1 )
    {
      v4 = 0;
    }
    else if ( *a3 != 2 )
    {
      switch ( *a3 )
      {
        case 3:
          v4 = 2;
          break;
        case 4:
          v4 = 7;
          break;
        case 5:
          v4 = 8;
          break;
        case 6:
          v4 = 9;
          break;
        case 7:
          v4 = 10;
          break;
        case 8:
          v4 = 6;
          break;
      }
    }
    if ( a3[1] == 1 )
      v5 = 2;
    else
      v5 = a3[1] == 3;
    if ( a3[2] == 1 )
      v6 = 2;
    else
      v6 = a3[2] == 3;
    sub_180015E88(*(__int64 **)(a2 + 3648), a1);
    v7 = *a1;
    v8 = sub_18006D058(v17, _InterlockedExchangeAdd(&dword_1801C4E48, 1u));
    v9 = sub_18001B678((__int64)v16, (__int64)"Deserialized sampler ", v8);
    sub_180027D84(v7, v9);
    sub_180011B5C((__int64)v17);
    v11[3] = 0;
    v11[4] = 0;
    v11[5] = 1;
    v11[6] = 7;
    v12 = xmmword_1800F8600;
    v13 = 0;
    v14 = 2139095039;
    v11[0] = v4;
    v11[1] = v5;
    v11[2] = v6;
    sub_1800508B0(*a1, v11, 0LL);
  }
  else
  {
    sub_180015E88(*(__int64 **)(a2 + 3648), a1);
  }
  return a1;
}
