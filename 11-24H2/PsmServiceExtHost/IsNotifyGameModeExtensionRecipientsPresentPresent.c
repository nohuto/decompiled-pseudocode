/*
 * XREFs of IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180072CD4
 * Callers:
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001AC70 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpGameModeUnapplySystemExtensionPolicy@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18003C680 (-RmpGameModeUnapplySystemExtensionPolicy@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPI.c)
 *     ?RmpGameModeNotifyExtensionRecipientsPresent@@YAXPEAU_RM_GAME_MODE_CONTEXT@@E@Z @ 0x1800652CC (-RmpGameModeNotifyExtensionRecipientsPresent@@YAXPEAU_RM_GAME_MODE_CONTEXT@@E@Z.c)
 *     ?RmpSystemNotifyGameModeExtensionStateChange@@YAXPEAXE@Z @ 0x18006BCE8 (-RmpSystemNotifyGameModeExtensionStateChange@@YAXPEAXE@Z.c)
 *     PsmInitializeServiceExtension4 @ 0x180077910 (PsmInitializeServiceExtension4.c)
 *     ?RmpCpuSetManagerApplyWorkloadAllowedMasks@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18008A4A4 (-RmpCpuSetManagerApplyWorkloadAllowedMasks@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18008BE20 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpSystemQueryPackagePartitions@@YAJPEBGKPEAPEAX1PEAK@Z @ 0x180091204 (-RmpSystemQueryPackagePartitions@@YAJPEBGKPEAPEAX1PEAK@Z.c)
 *     ?RmpSystemSetSystemAllowedCpuSets@@YAJPEA_K@Z @ 0x18009158C (-RmpSystemSetSystemAllowedCpuSets@@YAJPEA_K@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180073026 (ApiSetQueryApiSetPresence_0.c)
 */

char IsNotifyGameModeExtensionRecipientsPresentPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800E90D8 == 1 )
    return 1;
  if ( dword_1800E90D8 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"68", &v1) < 0 )
    return 0;
  result = v1;
  dword_1800E90D8 = 2 - (v1 != 0);
  return result;
}
