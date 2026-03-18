/*
 * XREFs of CmpFreeDriverList @ 0x140C470C0
 * Callers:
 *     CmGetSystemDriverList @ 0x140C62C58 (CmGetSystemDriverList.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall CmpFreeDriverList(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 result; // rax

  v4 = (_QWORD *)*a2;
  if ( (_QWORD *)*a2 != a2 )
  {
    do
    {
      v6 = v4[16];
      v7 = (_QWORD *)*v4;
      if ( v6 )
        guard_dispatch_icall_no_overrides(v6, *((unsigned __int16 *)v4 + 60), a3, a4);
      v8 = v4[5];
      if ( v8 )
        guard_dispatch_icall_no_overrides(v8, *((unsigned __int16 *)v4 + 17), a3, a4);
      v9 = v4[3];
      if ( v9 )
        guard_dispatch_icall_no_overrides(v9, *((unsigned __int16 *)v4 + 9), a3, a4);
      result = guard_dispatch_icall_no_overrides(v4, 144LL, a3, a4);
      v4 = v7;
    }
    while ( v7 != a2 );
  }
  return result;
}
