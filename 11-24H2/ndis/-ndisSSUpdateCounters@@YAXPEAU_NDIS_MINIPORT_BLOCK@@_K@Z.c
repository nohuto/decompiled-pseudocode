/*
 * XREFs of ?ndisSSUpdateCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K@Z @ 0x1400C30E4
 * Callers:
 *     ?ndisPcwUpdatePhysicalMiniportCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K@Z @ 0x140135E60 (-ndisPcwUpdatePhysicalMiniportCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisSSUpdateCounters(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  _NDIS_PHYSICAL_PERFORMANCE_COUNTERS *PhysicalPerformanceCounters; // rbp
  KIRQL v6; // al
  unsigned __int64 v7; // rbx

  SelectiveSuspend = a1->SelectiveSuspend;
  PhysicalPerformanceCounters = a1->PhysicalPerformanceCounters;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  v7 = 10000 * (*((_QWORD *)SelectiveSuspend + 86) + a1->TotalSystemSleepTimeMs);
  if ( (*((_DWORD *)SelectiveSuspend + 126) & 0x10) != 0 )
    v7 += a2 - *((_QWORD *)SelectiveSuspend + 81);
  KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v6);
  PhysicalPerformanceCounters->TimeSuspended100ns = v7;
}
