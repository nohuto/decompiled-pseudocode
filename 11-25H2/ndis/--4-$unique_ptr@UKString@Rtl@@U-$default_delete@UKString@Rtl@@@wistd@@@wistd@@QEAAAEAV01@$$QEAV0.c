/*
 * XREFs of ??4?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x14008DE80
 * Callers:
 *     ndisEtwCaptureMiniportDriverData @ 0x1400A0C6C (ndisEtwCaptureMiniportDriverData.c)
 *     GetModuleParameters @ 0x140155B00 (GetModuleParameters.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x140181730 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

void **__fastcall wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::operator=(void **a1, void **a2)
{
  void *v2; // rax
  void *v4; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    ExFreePoolWithTag(v4, 0x7274534Bu);
  return a1;
}
