/*
 * XREFs of ?Cleanup@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAXPEAU1@@Z @ 0x180064A30
 * Callers:
 *     RtlpFlsDataCleanup @ 0x180064800 (RtlpFlsDataCleanup.c)
 * Callees:
 *     RtlpFlsHeapFree @ 0x180064ABC (RtlpFlsHeapFree.c)
 */

__int64 __fastcall RTL_BINARY_ARRAY<RTLP_FLS_SLOT,8,4>::Cleanup(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  v2 = *a1;
  if ( v2 )
    result = RtlpFlsHeapFree(v2);
  v4 = a1[1];
  if ( v4 )
    result = RtlpFlsHeapFree(v4);
  v5 = a1[2];
  if ( v5 )
    result = RtlpFlsHeapFree(v5);
  v6 = a1[3];
  if ( v6 )
    result = RtlpFlsHeapFree(v6);
  v7 = a1[4];
  if ( v7 )
    result = RtlpFlsHeapFree(v7);
  v8 = a1[5];
  if ( v8 )
    result = RtlpFlsHeapFree(v8);
  v9 = a1[6];
  if ( v9 )
    result = RtlpFlsHeapFree(v9);
  v10 = a1[7];
  if ( v10 )
    return RtlpFlsHeapFree(v10);
  return result;
}
