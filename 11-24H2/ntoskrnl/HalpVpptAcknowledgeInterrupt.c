/*
 * XREFs of HalpVpptAcknowledgeInterrupt @ 0x1403B9E70
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     HalpAcquireHighLevelLock @ 0x1403B9FD0 (HalpAcquireHighLevelLock.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x1403BA018 (HalpVpptUpdatePhysicalTimer.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpVpptAcknowledgeInterrupt(__int64 a1)
{
  __int64 InternalData; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 InterruptTimePrecise; // rax
  unsigned __int64 v11; // rcx
  int *v12; // r8
  int *i; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // [rsp+30h] [rbp+8h] BYREF

  byte_140FC14D8 = HalpAcquireHighLevelLock(&qword_140FC14D0);
  InternalData = HalpTimerGetInternalData(*(__int64 *)&HalpVpptPhysicalTimer);
  guard_dispatch_icall_no_overrides(InternalData, v3, v4, v5);
  if ( *(_QWORD *)&HalpVpptQueue == a1 )
  {
    v9 = **(_QWORD **)&HalpVpptQueue;
    if ( *(int **)(*(_QWORD *)&HalpVpptQueue + 8LL) != &HalpVpptQueue
      || *(_QWORD *)(v9 + 8) != *(_QWORD *)&HalpVpptQueue )
    {
      goto LABEL_17;
    }
    *(_QWORD *)&HalpVpptQueue = **(_QWORD **)&HalpVpptQueue;
    *(_QWORD *)(v9 + 8) = &HalpVpptQueue;
    if ( !*(_QWORD *)(a1 + 40) )
    {
      *(_BYTE *)(a1 + 24) = 0;
      goto LABEL_2;
    }
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v19);
    v11 = *(_QWORD *)(a1 + 32);
    if ( v11 <= InterruptTimePrecise )
    {
      do
        v11 += *(_QWORD *)(a1 + 40);
      while ( v11 <= InterruptTimePrecise );
      *(_QWORD *)(a1 + 32) = v11;
    }
    v12 = *(int **)&HalpVpptQueue;
    for ( i = &HalpVpptQueue; v12 != &HalpVpptQueue; v12 = *(int **)v12 )
    {
      if ( v11 < *((_QWORD *)v12 + 4) )
        break;
      i = v12;
    }
    v14 = *(_QWORD *)i;
    if ( *(int **)(*(_QWORD *)i + 8LL) != i )
LABEL_17:
      __fastfail(3u);
    *(_QWORD *)a1 = v14;
    *(_QWORD *)(a1 + 8) = i;
    *(_QWORD *)(v14 + 8) = a1;
    *(_QWORD *)i = a1;
  }
LABEL_2:
  if ( *(int **)&HalpVpptQueue == &HalpVpptQueue )
  {
    if ( *(_DWORD *)(*(_QWORD *)&HalpVpptPhysicalTimer + 228LL) != 3 )
    {
      v15 = HalpTimerGetInternalData(*(__int64 *)&HalpVpptPhysicalTimer);
      guard_dispatch_icall_no_overrides(v15, v16, v17, v18);
    }
  }
  else
  {
    HalpVpptUpdatePhysicalTimer();
  }
  v6 = (unsigned __int8)byte_140FC14D8;
  result = KxReleaseSpinLock((volatile signed __int64 *)&qword_140FC14D0);
  if ( KiIrqlFlags )
  {
    LOBYTE(v8) = v6;
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
  }
  __writecr8(v6);
  return result;
}
