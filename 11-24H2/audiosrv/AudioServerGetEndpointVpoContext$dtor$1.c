/*
 * XREFs of AudioServerGetEndpointVpoContext$dtor$1 @ 0x180170914
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioServerGetEndpointVpoContext_dtor_1(__int64 a1, __int64 a2)
{
  return std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>((_QWORD *)(a2 + 72));
}
