/*
 * XREFs of sub_180025980 @ 0x180025980
 * Callers:
 *     sub_18004F9A0 @ 0x18004F9A0 (sub_18004F9A0.c)
 *     sub_1800BAC30 @ 0x1800BAC30 (sub_1800BAC30.c)
 * Callees:
 *     sub_180012140 @ 0x180012140 (sub_180012140.c)
 *     sub_180023944 @ 0x180023944 (sub_180023944.c)
 *     sub_180069C10 @ 0x180069C10 (sub_180069C10.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180025980(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 3640) )
  {
    v2 = *(_QWORD *)(a1 + 3520);
    v3 = *(_QWORD *)(a1 + 3528);
    if ( v2 != v3 )
    {
      sub_180023944(v2, v3);
      *(_QWORD *)(a1 + 3528) = *(_QWORD *)(a1 + 3520);
    }
    sub_180069C10(a1 + 560);
    sub_180069C10(a1 + 688);
    sub_180069C10(a1 + 816);
    v4 = *(_QWORD *)(a1 + 248);
    v5 = *(_QWORD *)(a1 + 256);
    if ( v4 != v5 )
    {
      sub_180012140(v4, v5);
      *(_QWORD *)(a1 + 256) = *(_QWORD *)(a1 + 248);
    }
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 256LL))(a1);
    *(_BYTE *)(a1 + 3640) = 0;
  }
  return result;
}
