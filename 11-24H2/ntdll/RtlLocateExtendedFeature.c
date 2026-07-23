/*
 * XREFs of RtlLocateExtendedFeature @ 0x180045900
 * Callers:
 *     RtlUnwindEx @ 0x180041E80 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x180042B00 (RtlpWalkFrameChain.c)
 *     RtlpxVirtualUnwind @ 0x180043630 (RtlpxVirtualUnwind.c)
 *     RtlpUnwindPrologue @ 0x180044040 (RtlpUnwindPrologue.c)
 *     RtlpVirtualPopShadowStack @ 0x1800458B0 (RtlpVirtualPopShadowStack.c)
 *     RtlpCopyContext @ 0x180046BB0 (RtlpCopyContext.c)
 *     RtlpMergeContextXState @ 0x1800E5620 (RtlpMergeContextXState.c)
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlLocateExtendedFeature(PCONTEXT_EX ContextEx, ULONG FeatureId, PULONG Length)
{
  __int64 v3; // rsi
  __int64 Offset; // r11
  char *v5; // r11
  ULONG v6; // eax
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx

  if ( FeatureId - 2 > 0x3D )
    return 0LL;
  v3 = 1LL << FeatureId;
  if ( ((MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & (1LL << FeatureId)) == 0 )
    return 0LL;
  if ( (MEMORY[0x7FFE03EC] & 0xFFFFFFF8) != 0 )
    return 0LL;
  Offset = ContextEx->XState.Offset;
  if ( ContextEx->All.Offset > (int)Offset )
    return 0LL;
  if ( (signed int)(ContextEx->All.Length + ContextEx->All.Offset) < (signed int)(Offset + ContextEx->XState.Length) )
    return 0LL;
  v5 = (char *)ContextEx + Offset;
  if ( !v5 )
    return 0LL;
  if ( Length )
  {
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      v6 = *(_DWORD *)(4LL * FeatureId + 0x7FFE0604);
    else
      v6 = *(_DWORD *)(8LL * FeatureId + 0x7FFE03F4);
    *Length = v6;
  }
  if ( (MEMORY[0x7FFE03EC] & 2) == 0 )
    return &v5[*(unsigned int *)(8LL * FeatureId + 0x7FFE03F0) - 512];
  v7 = *((_QWORD *)v5 + 1);
  if ( (v3 & v7) == 0 )
    return 0LL;
  v8 = 576LL;
  if ( FeatureId > 2 )
  {
    v9 = 4LL;
    v10 = FeatureId - 2;
    v11 = 2147354124LL;
    do
    {
      if ( (v9 & v7) != 0 )
      {
        if ( (v9 & MEMORY[0x7FFE05F8]) != 0 )
          LODWORD(v8) = (v8 + 63) & 0xFFFFFFC0;
        v8 = (unsigned int)(*(_DWORD *)v11 + v8);
      }
      v9 = __ROL8__(v9, 1);
      v11 += 4LL;
      --v10;
    }
    while ( v10 );
  }
  if ( (v3 & MEMORY[0x7FFE05F8]) != 0 )
    v8 = ((_DWORD)v8 + 63) & 0xFFFFFFC0;
  return &v5[v8 - 512];
}
