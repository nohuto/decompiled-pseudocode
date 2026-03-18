/*
 * XREFs of ?Release@FxMemoryObject@@WGI@EAAKPEAXJPEBD@Z @ 0x140095360
 * Callers:
 *     ?ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x14001CB58 (-ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxMemoryObject::Release(__int64 a1, void *a2, int a3, const char *a4)
{
  return FxMemoryObject::Release((FxMemoryObject *)(a1 - 104), a2, a3, a4);
}
