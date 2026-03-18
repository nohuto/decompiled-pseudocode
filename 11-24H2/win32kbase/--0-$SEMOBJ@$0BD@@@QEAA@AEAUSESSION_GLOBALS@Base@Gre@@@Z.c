/*
 * XREFs of ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002322C
 * Callers:
 *     DrvDestroyMDEV @ 0x140089B74 (DrvDestroyMDEV.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x140176B40 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140176D8C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x14019A38C (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     _PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator() @ 0x14019AF2C (_PDEVOBJ--PDEVOBJ_--_2_--_lambda_1_--operator().c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x14019BA3C (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1401C0DB4 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     ?vReferencePdevFast@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C0E40 (-vReferencePdevFast@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUnreferencePdevFast@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C0ED0 (-vUnreferencePdevFast@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401C6C88 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     DrvDxgkUpgradeLegacyDpiSettings @ 0x1401CABD0 (DrvDxgkUpgradeLegacyDpiSettings.c)
 *     GreDrvConnect @ 0x1401CE420 (GreDrvConnect.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x140023374 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 */

struct _ERESOURCE **__fastcall SEMOBJ<19>::SEMOBJ<19>(struct _ERESOURCE **a1, struct _ERESOURCE **a2)
{
  struct _ERESOURCE *v3; // rcx

  v3 = *a2;
  *a1 = *a2;
  GreAcquireSemaphoreInternal(v3);
  GrepAcquireLockValidate<19>();
  return a1;
}
