/*
 * XREFs of PsIsGuiThread @ 0x140764B8C
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsGuiThread(__int64 a1)
{
  return (*(_DWORD *)(a1 + 120) & 0x80) != 0;
}
