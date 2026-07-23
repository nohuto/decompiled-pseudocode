/*
 * XREFs of RtlDestroyEnvironment @ 0x1800AB380
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 */

NTSTATUS __cdecl RtlDestroyEnvironment(PVOID Environment)
{
  RtlpSysVolFree(Environment);
  return 0;
}
