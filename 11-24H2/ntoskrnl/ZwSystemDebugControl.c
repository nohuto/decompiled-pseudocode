/*
 * XREFs of ZwSystemDebugControl @ 0x1406A9E10
 * Callers:
 *     PspLocateSystemDll @ 0x140771E70 (PspLocateSystemDll.c)
 *     NtCreateUserProcess @ 0x140ACBA80 (NtCreateUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSystemDebugControl(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
