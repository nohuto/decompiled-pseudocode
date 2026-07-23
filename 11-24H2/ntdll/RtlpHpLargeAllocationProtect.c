/*
 * XREFs of RtlpHpLargeAllocationProtect @ 0x180156338
 * Callers:
 *     RtlpHpHeapProtect @ 0x180156174 (RtlpHpHeapProtect.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1801604B0 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x180160A50 (ZwProtectVirtualMemory.c)
 */

int __fastcall RtlpHpLargeAllocationProtect(__int64 a1, ULONG a2)
{
  int result; // eax
  __int128 v4; // [rsp+30h] [rbp-38h] BYREF
  __int128 v5; // [rsp+40h] [rbp-28h]
  __int128 v6; // [rsp+50h] [rbp-18h]
  ULONG OldProtect; // [rsp+70h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+20h] BYREF

  OldProtect = 0;
  BaseAddress = (PVOID)(*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFF0000uLL);
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  result = ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, MemoryBasicInformation, &v4, 0x30uLL, 0LL);
  if ( result >= 0 )
  {
    RegionSize = *((_QWORD *)&v5 + 1);
    return ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, a2, &OldProtect);
  }
  return result;
}
