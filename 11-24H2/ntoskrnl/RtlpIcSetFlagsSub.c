/*
 * XREFs of RtlpIcSetFlagsSub @ 0x140BBA784
 * Callers:
 *     RtlpIcEmulateGroup0Instruction @ 0x140BB94F8 (RtlpIcEmulateGroup0Instruction.c)
 *     RtlpIcEmulateGroup1Instruction @ 0x140BB9818 (RtlpIcEmulateGroup1Instruction.c)
 * Callees:
 *     RtlpIcSetFlagsZeroSignParity @ 0x140BBA888 (RtlpIcSetFlagsZeroSignParity.c)
 */

__int64 __fastcall RtlpIcSetFlagsSub(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v5; // r10

  v5 = *(_BYTE *)(a1 + 1) - 1;
  *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) &= 0xFFFFF7EF;
  *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) |= 16
                                           * ((((((a5 ^ a4) & ~(a5 ^ a3)) >> v5) & 1) << 7) | ((unsigned __int8)((a5 >> 3) & (a4 >> 3) & (a3 >> 3)) | (unsigned __int8)((~a4 >> 3) & ((a5 >> 3) | (a3 >> 3)))) & 1);
  *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) &= ~1u;
  *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) |= ((a5 & a4 & a3 | ~a4 & (a5 | a3)) >> v5) & 1;
  return RtlpIcSetFlagsZeroSignParity(a1, a2, a3);
}
