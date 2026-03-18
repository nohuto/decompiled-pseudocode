/*
 * XREFs of PsIsSystemProcess @ 0x140417C00
 * Callers:
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsSystemProcess(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1532) & 0x1000) != 0;
}
