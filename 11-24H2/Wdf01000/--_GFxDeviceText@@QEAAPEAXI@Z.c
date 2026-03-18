/*
 * XREFs of ??_GFxDeviceText@@QEAAPEAXI@Z @ 0x140083274
 * Callers:
 *     ?_CleanupList@FxDeviceText@@SAHPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140040B7C (-_CleanupList@FxDeviceText@@SAHPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     imp_WdfPdoInitAddDeviceText @ 0x140075190 (imp_WdfPdoInitAddDeviceText.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14000EC70 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxDeviceText@@QEAA@XZ @ 0x14008329C (--1FxDeviceText@@QEAA@XZ.c)
 */

FxDeviceText *__fastcall FxDeviceText::`scalar deleting destructor'(FxDeviceText *this)
{
  FxDeviceText::~FxDeviceText(this);
  FxPoolFree(this);
  return this;
}
