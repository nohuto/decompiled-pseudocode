/*
 * XREFs of ??0?$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C1930
 * Callers:
 *     HmgAllocFast @ 0x1401C21B0 (HmgAllocFast.c)
 *     HmgFreeFast @ 0x1401C2310 (HmgFreeFast.c)
 *     HmgDecProcessHandleCountFastOpt @ 0x1401C4E28 (HmgDecProcessHandleCountFastOpt.c)
 *     HmgFreeDcAttrFastOpt @ 0x1401C4EA0 (HmgFreeDcAttrFastOpt.c)
 *     HmgIncProcessHandleCountExFast @ 0x1401C4F84 (HmgIncProcessHandleCountExFast.c)
 *     ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C5800 (-GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401C852C (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140020030 (--$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<20>::SEMOBJ<20>(HSEMAPHORE *a1, _QWORD *a2)
{
  HSEMAPHORE v3; // rdx

  v3 = (HSEMAPHORE)(*a2 + 1512LL);
  *a1 = v3;
  GreAcquireSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>((__int64)a1, v3);
  return a1;
}
