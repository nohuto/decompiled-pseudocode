/*
 * XREFs of ExIsSafeWorkItem @ 0x140505950
 * Callers:
 *     EtwTraceThreadWorkItem @ 0x1404D5840 (EtwTraceThreadWorkItem.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExIsSafeWorkItem(__int64 (__fastcall *a1)())
{
  return a1 == sub_140506110;
}
