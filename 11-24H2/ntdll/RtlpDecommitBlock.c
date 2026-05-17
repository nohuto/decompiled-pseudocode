/*
 * XREFs of RtlpDecommitBlock @ 0x1800E4140
 * Callers:
 *     RtlpCollectFreeBlocks @ 0x180031150 (RtlpCollectFreeBlocks.c)
 * Callees:
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 *     RtlpLogHeapContractEvent @ 0x1800475C8 (RtlpLogHeapContractEvent.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlFlushSecureMemoryCache @ 0x1800E44E0 (RtlFlushSecureMemoryCache.c)
 *     RtlpLogHeapDecommit @ 0x1800E4560 (RtlpLogHeapDecommit.c)
 *     ZwFreeVirtualMemory @ 0x180162050 (ZwFreeVirtualMemory.c)
 */

unsigned __int64 __fastcall RtlpDecommitBlock(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 result; // rax
  char *v6; // rcx
  int v7; // edi
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  _DWORD *v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  char *v16; // [rsp+58h] [rbp+10h] BYREF

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
  result = RtlpHeapKey ^ *(_QWORD *)(a1 + 360);
  if ( !result )
  {
    v6 = (char *)((a2 + 4159) & 0xFFFFFFFFFFFFF000uLL);
    v16 = v6;
    if ( v6 == (char *)(a2 + 80) )
    {
      v6 += 4096;
      v16 = v6;
    }
    result = (a2 + 16 * (*(unsigned __int16 *)(a2 + 8) - 2LL)) & 0xFFFFFFFFFFFFF000uLL;
    if ( result > (unsigned __int64)v6 )
    {
      v15 = result - (_QWORD)v6;
      v7 = ZwFreeVirtualMemory(-1LL, &v16, &v15, 0x4000LL);
      if ( v7 == -1073741755 && (unsigned __int8)RtlFlushSecureMemoryCache(v16, v15) )
        v7 = ZwFreeVirtualMemory(-1LL, &v16, &v15, 0x4000LL);
      if ( v7 < 0 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        result = DbgPrint(
                   "RtlpHeapFreeVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n",
                   v7,
                   (const void *)a1,
                   v16,
                   v15);
      }
      else
      {
        v8 = 2147353472LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v9 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v9 = 2147353472LL;
        if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapDecommit(a1, v16, v15, 7LL);
        *(_QWORD *)(a1 + 664) += v15;
        ++*(_DWORD *)(a1 + 628);
        ++*(_DWORD *)(a1 + 660);
        ++*(_DWORD *)(a1 + 644);
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v10 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v10 = 2147353472LL;
        if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v8 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapContractEvent(a1, (__int64)v16, v15, 16LL * *(_QWORD *)(a1 + 192), 0, 0LL, *(unsigned __int8 *)v8);
        }
        result = (unsigned __int64)RtlGetCurrentServiceSessionId();
        v11 = 2147353482LL;
        if ( (_DWORD)result )
        {
          result = (unsigned __int64)NtCurrentPeb();
          v12 = *(_QWORD *)(result + 144) + 560LL;
        }
        else
        {
          v12 = 2147353482LL;
        }
        if ( *(_BYTE *)v12 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v11 = (__int64)NtCurrentPeb()->SharedData + 560;
          result = RtlpLogHeapContractEvent(
                     a1,
                     (__int64)v16,
                     v15,
                     16LL * *(_QWORD *)(a1 + 192),
                     0,
                     0LL,
                     *(unsigned __int8 *)v11);
        }
        *(_BYTE *)(a2 + 10) &= 0x13u;
        *(_BYTE *)(a2 + 10) |= 8u;
      }
    }
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    result = *(unsigned int *)(a1 + 136);
    *(_DWORD *)(a2 + 8) ^= result;
  }
  return result;
}
