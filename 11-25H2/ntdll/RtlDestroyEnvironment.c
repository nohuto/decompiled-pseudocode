/*
 * XREFs of RtlDestroyEnvironment @ 0x1800AB380
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 */

__int64 __fastcall RtlDestroyEnvironment(__int64 a1)
{
  RtlpSysVolFree(a1);
  return 0LL;
}
