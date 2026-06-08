/*
 * XREFs of sub_140006A38 @ 0x140006A38
 * Callers:
 *     sub_14002A5D0 @ 0x14002A5D0 (sub_14002A5D0.c)
 * Callees:
 *     <none>
 */

_DWORD *sub_140006A38()
{
  _DWORD *result; // rax

  __writemsr(0x38Du, 0LL);
  __writemsr(0x309u, 0LL);
  __writemsr(0x30Au, 0LL);
  __writemsr(0x30Bu, 0LL);
  __writemsr(0x38Du, 0x333uLL);
  __writemsr(0x38Fu, __readmsr(0x38Fu) | 0x700000000LL);
  result = *(_DWORD **)(*((_QWORD *)&DeviceObject.Queue.ListEntry.Flink->Flink + HIDWORD(KeGetPcr()[1].LockArray))
                      + 368LL);
  *result = 3;
  return result;
}
