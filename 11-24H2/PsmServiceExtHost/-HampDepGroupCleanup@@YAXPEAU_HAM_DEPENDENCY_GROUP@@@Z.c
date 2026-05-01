/*
 * XREFs of ?HampDepGroupCleanup@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18006B668
 * Callers:
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180035678 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     CempListEntryIsNull @ 0x18000C00C (CempListEntryIsNull.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000C030 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000D550 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     CempListEntryRemoveAndClear @ 0x180027644 (CempListEntryRemoveAndClear.c)
 */

void __fastcall HampDepGroupCleanup(struct _HAM_DEPENDENCY_GROUP *a1)
{
  __int64 v2; // rcx
  struct _HOST_ACTIVITY_MANAGER *v3; // rsi
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // rdi

  v2 = *((_QWORD *)a1 + 15);
  if ( v2 )
    TpReleaseWork(v2);
  v3 = (struct _HOST_ACTIVITY_MANAGER *)*((_QWORD *)a1 + 4);
  HampManagerAcquireLockExclusive(v3);
  v4 = (_QWORD *)((char *)a1 + 40);
  v5 = (_QWORD *)((char *)v3 + 488);
  if ( (unsigned int)CempListEntryIsNull(v4) )
  {
    v7 = 1LL;
  }
  else
  {
    CempListEntryRemoveAndClear(v6);
    v7 = --*v5;
  }
  HampManagerReleaseLockExclusive(v3);
  if ( !v7 )
    RtlWakeAddressAll((char *)v3 + 488);
}
