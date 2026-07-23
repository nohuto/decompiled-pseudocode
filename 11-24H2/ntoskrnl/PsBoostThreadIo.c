/*
 * XREFs of PsBoostThreadIo @ 0x14027DF60
 * Callers:
 *     CmpLockRegistryExclusive @ 0x140881C30 (CmpLockRegistryExclusive.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140231C20 (RtlCaptureStackBackTrace.c)
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KiAbThreadInsertList @ 0x14027EA80 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x140284100 (KiAbQueueAutoBoostDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PsBoostThreadIo(__int64 a1, char a2)
{
  signed __int32 v2; // ebx
  char v3; // bp
  KIRQL v4; // r15
  _QWORD *v7; // r13
  volatile signed __int64 *v8; // rsi
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 Pool2; // rax
  _QWORD *v12; // rcx
  __int64 **v13; // rsi
  __int64 *v14; // rcx
  __int64 **v15; // rsi
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = 0;
  v3 = 0;
  v4 = 0;
  v7 = 0LL;
  if ( PspAlwaysTrackIoBoosting )
  {
    v3 = 1;
    Pool2 = ExAllocatePool2(0x40uLL, 0x70uLL, 0x736F6F42u);
    v7 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(Pool2 + 16), 0LL);
      v7[12] = KeGetCurrentThread();
      v7[13] = 0LL;
    }
    v8 = (volatile signed __int64 *)(a1 + 1552);
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1552));
  }
  else
  {
    v8 = (volatile signed __int64 *)(a1 + 1552);
  }
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 1504) )
    {
      v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 1504));
      if ( !v3 )
        goto LABEL_6;
      if ( *(_DWORD *)(a1 + 1504) )
      {
        if ( v7 )
        {
          v12 = *(_QWORD **)(a1 + 1544);
          if ( *v12 != a1 + 1536 )
            goto LABEL_37;
          *v7 = a1 + 1536;
          v7[1] = v12;
          *v12 = v7;
          *(_QWORD *)(a1 + 1544) = v7;
        }
      }
      else
      {
        if ( v7 )
          ExFreePoolWithTag(v7, 0x736F6F42u);
        v13 = (__int64 **)(a1 + 1520);
        while ( 1 )
        {
          v14 = *v13;
          if ( *v13 == (__int64 *)v13 )
            break;
          v18 = *v14;
          if ( (__int64 **)v14[1] != v13 || *(__int64 **)(v18 + 8) != v14 )
            goto LABEL_37;
          *v13 = (__int64 *)v18;
          *(_QWORD *)(v18 + 8) = v13;
          ExFreePoolWithTag(v14, 0x736F6F42u);
        }
        v15 = (__int64 **)(a1 + 1536);
        while ( 1 )
        {
          v16 = *v15;
          if ( *v15 == (__int64 *)v15 )
            break;
          v17 = *v16;
          if ( (__int64 **)v16[1] != v15 || *(__int64 **)(v17 + 8) != v16 )
            goto LABEL_37;
          *v15 = (__int64 *)v17;
          *(_QWORD *)(v17 + 8) = v15;
          ExFreePoolWithTag(v16, 0x736F6F42u);
        }
      }
      v8 = (volatile signed __int64 *)(a1 + 1552);
    }
    goto LABEL_24;
  }
  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 1504));
  if ( !v3 )
    goto LABEL_17;
  if ( !v7 )
  {
LABEL_24:
    if ( !v3 )
      goto LABEL_30;
    goto LABEL_25;
  }
  v19 = *(_QWORD **)(a1 + 1528);
  if ( *v19 != a1 + 1520 )
LABEL_37:
    __fastfail(3u);
  *v7 = a1 + 1520;
  v7[1] = v19;
  *v19 = v7;
  *(_QWORD *)(a1 + 1528) = v7;
LABEL_25:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64(v8, 0LL);
  else
    KiReleaseSpinLockInstrumented(v8, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
  __writecr8(v4);
LABEL_30:
  if ( !a2 )
  {
LABEL_17:
    if ( v2 != 1 )
      return;
    goto LABEL_7;
  }
LABEL_6:
  if ( v2 )
    return;
LABEL_7:
  if ( !a2 && *(_BYTE *)(a1 + 792) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (unsigned int)KiAbThreadInsertList(a1, &CurrentPrcb->AbPropagateBoostsList, a1 + 808) )
      KiAbQueueAutoBoostDpc(CurrentPrcb);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
}
