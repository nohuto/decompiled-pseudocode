/*
 * XREFs of RtlpSecMemFreeVirtualMemory @ 0x18008FA40
 * Callers:
 *     RtlpFreeHeap @ 0x18002D620 (RtlpFreeHeap.c)
 *     RtlpValidateHeap @ 0x180040D80 (RtlpValidateHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x180042E70 (RtlpDeCommitFreeBlock.c)
 *     RtlDestroyHeap @ 0x18008F580 (RtlDestroyHeap.c)
 *     RtlpDestroyHeapSegment @ 0x18008F96C (RtlpDestroyHeapSegment.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x18009D204 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpExtendHeap @ 0x18009FC30 (RtlpExtendHeap.c)
 *     RtlpReAllocateHeap @ 0x1800A18B0 (RtlpReAllocateHeap.c)
 *     RtlpCreateHeap @ 0x1800A7550 (RtlpCreateHeap.c)
 *     RtlpCreateLowFragHeap @ 0x1800A93BC (RtlpCreateLowFragHeap.c)
 *     RtlDebugDestroyHeap @ 0x18011F328 (RtlDebugDestroyHeap.c)
 * Callees:
 *     RtlpCallSecureMemoryCallbacks @ 0x18008FB2C (RtlpCallSecureMemoryCallbacks.c)
 *     ZwFreeVirtualMemory @ 0x180162050 (ZwFreeVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1801620F0 (ZwQueryVirtualMemory.c)
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
