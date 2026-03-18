/*
 * XREFs of RtlLookupFirstMatchingElementGenericTableAvl @ 0x1403E0F70
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x1403E1010 (FindNodeOrParent.c)
 *     RealPredecessor @ 0x1403E1108 (RealPredecessor.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID __stdcall RtlLookupFirstMatchingElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer, PVOID *RestartKey)
{
  __int64 v7; // rbx
  __int64 v8; // rsi
  void *v9; // rbp

  *RestartKey = 0LL;
  if ( (unsigned int)FindNodeOrParent(Table, Buffer) != 1 )
    return 0LL;
  v7 = 0LL;
  do
  {
    v8 = v7;
    v9 = (void *)v7;
    v7 = RealPredecessor(v7);
  }
  while ( v7 && (unsigned int)guard_dispatch_icall_no_overrides(Table, Buffer) == 2 );
  *RestartKey = v9;
  return (PVOID)(v8 + 32);
}
