/*
 * XREFs of ?RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18008D684
 * Callers:
 *     ?RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18008D57C (-RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 * Callees:
 *     ?RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x1800607B0 (-RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeCancelRecipientProcessThreadpoolWait@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180071800 (-RmpGameModeCancelRecipientProcessThreadpoolWait@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeClearPairingTree@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z @ 0x18008C7C4 (-RmpGameModeClearPairingTree@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeRemoveRecipientFromAuxiliaryList@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008D558 (-RmpGameModeRemoveRecipientFromAuxiliaryList@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

void __fastcall RmpGameModeRundownRecipientProcessTreeCallback(struct _RTL_BALANCED_NODE *a1, void *a2)
{
  union _RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E *v2; // rbx
  struct _RTL_BALANCED_NODE *v3; // rsi
  _BYTE *v4; // rdi

  v2 = &a1[-1].16;
  v3 = a1[1].Children[0];
  RmpGameModeAcquireLock((struct _RM_GAME_MODE_CONTEXT *)v3);
  if ( (*(_BYTE *)&v2[18] & 1) != 0 )
  {
    RmpGameModeRemoveRecipientFromAuxiliaryList((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v2);
    v4 = (char *)&v2[21] + 2;
    if ( (*((_BYTE *)&v2[21] + 2) & 8) != 0 )
      RmpGameModeClearPairingTree((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v2, 0LL);
  }
  else
  {
    v4 = (char *)&v2[21] + 2;
  }
  *v4 &= ~1u;
  LODWORD(v3[3].Right) = 0;
  RtlReleaseSRWLockExclusive(&v3[3]);
  RmpGameModeCancelRecipientProcessThreadpoolWait((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v2);
  RmpGameModeDereferenceRecipientProcess((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v2);
}
