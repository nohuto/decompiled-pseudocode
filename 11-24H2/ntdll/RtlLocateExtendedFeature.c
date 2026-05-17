/*
 * XREFs of RtlLocateExtendedFeature @ 0x180018F00
 * Callers:
 *     RtlUnwindEx @ 0x180015480 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x180016100 (RtlpWalkFrameChain.c)
 *     RtlpxVirtualUnwind @ 0x180016C30 (RtlpxVirtualUnwind.c)
 *     RtlpUnwindPrologue @ 0x180017640 (RtlpUnwindPrologue.c)
 *     RtlpVirtualPopShadowStack @ 0x180018EB0 (RtlpVirtualPopShadowStack.c)
 *     RtlpCopyContext @ 0x18001A1B0 (RtlpCopyContext.c)
 *     RtlpMergeContextXState @ 0x1800E9E90 (RtlpMergeContextXState.c)
 * Callees:
 *     <none>
 */

char *__fastcall RtlLocateExtendedFeature(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  __int64 v3; // rsi
  __int64 v4; // r11
  char *v5; // r11
  int v6; // eax
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx

  if ( a2 - 2 > 0x3D )
    return 0LL;
  v3 = 1LL << a2;
  if ( ((MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & (1LL << a2)) == 0 )
    return 0LL;
  if ( (MEMORY[0x7FFE03EC] & 0xFFFFFFF8) != 0 )
    return 0LL;
  v4 = (int)a1[4];
  if ( *a1 > (int)v4 )
    return 0LL;
  if ( a1[1] + *a1 < (int)v4 + a1[5] )
    return 0LL;
  v5 = (char *)a1 + v4;
  if ( !v5 )
    return 0LL;
  if ( a3 )
  {
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      v6 = *(_DWORD *)(4LL * a2 + 0x7FFE0604);
    else
      v6 = *(_DWORD *)(8LL * a2 + 0x7FFE03F4);
    *a3 = v6;
  }
  if ( (MEMORY[0x7FFE03EC] & 2) == 0 )
    return &v5[*(unsigned int *)(8LL * a2 + 0x7FFE03F0) - 512];
  v7 = *((_QWORD *)v5 + 1);
  if ( (v3 & v7) == 0 )
    return 0LL;
  v8 = 576LL;
  if ( a2 > 2 )
  {
    v9 = 4LL;
    v10 = a2 - 2;
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
