/*
 * XREFs of ExIsSafeWorkItem @ 0x1405080D0
 * Callers:
 *     EtwTraceThreadWorkItem @ 0x140207BD0 (EtwTraceThreadWorkItem.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExIsSafeWorkItem(__int64 (__fastcall *a1)())
{
  return a1 == sub_140508890;
}
