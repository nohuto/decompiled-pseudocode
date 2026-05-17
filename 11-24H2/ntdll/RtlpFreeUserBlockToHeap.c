/*
 * XREFs of RtlpFreeUserBlockToHeap @ 0x180096530
 * Callers:
 *     RtlpFreeUserBlock @ 0x18002B950 (RtlpFreeUserBlock.c)
 *     RtlpLowFragHeapFlushCaches @ 0x180095D9C (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 *     ZwQueryVirtualMemory @ 0x1801620F0 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x180162690 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall RtlpFreeUserBlockToHeap(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdx
  unsigned int v5; // esi
  bool v6; // zf
  _OWORD v8[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v9; // [rsp+50h] [rbp-38h]
  __int64 v10; // [rsp+98h] [rbp+10h] BYREF
  int v11; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v12; // [rsp+A8h] [rbp+20h] BYREF

  v12 = 0LL;
  v11 = 0;
  v10 = 0LL;
  if ( *(_BYTE *)(a2 + 17) )
  {
    v4 = 1LL << *(_BYTE *)(a2 + 16);
    v5 = 64;
    v10 = 4096LL;
    if ( v4 > 0xF0000 )
      v4 = 983040LL;
    v6 = (*(_DWORD *)(a1 + 112) & 0x40000) == 0;
    v12 = a2 + v4 + *(unsigned __int16 *)(a2 + 18);
    if ( v6 )
      v5 = 4;
    memset(v8, 0, sizeof(v8));
    v9 = 0LL;
    if ( !v6
      && ((int)ZwQueryVirtualMemory(-1LL, a1, 0LL, v8, 48LL, 0LL) < 0
       || (BYTE4(v9) & 0x60) == 0
       || *(_QWORD *)&v8[0] != a1) )
    {
      RtlpLogHeapFailure(0, a1, 1LL, DWORD1(v9), 0LL, 0LL);
      v5 = 4;
    }
    ZwProtectVirtualMemory(-1LL, &v12, &v10, v5, &v11);
  }
  return RtlFreeHeap(a1, 0x800000u, a2);
}
