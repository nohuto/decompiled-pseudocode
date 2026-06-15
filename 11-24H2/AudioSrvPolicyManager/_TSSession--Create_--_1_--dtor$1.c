/*
 * XREFs of _TSSession::Create_::_1_::dtor$1 @ 0x18004B3BA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TSSession::Create_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::unique_ptr<TSSession>::~unique_ptr<TSSession>((_QWORD *)(a2 + 64));
}
