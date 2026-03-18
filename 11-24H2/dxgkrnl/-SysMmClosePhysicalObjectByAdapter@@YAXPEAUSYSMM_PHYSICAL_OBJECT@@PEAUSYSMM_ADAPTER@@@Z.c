/*
 * XREFs of ?SysMmClosePhysicalObjectByAdapter@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x14001FA64
 * Callers:
 *     DxgkFreePagesFromMdlCB @ 0x14001FA30 (DxgkFreePagesFromMdlCB.c)
 *     DxgkUnmapMdlFromIoMmuCB @ 0x140073FF0 (DxgkUnmapMdlFromIoMmuCB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     SmmClosePhysicalObject @ 0x14001FDDC (SmmClosePhysicalObject.c)
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
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pAdapterObject->Adapter == pAdapter",
      1367LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  SmmClosePhysicalObject(v2);
}
