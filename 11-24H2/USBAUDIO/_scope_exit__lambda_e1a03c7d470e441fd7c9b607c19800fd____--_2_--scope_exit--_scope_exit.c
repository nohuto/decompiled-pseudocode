/*
 * XREFs of _scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____::_2_::scope_exit::_scope_exit @ 0x14000B858
 * Callers:
 *     ?TraverseForward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x14000ABA0 (-TraverseForward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_.c)
 *     ?TraverseBackward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x1400131C4 (-TraverseBackward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU.c)
 *     ?TraverseToCaptureBridgePin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x1400135C0 (-TraverseToCaptureBridgePin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECT.c)
 *     ?TraverseToTerminalForDataFlowInPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x140013810 (-TraverseToTerminalForDataFlowInPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY.c)
 *     ?TraverseToTerminalForDataFlowOutPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x140013A60 (-TraverseToTerminalForDataFlowOutPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOG.c)
 * Callees:
 *     <none>
 */

void __fastcall scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____::_2_::scope_exit::_scope_exit(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
    ExFreePool(**(PVOID **)a1);
}
