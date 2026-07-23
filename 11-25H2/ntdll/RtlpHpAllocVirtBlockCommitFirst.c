/*
 * XREFs of RtlpHpAllocVirtBlockCommitFirst @ 0x1800261B4
 * Callers:
 *     RtlpAllocateHeap @ 0x180026310 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpGetHeapProtection @ 0x180025250 (RtlpGetHeapProtection.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x1800B8DC0 (RtlpSecMemFreeVirtualMemory.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 */

char *__fastcall RtlpHpAllocVirtBlockCommitFirst(_DWORD *a1, _QWORD *a2, __int64 a3, ULONG_PTR *a4)
{
  char *v4; // rbx
  ULONG Protect; // eax
  __int64 v8; // rcx
  ULONG_PTR v9; // rdx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h] BYREF
  char *v13; // [rsp+40h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp+28h] BYREF
  __int64 v15; // [rsp+80h] [rbp+30h] BYREF

  v15 = a3;
  v4 = 0LL;
  RegionSize = *a2 + a3 + 4096;
  BaseAddress = 0LL;
  Protect = RtlpGetHeapProtection(a1, 1);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, Protect) >= 0 )
  {
    if ( v15 )
      RtlpSecMemFreeVirtualMemory(v8, &BaseAddress, &v15, 0x4000LL);
    v12 = 4096LL;
    v13 = (char *)BaseAddress + RegionSize - 4096;
    RtlpSecMemFreeVirtualMemory(v13, &v13, &v12, 0x4000LL);
    v9 = RegionSize;
    v4 = (char *)BaseAddress + v15;
    *a2 = RegionSize - v12 - v15;
    *a4 = v9;
  }
  return v4;
}
