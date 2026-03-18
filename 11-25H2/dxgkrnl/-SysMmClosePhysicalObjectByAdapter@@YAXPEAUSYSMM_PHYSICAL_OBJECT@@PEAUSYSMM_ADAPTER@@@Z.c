/*
 * XREFs of ?SysMmClosePhysicalObjectByAdapter@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x1400105D4
 * Callers:
 *     DxgkFreePagesFromMdlCB @ 0x1400105A0 (DxgkFreePagesFromMdlCB.c)
 *     DxgkUnmapMdlFromIoMmuCB @ 0x140073550 (DxgkUnmapMdlFromIoMmuCB.c)
 * Callees:
 *     SmmClosePhysicalObject @ 0x14001094C (SmmClosePhysicalObject.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall SysMmClosePhysicalObjectByAdapter(struct SYSMM_ADAPTER **a1, struct SYSMM_ADAPTER *a2)
{
  struct SYSMM_ADAPTER_OBJECT *v2; // rbx

  v2 = (struct SYSMM_ADAPTER_OBJECT *)(a1 + 8);
  if ( a1[10] != a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1367;
    DxgkLogInternalTriageEvent(
      0,
      262146,
      -1,
      (unsigned int)L"pAdapterObject->Adapter == pAdapter",
      1367LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  SmmClosePhysicalObject(v2);
}
