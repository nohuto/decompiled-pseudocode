/*
 * XREFs of ViAllocateFromContiguousMemory @ 0x140B87E10
 * Callers:
 *     ViAllocateMapRegisterFile @ 0x140B87EAC (ViAllocateMapRegisterFile.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14024B8D0 (RtlFindClearBitsAndSet.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall ViAllocateFromContiguousMemory(__int64 a1, ULONG a2)
{
  __int64 v2; // rbx
  KSPIN_LOCK *v5; // rsi
  KIRQL v6; // bp
  ULONG ClearBitsAndSet; // eax

  v2 = 0LL;
  if ( !a1 || !*(_QWORD *)(a1 + 296) )
    return 0LL;
  v5 = (KSPIN_LOCK *)(a1 + 312);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 312));
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(a1 + 328), 1u, a2);
  if ( ClearBitsAndSet != -1 )
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 296) + 8LL * ClearBitsAndSet);
  KeReleaseSpinLock(v5, v6);
  return v2;
}
