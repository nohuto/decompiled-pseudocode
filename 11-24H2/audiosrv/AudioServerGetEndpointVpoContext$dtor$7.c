/*
 * XREFs of AudioServerGetEndpointVpoContext$dtor$7 @ 0x180170926
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioServerGetEndpointVpoContext_dtor_7(__int64 a1, __int64 a2)
{
  return std::unique_ptr<CVpoContextProxy>::~unique_ptr<CVpoContextProxy>((_QWORD *)(a2 + 88));
}
