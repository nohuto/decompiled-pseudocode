/*
 * XREFs of MiProcessPageGroupInfo @ 0x14038D61C
 * Callers:
 *     MiZeroAndReleasePages @ 0x14038C180 (MiZeroAndReleasePages.c)
 *     MiAllocateLargeZeroPages @ 0x140390BD8 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x140220DD0 (MiGetPfnPageSizeIndex.c)
 *     MiDereferencePageChains @ 0x1402259E4 (MiDereferencePageChains.c)
 *     MiZeroInParallel @ 0x140418028 (MiZeroInParallel.c)
 *     MiAssemblePfnList @ 0x140472ABC (MiAssemblePfnList.c)
 */

void __fastcall MiProcessPageGroupInfo(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  _QWORD **v5; // rbx
  _QWORD *v6; // rdi
  _QWORD *v7; // r14
  unsigned int PfnPageSizeIndex; // eax

  MiZeroInParallel();
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
            PfnPageSizeIndex = MiGetPfnPageSizeIndex((__int64)v6);
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
  MiDereferencePageChains((volatile signed __int32 *)a1);
}
