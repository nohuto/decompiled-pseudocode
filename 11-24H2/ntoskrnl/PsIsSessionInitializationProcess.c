/*
 * XREFs of PsIsSessionInitializationProcess @ 0x140A04680
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsIsSessionInitializationProcess(__int64 a1)
{
  return (*(_DWORD *)(a1 + 2012) >> 3) & 1;
}
