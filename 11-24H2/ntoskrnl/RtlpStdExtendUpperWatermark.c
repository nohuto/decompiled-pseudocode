/*
 * XREFs of RtlpStdExtendUpperWatermark @ 0x1405E5B2C
 * Callers:
 *     RtlpStdGetRecordedStackTraceIndex @ 0x14048514C (RtlpStdGetRecordedStackTraceIndex.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ZwAllocateVirtualMemory @ 0x1406A76B0 (ZwAllocateVirtualMemory.c)
 */

KSPIN_LOCK __fastcall RtlpStdExtendUpperWatermark(KSPIN_LOCK *SpinLock, void *a2)
{
  KSPIN_LOCK v2; // rsi
  KSPIN_LOCK v4; // rdx
  char *v5; // rcx
  KSPIN_LOCK v6; // rax
  KSPIN_LOCK v7; // rdi
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp+10h] BYREF

  BaseAddress = a2;
  v2 = 0LL;
  RegionSize = 0LL;
  *((_BYTE *)SpinLock + 8) = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v4 = SpinLock[21];
  v5 = (char *)SpinLock[19];
  BaseAddress = v5;
  v6 = v4 - 8;
  if ( *((_BYTE *)SpinLock + 128) )
  {
    if ( v6 >= SpinLock[20] )
    {
      v7 = v4 - 8;
LABEL_8:
      ++*((_DWORD *)SpinLock + 45);
      v2 = v7;
      SpinLock[21] = v7;
    }
  }
  else
  {
    v7 = v4 - 8;
    if ( v6 >= (unsigned __int64)v5 )
      goto LABEL_8;
    RegionSize = 4096LL;
    if ( (unsigned __int64)(v5 - 4096) > SpinLock[18] )
    {
      BaseAddress = v5 - 4096;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
      {
        SpinLock[19] = (KSPIN_LOCK)BaseAddress;
        goto LABEL_8;
      }
    }
  }
  KeReleaseSpinLock(SpinLock, *((_BYTE *)SpinLock + 8));
  return v2;
}
