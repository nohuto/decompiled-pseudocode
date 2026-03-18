/*
 * XREFs of ViDeadlockAllocate @ 0x140B98B88
 * Callers:
 *     VfDeadlockInitializeResource @ 0x140B980B0 (VfDeadlockInitializeResource.c)
 *     VfDeadlockAcquireResource @ 0x140BA83C4 (VfDeadlockAcquireResource.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140248B90 (ExAllocateFromNPagedLookasideList.c)
 */

PVOID __fastcall ViDeadlockAllocate(int a1)
{
  int v1; // ecx
  int v2; // ecx
  PVOID result; // rax
  struct _NPAGED_LOOKASIDE_LIST *v4; // rcx

  v1 = a1 - 1;
  if ( v1 )
  {
    v2 = v1 - 1;
    if ( v2 )
    {
      if ( v2 != 1 )
        return 0LL;
      v4 = &ViDeadlockThreadLookaside;
    }
    else
    {
      v4 = &ViDeadlockNodeLookaside;
    }
  }
  else
  {
    v4 = &ViDeadlockResourceLookaside;
  }
  result = ExAllocateFromNPagedLookasideList(v4);
  if ( !result )
  {
    ViDeadlockState |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)ViDeadlockGlobals + 8196);
  }
  return result;
}
