/*
 * XREFs of _scope_exit__lambda_a16b11757b8cb69a258309176305b33d____::_2_::scope_exit::_scope_exit @ 0x14000F2C4
 * Callers:
 *     ?TraverseBackward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x140013BF4 (-TraverseBackward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU.c)
 *     ?TraverseToCaptureBridgePin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x140013FF0 (-TraverseToCaptureBridgePin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECT.c)
 *     ?TraverseToTerminalForDataFlowInPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x140014240 (-TraverseToTerminalForDataFlowInPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY.c)
 *     ?TraverseToTerminalForDataFlowOutPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x140014490 (-TraverseToTerminalForDataFlowOutPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOG.c)
 * Callees:
 *     <none>
 */

void __fastcall scope_exit__lambda_a16b11757b8cb69a258309176305b33d____::_2_::scope_exit::_scope_exit(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rcx
  __int64 v4; // rdx

  if ( *(_BYTE *)(a1 + 8) )
  {
    while ( 1 )
    {
      v2 = *(_QWORD **)a1;
      v3 = **(_QWORD ***)a1;
      if ( v3 == *(_QWORD **)a1 )
        break;
      if ( (_QWORD *)v3[1] != v2 || (v4 = *v3, *(_QWORD **)(*v3 + 8LL) != v3) )
        __fastfail(3u);
      *v2 = v4;
      *(_QWORD *)(v4 + 8) = v2;
      ExFreePool(v3);
    }
  }
}
