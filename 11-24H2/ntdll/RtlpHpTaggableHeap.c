/*
 * XREFs of RtlpHpTaggableHeap @ 0x18005E280
 * Callers:
 *     RtlpHpTagDestroyHeap @ 0x18005E6D0 (RtlpHpTagDestroyHeap.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlpHpTaggableHeap(__int64 a1)
{
  return *(_DWORD *)(a1 + 16) == -571548178
      && a1 != qword_1801D11A8[2 * (unsigned int)dword_18017E8C8[BYTE1(RtlpHpEnvHandle)]];
}
