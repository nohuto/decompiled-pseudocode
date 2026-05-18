/*
 * XREFs of sub_180022C00 @ 0x180022C00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800203D8 @ 0x1800203D8 (sub_1800203D8.c)
 *     sub_1800209C4 @ 0x1800209C4 (sub_1800209C4.c)
 *     sub_180022CC0 @ 0x180022CC0 (sub_180022CC0.c)
 *     sub_180023180 @ 0x180023180 (sub_180023180.c)
 */

__int64 __fastcall sub_180022C00(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int128 v7; // xmm0
  volatile signed __int64 *v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF

  result = *a2;
  if ( !*a2 )
    result = a2[1];
  if ( result )
  {
    v5 = sub_1800209C4();
    *(_QWORD *)&v9 = v5;
    v6 = v5;
    if ( v5 )
    {
      v7 = *(_OWORD *)a2;
      *(_QWORD *)(v5 + 152) = 127LL;
      v9 = v7;
      sub_1800203D8(v5, &v9);
    }
    else
    {
      v6 = 0LL;
    }
    sub_180023180(a1 + 112, v6);
    v8 = *(volatile signed __int64 **)(a1 + 112);
    _InterlockedExchangeAdd64(v8 + 18, 0LL);
    return sub_180022CC0((void *)v8);
  }
  return result;
}
