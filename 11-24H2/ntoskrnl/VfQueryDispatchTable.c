/*
 * XREFs of VfQueryDispatchTable @ 0x140610A80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void *__fastcall VfQueryDispatchTable(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rcx
  void *v9; // rax

  v4 = 0LL;
  if ( !(_QWORD)ViVerifierDriverAddedThunkListHead && !VfClearanceFlag )
    return 0LL;
  if ( !a1 )
  {
    v9 = &VfWdmDispatchTable;
    if ( (unsigned int)a2 > dword_140E01EE4 )
      return 0LL;
    return v9;
  }
  v6 = a1 - 2;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( !v7 )
    {
      if ( (unsigned int)a2 <= dword_140E01EC4 )
        return &VfXdvDispatchTable;
      return (void *)v4;
    }
    if ( v7 == 1 && ViFnXdvQueryDispatchTable )
    {
      v8 = 4LL;
      return (void *)guard_dispatch_icall_no_overrides(v8, a2, 0LL, a4);
    }
  }
  else if ( ViFnXdvQueryDispatchTable )
  {
    v8 = 2LL;
    return (void *)guard_dispatch_icall_no_overrides(v8, a2, 0LL, a4);
  }
  return (void *)v4;
}
