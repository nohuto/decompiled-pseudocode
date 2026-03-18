/*
 * XREFs of RtlLookupFirstMatchingElementGenericTableAvl @ 0x1403EA3C0
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x1403EA460 (FindNodeOrParent.c)
 *     RealPredecessor @ 0x1403EA558 (RealPredecessor.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID __stdcall RtlLookupFirstMatchingElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer, PVOID *RestartKey)
{
  char *v7; // rbx
  char *v8; // rsi
  char *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // r9

  *RestartKey = 0LL;
  if ( (unsigned int)FindNodeOrParent(Table, Buffer) != 1 )
    return 0LL;
  v7 = 0LL;
  do
  {
    v8 = v7;
    v9 = v7;
    v10 = RealPredecessor(v7);
    v7 = (char *)v10;
  }
  while ( v10 && (unsigned int)guard_dispatch_icall_no_overrides(Table, Buffer, v10 + 32, v11) == 2 );
  *RestartKey = v9;
  return v8 + 32;
}
