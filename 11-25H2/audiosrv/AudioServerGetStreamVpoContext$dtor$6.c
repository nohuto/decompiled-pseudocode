/*
 * XREFs of AudioServerGetStreamVpoContext$dtor$6 @ 0x180167427
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioServerGetStreamVpoContext_dtor_6(__int64 a1, __int64 a2)
{
  return std::unique_ptr<CVpoContextProxy>::~unique_ptr<CVpoContextProxy>((_QWORD *)(a2 + 72));
}
