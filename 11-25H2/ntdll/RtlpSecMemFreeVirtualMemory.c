/*
 * XREFs of RtlpSecMemFreeVirtualMemory @ 0x1800B8DC0
 * Callers:
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1800261B4 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpExtendHeap @ 0x180028BE0 (RtlpExtendHeap.c)
 *     RtlpReAllocateHeap @ 0x18002A860 (RtlpReAllocateHeap.c)
 *     RtlpCreateHeap @ 0x180036390 (RtlpCreateHeap.c)
 *     RtlpCreateLowFragHeap @ 0x1800381FC (RtlpCreateLowFragHeap.c)
 *     RtlpFreeHeap @ 0x1800560F0 (RtlpFreeHeap.c)
 *     RtlpValidateHeap @ 0x180094770 (RtlpValidateHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x180096B50 (RtlpDeCommitFreeBlock.c)
 *     RtlDestroyHeap @ 0x1800B8900 (RtlDestroyHeap.c)
 *     RtlpDestroyHeapSegment @ 0x1800B8CEC (RtlpDestroyHeapSegment.c)
 *     RtlDebugDestroyHeap @ 0x180120BF8 (RtlDebugDestroyHeap.c)
 * Callees:
 *     RtlpCallSecureMemoryCallbacks @ 0x1800B8EAC (RtlpCallSecureMemoryCallbacks.c)
 *     ZwFreeVirtualMemory @ 0x1801635E0 (ZwFreeVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall RtlpSecMemFreeVirtualMemory(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  unsigned int v4; // ebp
  unsigned int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h]
  __int128 v13; // [rsp+50h] [rbp-18h]

  v4 = a4;
  v7 = ZwFreeVirtualMemory(-1LL, a2, a3, a4);
  if ( v7 != -1073741755 )
    return v7;
  v8 = *a3;
  v9 = *a2;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( RtlpSecMemListHead == (_UNKNOWN *)&RtlpSecMemListHead )
    return v7;
  if ( !v8 )
  {
    if ( (int)ZwQueryVirtualMemory(-1LL, v9, 3LL, &v11, 48LL, 0LL) < 0 || HIDWORD(v11) == 0x10000 )
      return v7;
    v8 = v12;
  }
  if ( (unsigned __int8)RtlpCallSecureMemoryCallbacks(v9, v8) )
    return ZwFreeVirtualMemory(-1LL, a2, a3, v4);
  return v7;
}
