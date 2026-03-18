/*
 * XREFs of ApiSetEditionIsGetKeyStateBlocked @ 0x1C004FE20
 * Callers:
 *     NtUserGetKeyState @ 0x1C004E960 (NtUserGetKeyState.c)
 *     AllocQueue @ 0x1C004FB20 (AllocQueue.c)
 *     NtUserGetKeyboardState @ 0x1C00708C0 (NtUserGetKeyboardState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetEditionIsGetKeyStateBlocked()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( qword_1C02952D0 && (int)qword_1C02952D0() >= 0 && qword_1C02952D8 )
    return (unsigned int)qword_1C02952D8();
  return v0;
}
