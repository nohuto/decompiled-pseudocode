/*
 * XREFs of EtwpDeleteRealTimeConnectionObject @ 0x140A9C580
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 */

LONG_PTR __fastcall EtwpDeleteRealTimeConnectionObject(HANDLE *a1)
{
  ZwClose(a1[2]);
  ObfDereferenceObject(a1[6]);
  return ObfDereferenceObject(a1[7]);
}
