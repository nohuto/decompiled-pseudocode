/*
 * XREFs of NtDCompositionDestroyConnection @ 0x1402231D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x140224304 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 */

__int64 __fastcall NtDCompositionDestroyConnection(struct HDCOMPOSITIONCONNECTION__ *a1)
{
  return DirectComposition::CConnection::DestroyHandle(a1);
}
