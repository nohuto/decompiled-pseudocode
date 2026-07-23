/*
 * XREFs of LdrEnsureMrdataHeapExists @ 0x180033910
 * Callers:
 *     RtlpAddVectoredHandler @ 0x180032D08 (RtlpAddVectoredHandler.c)
 *     RtlAddGrowableFunctionTable @ 0x1800335A0 (RtlAddGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x1800DC260 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x1800ECBF0 (RtlAddFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x1800F4C20 (RtlSetProtectedPolicy.c)
 * Callees:
 *     RtlpCreateHeap @ 0x1800248B0 (RtlpCreateHeap.c)
 *     RtlDestroyHeap @ 0x1800280C0 (RtlDestroyHeap.c)
 *     RtlProtectHeap @ 0x180028BA0 (RtlProtectHeap.c)
 *     LdrProtectMrdata @ 0x180033A80 (LdrProtectMrdata.c)
 *     LdrControlFlowGuardEnforced @ 0x1800366F0 (LdrControlFlowGuardEnforced.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     ZwAllocateVirtualMemory @ 0x180160350 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x180160410 (ZwFreeVirtualMemory.c)
 */

NTSTATUS LdrEnsureMrdataHeapExists()
{
  int v0; // eax
  NTSTATUS result; // eax
  char *Heap; // rax
  char *v3; // rbx
  _DWORD *v4; // rax
  void *v5; // rdi
  char *v6; // rcx
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp+10h] BYREF

  LOBYTE(v0) = LdrControlFlowGuardEnforced();
  if ( !v0 || LdrpMrdataHeap )
    return 0;
  BaseAddress = 0LL;
  RegionSize = LdrpAllocationGranularity;
  result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
  if ( result >= 0 )
  {
    Heap = RtlpCreateHeap(2u, BaseAddress, 0LL, 0LL, 0LL, 0LL, 1);
    v3 = Heap;
    if ( Heap )
    {
      v4 = RtlAllocateHeap(Heap, 0, 4uLL);
      v5 = v4;
      v6 = v3;
      if ( v4 )
      {
        *v4 = 0;
        RtlProtectHeap(v3, 1u);
        LdrProtectMrdata(0LL);
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        if ( !LdrpMrdataHeap )
        {
          LdrpMrdataHeapUnprotected = (__int64)v5;
          LdrpMrdataHeap = v3;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          LdrProtectMrdata(1LL);
          return 0;
        }
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        LdrProtectMrdata(1LL);
        RtlProtectHeap(v3, 0);
        RtlFreeHeap(v3, 0, v5);
        v6 = v3;
      }
      RtlDestroyHeap(v6);
    }
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    return LdrpMrdataHeap == 0LL ? 0xC0000017 : 0;
  }
  return result;
}
