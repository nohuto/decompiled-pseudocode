/*
 * XREFs of ExpSysInfoShouldSkipProcess @ 0x1408EF080
 * Callers:
 *     ExProcessCounterSetCallback @ 0x1408EDBC0 (ExProcessCounterSetCallback.c)
 *     ExpGetProcessInformation @ 0x140ADAE00 (ExpGetProcessInformation.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpSysInfoShouldSkipProcess(__int64 a1)
{
  return (*(_DWORD *)(a1 + 500) & 4) != 0
      && *(_DWORD *)(a1 + 4)
      && !*(_DWORD *)(a1 + 896)
      && *(_QWORD *)(a1 + 48) == a1 + 48;
}
