/*
 * XREFs of HalpVpptUpdatePhysicalTimer @ 0x1403BA018
 * Callers:
 *     HalpVpptAcknowledgeInterrupt @ 0x1403B9E70 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptArmTimer @ 0x1404A5A30 (HalpVpptArmTimer.c)
 *     HalpVpptStop @ 0x140548C50 (HalpVpptStop.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     HalpSetTimerAnyMode @ 0x1403BB348 (HalpSetTimerAnyMode.c)
 *     ExtEnvSetVpptTarget @ 0x1403BB428 (ExtEnvSetVpptTarget.c)
 *     ExtEnvCriticalFailure @ 0x14055FC80 (ExtEnvCriticalFailure.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpVpptUpdatePhysicalTimer(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int64 v2; // rdi
  unsigned __int64 InterruptTimePrecise; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rbx
  __int64 result; // rax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  __int64 InternalData; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(*(_QWORD *)&HalpVpptQueue + 16LL);
  v2 = *(_QWORD *)(*(_QWORD *)&HalpVpptQueue + 32LL);
  if ( HalpVpptPhysicalTimerTarget != v1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)&HalpVpptPhysicalTimer + 228LL) != 3 )
    {
      InternalData = HalpTimerGetInternalData(*(__int64 *)&HalpVpptPhysicalTimer);
      guard_dispatch_icall_no_overrides(InternalData, v11, v12, v13);
      if ( (*(_DWORD *)(*(_QWORD *)&HalpVpptPhysicalTimer + 224LL) & 0x200000) == 0 )
      {
        v14 = HalpTimerGetInternalData(*(__int64 *)&HalpVpptPhysicalTimer);
        guard_dispatch_icall_no_overrides(v14, v15, v16, v17);
      }
    }
    if ( HalpVpptPhysicalTimerTarget != v1 )
    {
      v8 = ExtEnvSetVpptTarget(a1, v1);
      if ( v8 < 0 )
        ExtEnvCriticalFailure(v9, 276, HalpVpptPhysicalTimerTarget, v1, v8);
      HalpVpptPhysicalTimerTarget = v1;
    }
  }
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v18);
  v4 = 0LL;
  if ( InterruptTimePrecise <= v2 )
    v4 = v2 - InterruptTimePrecise;
  v5 = 0x989680uLL / *(_QWORD *)(*(_QWORD *)&HalpVpptPhysicalTimer + 192LL);
  if ( v5 < 0x1388 )
    v5 = 5000LL;
  if ( v4 >= v5 )
    v5 = v4;
  result = HalpSetTimerAnyMode(*(_QWORD *)&HalpVpptPhysicalTimer, v5, v4, &v18);
  if ( (int)result < 0 )
    ExtEnvCriticalFailure(v7, 277, HalpVpptPhysicalTimer, v5, (int)result);
  return result;
}
