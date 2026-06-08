/*
 * XREFs of sub_140010680 @ 0x140010680
 * Callers:
 *     sub_140003510 @ 0x140003510 (sub_140003510.c)
 *     sub_140003EE0 @ 0x140003EE0 (sub_140003EE0.c)
 *     sub_1400068C8 @ 0x1400068C8 (sub_1400068C8.c)
 *     sub_14000C380 @ 0x14000C380 (sub_14000C380.c)
 *     sub_14000F6B0 @ 0x14000F6B0 (sub_14000F6B0.c)
 *     sub_140011020 @ 0x140011020 (sub_140011020.c)
 *     sub_140027238 @ 0x140027238 (sub_140027238.c)
 *     sub_140027F04 @ 0x140027F04 (sub_140027F04.c)
 *     sub_14002A400 @ 0x14002A400 (sub_14002A400.c)
 *     sub_14002A850 @ 0x14002A850 (sub_14002A850.c)
 *     sub_14002C3B4 @ 0x14002C3B4 (sub_14002C3B4.c)
 *     sub_14002C5F0 @ 0x14002C5F0 (sub_14002C5F0.c)
 *     sub_14002CAF0 @ 0x14002CAF0 (sub_14002CAF0.c)
 *     sub_14002E36C @ 0x14002E36C (sub_14002E36C.c)
 *     sub_14002E988 @ 0x14002E988 (sub_14002E988.c)
 *     sub_140030E90 @ 0x140030E90 (sub_140030E90.c)
 *     sub_140035068 @ 0x140035068 (sub_140035068.c)
 *     sub_1400359D0 @ 0x1400359D0 (sub_1400359D0.c)
 *     sub_140038BD4 @ 0x140038BD4 (sub_140038BD4.c)
 *     sub_140039A78 @ 0x140039A78 (sub_140039A78.c)
 *     sub_14003A750 @ 0x14003A750 (sub_14003A750.c)
 *     sub_14003AB2C @ 0x14003AB2C (sub_14003AB2C.c)
 *     sub_14003C9EC @ 0x14003C9EC (sub_14003C9EC.c)
 *     sub_14003CF60 @ 0x14003CF60 (sub_14003CF60.c)
 *     sub_14003DA60 @ 0x14003DA60 (sub_14003DA60.c)
 *     ?GetRegisteredLocation@@YAHPEAD@Z @ 0x14003E85C (-GetRegisteredLocation@@YAHPEAD@Z.c)
 *     sub_14003FE54 @ 0x14003FE54 (sub_14003FE54.c)
 *     sub_140044C20 @ 0x140044C20 (sub_140044C20.c)
 *     sub_140046234 @ 0x140046234 (sub_140046234.c)
 *     sub_140046638 @ 0x140046638 (sub_140046638.c)
 *     sub_1400468E0 @ 0x1400468E0 (sub_1400468E0.c)
 *     sub_140047594 @ 0x140047594 (sub_140047594.c)
 *     sub_14004A99C @ 0x14004A99C (sub_14004A99C.c)
 *     sub_14004B714 @ 0x14004B714 (sub_14004B714.c)
 *     sub_14004B874 @ 0x14004B874 (sub_14004B874.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140010680(char *a1, unsigned __int8 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __m128 v5; // xmm0
  char *v6; // r8
  __m128 *v7; // rdx
  _OWORD *v8; // r9
  unsigned __int64 v9; // r8
  __m128 *v10; // r9
  unsigned __int64 v11; // r8
  char *v12; // r9
  unsigned __int64 v13; // r8

  result = (__int64)a1;
  v4 = 0x101010101010101LL * a2;
  v5 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
  if ( a3 >= 0x40 )
  {
    if ( (byte_140018D40 & 2) != 0 && a3 >= 0x320 )
      return sub_1400107C0();
    *(__m128 *)a1 = v5;
    v6 = &a1[a3];
    a1 = (char *)((unsigned __int64)(a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
    a3 = v6 - a1;
    if ( a3 >= 0x40 )
    {
      v7 = (__m128 *)&a1[a3 - 16];
      v8 = (_OWORD *)((unsigned __int64)&a1[a3 - 48] & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = a3 >> 6;
      do
      {
        *(__m128 *)a1 = v5;
        *((__m128 *)a1 + 1) = v5;
        a1 += 64;
        --v9;
        *((__m128 *)a1 - 2) = v5;
        *((__m128 *)a1 - 1) = v5;
      }
      while ( v9 );
      *v8 = v5;
      v8[1] = v5;
      v8[2] = v5;
      *v7 = v5;
      return result;
    }
LABEL_9:
    v10 = (__m128 *)&a1[a3 - 16];
    *(__m128 *)a1 = v5;
    v11 = (a3 & 0x20) >> 1;
    *v10 = v5;
    *(__m128 *)&a1[v11] = v5;
    *(__m128 *)((char *)v10 - v11) = v5;
    return result;
  }
  if ( a3 >= 0x10 )
    goto LABEL_9;
  if ( a3 < 4 )
  {
    if ( a3 )
    {
      *a1 = v4;
      if ( a3 != 1 )
        *(_WORD *)&a1[a3 - 2] = v4;
    }
  }
  else
  {
    v12 = &a1[a3 - 4];
    *(_DWORD *)a1 = v4;
    v13 = (a3 & 8) >> 1;
    *(_DWORD *)v12 = v4;
    *(_DWORD *)&a1[v13] = v4;
    *(_DWORD *)&v12[-v13] = v4;
  }
  return result;
}
