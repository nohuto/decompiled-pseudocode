/*
 * XREFs of PsIsSystemProcess @ 0x1404079B0
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsSystemProcess(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1532) & 0x1000) != 0;
}
