/*
 * XREFs of MiReplicatePteChangeToProcess @ 0x14068E570
 * Callers:
 *     MiReplicatePteChange @ 0x1404F4EFC (MiReplicatePteChange.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402EEA94 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiShadowTopLevelPxes @ 0x14038D4CC (MiShadowTopLevelPxes.c)
 *     MiTransformValidPteInPlace @ 0x14038D668 (MiTransformValidPteInPlace.c)
 *     MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE @ 0x140684AA8 (MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE.c)
 */

char __fastcall MiReplicatePteChangeToProcess(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r14
  __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx

  v4 = MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE(a1, a2);
  v5 = MiMapPageInHyperSpaceWorker(v4, 0LL, 0x80000000);
  v6 = (__int64 *)(v5 + 8 * ((a2 >> 3) & 0x1FF));
  v7 = MI_READ_PTE_LOCK_FREE(a2);
  v8 = v7;
  if ( v7 != *v6 )
  {
    if ( (v7 & 1) != 0 )
    {
      if ( (*v6 & 1) != 0 )
      {
        MiTransformValidPteInPlace((ULONG_PTR)v6, a2, v7, 0x60u, 3);
        goto LABEL_10;
      }
      if ( _bittest64(&MiFlags, 0x24u) && (v7 & 0x20) == 0 && (unsigned __int64)v6 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v6, v7, 128LL);
    }
    *v6 = v8;
  }
LABEL_10:
  MiUnmapPageInHyperSpaceWorker(v5, 0x11u, 0x80000000);
  return MiShadowTopLevelPxes(a1, a2, 1);
}
