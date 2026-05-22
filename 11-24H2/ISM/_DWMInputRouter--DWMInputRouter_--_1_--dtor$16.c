/*
 * XREFs of _DWMInputRouter::DWMInputRouter_::_1_::dtor$16 @ 0x1801D261B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::DWMInputRouter_::_1_::dtor_16(__int64 a1, __int64 a2)
{
  return KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>::~KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>(
           *(_QWORD *)(a2 + 112) + 344LL,
           a2);
}
