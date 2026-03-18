/*
 * XREFs of ExpSysInfoShouldSkipProcess @ 0x1408DFC80
 * Callers:
 *     ExProcessCounterSetCallback @ 0x1408DE7B0 (ExProcessCounterSetCallback.c)
 *     ExpGetProcessInformation @ 0x140AD0210 (ExpGetProcessInformation.c)
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
