/*
 * XREFs of sub_180073BD8 @ 0x180073BD8
 * Callers:
 *     sub_180073E78 @ 0x180073E78 (sub_180073E78.c)
 *     sub_180076EB8 @ 0x180076EB8 (sub_180076EB8.c)
 * Callees:
 *     sub_180012508 @ 0x180012508 (sub_180012508.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180073BD8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v7; // rdx

  *(_QWORD *)(a1 + 56) = 0LL;
  v4 = *(_QWORD *)(a3 + 56);
  if ( v4 )
  {
    if ( v4 == a3 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      sub_180012508(a3, v7);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a3 + 56) = 0LL;
    }
  }
  *(_QWORD *)(a1 + 64) = a2;
  return a1;
}
