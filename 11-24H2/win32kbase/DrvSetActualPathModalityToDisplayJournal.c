/*
 * XREFs of DrvSetActualPathModalityToDisplayJournal @ 0x1401CB3F0
 * Callers:
 *     ?DispBrokerChangeDisplaySettings@@YAJU_LUID@@IPEAU_devicemodeW@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_NAEAW4_DXGK_DIAG_CDS_STAGE@@@Z @ 0x1400C9744 (-DispBrokerChangeDisplaySettings@@YAJU_LUID@@IPEAU_devicemodeW@@IPEAU_DXGK_DISPLAY_SCENARIO_CONT.c)
 *     ?DispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1401A8CE4 (-DispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIQEAU_DXGK_DISPLAY_SCENA.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14008D940 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140178A48 (-SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 */

void DrvSetActualPathModalityToDisplayJournal()
{
  char *v0; // rbx
  PVOID Buffer; // [rsp+30h] [rbp+8h] BYREF

  Buffer = 0LL;
  if ( (int)SetDisplayConfigGetActualPathsModality((struct D3DKMT_GETPATHSMODALITY **)&Buffer) >= 0 )
  {
    v0 = (char *)Buffer;
    DisplayScenarioJournalSetActualPathModality(
      296 * (unsigned int)*((unsigned __int16 *)Buffer + 10),
      *((unsigned __int16 *)Buffer + 10),
      (char *)Buffer + 56);
    FreePathsModality(v0);
  }
}
