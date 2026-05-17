/*
 * XREFs of RtlpFlsHeapFree @ 0x18004EEDC
 * Callers:
 *     RtlpFlsDataCleanup @ 0x18004EC20 (RtlpFlsDataCleanup.c)
 *     ?Cleanup@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAXPEAU1@@Z @ 0x18004EE50 (-Cleanup@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAXPEAU1@@Z.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x18004EF28 (RtlpHpMetadataFree.c)
 */

__int64 __fastcall RtlpFlsHeapFree(unsigned __int64 a1)
{
  _DWORD *ProcessHeap; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( ProcessHeap[4] != -571548178 )
    return RtlFreeHeap((__int64)ProcessHeap, 0, a1);
  v4 = *(_OWORD *)ProcessHeap;
  return RtlpHpMetadataFree(a1, &v4);
}
