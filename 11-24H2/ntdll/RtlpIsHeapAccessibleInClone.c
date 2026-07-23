/*
 * XREFs of RtlpIsHeapAccessibleInClone @ 0x18010ED38
 * Callers:
 *     RtlUnlockHeapManagerForCloning @ 0x18013FE80 (RtlUnlockHeapManagerForCloning.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1801604B0 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall RtlpIsHeapAccessibleInClone(PVOID BaseAddress)
{
  unsigned int v2; // ebx
  _BYTE v4[32]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v5; // [rsp+58h] [rbp-20h]

  memset(v4, 0, sizeof(v4));
  v5 = 0LL;
  v2 = 0;
  if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, MemoryBasicInformation, v4, 0x30uLL, 0LL) >= 0
    && (_DWORD)v5 == 4096
    && (*((_DWORD *)BaseAddress + 38) == -285217025 || *((_DWORD *)BaseAddress + 4) == -571548178) )
  {
    return 1;
  }
  return v2;
}
