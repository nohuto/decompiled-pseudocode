/*
 * XREFs of RtlEnumerateGenericTableLikeADirectory @ 0x1403EA1D0
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x1408D0E10 (PiDmEnumObjectsWithCallback.c)
 * Callees:
 *     RealSuccessor @ 0x1403EA370 (RealSuccessor.c)
 *     FindNodeOrParent @ 0x1403EA460 (FindNodeOrParent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

// local variable allocation has failed, the output may be wrong!
PVOID __stdcall RtlEnumerateGenericTableLikeADirectory(
        PRTL_AVL_TABLE Table,
        PRTL_AVL_MATCH_FUNCTION MatchFunction,
        PVOID MatchData,
        ULONG NextFlag,
        PVOID *RestartKey,
        PULONG DeleteCount,
        PVOID Buffer)
{
  PVOID *v11; // rdi
  void *v12; // r15
  PVOID *v13; // rcx
  int v14; // eax
  int NodeOrParent; // eax
  PVOID *RestartKeya; // [rsp+70h] [rbp+28h]

  v11 = (PVOID *)*RestartKey;
  RestartKeya = (PVOID *)*RestartKey;
  if ( !Table->NumberGenericTableElements )
  {
    *RestartKey = 0LL;
    return 0LL;
  }
  v12 = 0LL;
  if ( *DeleteCount == Table->DeleteCount )
  {
    if ( v11 )
      goto LABEL_4;
  }
  else
  {
    RestartKeya = 0LL;
  }
  NodeOrParent = FindNodeOrParent(Table, Buffer);
  if ( NodeOrParent != 1 )
  {
    if ( NodeOrParent != 3 )
    {
      v11 = RestartKeya;
      goto LABEL_7;
    }
    v13 = RestartKeya;
    goto LABEL_6;
  }
  v11 = RestartKeya;
LABEL_4:
  if ( !NextFlag )
    goto LABEL_7;
  do
  {
    v13 = v11;
LABEL_6:
    v11 = (PVOID *)RealSuccessor(v13);
LABEL_7:
    if ( !v11 )
      return 0LL;
    v14 = guard_dispatch_icall_no_overrides(Table, v11 + 4, MatchData, *(_QWORD *)&NextFlag);
  }
  while ( v14 == -1073741198 );
  *RestartKey = v11;
  if ( !v14 )
    v12 = v11 + 4;
  *DeleteCount = Table->DeleteCount;
  return v12;
}
