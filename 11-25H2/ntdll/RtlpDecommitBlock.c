/*
 * XREFs of RtlpDecommitBlock @ 0x1800E1200
 * Callers:
 *     RtlpCollectFreeBlocks @ 0x180059C20 (RtlpCollectFreeBlocks.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlpLogHeapContractEvent @ 0x18009B2A8 (RtlpLogHeapContractEvent.c)
 *     RtlFlushSecureMemoryCache @ 0x1800E15A0 (RtlFlushSecureMemoryCache.c)
 *     RtlpLogHeapDecommit @ 0x1800E1620 (RtlpLogHeapDecommit.c)
 *     ZwFreeVirtualMemory @ 0x1801635E0 (ZwFreeVirtualMemory.c)
 */

int __fastcall RtlpDecommitBlock(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 v5; // rax
  char *v6; // rcx
  NTSTATUS v7; // edi
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  _DWORD *v13; // r8
  unsigned __int64 v14; // rdx
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp+10h] BYREF

  v3 = *(unsigned __int16 *)(a2 + 8);
  *(_BYTE *)(a2 + 10) &= 0xF8u;
  *(_BYTE *)(a2 + 15) = 0;
  if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
  {
    v13 = (_DWORD *)(a2 + 32);
    v14 = (unsigned __int64)(16 * v3 - 32) >> 2;
    if ( v14 )
    {
      if ( ((unsigned __int8)v13 & 4) != 0 )
      {
        --v14;
        *v13 = -17891602;
        v13 = (_DWORD *)(a2 + 36);
      }
      memset64(v13, 0xFEEEFEEEFEEEFEEEuLL, v14 >> 1);
      if ( (v14 & 1) != 0 )
        v13[v14 - 1] = -17891602;
    }
    *(_BYTE *)(a2 + 10) |= 4u;
  }
  v5 = RtlpHeapKey ^ *(_QWORD *)(a1 + 360);
  if ( !v5 )
  {
    v6 = (char *)((a2 + 4159) & 0xFFFFFFFFFFFFF000uLL);
    BaseAddress = v6;
    if ( v6 == (char *)(a2 + 80) )
    {
      v6 += 4096;
      BaseAddress = v6;
    }
    v5 = (a2 + 16 * (*(unsigned __int16 *)(a2 + 8) - 2LL)) & 0xFFFFFFFFFFFFF000uLL;
    if ( v5 > (unsigned __int64)v6 )
    {
      RegionSize = v5 - (_QWORD)v6;
      v7 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u);
      if ( v7 == -1073741755 && RtlFlushSecureMemoryCache(BaseAddress, RegionSize) )
        v7 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u);
      if ( v7 < 0 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        LODWORD(v5) = DbgPrint(
                        "RtlpHeapFreeVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n",
                        v7,
                        (const void *)a1,
                        BaseAddress,
                        RegionSize);
      }
      else
      {
        v8 = 2147353472LL;
        if ( RtlGetCurrentServiceSessionId() )
          v9 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v9 = 2147353472LL;
        if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapDecommit(a1, BaseAddress, RegionSize, 7LL);
        *(_QWORD *)(a1 + 664) += RegionSize;
        ++*(_DWORD *)(a1 + 628);
        ++*(_DWORD *)(a1 + 660);
        ++*(_DWORD *)(a1 + 644);
        if ( RtlGetCurrentServiceSessionId() )
          v10 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v10 = 2147353472LL;
        if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v8 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapContractEvent(
            a1,
            (__int64)BaseAddress,
            RegionSize,
            16LL * *(_QWORD *)(a1 + 192),
            0,
            0LL,
            (HANDLE)*(unsigned __int8 *)v8);
        }
        LODWORD(v5) = RtlGetCurrentServiceSessionId();
        v11 = 2147353482LL;
        if ( (_DWORD)v5 )
        {
          v5 = (unsigned __int64)NtCurrentPeb();
          v12 = *(_QWORD *)(v5 + 144) + 560LL;
        }
        else
        {
          v12 = 2147353482LL;
        }
        if ( *(_BYTE *)v12 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v11 = (__int64)NtCurrentPeb()->SharedData + 560;
          LODWORD(v5) = RtlpLogHeapContractEvent(
                          a1,
                          (__int64)BaseAddress,
                          RegionSize,
                          16LL * *(_QWORD *)(a1 + 192),
                          0,
                          0LL,
                          (HANDLE)*(unsigned __int8 *)v11);
        }
        *(_BYTE *)(a2 + 10) &= 0x13u;
        *(_BYTE *)(a2 + 10) |= 8u;
      }
    }
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    LODWORD(v5) = *(_DWORD *)(a1 + 136);
    *(_DWORD *)(a2 + 8) ^= v5;
  }
  return v5;
}
