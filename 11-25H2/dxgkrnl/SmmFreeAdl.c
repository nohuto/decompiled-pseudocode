/*
 * XREFs of SmmFreeAdl @ 0x140049110
 * Callers:
 *     ?SysMmFreeAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAU_DXGK_ADL@@@Z @ 0x140049050 (-SysMmFreeAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAU_DXGK_ADL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SmmFreeAdl(void **P)
{
  void *v2; // rcx

  v2 = *P;
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
}
