/*
 * XREFs of LdrEnsureMrdataHeapExists @ 0x180006F10
 * Callers:
 *     RtlpAddVectoredHandler @ 0x180006308 (RtlpAddVectoredHandler.c)
 *     RtlAddGrowableFunctionTable @ 0x180006BA0 (RtlAddGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x1800E0D10 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x1800F1F70 (RtlAddFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x1800F9EC0 (RtlSetProtectedPolicy.c)
 * Callees:
 *     LdrProtectMrdata @ 0x180007080 (LdrProtectMrdata.c)
 *     LdrControlFlowGuardEnforced @ 0x180009CF0 (LdrControlFlowGuardEnforced.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlDestroyHeap @ 0x18008F580 (RtlDestroyHeap.c)
 *     RtlProtectHeap @ 0x18009C280 (RtlProtectHeap.c)
 *     RtlpCreateHeap @ 0x1800A7550 (RtlpCreateHeap.c)
 *     ZwAllocateVirtualMemory @ 0x180161F90 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x180162050 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall LdrEnsureMrdataHeapExists(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 Heap; // rax
  __int64 v4; // rbx
  _DWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  if ( !(unsigned int)LdrControlFlowGuardEnforced(a1, a2) || LdrpMrdataHeap )
    return 0LL;
  v9 = 0LL;
  v10 = LdrpAllocationGranularity;
  result = ZwAllocateVirtualMemory(-1LL, &v9, 0LL, &v10, 0x2000, 4);
  if ( (int)result >= 0 )
  {
    Heap = RtlpCreateHeap(2, v9, 0, 0, 0LL, 0LL, 1);
    v4 = Heap;
    if ( Heap )
    {
      v5 = (_DWORD *)RtlAllocateHeap(Heap, 0LL, 4LL);
      v7 = (__int64)v5;
      v8 = v4;
      if ( v5 )
      {
        LOBYTE(v6) = 1;
        *v5 = 0;
        RtlProtectHeap(v4, v6);
        LdrProtectMrdata(0LL);
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        if ( !LdrpMrdataHeap )
        {
          LdrpMrdataHeapUnprotected = v7;
          LdrpMrdataHeap = v4;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          LdrProtectMrdata(1LL);
          return 0LL;
        }
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        LdrProtectMrdata(1LL);
        RtlProtectHeap(v4, 0LL);
        RtlFreeHeap(v4, 0LL, v7);
        v8 = v4;
      }
      RtlDestroyHeap(v8);
    }
    ZwFreeVirtualMemory(-1LL, &v9, &v10, 0x8000LL);
    return LdrpMrdataHeap == 0 ? 0xC0000017 : 0;
  }
  return result;
}
