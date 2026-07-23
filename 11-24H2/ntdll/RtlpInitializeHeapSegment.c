/*
 * XREFs of RtlpInitializeHeapSegment @ 0x180025C40
 * Callers:
 *     RtlpExtendHeap @ 0x18000CB60 (RtlpExtendHeap.c)
 *     RtlpCreateHeap @ 0x1800248B0 (RtlpCreateHeap.c)
 * Callees:
 *     RtlpInsertFreeBlock @ 0x18000FC70 (RtlpInsertFreeBlock.c)
 *     RtlpLogHeapCommit @ 0x1800235BC (RtlpLogHeapCommit.c)
 *     RtlpGetHeapProtection @ 0x1800288C0 (RtlpGetHeapProtection.c)
 *     RtlLogStackBackTraceEx @ 0x180030DDC (RtlLogStackBackTraceEx.c)
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x1800DCC00 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpCreateUCREntry @ 0x1801173C0 (RtlpCreateUCREntry.c)
 *     ZwAllocateVirtualMemory @ 0x180160350 (ZwAllocateVirtualMemory.c)
 */

char __fastcall RtlpInitializeHeapSegment(
        char *BaseAddress,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        char *BaseAddressa,
        unsigned __int64 a8)
{
  unsigned __int64 v9; // r15
  __int64 v12; // rsi
  char *v13; // r8
  signed __int64 v14; // rsi
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  ULONG Protect; // eax
  __int64 v19; // rcx
  __int64 v20; // r15
  __int16 v21; // ax
  __int64 v22; // rdx
  __int64 v23; // rdx
  unsigned __int64 v24; // rsi
  char *v26; // r8
  _QWORD *v27; // rdi
  __int64 *v28; // rax
  ULONG_PTR RegionSize[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int NtGlobalFlag; // [rsp+88h] [rbp+48h]
  __int64 v31; // [rsp+98h] [rbp+58h]

  RegionSize[0] = 0LL;
  v9 = a8;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  if ( a8 - a6 > 0xFFFFF000 )
    return 0;
  v12 = a3 + 15;
  v13 = BaseAddressa;
  v14 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
  v31 = (__int64)(a8 - a6) / 4096;
  v15 = v14 + a2;
  v16 = v14 + a2 + 80;
  a8 = v14 >> 4;
  if ( v16 >= (unsigned __int64)BaseAddressa )
  {
    if ( v16 < v9 )
    {
      v17 = *((_QWORD *)BaseAddress + 72) - *((_QWORD *)BaseAddress + 84);
      RegionSize[0] = (v15 - (_QWORD)BaseAddressa + 4111) & 0xFFFFFFFFFFFFF000uLL;
      if ( (unsigned int)RtlpHpHeapCheckCommitLimit(RegionSize[0], v17, BaseAddress, BaseAddress + 376) )
      {
        Protect = RtlpGetHeapProtection(BaseAddress);
        if ( ZwAllocateVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               (PVOID *)&BaseAddressa,
               0LL,
               RegionSize,
               0x1000u,
               Protect) >= 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v19 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v19 = 2147353472LL;
          if ( *(_BYTE *)v19 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapCommit((__int64)BaseAddress, (__int64)BaseAddressa, RegionSize[0], 3);
          v13 = &BaseAddressa[RegionSize[0]];
          BaseAddressa += RegionSize[0];
          goto LABEL_13;
        }
      }
      ++*((_DWORD *)BaseAddress + 160);
    }
    return 0;
  }
LABEL_13:
  *(_WORD *)(a2 + 10) = 1;
  *(_BYTE *)(a2 + 15) = 1;
  v20 = (((__int64)(v9 - (_QWORD)v13) >> 63) & 0xFFF) + v9 - (_QWORD)v13;
  *(_WORD *)(a2 + 8) = a8;
  *(_WORD *)(a2 + 12) = *((_WORD *)BaseAddress + 70);
  if ( (NtGlobalFlag & 0x1000) != 0 )
  {
    v21 = RtlLogStackBackTraceEx(1LL);
    LODWORD(v13) = (_DWORD)BaseAddressa;
    *(_WORD *)(a2 + 88) = v21;
  }
  *(_DWORD *)(a2 + 80) = 0;
  *(_DWORD *)(a2 + 20) = a5;
  *(_QWORD *)(a2 + 40) = BaseAddress;
  *(_DWORD *)(a2 + 56) = v31;
  v22 = (unsigned int)((_DWORD)v31 << 12);
  *(_QWORD *)(a2 + 72) = a6 + v22;
  *(_DWORD *)(a2 + 16) = -1114130;
  *(_QWORD *)(a2 + 48) = a6;
  *(_QWORD *)(a2 + 64) = v15;
  *((_QWORD *)BaseAddress + 72) += v22;
  *((_QWORD *)BaseAddress + 71) += v22;
  *(_QWORD *)(a2 + 104) = a2 + 96;
  *(_QWORD *)(a2 + 96) = a2 + 96;
  *(_BYTE *)(a2 + 14) = *(_QWORD *)(a2 + 40) != a2;
  *(_WORD *)(v15 + 12) = *((_WORD *)BaseAddress + 70) ^ *(_WORD *)(a2 + 8);
  v23 = *(_QWORD *)(a2 + 40);
  if ( v23 == a2 )
  {
    LOBYTE(v24) = 0;
  }
  else
  {
    v24 = ((unsigned __int64)v14 >> 16) + 1;
    if ( v24 >= 0xFE )
    {
      RtlpLogHeapFailure(3, v23, v15, a2, 0LL, 0LL);
      LODWORD(v13) = (_DWORD)BaseAddressa;
    }
  }
  *(_BYTE *)(v15 + 14) = v24;
  RtlpCreateUCREntry((_DWORD)BaseAddress, a2, (_DWORD)v13 - 48, v20 & 0xFFFFF000, v15, (__int64)RegionSize);
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    *(_DWORD *)(a2 + 8) ^= *((_DWORD *)BaseAddress + 34);
  }
  if ( RegionSize[0] )
    RtlpInsertFreeBlock((unsigned __int64)BaseAddress, v15, RegionSize[0]);
  v26 = BaseAddress + 288;
  v27 = (_QWORD *)(a2 + 24);
  v28 = (__int64 *)*((_QWORD *)BaseAddress + 37);
  if ( (char *)*v28 == BaseAddress + 288 )
  {
    *v27 = v26;
    v27[1] = v28;
    *v28 = (__int64)v27;
    *((_QWORD *)BaseAddress + 37) = v27;
  }
  else
  {
    RtlpLogHeapFailure(13, 0, (_DWORD)v26, 0, *v28, 0LL);
  }
  ++*((_DWORD *)BaseAddress + 152);
  return 1;
}
