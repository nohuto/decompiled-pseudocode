/*
 * XREFs of sub_180033E24 @ 0x180033E24
 * Callers:
 *     sub_18003178C @ 0x18003178C (sub_18003178C.c)
 * Callees:
 *     sub_180010AA8 @ 0x180010AA8 (sub_180010AA8.c)
 *     unknown_libname_4 @ 0x18002DA10 (unknown_libname_4.c)
 *     sub_1800305B8 @ 0x1800305B8 (sub_1800305B8.c)
 */

void __fastcall sub_180033E24(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 *i; // rbx
  __int64 v4; // rax
  __int64 *j; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx

  v1 = *(__int64 **)(a1 + 896);
  for ( i = *(__int64 **)(a1 + 888); i != v1; i += 2 )
  {
    v4 = i[1];
    if ( !v4 || !*(_DWORD *)(v4 + 8) )
      break;
  }
  if ( i != v1 )
  {
    for ( j = i + 2; j != v1; j += 2 )
    {
      v6 = j[1];
      if ( v6 && *(_DWORD *)(v6 + 8) )
      {
        sub_1800305B8(i, j);
        i += 2;
      }
    }
  }
  v7 = *(_QWORD *)(a1 + 896);
  if ( i != (__int64 *)v7 )
  {
    v8 = unknown_libname_4(v7, *(_QWORD *)(a1 + 896), (__int64)i);
    sub_180010AA8(v8, *(_QWORD *)(a1 + 896));
    *(_QWORD *)(a1 + 896) = v8;
  }
}
