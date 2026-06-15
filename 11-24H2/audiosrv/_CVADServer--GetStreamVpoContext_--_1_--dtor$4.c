/*
 * XREFs of _CVADServer::GetStreamVpoContext_::_1_::dtor$4 @ 0x180170815
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVADServer::GetStreamVpoContext_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return std::unique_ptr<CVpoContextProxy>::~unique_ptr<CVpoContextProxy>((_QWORD *)(a2 + 40));
}
