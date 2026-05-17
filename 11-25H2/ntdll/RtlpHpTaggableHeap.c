/*
 * XREFs of RtlpHpTaggableHeap @ 0x1800DBCC0
 * Callers:
 *     RtlpHpTagDestroyHeap @ 0x18009BA7C (RtlpHpTagDestroyHeap.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlpHpTaggableHeap(__int64 a1)
{
  return *(_DWORD *)(a1 + 16) == -571548178
      && a1 != qword_1801D4208[2 * (unsigned int)dword_1801816F8[BYTE1(RtlpHpEnvHandle)]];
}
