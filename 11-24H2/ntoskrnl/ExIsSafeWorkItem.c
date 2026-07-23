/*
 * XREFs of ExIsSafeWorkItem @ 0x140505990
 * Callers:
 *     EtwTraceThreadWorkItem @ 0x14032F1B0 (EtwTraceThreadWorkItem.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExIsSafeWorkItem(__int64 (__fastcall *a1)())
{
  return a1 == sub_140506150;
}
