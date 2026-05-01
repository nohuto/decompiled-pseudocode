/*
 * XREFs of ?RmpGameModeDestroyProcessPairing@@YAXPEAU_RM_GAME_MODE_PROCESS_PAIRING@@@Z @ 0x18008C4C8
 * Callers:
 *     ?RmpGameModeClearPairingTree@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z @ 0x18008C364 (-RmpGameModeClearPairingTree@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800608D4 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

void __fastcall RmpGameModeDestroyProcessPairing(struct _RM_GAME_MODE_PROCESS_PAIRING *a1)
{
  __int64 v2; // rdi

  if ( *((_QWORD *)a1 + 2) != -1LL )
  {
    v2 = *((_QWORD *)a1 + 7);
    RtlRbRemoveNode(*((_QWORD *)a1 + 6) + 72LL, a1);
    *((_QWORD *)a1 + 2) = -1LL;
    RtlRbRemoveNode(v2 + 72, (char *)a1 + 24);
    *((_QWORD *)a1 + 5) = -1LL;
  }
  RmpGameModeDereferenceRecipientProcess(*((struct _RM_GAME_MODE_RECIPIENT_PROCESS **)a1 + 6));
  RmpGameModeDereferenceRecipientProcess(*((struct _RM_GAME_MODE_RECIPIENT_PROCESS **)a1 + 7));
  HampFreeHeap(a1);
}
