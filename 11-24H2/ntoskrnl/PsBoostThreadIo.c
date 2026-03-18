/*
 * XREFs of PsBoostThreadIo @ 0x14024D950
 * Callers:
 *     CmpLockRegistryExclusive @ 0x14087DD80 (CmpLockRegistryExclusive.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KiAbThreadInsertList @ 0x14024E470 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x140253AF0 (KiAbQueueAutoBoostDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlCaptureStackBackTrace @ 0x14027C690 (RtlCaptureStackBackTrace.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PsBoostThreadIo(__int64 a1, char a2, __int64 a3)
{
  signed __int32 v3; // ebx
  char v4; // bp
  KIRQL v5; // r15
  _QWORD *v8; // r13
  volatile signed __int64 *v9; // rsi
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 Pool2; // rax
  _QWORD *v13; // rcx
  __int64 **v14; // rsi
  __int64 *v15; // rcx
  __int64 **v16; // rsi
  __int64 *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = 0;
  v4 = 0;
  v5 = 0;
  v8 = 0LL;
  if ( PspAlwaysTrackIoBoosting )
  {
    v4 = 1;
    Pool2 = ExAllocatePool2(0x40uLL);
    v8 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(Pool2 + 16), 0LL);
      v8[12] = KeGetCurrentThread();
      v8[13] = 0LL;
    }
    v9 = (volatile signed __int64 *)(a1 + 1552);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1552));
  }
  else
  {
    v9 = (volatile signed __int64 *)(a1 + 1552);
  }
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 1504) )
    {
      v3 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 1504));
      if ( !v4 )
        goto LABEL_6;
      if ( *(_DWORD *)(a1 + 1504) )
      {
        if ( v8 )
        {
          v13 = *(_QWORD **)(a1 + 1544);
          if ( *v13 != a1 + 1536 )
            goto LABEL_37;
          *v8 = a1 + 1536;
          v8[1] = v13;
          *v13 = v8;
          *(_QWORD *)(a1 + 1544) = v8;
        }
      }
      else
      {
        if ( v8 )
          ExFreePoolWithTag(v8, 0x736F6F42u);
        v14 = (__int64 **)(a1 + 1520);
        while ( 1 )
        {
          v15 = *v14;
          if ( *v14 == (__int64 *)v14 )
            break;
          v19 = *v15;
          if ( (__int64 **)v15[1] != v14 || *(__int64 **)(v19 + 8) != v15 )
            goto LABEL_37;
          *v14 = (__int64 *)v19;
          *(_QWORD *)(v19 + 8) = v14;
          ExFreePoolWithTag(v15, 0x736F6F42u);
        }
        v16 = (__int64 **)(a1 + 1536);
        while ( 1 )
        {
          v17 = *v16;
          if ( *v16 == (__int64 *)v16 )
            break;
          v18 = *v17;
          if ( (__int64 **)v17[1] != v16 || *(__int64 **)(v18 + 8) != v17 )
            goto LABEL_37;
          *v16 = (__int64 *)v18;
          *(_QWORD *)(v18 + 8) = v16;
          ExFreePoolWithTag(v17, 0x736F6F42u);
        }
      }
      v9 = (volatile signed __int64 *)(a1 + 1552);
    }
    goto LABEL_24;
  }
  v3 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 1504));
  if ( !v4 )
    goto LABEL_17;
  if ( !v8 )
  {
LABEL_24:
    if ( !v4 )
      goto LABEL_30;
    goto LABEL_25;
  }
  v20 = *(_QWORD **)(a1 + 1528);
  if ( *v20 != a1 + 1520 )
LABEL_37:
    __fastfail(3u);
  *v8 = a1 + 1520;
  v8[1] = v20;
  *v20 = v8;
  *(_QWORD *)(a1 + 1528) = v8;
LABEL_25:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64(v9, 0LL);
  else
    KiReleaseSpinLockInstrumented(v9, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
  __writecr8(v5);
LABEL_30:
  if ( !a2 )
  {
LABEL_17:
    if ( v3 != 1 )
      return;
    goto LABEL_7;
  }
LABEL_6:
  if ( v3 )
    return;
LABEL_7:
  if ( !a2 && *(_BYTE *)(a1 + 792) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL, a3);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (unsigned int)KiAbThreadInsertList(a1, &CurrentPrcb->AbPropagateBoostsList, a1 + 808) )
      KiAbQueueAutoBoostDpc(CurrentPrcb);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
}
