/*
 * XREFs of RtlpDecommitBlock @ 0x180117590
 * Callers:
 *     RtlpCollectFreeBlocks @ 0x18000F7E0 (RtlpCollectFreeBlocks.c)
 * Callees:
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180028580 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlpLogHeapContractEvent @ 0x1800F20F0 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapDecommit @ 0x1801115D0 (RtlpLogHeapDecommit.c)
 */

int __fastcall RtlpDecommitBlock(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  _DWORD *v5; // r8
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  char *v8; // rcx
  NTSTATUS v9; // eax
  struct _PEB *v10; // rcx
  NTSTATUS v11; // edi
  _DWORD *SharedData; // rax
  __int64 v13; // rdi
  __int64 v14; // rcx
  _DWORD *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  _DWORD *v18; // rdx
  __int64 v19; // rdx
  _DWORD *v20; // rdx
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF
  char *v23; // [rsp+58h] [rbp+10h] BYREF

  v3 = *(unsigned __int16 *)(a2 + 8);
  *(_BYTE *)(a2 + 10) &= 0xF8u;
  *(_BYTE *)(a2 + 15) = 0;
  if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
  {
    v5 = (_DWORD *)(a2 + 32);
    v6 = (unsigned __int64)(16 * v3 - 32) >> 2;
    if ( v6 )
    {
      if ( ((unsigned __int8)v5 & 4) != 0 )
      {
        --v6;
        *v5 = -17891602;
        v5 = (_DWORD *)(a2 + 36);
      }
      memset64(v5, 0xFEEEFEEEFEEEFEEEuLL, v6 >> 1);
      if ( (v6 & 1) != 0 )
        v5[v6 - 1] = -17891602;
    }
    *(_BYTE *)(a2 + 10) |= 4u;
  }
  v7 = RtlpHeapKey ^ *(_QWORD *)(a1 + 360);
  if ( !v7 )
  {
    v8 = (char *)((a2 + 4159) & 0xFFFFFFFFFFFFF000uLL);
    v23 = v8;
    if ( v8 == (char *)(a2 + 80) )
    {
      v8 += 4096;
      v23 = v8;
    }
    v7 = (a2 + 16 * (*(unsigned __int16 *)(a2 + 8) - 2LL)) & 0xFFFFFFFFFFFFF000uLL;
    if ( v7 > (unsigned __int64)v8 )
    {
      v22 = v7 - (_QWORD)v8;
      v9 = RtlpSecMemFreeVirtualMemory((__int64)v8, (PVOID *)&v23, (ULONG_PTR *)&v22, 0x4000u);
      v10 = NtCurrentPeb();
      v11 = v9;
      if ( v9 < 0 )
      {
        if ( v10->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        LODWORD(v7) = DbgPrint(
                        "RtlpHeapFreeVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n",
                        v11,
                        (const void *)a1,
                        v23,
                        v22);
      }
      else
      {
        SharedData = v10->SharedData;
        v13 = 2147353472LL;
        if ( SharedData && *SharedData )
          v14 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v14 = 2147353472LL;
        if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapDecommit(a1, (__int64)v23, v22, 7);
        ++*(_DWORD *)(a1 + 636);
        ++*(_DWORD *)(a1 + 668);
        ++*(_DWORD *)(a1 + 652);
        *(_QWORD *)(a1 + 672) += v22;
        v15 = NtCurrentPeb()->SharedData;
        if ( v15 && *v15 )
          v16 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v16 = 2147353472LL;
        if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v13 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapContractEvent(
            a1,
            (__int64)v23,
            v22,
            16LL * *(_QWORD *)(a1 + 192),
            0,
            0LL,
            (HANDLE)*(unsigned __int8 *)v13);
        }
        v7 = (unsigned __int64)NtCurrentPeb();
        v17 = 2147353482LL;
        v18 = *(_DWORD **)(v7 + 144);
        if ( v18 && *v18 )
        {
          v7 = (unsigned __int64)NtCurrentPeb();
          v19 = *(_QWORD *)(v7 + 144) + 560LL;
        }
        else
        {
          v19 = 2147353482LL;
        }
        if ( *(_BYTE *)v19 )
        {
          v20 = NtCurrentPeb()->SharedData;
          if ( v20 && *v20 )
            v17 = (__int64)NtCurrentPeb()->SharedData + 560;
          LODWORD(v7) = RtlpLogHeapContractEvent(
                          a1,
                          (__int64)v23,
                          v22,
                          16LL * *(_QWORD *)(a1 + 192),
                          0,
                          0LL,
                          (HANDLE)*(unsigned __int8 *)v17);
        }
        *(_BYTE *)(a2 + 10) &= 0x13u;
        *(_BYTE *)(a2 + 10) |= 8u;
      }
    }
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    LODWORD(v7) = *(_DWORD *)(a1 + 136);
    *(_DWORD *)(a2 + 8) ^= v7;
  }
  return v7;
}
