/*
 * XREFs of CmpFreeDriverList @ 0x140C35E04
 * Callers:
 *     CmGetSystemDriverList @ 0x140C51914 (CmGetSystemDriverList.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall CmpFreeDriverList(__int64 a1, _QWORD **a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax

  v2 = *a2;
  if ( *a2 != a2 )
  {
    do
    {
      v4 = v2[16];
      v5 = (_QWORD *)*v2;
      if ( v4 )
        guard_dispatch_icall_no_overrides(v4);
      v6 = v2[5];
      if ( v6 )
        guard_dispatch_icall_no_overrides(v6);
      v7 = v2[3];
      if ( v7 )
        guard_dispatch_icall_no_overrides(v7);
      result = guard_dispatch_icall_no_overrides(v2);
      v2 = v5;
    }
    while ( v5 != a2 );
  }
  return result;
}
