/*
 * XREFs of RtlDestroyEnvironment @ 0x180004E70
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 */

NTSTATUS __cdecl RtlDestroyEnvironment(PVOID Environment)
{
  RtlpSysVolFree(Environment);
  return 0;
}
