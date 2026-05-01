/*
 * XREFs of ?ArManagerRestartActivitiesForPhase@@YAXPEAU_ACTIVITY_RESTARTER@@W4_AR_STATE_CHANGE_EVENT@@@Z @ 0x18000410C
 * Callers:
 *     ?ArCsStateChangeCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180068050 (-ArCsStateChangeCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x180004194 (-ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180005988 (-ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x1800059D8 (-ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     CemRcTableGetNext @ 0x180016F20 (CemRcTableGetNext.c)
 *     CemRcTableGetFirst @ 0x180043370 (CemRcTableGetFirst.c)
 */

__int64 __fastcall ArManagerRestartActivitiesForPhase(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  bool v6; // zf

  for ( result = CemRcTableGetFirst(); ; result = CemRcTableGetNext(v4) )
  {
    v4 = result;
    if ( !result )
      break;
    if ( !*(_QWORD *)(result + 600) )
      continue;
    ArHostWaitForAndSetChangeInProgress((struct _AR_ACTIVITY_HOST *)result);
    v5 = *(_QWORD *)(v4 + 600);
    if ( v5 && (unsigned __int8)(*(_BYTE *)(v5 + 32) - 1) > 1u )
    {
      if ( !a2 )
      {
        v6 = (*(_BYTE *)(v5 + 28) & 1) == 0;
        goto LABEL_10;
      }
      if ( a2 == 1 )
      {
        v6 = (*(_BYTE *)(v5 + 28) & 2) == 0;
LABEL_10:
        if ( !v6 )
          ArActStartAsync((struct _AR_ACTIVITY *)v5);
      }
    }
    ArHostClearChangeInProgress((struct _AR_ACTIVITY_HOST *)v4);
  }
  return result;
}
