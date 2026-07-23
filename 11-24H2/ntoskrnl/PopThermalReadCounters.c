/*
 * XREFs of PopThermalReadCounters @ 0x1409F73E8
 * Callers:
 *     PoThermalCounterSetCallback @ 0x1409F7180 (PoThermalCounterSetCallback.c)
 * Callees:
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     IoCancelIrp @ 0x140408D50 (IoCancelIrp.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopThermalReadCounters(__int64 a1, char a2, unsigned int *a3)
{
  unsigned int v3; // esi
  signed __int64 *v7; // rdi
  IRP *v8; // rcx
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = 0;
  if ( *(_BYTE *)(a1 + 228) )
    goto LABEL_2;
  if ( (a2 & 9) == 0 )
    goto LABEL_2;
  v7 = (signed __int64 *)(a1 + 432);
  PopAcquireRwLockExclusive((unsigned __int64 *)(a1 + 432));
  KeResetEvent((PRKEVENT)(a1 + 472));
  v8 = *(IRP **)(a1 + 56);
  *(_DWORD *)(a1 + 112) = 0;
  IoCancelIrp(v8);
  PopReleaseRwLock(v7);
  Object[0] = (PVOID)(a1 + 472);
  Object[1] = (PVOID)(a1 + 448);
  if ( KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL) )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
LABEL_2:
    PopAcquireRwLockExclusive((unsigned __int64 *)(a1 + 432));
    *a3 = *(_DWORD *)(a1 + 128) / 0xAu;
    a3[3] = *(_DWORD *)(a1 + 128);
    a3[1] = *(_DWORD *)(a1 + 80);
    a3[2] = *(_DWORD *)(a1 + 212);
    PopReleaseRwLock((signed __int64 *)(a1 + 432));
  }
  return v3;
}
