/*
 * XREFs of ExpWnfFreeScopeInstance @ 0x140A604C4
 * Callers:
 *     ExpWnfDeleteScopeInstances @ 0x1407C6348 (ExpWnfDeleteScopeInstances.c)
 *     ExpWnfDeleteScopeById @ 0x1408A9F88 (ExpWnfDeleteScopeById.c)
 *     ExpWnfResolveScopeInstance @ 0x1408AD060 (ExpWnfResolveScopeInstance.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     ExpWnfDestroyPermanentDataStore @ 0x1407C642C (ExpWnfDestroyPermanentDataStore.c)
 *     ExpWnfDeleteNameInstanceCallback @ 0x140A60564 (ExpWnfDeleteNameInstanceCallback.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpWnfFreeScopeInstance(struct _EX_RUNDOWN_REF *P, char a2)
{
  _QWORD *Count; // rcx
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rcx
  _QWORD *v9; // rcx

  if ( a2 )
  {
    ExWaitForRundownProtectionRelease(P + 1);
    Count = (_QWORD *)P[7].Count;
    if ( Count )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v4 = (_QWORD *)*Count;
          if ( !*Count )
            break;
          v5 = Count;
LABEL_8:
          *v5 = 0LL;
          Count = v4;
        }
        v5 = Count + 1;
        v4 = (_QWORD *)Count[1];
        if ( v4 )
          goto LABEL_8;
        v6 = Count[2];
        ExpWnfDeleteNameInstanceCallback(Count, P);
        v7 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v7 )
          break;
        Count = (_QWORD *)v7;
      }
    }
    P[7].Count = 0LL;
  }
  v8 = (_QWORD *)P[8].Count;
  if ( v8 )
    ExpWnfDestroyPermanentDataStore(v8);
  v9 = (_QWORD *)P[9].Count;
  if ( v9 )
    ExpWnfDestroyPermanentDataStore(v9);
  ExFreePoolWithTag(P, 0x20666E57u);
}
