/*
 * XREFs of sub_180073A78 @ 0x180073A78
 * Callers:
 *     sub_180073D18 @ 0x180073D18 (sub_180073D18.c)
 *     sub_180076D58 @ 0x180076D58 (sub_180076D58.c)
 * Callees:
 *     sub_180012408 @ 0x180012408 (sub_180012408.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180073A78(__int64 a1, __int64 a2, __int64 a3)
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
      sub_180012408(a3, v7);
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
