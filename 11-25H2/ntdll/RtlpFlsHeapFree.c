/*
 * XREFs of RtlpFlsHeapFree @ 0x18000AB1C
 * Callers:
 *     RtlpFlsDataCleanup @ 0x18000A8B0 (RtlpFlsDataCleanup.c)
 *     ?Cleanup@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAXPEAU1@@Z @ 0x18000AA90 (-Cleanup@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAXPEAU1@@Z.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x18000AB68 (RtlpHpMetadataFree.c)
 */

LOGICAL __fastcall RtlpFlsHeapFree(void *a1)
{
  _DWORD *ProcessHeap; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( ProcessHeap[4] != -571548178 )
    return RtlFreeHeap(ProcessHeap, 0, a1);
  v4 = *(_OWORD *)ProcessHeap;
  return RtlpHpMetadataFree(a1, &v4);
}
