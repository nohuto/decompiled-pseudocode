/*
 * XREFs of NtUpdateWnfStateData @ 0x1408AC540
 * Callers:
 *     SepSecureBootCheckForUpdates @ 0x140C3ABBC (SepSecureBootCheckForUpdates.c)
 * Callees:
 *     ExpNtUpdateWnfStateData @ 0x1408AC580 (ExpNtUpdateWnfStateData.c)
 */

__int64 __fastcall NtUpdateWnfStateData(void *a1, __int64 a2, __int64 a3, __int64 a4, void *a5, int a6, int a7)
{
  return ExpNtUpdateWnfStateData(a1, a5, a6, a7, 1);
}
