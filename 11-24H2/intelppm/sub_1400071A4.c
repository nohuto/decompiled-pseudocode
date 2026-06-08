/*
 * XREFs of sub_1400071A4 @ 0x1400071A4
 * Callers:
 *     sub_140007210 @ 0x140007210 (sub_140007210.c)
 *     sub_14002A950 @ 0x14002A950 (sub_14002A950.c)
 * Callees:
 *     <none>
 */

_DWORD *sub_1400071A4()
{
  _DWORD *result; // rax

  __writemsr(0x38Du, 0LL);
  __writemsr(0x309u, 0LL);
  __writemsr(0x30Au, 0LL);
  __writemsr(0x30Bu, 0LL);
  __writemsr(0x38Fu, __readmsr(0x38Fu) & 0xFFFFFFF8FFFFFFFFuLL);
  result = *(_DWORD **)(*((_QWORD *)&DeviceObject.Queue.ListEntry.Flink->Flink + HIDWORD(KeGetPcr()[1].LockArray))
                      + 368LL);
  *result = 0;
  return result;
}
