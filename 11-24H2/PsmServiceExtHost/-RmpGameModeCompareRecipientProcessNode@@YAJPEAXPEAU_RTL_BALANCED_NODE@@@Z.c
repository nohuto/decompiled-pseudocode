/*
 * XREFs of ?RmpGameModeCompareRecipientProcessNode@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18001B304
 * Callers:
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001AC70 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x18001B254 (-RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpGameModeCompareRecipientProcessNode(void *a1, struct _RTL_BALANCED_NODE *a2)
{
  if ( (unsigned int)a1 < HIDWORD(a2[4].Left) )
    return 0xFFFFFFFFLL;
  else
    return (unsigned int)a1 > HIDWORD(a2[4].Left);
}
