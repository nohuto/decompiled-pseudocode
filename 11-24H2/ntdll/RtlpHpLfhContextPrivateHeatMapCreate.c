/*
 * XREFs of RtlpHpLfhContextPrivateHeatMapCreate @ 0x1800D6668
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x180061270 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpEnvTlsSetValue @ 0x18006471C (RtlpHpEnvTlsSetValue.c)
 *     RtlpHpLfhContextMetadataFree @ 0x1800D660C (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x1800D6728 (RtlpHpLfhContextMetadataAllocate.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

unsigned __int64 *__fastcall RtlpHpLfhContextPrivateHeatMapCreate(__int64 a1, __int64 a2)
{
  unsigned __int64 *v3; // rbx
  unsigned __int64 *v5; // rax
  unsigned __int64 *v6; // rsi

  if ( (*(_BYTE *)(a1 + 72) & 1) == 0 )
    return (unsigned __int64 *)(a1 + 192);
  v5 = (unsigned __int64 *)RtlpHpLfhContextMetadataAllocate(a1, 1LL);
  v3 = v5;
  v6 = v5;
  if ( !v5 )
    return (unsigned __int64 *)(a1 + 192);
  memset_thunk_772440563353939046(v5, 0, 0x100uLL);
  *((_DWORD *)v3 + 63) = MEMORY[0x7FFE0008] >> 20;
  WORD1(a2) = ((unsigned __int64)v3 - a1) >> 6;
  if ( (int)RtlpHpEnvTlsSetValue(*(_DWORD *)(a1 + 76), a2) < 0 )
  {
    v3 = (unsigned __int64 *)(a1 + 192);
    RtlpHpLfhContextMetadataFree((_RTL_SRWLOCK *)a1, v6, 1);
  }
  return v3;
}
