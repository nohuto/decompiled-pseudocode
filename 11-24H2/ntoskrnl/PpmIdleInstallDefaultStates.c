/*
 * XREFs of PpmIdleInstallDefaultStates @ 0x1405CBEA0
 * Callers:
 *     <none>
 * Callees:
 *     PpmInstallNewIdleStates @ 0x140436C00 (PpmInstallNewIdleStates.c)
 */

__int64 __fastcall PpmIdleInstallDefaultStates(__int64 a1, __int64 a2, int a3)
{
  *(_QWORD *)(a2 + 8) = a1 + 34880;
  return PpmInstallNewIdleStates(a1, a2, a3);
}
