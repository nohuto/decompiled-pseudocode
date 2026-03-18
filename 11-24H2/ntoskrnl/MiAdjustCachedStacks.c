/*
 * XREFs of MiAdjustCachedStacks @ 0x140269740
 * Callers:
 *     MiWorkingSetManager @ 0x1402D3D20 (MiWorkingSetManager.c)
 *     MiFindContiguousPagesEx @ 0x140304960 (MiFindContiguousPagesEx.c)
 *     MiDefragmentSlabWorker @ 0x140686E60 (MiDefragmentSlabWorker.c)
 *     MiDeletePartitionResources @ 0x1407FBD44 (MiDeletePartitionResources.c)
 *     MmRelocatePfnList @ 0x140932988 (MmRelocatePfnList.c)
 *     MiScrubNode @ 0x140A38DD4 (MiScrubNode.c)
 * Callees:
 *     MiDeleteCachedKernelShadowStack @ 0x140269224 (MiDeleteCachedKernelShadowStack.c)
 *     MiAdjustCachedStackList @ 0x1402698A4 (MiAdjustCachedStackList.c)
 *     MiDeleteCachedKernelStack @ 0x140269ADC (MiDeleteCachedKernelStack.c)
 *     KeGetPrcb @ 0x140352980 (KeGetPrcb.c)
 *     MiPruneCachedStackList @ 0x14048CBC8 (MiPruneCachedStackList.c)
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
  unsigned __int64 v11; // rdx
  __int64 v12; // r9

  LOBYTE(v3) = a2 & 3;
  if ( (a2 & 3) != 1 || (byte_140E2DAC9 & 1) == 0 )
  {
    v3 = &MiSystemPartition;
    if ( (ULONG *)a1 == &MiSystemPartition )
    {
      for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
      {
        v6 = (volatile __int64 *)(KeGetPrcb(i) + 34608);
        if ( *v6 && _InterlockedExchange64(v6, 0LL) )
          MiDeleteCachedKernelStack(a1);
        v3 = (ULONG *)*((_QWORD *)v6 + 1);
        if ( v3 )
        {
          v11 = _InterlockedExchange64(v6 + 1, 0LL);
          if ( v11 )
            LOBYTE(v3) = MiDeleteCachedKernelShadowStack(a1, v11);
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
          MiAdjustCachedStackList(a1, v10, (unsigned int)v8);
LABEL_11:
          if ( ++v8 >= 8 )
            goto LABEL_12;
        }
        if ( v8 < 3 )
          break;
        if ( (a2 & 2) != 0 )
        {
          v12 = 1LL;
LABEL_24:
          MiPruneCachedStackList(a1, v10, 0LL, v12);
          goto LABEL_11;
        }
LABEL_12:
        LOBYTE(v3) = KeNumberNodes;
        if ( ++v7 >= (unsigned __int16)KeNumberNodes )
          return (char)v3;
      }
      v12 = 0LL;
      goto LABEL_24;
    }
  }
  return (char)v3;
}
