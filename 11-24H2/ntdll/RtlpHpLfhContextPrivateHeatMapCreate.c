/*
 * XREFs of RtlpHpLfhContextPrivateHeatMapCreate @ 0x1800A4CF4
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x18004B690 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpEnvTlsSetValue @ 0x18004EB3C (RtlpHpEnvTlsSetValue.c)
 *     RtlpHpLfhContextMetadataFree @ 0x1800A4C98 (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x1800A4DB4 (RtlpHpLfhContextMetadataAllocate.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpLfhContextPrivateHeatMapCreate(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rsi

  if ( (*(_BYTE *)(a1 + 72) & 1) == 0 )
    return a1 + 192;
  v5 = (_QWORD *)RtlpHpLfhContextMetadataAllocate(a1, 1LL);
  v3 = v5;
  v6 = v5;
  if ( !v5 )
    return a1 + 192;
  memset_thunk_772440563353939046(v5, 0, 0x100uLL);
  *((_DWORD *)v3 + 63) = MEMORY[0x7FFE0008] >> 20;
  WORD1(a2) = ((unsigned __int64)v3 - a1) >> 6;
  if ( (int)RtlpHpEnvTlsSetValue(*(_DWORD *)(a1 + 76), a2) < 0 )
  {
    v3 = (_QWORD *)(a1 + 192);
    RtlpHpLfhContextMetadataFree(a1, v6, 1);
  }
  return (__int64)v3;
}
