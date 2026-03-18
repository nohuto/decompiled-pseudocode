/*
 * XREFs of PspGetMemoryPartitionFromJobList @ 0x1408E7594
 * Callers:
 *     PspGetMemoryPartitionContext @ 0x1408E7414 (PspGetMemoryPartitionContext.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 */

__int64 __fastcall PspGetMemoryPartitionFromJobList(__int64 a1, unsigned __int64 a2, PVOID *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v4; // ebx
  unsigned __int64 v5; // rbp
  __int64 v9; // r14
  PVOID v10; // rax
  PVOID v11; // rcx
  $81B80DCEA5A02D890AB7B2872B48AC01 *v13; // rcx

  *a3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = 0LL;
  --CurrentThread->SpecialApcDisable;
  if ( a2 )
  {
    do
    {
      v9 = *(_QWORD *)(a1 + 8 * v5);
      ExAcquireResourceExclusiveLite((PERESOURCE)(v9 + 56), 1u);
      v10 = *(PVOID *)(v9 + 1792);
      if ( v10 == (PVOID)-1LL )
      {
        v4 = -1073740682;
      }
      else
      {
        v11 = *a3;
        if ( v10 )
        {
          if ( v11 )
          {
            if ( v10 != v11 )
              v4 = -1073741637;
          }
          else
          {
            ObfReferenceObjectWithTag(*(PVOID *)(v9 + 1792), 0x624A7350u);
            *a3 = *(PVOID *)(v9 + 1792);
          }
        }
      }
      ExReleaseResourceLite((PERESOURCE)(v9 + 56));
      if ( v4 < 0 )
        break;
      ++v5;
    }
    while ( v5 < a2 );
  }
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
  {
    v4 = -1073741749;
  }
  else if ( v4 >= 0 )
  {
    goto LABEL_8;
  }
  if ( *a3 )
  {
    ObfDereferenceObjectWithTag(*a3, 0x624A7350u);
    *a3 = 0LL;
  }
LABEL_8:
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v13 = &CurrentThread->152;
    if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)v13->ApcState.ApcListHead[0].Flink != v13 )
      KiCheckForKernelApcDelivery((__int64)v13, a2);
  }
  return (unsigned int)v4;
}
