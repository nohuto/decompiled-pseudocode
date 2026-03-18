/*
 * XREFs of DxgkFreeAdlCB @ 0x140048FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SysMmUnlockObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x140049020 (-SysMmUnlockObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 *     ?SysMmFreeAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAU_DXGK_ADL@@@Z @ 0x140049050 (-SysMmFreeAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAU_DXGK_ADL@@@Z.c)
 */

void __fastcall DxgkFreeAdlCB(struct SYSMM_ADAPTER_OBJECT **a1)
{
  struct SYSMM_ADAPTER_OBJECT *v1; // rbx

  v1 = *a1;
  SysMmFreeAdl(*a1, a1[1]);
  SysMmUnlockObject(v1);
}
