/*
 * XREFs of EngFntCacheAlloc @ 0x140302ED0
 * Callers:
 *     <none>
 * Callees:
 *     EngFntCacheAllocInternal @ 0x1402687A8 (EngFntCacheAllocInternal.c)
 */

// local variable allocation has failed, the output may be wrong!
PVOID __stdcall EngFntCacheAlloc(ULONG ulFastCheckSum, ULONG cjSize)
{
  int v3; // [rsp+40h] [rbp+18h] BYREF

  return (PVOID)EngFntCacheAllocInternal(ulFastCheckSum, *(__int64 *)&cjSize, &v3);
}
