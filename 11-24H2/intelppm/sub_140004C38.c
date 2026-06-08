/*
 * XREFs of sub_140004C38 @ 0x140004C38
 * Callers:
 *     sub_14002C1B4 @ 0x14002C1B4 (sub_14002C1B4.c)
 *     sub_1400410AC @ 0x1400410AC (sub_1400410AC.c)
 *     sub_140042D4C @ 0x140042D4C (sub_140042D4C.c)
 *     sub_140043F48 @ 0x140043F48 (sub_140043F48.c)
 *     sub_140044260 @ 0x140044260 (sub_140044260.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_140004C38(__int64 a1, struct _PROCESSOR_NUMBER *a2)
{
  return KeGetProcessorNumberFromIndex(*(_DWORD *)(a1 + 56), a2);
}
