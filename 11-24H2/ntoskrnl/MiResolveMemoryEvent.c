/*
 * XREFs of MiResolveMemoryEvent @ 0x140A51130
 * Callers:
 *     <none>
 * Callees:
 *     MiGetThreadPartition @ 0x14042B190 (MiGetThreadPartition.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 MiResolveMemoryEvent()
{
  __int64 ThreadPartition; // rax
  int v1; // edx
  __int64 v2; // r8
  _QWORD *v3; // r9

  ThreadPartition = MiGetThreadPartition((__int64)KeGetCurrentThread());
  *(_OWORD *)v2 = *(_OWORD *)&MiMemoryEventNames[8 * v1];
  *(_QWORD *)(v2 + 8) += 2LL;
  *(_WORD *)v2 -= 2;
  *(_WORD *)(v2 + 2) -= 2;
  return ObpReferenceObjectByHandleWithTag(
           *(_QWORD *)(ThreadPartition + 232),
           983055,
           0LL,
           0,
           0x6F506D4Du,
           v3,
           0LL,
           0LL);
}
