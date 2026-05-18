/*
 * XREFs of sub_180022D60 @ 0x180022D60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180020538 @ 0x180020538 (sub_180020538.c)
 *     sub_180020B24 @ 0x180020B24 (sub_180020B24.c)
 *     sub_180022E20 @ 0x180022E20 (sub_180022E20.c)
 *     sub_1800232E0 @ 0x1800232E0 (sub_1800232E0.c)
 */

__int64 __fastcall sub_180022D60(__int64 a1, __int64 *a2)
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
    v5 = sub_180020B24();
    *(_QWORD *)&v9 = v5;
    v6 = v5;
    if ( v5 )
    {
      v7 = *(_OWORD *)a2;
      *(_QWORD *)(v5 + 152) = 127LL;
      v9 = v7;
      sub_180020538(v5, &v9);
    }
    else
    {
      v6 = 0LL;
    }
    sub_1800232E0(a1 + 112, v6);
    v8 = *(volatile signed __int64 **)(a1 + 112);
    _InterlockedExchangeAdd64(v8 + 18, 0LL);
    return sub_180022E20((void *)v8);
  }
  return result;
}
