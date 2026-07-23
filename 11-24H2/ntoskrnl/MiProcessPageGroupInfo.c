/*
 * XREFs of MiProcessPageGroupInfo @ 0x1402709E8
 * Callers:
 *     MiZeroAndReleasePages @ 0x140217770 (MiZeroAndReleasePages.c)
 *     MiAllocateLargeZeroPages @ 0x14026F2E8 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiAssemblePfnList @ 0x140270A88 (MiAssemblePfnList.c)
 *     MiDereferencePageChains @ 0x140270AC0 (MiDereferencePageChains.c)
 *     MiZeroInParallel @ 0x140271430 (MiZeroInParallel.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 */

__int64 __fastcall MiProcessPageGroupInfo(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  _QWORD **v5; // rbx
  _QWORD *v6; // rdi
  _QWORD *v7; // r14
  unsigned int PfnPageSizeIndex; // eax

  MiZeroInParallel(a1);
  v4 = 0;
  if ( *(_DWORD *)(a1 + 24) )
  {
    v5 = (_QWORD **)(a1 + 280);
    do
    {
      v6 = *v5;
      if ( *v5 != v5 )
      {
        do
        {
          v7 = (_QWORD *)*v6;
          if ( (v6[5] & 0x10000000000LL) != 0 )
            PfnPageSizeIndex = MiGetPfnPageSizeIndex(v6);
          else
            PfnPageSizeIndex = 3;
          MiAssemblePfnList(a2, v6, PfnPageSizeIndex);
          v6 = v7;
        }
        while ( v7 != v5 );
      }
      v5 += 16;
      ++v4;
    }
    while ( v4 < *(_DWORD *)(a1 + 24) );
  }
  return MiDereferencePageChains(a1);
}
