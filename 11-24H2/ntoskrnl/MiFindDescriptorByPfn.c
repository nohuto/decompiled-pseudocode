/*
 * XREFs of MiFindDescriptorByPfn @ 0x140C51290
 * Callers:
 *     MiMarkLargePageRanges @ 0x140C5209C (MiMarkLargePageRanges.c)
 *     MiIsRegularMemory @ 0x140C53BB8 (MiIsRegularMemory.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140C53C4C (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MiCheckLargePageSystemImage @ 0x140C57ED4 (MiCheckLargePageSystemImage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiFindDescriptorByPfn(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9
  int v6; // edx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax

  v2 = a1 + 352;
  v4 = *(_QWORD *)v2;
  if ( (*(_BYTE *)(v2 + 8) & 1) != 0 && v4 )
    v4 ^= v2;
  v5 = 0LL;
  v6 = *(_BYTE *)(v2 + 8) & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v4 + 32);
      if ( a2 >= v7 )
      {
        if ( a2 >= *(_QWORD *)(v4 + 40) + v7 )
        {
          v8 = *(_QWORD *)(v4 + 8);
          goto LABEL_10;
        }
        v5 = v4;
      }
      v8 = *(_QWORD *)v4;
LABEL_10:
      if ( v6 && v8 )
        v4 ^= v8;
      else
        v4 = v8;
      if ( !v4 )
        return v5;
    }
  }
  return 0LL;
}
