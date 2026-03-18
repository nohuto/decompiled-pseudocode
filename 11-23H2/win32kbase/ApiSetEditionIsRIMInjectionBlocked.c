/*
 * XREFs of ApiSetEditionIsRIMInjectionBlocked @ 0x1C00C9A0C
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C0003D50 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectDeviceInput @ 0x1C0147210 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C0147B60 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectMouseInput @ 0x1C0148320 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C0148CC0 (NtUserInjectPointerInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionIsRIMInjectionBlocked(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_1C02952E0 && (int)qword_1C02952E0() >= 0 && qword_1C02952E8 )
    return (unsigned int)qword_1C02952E8(a1);
  return v1;
}
