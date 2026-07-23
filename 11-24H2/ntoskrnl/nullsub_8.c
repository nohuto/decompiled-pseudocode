/*
 * XREFs of nullsub_8 @ 0x140031870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 nullsub_8()
{
  _BYTE retaddr[16]; // [rsp+0h] [rbp+0h]

  return MK_FP(*(_WORD *)retaddr, *(_QWORD *)retaddr)();
}
