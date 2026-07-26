/*
 * XREFs of ??$ReadAcquire@EX@mem@@YAEPEDE@Z @ 0x14008F2F8
 * Callers:
 *     ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z @ 0x140168D40 (-ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 mem::ReadAcquire<unsigned char,void>()
{
  return ndisEnableNicAutoPowerSaverInSleepStudy;
}
