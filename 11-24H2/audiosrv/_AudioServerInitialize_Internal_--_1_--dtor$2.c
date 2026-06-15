/*
 * XREFs of _AudioServerInitialize_Internal_::_1_::dtor$2 @ 0x18016BE96
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioServerInitialize_Internal_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>((_QWORD *)(a2 + 112));
}
