/*
 * XREFs of _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$3 @ 0x1801CFA5E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputDeliveryServer::InputDeliveryServer_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>::~KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>(
           *(_QWORD *)(a2 + 112) + 104LL,
           a2);
}
