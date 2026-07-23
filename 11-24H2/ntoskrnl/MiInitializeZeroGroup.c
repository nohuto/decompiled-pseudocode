/*
 * XREFs of MiInitializeZeroGroup @ 0x1402714C4
 * Callers:
 *     MiZeroInParallel @ 0x140271430 (MiZeroInParallel.c)
 * Callees:
 *     MiQuantifyZeroWork @ 0x140271758 (MiQuantifyZeroWork.c)
 *     MiInitializeAffinityWalker @ 0x1402717A8 (MiInitializeAffinityWalker.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiGetZeroingDescriptors @ 0x140686B54 (MiGetZeroingDescriptors.c)
 */

char __fastcall MiInitializeZeroGroup(__int64 a1)
{
  unsigned int v2; // ebp
  unsigned int v3; // ecx
  unsigned int v4; // edx
  _DWORD *v5; // r8
  int v6; // edx
  unsigned int v7; // r8d
  unsigned int v8; // edx
  __int64 v9; // r10
  int v10; // ecx
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int i; // r8d
  __int64 v22; // r9
  __int64 v23; // r11
  unsigned __int64 CoreProcessorSet; // rax

  *(_QWORD *)(a1 + 160) = KeGetCurrentThread();
  MiQuantifyZeroWork();
  if ( *(_DWORD *)(a1 + 96) )
    MiGetZeroingDescriptors(a1);
  v2 = *(_DWORD *)(a1 + 40);
  v3 = 0;
  v4 = 0;
  v5 = (_DWORD *)(a1 + 96);
  do
  {
    v3 += *v5;
    ++v4;
    ++v5;
  }
  while ( v4 < 3 );
  v6 = *(_DWORD *)(a1 + 16);
  v7 = *(_DWORD *)(a1 + 40);
  if ( v3 <= v2 )
    v7 = v3;
  if ( (v6 & 0x14) != 0
    || (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0
    || KeGetCurrentIrql() == 2
    || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0
    || (MiFlags & 0x30) == 0 )
  {
    v7 = 1;
    goto LABEL_13;
  }
  if ( KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] == *(_DWORD *)(a1 + 92) )
  {
LABEL_13:
    v8 = v6 & 0xFFFFFF3F | 0x40;
    v9 = a1;
    goto LABEL_14;
  }
  v9 = a1;
  if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 )
    v8 = v6 | 0xC0;
  else
    v8 = v6 & 0xFFFFFF3F;
LABEL_14:
  *(_DWORD *)(a1 + 16) = v8;
  *(_DWORD *)(a1 + 28) = v7;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 112), v7);
  v10 = *(_DWORD *)(a1 + 16);
  v11 = v7 - 1;
  if ( (v10 & 0x40) == 0 )
    v11 = v7;
  *(_DWORD *)(a1 + 16) = v10 & 0xFFFFFDFF;
  *(_DWORD *)(a1 + 32) = v11;
  if ( *(ULONG **)a1 == &MiSystemPartition )
    v12 = 0LL;
  else
    v12 = *(_QWORD *)(*(_QWORD *)a1 + 184LL);
  *(_QWORD *)(a1 + 8) = v12;
  *(_DWORD *)(a1 + 124) = 0;
  *(_WORD *)(a1 + 120) = 263;
  *(_BYTE *)(a1 + 122) = 6;
  *(_QWORD *)(a1 + 136) = a1 + 128;
  *(_QWORD *)(a1 + 128) = a1 + 128;
  v13 = *(_QWORD *)(a1 + 144);
  LOBYTE(v14) = MiInitializeAffinityWalker(v13, a1 + 96, *(unsigned int *)(a1 + 88), *(unsigned int *)(v9 + 92));
  if ( *(_DWORD *)(a1 + 32) )
  {
    LOBYTE(v14) = *(_DWORD *)(a1 + 16) & 0xC0;
    if ( (_BYTE)v14 == 64 )
    {
      v14 = *(_DWORD *)(a1 + 96);
      if ( *(_DWORD *)(a1 + 28) != v14 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v15) = 2;
          LOBYTE(v16) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(v16, v15);
        }
        CurrentPrcb = KeGetCurrentPrcb();
        v19 = 312LL;
        if ( CurrentPrcb->PowerState.ArchitecturalEfficiencyClass != 1 )
          v19 = 344LL;
        v20 = v13 + v19;
        if ( *(_DWORD *)v20 )
        {
          for ( i = 0; i < *(_DWORD *)(v20 + 8); ++i )
          {
            v22 = *(_QWORD *)(v20 + 16);
            v15 = 2LL * i;
            if ( CurrentPrcb->Group == *(_WORD *)(v22 + 16LL * i + 8) )
            {
              v23 = *(_QWORD *)(v22 + 16LL * i);
              CoreProcessorSet = CurrentPrcb->CoreProcessorSet;
              if ( (CoreProcessorSet & v23) != 0 )
              {
                *(_QWORD *)(v22 + 16LL * i) = v23 & ~CoreProcessorSet;
                --*(_DWORD *)v20;
                *(_DWORD *)(a1 + 16) |= 0x100u;
                break;
              }
            }
          }
        }
        if ( KiIrqlFlags )
        {
          LOBYTE(v15) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
        }
        LOBYTE(v14) = CurrentIrql;
        __writecr8(CurrentIrql);
      }
    }
  }
  *(_DWORD *)(a1 + 108) = v2;
  return v14;
}
