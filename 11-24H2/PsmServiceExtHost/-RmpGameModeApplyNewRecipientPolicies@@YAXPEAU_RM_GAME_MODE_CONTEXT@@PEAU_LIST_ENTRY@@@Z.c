/*
 * XREFs of ?RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x18008C6AC
 * Callers:
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001AC70 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     CempListRemoveHeadAndClear @ 0x18006374C (CempListRemoveHeadAndClear.c)
 *     ?RmpGameModeAcquireAndApplyRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800692BC (-RmpGameModeAcquireAndApplyRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_R.c)
 */

void __fastcall RmpGameModeApplyNewRecipientPolicies(struct _RM_GAME_MODE_CONTEXT *a1, struct _LIST_ENTRY *a2)
{
  _QWORD *v4; // rsi
  char *v5; // rax
  char **v6; // rcx

  *((_DWORD *)a1 + 20) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 72);
  while ( a2->Flink != a2 )
  {
    v4 = CempListRemoveHeadAndClear(a2);
    RmpGameModeAcquireAndApplyRecipientResources(a1, (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(v4 - 11));
    *((_BYTE *)v4 + 83) &= ~1u;
    v5 = (char *)a1 + 16 * *((int *)v4 + 4) + 88;
    v6 = (char **)*((_QWORD *)v5 + 1);
    if ( *v6 != v5 )
      __fastfail(3u);
    *v4 = v5;
    v4[1] = v6;
    *v6 = (char *)v4;
    *((_QWORD *)v5 + 1) = v4;
  }
  RmpGameModeAcquireLock(a1);
}
