/*
 * XREFs of MiProcessPageGroupInfo @ 0x1403A2E30
 * Callers:
 *     MiZeroAndReleasePages @ 0x1403A0C10 (MiZeroAndReleasePages.c)
 *     MiAllocateLargeZeroPages @ 0x1403A7BB8 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x1403070C0 (MiGetPfnPageSizeIndex.c)
 *     MiZeroInParallel @ 0x1404155D0 (MiZeroInParallel.c)
 *     MiAssemblePfnList @ 0x1404711DC (MiAssemblePfnList.c)
 *     MiDereferencePageChains @ 0x140491294 (MiDereferencePageChains.c)
 */

__int64 __fastcall MiProcessPageGroupInfo(__int64 a1, __int64 a2)
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
  return MiDereferencePageChains(a1);
}
