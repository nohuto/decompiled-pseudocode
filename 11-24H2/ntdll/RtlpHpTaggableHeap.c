/*
 * XREFs of RtlpHpTaggableHeap @ 0x1800DC750
 * Callers:
 *     RtlpHpTagDestroyHeap @ 0x180047D9C (RtlpHpTagDestroyHeap.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlpHpTaggableHeap(__int64 a1)
{
  return *(_DWORD *)(a1 + 16) == -571548178
      && a1 != qword_1801D21B8[2 * (unsigned int)dword_1801800C8[BYTE1(RtlpHpEnvHandle)]];
}
