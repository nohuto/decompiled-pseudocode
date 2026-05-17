/*
 * XREFs of RtlpNlsGetLcidIndex @ 0x18005BBE0
 * Callers:
 *     RtlLCIDToCultureName @ 0x18005B640 (RtlLCIDToCultureName.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x1800A86FC (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlpGetProcessCodepagesForLocale @ 0x18012062C (RtlpGetProcessCodepagesForLocale.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpNlsGetLcidIndex(int a1)
{
  int v1; // r8d
  int i; // r9d
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // r10d
  int v7; // eax

  v1 = 0;
  for ( i = *(unsigned __int16 *)(pTblPtrs + 4) - 1; v1 <= i; i = v7 )
  {
    v4 = *(_QWORD *)(pTblPtrs + 16);
    result = (unsigned int)((i + v1) / 2);
    v6 = a1 - *(_DWORD *)(v4 + 8LL * (int)result);
    if ( a1 == *(_DWORD *)(v4 + 8LL * (int)result) )
      return result;
    if ( v6 >= 0 )
      v1 = result + 1;
    v7 = result - 1;
    if ( v6 >= 0 )
      v7 = i;
  }
  return 0xFFFFFFFFLL;
}
