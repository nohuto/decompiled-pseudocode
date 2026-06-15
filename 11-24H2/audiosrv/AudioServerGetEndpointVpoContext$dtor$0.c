/*
 * XREFs of AudioServerGetEndpointVpoContext$dtor$0 @ 0x180170902
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioServerGetEndpointVpoContext_dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>((_QWORD *)(a2 + 80));
}
