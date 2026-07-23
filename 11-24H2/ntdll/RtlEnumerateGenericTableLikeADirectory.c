/*
 * XREFs of RtlEnumerateGenericTableLikeADirectory @ 0x180142A20
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x18008E730 (FindNodeOrParent.c)
 *     RealSuccessor @ 0x1800E5480 (RealSuccessor.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

PVOID __cdecl RtlEnumerateGenericTableLikeADirectory(
        PRTL_AVL_TABLE Table,
        PRTL_AVL_MATCH_FUNCTION MatchFunction,
        PVOID MatchData,
        ULONG NextFlag,
        PVOID *RestartKey,
        PULONG DeleteCount,
        PVOID Buffer)
{
  PVOID *v7; // r14
  void *v8; // rdi
  PVOID *v12; // rbx
  PULONG v14; // r15
  __int64 (__fastcall *v15)(PRTL_AVL_TABLE, PVOID *, PVOID); // r12
  int NodeOrParent; // eax
  PVOID *i; // rcx
  int v18; // eax

  v7 = RestartKey;
  v8 = 0LL;
  v12 = (PVOID *)*RestartKey;
  RestartKey = (PVOID *)*RestartKey;
  if ( !Table->NumberGenericTableElements )
  {
    *v7 = 0LL;
    return 0LL;
  }
  v14 = DeleteCount;
  v15 = (__int64 (__fastcall *)(PRTL_AVL_TABLE, PVOID *, PVOID))WinSqmCheckEscalationSetString;
  if ( MatchFunction )
    v15 = (__int64 (__fastcall *)(PRTL_AVL_TABLE, PVOID *, PVOID))MatchFunction;
  if ( *DeleteCount == Table->DeleteCount )
  {
    if ( v12 )
      goto LABEL_14;
  }
  else
  {
    RestartKey = 0LL;
  }
  NodeOrParent = FindNodeOrParent((unsigned __int16 *)Table, (PCWCH *)Buffer, &RestartKey);
  if ( NodeOrParent == 1 )
  {
    v12 = RestartKey;
LABEL_14:
    if ( !NextFlag )
      goto LABEL_17;
    goto LABEL_15;
  }
  if ( NodeOrParent != 3 )
  {
    v12 = RestartKey;
    goto LABEL_17;
  }
  for ( i = RestartKey; ; i = v12 )
  {
    v12 = (PVOID *)RealSuccessor(i);
LABEL_17:
    if ( !v12 )
      break;
    v18 = v15(Table, v12 + 4, MatchData);
    if ( v18 != -1073741198 )
    {
      *v7 = v12;
      if ( !v18 )
        v8 = v12 + 4;
      *v14 = Table->DeleteCount;
      return v8;
    }
LABEL_15:
    ;
  }
  return 0LL;
}
