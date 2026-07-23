/*
 * XREFs of RtlpFreeUserBlockToHeap @ 0x180001A30
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x18000129C (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeUserBlock @ 0x180054420 (RtlpFreeUserBlock.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x180163C20 (ZwProtectVirtualMemory.c)
 */

LOGICAL __fastcall RtlpFreeUserBlockToHeap(_DWORD *BaseAddress, _BYTE *a2)
{
  unsigned __int64 v4; // rdx
  ULONG v5; // esi
  bool v6; // zf
  _OWORD MemoryInformation[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v9; // [rsp+50h] [rbp-38h]
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+10h] BYREF
  ULONG OldProtect; // [rsp+A0h] [rbp+18h] BYREF
  PVOID BaseAddressa; // [rsp+A8h] [rbp+20h] BYREF

  BaseAddressa = 0LL;
  OldProtect = 0;
  RegionSize = 0LL;
  if ( a2[17] )
  {
    v4 = 1LL << a2[16];
    v5 = 64;
    RegionSize = 4096LL;
    if ( v4 > 0xF0000 )
      v4 = 983040LL;
    v6 = (BaseAddress[28] & 0x40000) == 0;
    BaseAddressa = &a2[v4 + *((unsigned __int16 *)a2 + 9)];
    if ( v6 )
      v5 = 4;
    memset(MemoryInformation, 0, sizeof(MemoryInformation));
    v9 = 0LL;
    if ( !v6
      && (ZwQueryVirtualMemory(
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            BaseAddress,
            MemoryBasicInformation,
            MemoryInformation,
            0x30uLL,
            0LL) < 0
       || (BYTE4(v9) & 0x60) == 0
       || *(_DWORD **)&MemoryInformation[0] != BaseAddress) )
    {
      RtlpLogHeapFailure(0, (_DWORD)BaseAddress, 1, DWORD1(v9), 0LL, 0LL);
      v5 = 4;
    }
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, v5, &OldProtect);
  }
  return RtlFreeHeap(BaseAddress, 0x800000u, a2);
}
