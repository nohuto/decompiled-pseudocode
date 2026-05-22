/*
 * XREFs of _MPCInputRouter::GetMPCTarget_::_1_::dtor$1 @ 0x1801D6A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCInputRouter::GetMPCTarget_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 40));
}
