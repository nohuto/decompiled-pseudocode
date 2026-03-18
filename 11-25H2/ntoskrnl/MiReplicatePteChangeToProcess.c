/*
 * XREFs of MiReplicatePteChangeToProcess @ 0x140681BB0
 * Callers:
 *     MiReplicatePteChange @ 0x1404F4ED8 (MiReplicatePteChange.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiShadowTopLevelPxes @ 0x1403FE210 (MiShadowTopLevelPxes.c)
 *     MiTransformValidPteInPlace @ 0x1403FF3E4 (MiTransformValidPteInPlace.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14040FDB8 (MiUnmapPageInHyperSpaceWorker.c)
 *     MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE @ 0x1406780F8 (MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE.c)
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
        MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v6, v7, 128);
    }
    *v6 = v8;
  }
LABEL_10:
  MiUnmapPageInHyperSpaceWorker(v5, 0x11u, 0x80000000);
  return MiShadowTopLevelPxes(a1, a2, 1);
}
