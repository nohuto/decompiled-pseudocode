/*
 * XREFs of HalpVpptAcknowledgeInterrupt @ 0x140445CE0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     HalpAcquireHighLevelLock @ 0x140445E40 (HalpAcquireHighLevelLock.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x140445E88 (HalpVpptUpdatePhysicalTimer.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpVpptAcknowledgeInterrupt(__int64 a1)
{
  __int64 InternalData; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  LARGE_INTEGER InterruptTimePrecise; // rax
  LARGE_INTEGER v9; // rcx
  int *v10; // r8
  int *i; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  byte_140FC0D38 = HalpAcquireHighLevelLock(&qword_140FC0D30);
  InternalData = HalpTimerGetInternalData(*(__int64 *)&HalpVpptPhysicalTimer);
  guard_dispatch_icall_no_overrides(InternalData, v3);
  if ( *(_QWORD *)&HalpVpptQueue == a1 )
  {
    v7 = **(_QWORD **)&HalpVpptQueue;
    if ( *(int **)(*(_QWORD *)&HalpVpptQueue + 8LL) != &HalpVpptQueue
      || *(_QWORD *)(v7 + 8) != *(_QWORD *)&HalpVpptQueue )
    {
      goto LABEL_17;
    }
    *(_QWORD *)&HalpVpptQueue = **(_QWORD **)&HalpVpptQueue;
    *(_QWORD *)(v7 + 8) = &HalpVpptQueue;
    if ( !*(_QWORD *)(a1 + 40) )
    {
      *(_BYTE *)(a1 + 24) = 0;
      goto LABEL_2;
    }
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v9 = *(LARGE_INTEGER *)(a1 + 32);
    if ( v9.QuadPart <= (unsigned __int64)InterruptTimePrecise.QuadPart )
    {
      do
        v9.QuadPart += *(_QWORD *)(a1 + 40);
      while ( v9.QuadPart <= (unsigned __int64)InterruptTimePrecise.QuadPart );
      *(LARGE_INTEGER *)(a1 + 32) = v9;
    }
    v10 = *(int **)&HalpVpptQueue;
    for ( i = &HalpVpptQueue; v10 != &HalpVpptQueue; v10 = *(int **)v10 )
    {
      if ( v9.QuadPart < *((_QWORD *)v10 + 4) )
        break;
      i = v10;
    }
    v12 = *(_QWORD *)i;
    if ( *(int **)(*(_QWORD *)i + 8LL) != i )
LABEL_17:
      __fastfail(3u);
    *(_QWORD *)a1 = v12;
    *(_QWORD *)(a1 + 8) = i;
    *(_QWORD *)(v12 + 8) = a1;
    *(_QWORD *)i = a1;
  }
LABEL_2:
  if ( *(int **)&HalpVpptQueue == &HalpVpptQueue )
  {
    if ( *(_DWORD *)(*(_QWORD *)&HalpVpptPhysicalTimer + 228LL) != 3 )
    {
      v13 = HalpTimerGetInternalData(*(__int64 *)&HalpVpptPhysicalTimer);
      guard_dispatch_icall_no_overrides(v13, v14);
    }
  }
  else
  {
    HalpVpptUpdatePhysicalTimer();
  }
  v4 = (unsigned __int8)byte_140FC0D38;
  result = KxReleaseSpinLock((volatile signed __int64 *)&qword_140FC0D30);
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = v4;
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
  }
  __writecr8(v4);
  return result;
}
