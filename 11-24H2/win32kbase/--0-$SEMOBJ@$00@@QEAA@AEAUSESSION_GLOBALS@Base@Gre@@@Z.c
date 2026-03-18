/*
 * XREFs of ??0?$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14014273C
 * Callers:
 *     DrvEscapeRemoteDrivers @ 0x1401539E0 (DrvEscapeRemoteDrivers.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140176D8C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x140178DA4 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     GreDrvConnect @ 0x1401CE420 (GreDrvConnect.c)
 *     HDXDrvEscape @ 0x1401CE760 (HDXDrvEscape.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140011900 (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 *__fastcall SEMOBJ<1>::SEMOBJ<1>(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rdx

  v3 = *a2 + 624LL;
  *a1 = v3;
  GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v3);
  return a1;
}
