/*
 * XREFs of _AudioServerInitialize_Internal_::_1_::dtor$1 @ 0x18016BE84
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioServerInitialize_Internal_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>((_QWORD *)(a2 + 120));
}
