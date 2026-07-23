/*
 * XREFs of IopIoRingGetAvailableCqSlots @ 0x140594750
 * Callers:
 *     NtSubmitIoRing @ 0x1404BEE40 (NtSubmitIoRing.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall IopIoRingGetAvailableCqSlots(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  KIRQL v3; // al
  __int64 v4; // r10
  __int64 v5; // rcx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned int v8; // ebx

  v1 = (KSPIN_LOCK *)(a1 + 104);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 104));
  v4 = *(_QWORD *)(a1 + 120);
  v5 = *(_QWORD *)(a1 + 112) + (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL) - **(_DWORD **)(a1 + 80));
  v6 = *(unsigned int *)(a1 + 28);
  v7 = v5 - v4;
  if ( v7 < v6 )
    v8 = v6 - v7;
  else
    v8 = 0;
  KeReleaseSpinLock(v1, v3);
  return v8;
}
