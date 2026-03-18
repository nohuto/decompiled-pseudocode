/*
 * XREFs of ApiSetEditionLegacyTouchPadMouseAllowTap @ 0x1C0206D18
 * Callers:
 *     ?HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z @ 0x1C00E62A0 (-HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetEditionLegacyTouchPadMouseAllowTap()
{
  unsigned int v0; // ebx

  v0 = 1;
  if ( qword_1C0296BA0 && (int)qword_1C0296BA0() >= 0 )
  {
    if ( qword_1C0296BA8 )
      return (unsigned int)qword_1C0296BA8();
    else
      return 0;
  }
  return v0;
}
