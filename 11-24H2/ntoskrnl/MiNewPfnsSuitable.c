/*
 * XREFs of MiNewPfnsSuitable @ 0x1407E9C94
 * Callers:
 *     MiAllocateEntireImageFileExtents @ 0x1407EFC4C (MiAllocateEntireImageFileExtents.c)
 *     MiAllocateFileExtents @ 0x140AA5B84 (MiAllocateFileExtents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNewPfnsSuitable(__int64 a1)
{
  unsigned int i; // edx
  ULONG_PTR v2; // r8
  unsigned __int64 v3; // r9

  for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
  {
    v2 = *(_QWORD *)(a1 + 16LL * i + 8);
    if ( v2 != 0x8000000000000000uLL )
    {
      v3 = v2 + *(_QWORD *)(a1 + 16LL * i + 16);
      if ( v3 >= qword_140E35B00 && v2 < qword_140E35B00 + 2048 )
        return 0LL;
      if ( v3 > qword_140E2DBE0 + 1 )
        return 0LL;
    }
  }
  return 1LL;
}
