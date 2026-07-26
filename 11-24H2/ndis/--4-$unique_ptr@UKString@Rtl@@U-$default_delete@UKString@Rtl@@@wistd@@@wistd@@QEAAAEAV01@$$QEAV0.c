/*
 * XREFs of ??4?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x140071780
 * Callers:
 *     ndisEtwCaptureMiniportDriverData @ 0x1400967F8 (ndisEtwCaptureMiniportDriverData.c)
 *     GetModuleParameters @ 0x14014AE30 (GetModuleParameters.c)
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
