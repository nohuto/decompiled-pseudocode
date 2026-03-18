/*
 * XREFs of PspIumReplenishPartitionPages @ 0x14049E744
 * Callers:
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 *     PspIumResolveVirtualFault @ 0x1409FDD3C (PspIumResolveVirtualFault.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140217CD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmAllocateNonChargedSecurePages @ 0x14049E89C (MmAllocateNonChargedSecurePages.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

bool __fastcall PspIumReplenishPartitionPages(__int64 a1, unsigned int a2)
{
  __int64 v2; // r15
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned int i; // edi
  __int64 v9; // rdx
  int v11; // eax
  __int64 v12; // rax
  int v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 160);
  v4 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
    goto LABEL_4;
  if ( *(_DWORD *)(v4 + 4) < a2 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 88));
LABEL_4:
    v7 = *(unsigned int *)(v4 + 156);
    v13 = *(_DWORD *)(v4 + 152) - v7 - *(_DWORD *)(v4 + 4);
    if ( v13 )
    {
      MmAllocateNonChargedSecurePages(*(_QWORD *)(v4 + 8), 0LL, &v13, v2 + 8 * v7);
      *(_DWORD *)(v4 + 156) += v13;
    }
    i = *(_DWORD *)(v4 + 4);
    if ( i < 8 )
    {
      while ( _interlockedbittestandset((volatile signed __int32 *)v4, 0) )
        _mm_pause();
      for ( i = *(_DWORD *)(v4 + 4); i < 8; *(_DWORD *)(v4 + 4) = i )
      {
        v11 = *(_DWORD *)(v4 + 156);
        if ( !v11 )
          break;
        v12 = (unsigned int)(v11 - 1);
        *(_DWORD *)(v4 + 156) = v12;
        *(_QWORD *)(v4 + 8LL * i + 24) = *(_QWORD *)(v2 + 8 * v12);
        i = *(_DWORD *)(v4 + 4) + 1;
      }
      _interlockedbittestandreset((volatile signed __int32 *)v4, 0);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 88));
    if ( KiIrqlFlags )
    {
      LOBYTE(v9) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
    }
    __writecr8(CurrentIrql);
    return i >= a2;
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
  }
  __writecr8(CurrentIrql);
  return 1;
}
