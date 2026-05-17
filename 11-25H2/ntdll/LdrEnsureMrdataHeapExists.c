/*
 * XREFs of LdrEnsureMrdataHeapExists @ 0x1800240BC
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x180024410 (RtlAddGrowableFunctionTable.c)
 *     RtlpAddVectoredHandler @ 0x180024C88 (RtlpAddVectoredHandler.c)
 *     RtlInstallFunctionTableCallback @ 0x1800DE0B0 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x1800F3AE0 (RtlAddFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x1800FBDC0 (RtlSetProtectedPolicy.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x180020A50 (LdrProtectMrdata.c)
 *     LdrControlFlowGuardEnforced @ 0x180023510 (LdrControlFlowGuardEnforced.c)
 *     RtlProtectHeap @ 0x180024F60 (RtlProtectHeap.c)
 *     RtlpCreateHeap @ 0x180036390 (RtlpCreateHeap.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlDestroyHeap @ 0x1800B8900 (RtlDestroyHeap.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1801635E0 (ZwFreeVirtualMemory.c)
 */

__int64 LdrEnsureMrdataHeapExists()
{
  __int64 result; // rax
  void *Heap; // rax
  __int64 v2; // rbx
  _DWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  if ( !LdrControlFlowGuardEnforced() || LdrpMrdataHeap )
    return 0LL;
  v7 = 0LL;
  v8 = LdrpAllocationGranularity;
  result = ZwAllocateVirtualMemory(-1LL, &v7, 0LL, &v8, 0x2000, 4);
  if ( (int)result >= 0 )
  {
    Heap = (void *)RtlpCreateHeap(2, v7, 0, 0, 0LL, 0LL, 1);
    v2 = (__int64)Heap;
    if ( Heap )
    {
      v3 = (_DWORD *)RtlAllocateHeap(Heap);
      v5 = (__int64)v3;
      v6 = v2;
      if ( v3 )
      {
        LOBYTE(v4) = 1;
        *v3 = 0;
        RtlProtectHeap(v2, v4);
        LdrProtectMrdata(0);
        RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock);
        if ( !LdrpMrdataHeap )
        {
          LdrpMrdataHeapUnprotected = v5;
          LdrpMrdataHeap = v2;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          LdrProtectMrdata(1);
          return 0LL;
        }
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        LdrProtectMrdata(1);
        RtlProtectHeap(v2, 0LL);
        RtlFreeHeap(v2, 0LL, v5);
        v6 = v2;
      }
      RtlDestroyHeap(v6);
    }
    ZwFreeVirtualMemory(-1LL, &v7, &v8, 0x8000LL);
    return LdrpMrdataHeap == 0 ? 0xC0000017 : 0;
  }
  return result;
}
