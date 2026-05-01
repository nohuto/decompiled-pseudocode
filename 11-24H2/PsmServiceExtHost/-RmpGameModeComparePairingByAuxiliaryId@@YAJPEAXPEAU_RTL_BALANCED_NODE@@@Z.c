/*
 * XREFs of ?RmpGameModeComparePairingByAuxiliaryId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18008C8E8
 * Callers:
 *     ?RmpGameModeInsertProcessPairing@@YAXPEAU_RM_GAME_MODE_PROCESS_PAIRING@@@Z @ 0x18008CBD8 (-RmpGameModeInsertProcessPairing@@YAXPEAU_RM_GAME_MODE_PROCESS_PAIRING@@@Z.c)
 *     ?RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1@Z @ 0x18008D19C (-RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpGameModeComparePairingByAuxiliaryId(void *a1, struct _RTL_BALANCED_NODE *a2)
{
  unsigned int Right_high; // edx

  Right_high = HIDWORD(a2[2].Children[1][4].Right);
  if ( (unsigned int)a1 >= Right_high )
    return (unsigned int)a1 > Right_high;
  else
    return 0xFFFFFFFFLL;
}
