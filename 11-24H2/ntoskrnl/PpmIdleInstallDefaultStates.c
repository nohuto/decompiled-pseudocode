/*
 * XREFs of PpmIdleInstallDefaultStates @ 0x1405CE780
 * Callers:
 *     <none>
 * Callees:
 *     PpmInstallNewIdleStates @ 0x14032C8F0 (PpmInstallNewIdleStates.c)
 */

__int64 __fastcall PpmIdleInstallDefaultStates(__int64 a1, __int64 a2, int a3)
{
  *(_QWORD *)(a2 + 8) = a1 + 34880;
  return PpmInstallNewIdleStates(a1, a2, a3);
}
