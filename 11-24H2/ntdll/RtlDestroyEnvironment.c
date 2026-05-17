/*
 * XREFs of RtlDestroyEnvironment @ 0x180082FF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 */

__int64 __fastcall RtlDestroyEnvironment(__int64 a1)
{
  RtlpSysVolFree(a1);
  return 0LL;
}
