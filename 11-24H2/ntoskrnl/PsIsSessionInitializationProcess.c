/*
 * XREFs of PsIsSessionInitializationProcess @ 0x140A08150
 * Callers:
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsIsSessionInitializationProcess(__int64 a1)
{
  return (*(_DWORD *)(a1 + 2012) >> 3) & 1;
}
