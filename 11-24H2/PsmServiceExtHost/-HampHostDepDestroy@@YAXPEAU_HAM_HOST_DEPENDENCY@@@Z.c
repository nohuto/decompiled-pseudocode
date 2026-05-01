/*
 * XREFs of ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180070094
 * Callers:
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18001BB50 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180034C90 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     ?HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18003580C (-HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTI.c)
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003588C (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     CempListEntryIsNull @ 0x18000C00C (CempListEntryIsNull.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800182CC (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempListEntryRemoveAndClear @ 0x180027644 (CempListEntryRemoveAndClear.c)
 *     ?HampHostProcessDepCleanup@@YAXPEAU_HAM_HOST_PROCESS_DEPENDENCY@@@Z @ 0x18008488C (-HampHostProcessDepCleanup@@YAXPEAU_HAM_HOST_PROCESS_DEPENDENCY@@@Z.c)
 *     ?HampHostProcessDepRundown@@YAXPEAU_HAM_HOST_PROCESS_DEPENDENCY@@@Z @ 0x180084984 (-HampHostProcessDepRundown@@YAXPEAU_HAM_HOST_PROCESS_DEPENDENCY@@@Z.c)
 */

void __fastcall HampHostDepDestroy(struct _HAM_HOST_DEPENDENCY *a1)
{
  _QWORD *v2; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v3; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v4; // rcx

  if ( !*((_BYTE *)a1 + 40) )
    HampHostProcessDepRundown(a1);
  if ( !(unsigned int)CempListEntryIsNull((_QWORD *)a1 + 2) )
    CempListEntryRemoveAndClear(v2);
  if ( !*((_BYTE *)a1 + 40) )
  {
    HampHostProcessDepCleanup(a1);
    goto LABEL_14;
  }
  if ( *((_BYTE *)a1 + 40) == 1 )
  {
    v4 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 6);
    if ( v4 )
      RmHamHostDereference(v4);
    v3 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 7);
    if ( v3 )
      goto LABEL_12;
  }
  else if ( (unsigned int)*((unsigned __int8 *)a1 + 40) - 3 <= 1 )
  {
    RmHamHostDereference(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 6));
    v3 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 7);
LABEL_12:
    RmHamHostDereference(v3);
  }
LABEL_14:
  HampFreeHeap(a1);
}
