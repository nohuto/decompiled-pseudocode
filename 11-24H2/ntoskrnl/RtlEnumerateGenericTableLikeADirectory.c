/*
 * XREFs of RtlEnumerateGenericTableLikeADirectory @ 0x1403D9B90
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x1408CE800 (PiDmEnumObjectsWithCallback.c)
 * Callees:
 *     RealSuccessor @ 0x1403D9D30 (RealSuccessor.c)
 *     FindNodeOrParent @ 0x1403D9E20 (FindNodeOrParent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID __stdcall RtlEnumerateGenericTableLikeADirectory(
        PRTL_AVL_TABLE Table,
        PRTL_AVL_MATCH_FUNCTION MatchFunction,
        PVOID MatchData,
        ULONG NextFlag,
        PVOID *RestartKey,
        PULONG DeleteCount,
        PVOID Buffer)
{
  PVOID *v10; // rdi
  void *v11; // r15
  PVOID *v12; // rcx
  int v13; // eax
  int NodeOrParent; // eax
  PVOID *RestartKeya; // [rsp+70h] [rbp+28h]

  v10 = (PVOID *)*RestartKey;
  RestartKeya = (PVOID *)*RestartKey;
  if ( !Table->NumberGenericTableElements )
  {
    *RestartKey = 0LL;
    return 0LL;
  }
  v11 = 0LL;
  if ( *DeleteCount == Table->DeleteCount )
  {
    if ( v10 )
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
      v10 = RestartKeya;
      goto LABEL_7;
    }
    v12 = RestartKeya;
    goto LABEL_6;
  }
  v10 = RestartKeya;
LABEL_4:
  if ( !NextFlag )
    goto LABEL_7;
  do
  {
    v12 = v10;
LABEL_6:
    v10 = (PVOID *)RealSuccessor(v12);
LABEL_7:
    if ( !v10 )
      return 0LL;
    v13 = guard_dispatch_icall_no_overrides(Table, v10 + 4);
  }
  while ( v13 == -1073741198 );
  *RestartKey = v10;
  if ( !v13 )
    v11 = v10 + 4;
  *DeleteCount = Table->DeleteCount;
  return v11;
}
