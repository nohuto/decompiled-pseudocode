/*
 * XREFs of VidSchQueryDmaHeader @ 0x1400A669C
 * Callers:
 *     VidSchCollectDbgInfo @ 0x140107610 (VidSchCollectDbgInfo.c)
 * Callees:
 *     VidSchiBlockDriverCallback @ 0x14008F928 (VidSchiBlockDriverCallback.c)
 */

__int64 __fastcall VidSchQueryDmaHeader(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v6; // ebx
  unsigned int i; // r8d
  __int64 v10; // rdx
  unsigned int v12; // [rsp+44h] [rbp+1Ch]

  v12 = HIDWORD(a3);
  v6 = a3;
  VidSchiBlockDriverCallback(a1);
  for ( i = 0; i < *(_DWORD *)(a1 + 2868); ++i )
  {
    v10 = a2 + 208LL * i;
    if ( a4 )
    {
      if ( *(_DWORD *)(v10 + 16632) != 3 )
        continue;
    }
    else if ( *(_DWORD *)(v10 + 16632) == 3 )
    {
      continue;
    }
    if ( *(_QWORD *)(v10 + 16648) == __PAIR64__(v12, v6) )
    {
      *(_OWORD *)a5 = *(_OWORD *)(v10 + 16616);
      *(_OWORD *)(a5 + 16) = *(_OWORD *)(v10 + 16632);
      *(_QWORD *)(a5 + 32) = *(_QWORD *)(v10 + 16648);
      return 0LL;
    }
  }
  return 3221225485LL;
}
