/*
 * XREFs of sub_180025820 @ 0x180025820
 * Callers:
 *     sub_18004F840 @ 0x18004F840 (sub_18004F840.c)
 *     sub_1800BAAD0 @ 0x1800BAAD0 (sub_1800BAAD0.c)
 * Callees:
 *     sub_180012040 @ 0x180012040 (sub_180012040.c)
 *     sub_1800237E4 @ 0x1800237E4 (sub_1800237E4.c)
 *     sub_180069AB0 @ 0x180069AB0 (sub_180069AB0.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180025820(__int64 a1)
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
      sub_1800237E4(v2, v3);
      *(_QWORD *)(a1 + 3528) = *(_QWORD *)(a1 + 3520);
    }
    sub_180069AB0(a1 + 560);
    sub_180069AB0(a1 + 688);
    sub_180069AB0(a1 + 816);
    v4 = *(_QWORD *)(a1 + 248);
    v5 = *(_QWORD *)(a1 + 256);
    if ( v4 != v5 )
    {
      sub_180012040(v4, v5);
      *(_QWORD *)(a1 + 256) = *(_QWORD *)(a1 + 248);
    }
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 256LL))(a1);
    *(_BYTE *)(a1 + 3640) = 0;
  }
  return result;
}
