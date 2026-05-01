/*
 * XREFs of ?RmpGameModeIsProcessPrimary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180071A24
 * Callers:
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001AC70 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpGameModeRemoveRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800607E8 (-RmpGameModeRemoveRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeInsertRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008CD24 (-RmpGameModeInsertRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeIsProcessValidPairingTarget@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008CE6C (-RmpGameModeIsProcessValidPairingTarget@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall RmpGameModeIsProcessPrimary(struct _RM_GAME_MODE_RECIPIENT_PROCESS *a1)
{
  return (*((_DWORD *)a1 + 36) & 1) == 0 || (*((_DWORD *)a1 + 36) & 4) != 0;
}
