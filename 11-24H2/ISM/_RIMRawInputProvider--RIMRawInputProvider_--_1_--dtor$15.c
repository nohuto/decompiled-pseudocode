/*
 * XREFs of _RIMRawInputProvider::RIMRawInputProvider_::_1_::dtor$15 @ 0x1801D57BD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMRawInputProvider::RIMRawInputProvider_::_1_::dtor_15(__int64 a1, __int64 a2)
{
  return KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>::~KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>(
           *(_QWORD *)(a2 + 80) + 136LL,
           a2);
}
