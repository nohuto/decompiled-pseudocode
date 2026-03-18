/*
 * XREFs of DxgkFreeUnicodeString @ 0x140231224
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x14007E760 (DpiMiracastInterfaceChange.c)
 *     DpiMiracastTargetDeviceChange @ 0x14007FA20 (DpiMiracastTargetDeviceChange.c)
 *     DpiFreeAdapterInfo @ 0x14022F3F8 (DpiFreeAdapterInfo.c)
 *     DpiGetAdapterInfo @ 0x14022F500 (DpiGetAdapterInfo.c)
 *     ?CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1402313EC (-CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1402315F0 (-CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     DpiFdoResetFdo @ 0x14023E5C8 (DpiFdoResetFdo.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkFreeUnicodeString(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_OWORD *)a1 = 0LL;
  }
}
