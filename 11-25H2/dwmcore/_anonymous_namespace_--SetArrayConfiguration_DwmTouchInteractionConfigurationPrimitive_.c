/*
 * XREFs of _anonymous_namespace_::SetArrayConfiguration_DwmTouchInteractionConfigurationPrimitive_ @ 0x180133E4C
 * Callers:
 *     ?SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x18013555C (-SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateTy.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@UDwmTouchInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmTouchInteractionConfigurationPrimitive@@I@Z @ 0x180133438 (-AddMultipleAndSet@-$DynArray@UDwmTouchInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmTou.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1801348B0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

__int64 __fastcall anonymous_namespace_::SetArrayConfiguration_DwmTouchInteractionConfigurationPrimitive_(
        const void *a1,
        unsigned int a2,
        __int64 a3)
{
  int v6; // edi

  if ( a1 || !a2 )
  {
    *(_DWORD *)(a3 + 24) = 0;
    DynArrayImpl<0>::ShrinkToSize(a3, 12LL);
    v6 = DynArray<DwmTouchInteractionConfigurationPrimitive,0>::AddMultipleAndSet(a3, a1, a2);
    if ( v6 >= 0 )
      return (unsigned int)v6;
  }
  else
  {
    v6 = -2147024809;
  }
  *(_DWORD *)(a3 + 24) = 0;
  DynArrayImpl<0>::ShrinkToSize(a3, 12LL);
  return (unsigned int)v6;
}
