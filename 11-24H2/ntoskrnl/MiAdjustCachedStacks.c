/*
 * XREFs of MiAdjustCachedStacks @ 0x1402AF604
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14030E840 (MiFindContiguousPagesEx.c)
 *     MiWorkingSetManager @ 0x140354FA0 (MiWorkingSetManager.c)
 *     MiDefragmentSlabWorker @ 0x140687F90 (MiDefragmentSlabWorker.c)
 *     MiDeletePartitionResources @ 0x1407FC4B4 (MiDeletePartitionResources.c)
 *     MmRelocatePfnList @ 0x1408F754C (MmRelocatePfnList.c)
 *     MiScrubNode @ 0x140A2DE94 (MiScrubNode.c)
 * Callees:
 *     MiDeleteCachedKernelShadowStack @ 0x14021E9E8 (MiDeleteCachedKernelShadowStack.c)
 *     MiDeleteCachedKernelStack @ 0x14021F06C (MiDeleteCachedKernelStack.c)
 *     MiAdjustCachedStackList @ 0x1402AF530 (MiAdjustCachedStackList.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     MiPruneCachedStackList @ 0x1404878E8 (MiPruneCachedStackList.c)
 */

char __fastcall MiAdjustCachedStacks(__int64 a1, char a2)
{
  ULONG *v3; // rax
  unsigned int i; // edi
  volatile __int64 *v6; // rbx
  unsigned int v7; // ebx
  int v8; // edi
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // r9

  LOBYTE(v3) = a2 & 3;
  if ( (a2 & 3) != 1 || (byte_140E2DC09 & 1) == 0 )
  {
    v3 = &MiSystemPartition;
    if ( (ULONG *)a1 == &MiSystemPartition )
    {
      for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
      {
        v6 = (volatile __int64 *)(KeGetPrcb(i) + 34608);
        if ( *v6 )
        {
          v11 = _InterlockedExchange64(v6, 0LL);
          if ( v11 )
            MiDeleteCachedKernelStack(a1, v11);
        }
        v3 = (ULONG *)*((_QWORD *)v6 + 1);
        if ( v3 )
        {
          v12 = _InterlockedExchange64(v6 + 1, 0LL);
          if ( v12 )
            LOBYTE(v3) = MiDeleteCachedKernelShadowStack(a1, v12);
        }
      }
    }
    v7 = 0;
    if ( KeNumberNodes )
    {
      while ( 1 )
      {
        v8 = 0;
        v9 = *(_QWORD *)(a1 + 16) + 57216LL * v7;
        while ( 1 )
        {
          v10 = v9 + 48 * (v8 + 319LL);
          if ( (a2 & 1) != 0 )
            break;
          MiAdjustCachedStackList(a1, v10, v8);
LABEL_11:
          if ( ++v8 >= 8 )
            goto LABEL_12;
        }
        if ( v8 < 3 )
          break;
        if ( (a2 & 2) != 0 )
        {
          v13 = 1LL;
LABEL_24:
          MiPruneCachedStackList(a1, v10, 0LL, v13);
          goto LABEL_11;
        }
LABEL_12:
        LOBYTE(v3) = KeNumberNodes;
        if ( ++v7 >= (unsigned __int16)KeNumberNodes )
          return (char)v3;
      }
      v13 = 0LL;
      goto LABEL_24;
    }
  }
  return (char)v3;
}
