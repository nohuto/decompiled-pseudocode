/*
 * XREFs of sub_18006CC74 @ 0x18006CC74
 * Callers:
 *     sub_18005F5A0 @ 0x18005F5A0 (sub_18005F5A0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_6 @ 0x1800387C0 (unknown_libname_6.c)
 */

void __fastcall sub_18006CC74(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // r8
  __int64 *v4; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = *(__int64 **)(a1 + 40);
  v4 = *(__int64 **)(a1 + 48);
  if ( v2 != v4 )
  {
    do
    {
      if ( *v2 == *a2 )
        break;
      v2 += 2;
    }
    while ( v2 != v4 );
    if ( v2 != v4 )
    {
      unknown_libname_6(v2 + 2, v4, v2);
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 48) - 8LL);
      if ( v6 )
        sub_18001060C(v6);
      *(_QWORD *)(a1 + 48) -= 16LL;
    }
  }
  v7 = a2[1];
  if ( v7 )
    sub_18001060C(v7);
}
