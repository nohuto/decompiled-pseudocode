/*
 * XREFs of RtlpHpLfhContextPrivateHeatMapCreate @ 0x1403C83BC
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403C89FC (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpLfhContextMetadataAllocate @ 0x1404BA794 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpEnvTlsSetValue @ 0x1404F2D90 (RtlpHpEnvTlsSetValue.c)
 *     RtlpHpLfhContextMetadataFree @ 0x1405FA4F4 (RtlpHpLfhContextMetadataFree.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char *__fastcall RtlpHpLfhContextPrivateHeatMapCreate(char *a1, __int64 a2)
{
  char *v3; // rbx
  char *v5; // rax
  char *v6; // rsi

  if ( (*((_DWORD *)a1 + 18) & 1) == 0 )
    return a1 + 192;
  v5 = (char *)RtlpHpLfhContextMetadataAllocate(a1, 1LL);
  v3 = v5;
  v6 = v5;
  if ( !v5 )
    return a1 + 192;
  memset_0(v5, 0, 0x100uLL);
  *((_DWORD *)v3 + 63) = MEMORY[0xFFFFF78000000008] >> 20;
  WORD1(a2) = (unsigned __int64)(v3 - a1) >> 6;
  if ( (int)RtlpHpEnvTlsSetValue(*((unsigned int *)a1 + 19), a2) < 0 )
  {
    v3 = a1 + 192;
    RtlpHpLfhContextMetadataFree(a1, v6, 1LL);
  }
  return v3;
}
