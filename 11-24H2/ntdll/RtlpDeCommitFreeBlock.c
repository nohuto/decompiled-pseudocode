/*
 * XREFs of RtlpDeCommitFreeBlock @ 0x180010840
 * Callers:
 *     RtlpGrowBlockInPlace @ 0x18000D610 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x18000DD00 (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x18000EB10 (RtlpCoalesceFreeBlocks.c)
 *     RtlpValidateHeapSegment @ 0x1800222F8 (RtlpValidateHeapSegment.c)
 *     RtlpFreeHeap @ 0x18005A020 (RtlpFreeHeap.c)
 *     RtlpCoalesceHeap @ 0x180106F80 (RtlpCoalesceHeap.c)
 *     RtlpAllocateHeap @ 0x1801159A0 (RtlpAllocateHeap.c)
 *     RtlZeroHeap @ 0x180142320 (RtlZeroHeap.c)
 * Callees:
 *     RtlpCoalesceFreeBlocks @ 0x18000EB10 (RtlpCoalesceFreeBlocks.c)
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     RtlpCollectFreeBlocks @ 0x18000F7E0 (RtlpCollectFreeBlocks.c)
 *     RtlpInsertFreeBlock @ 0x18000FC70 (RtlpInsertFreeBlock.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180028580 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlpInsertUCRBlock @ 0x1800DB980 (RtlpInsertUCRBlock.c)
 *     RtlpRemoveUCRBlock @ 0x1800E311C (RtlpRemoveUCRBlock.c)
 *     RtlpLogHeapContractEvent @ 0x1800F20F0 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapDecommit @ 0x1801115D0 (RtlpLogHeapDecommit.c)
 *     RtlpCreateUCREntry @ 0x1801173C0 (RtlpCreateUCREntry.c)
 *     RtlpReportHeapFailure @ 0x18011D71C (RtlpReportHeapFailure.c)
 */

void __fastcall RtlpDeCommitFreeBlock(_QWORD *BaseAddress, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  char v4; // r13
  bool v5; // zf
  unsigned __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rsi
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  _QWORD *v26; // rcx
  _QWORD *v27; // r15
  __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  __int64 v30; // r12
  __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  _BYTE *v34; // r15
  __int64 v35; // rdi
  unsigned __int64 v36; // rdi
  bool v37; // cc
  _QWORD *v38; // rdx
  unsigned __int64 v39; // rdi
  unsigned __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // r15
  __int64 v43; // rdi
  __int64 v44; // rcx
  __int64 v45; // rcx
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rcx
  __int64 v48; // r12
  __int64 v49; // rcx
  _BYTE *v50; // r15
  __int64 v51; // rdi
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rdi
  _QWORD *v54; // rdx
  unsigned __int64 v55; // rdi
  unsigned __int64 v56; // r8
  _DWORD *SharedData; // rcx
  __int64 v58; // rcx
  __int64 v59; // rdi
  _DWORD *v60; // rcx
  __int64 v61; // rcx
  int v62[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v63; // [rsp+48h] [rbp-30h]
  __int64 v64; // [rsp+50h] [rbp-28h]
  unsigned __int64 v65; // [rsp+58h] [rbp-20h] BYREF
  unsigned __int64 v66; // [rsp+60h] [rbp-18h]
  unsigned __int64 v67; // [rsp+B0h] [rbp+38h] BYREF
  unsigned __int64 v68; // [rsp+C0h] [rbp+48h] BYREF
  char v69; // [rsp+C8h] [rbp+50h]

  v69 = a4;
  v68 = a3;
  v4 = 0;
  v5 = RtlpHeapKey == BaseAddress[45];
  v7 = a3;
  v65 = 0LL;
  v8 = a2;
  v64 = 0LL;
  if ( !v5 )
    goto LABEL_2;
  if ( a4 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 8) != 0 )
    {
      --*((_DWORD *)BaseAddress + 167);
      v14 = (a2 + 4159) & 0xFFFFFFFFFFFFF000uLL;
      v5 = v14 == a2 + 80;
      v15 = v14 + 4096;
      if ( !v5 )
        v15 = v14;
      v16 = (v8 + 16 * (*(unsigned __int16 *)(v8 + 8) - 2LL)) & 0xFFFFFFFFFFFFF000uLL;
      if ( v16 > v15 )
        BaseAddress[84] -= v16 - v15;
    }
    v12 = v8;
    goto LABEL_19;
  }
  if ( a3 < BaseAddress[22] )
  {
LABEL_2:
    RtlpInsertFreeBlock((unsigned __int64)BaseAddress, a2, a3);
    return;
  }
  v10 = a3 + BaseAddress[24];
  if ( v10 < BaseAddress[23] || v10 < BaseAddress[72] >> (*((_BYTE *)BaseAddress + 696) + 4) )
  {
    a2 = v8;
    goto LABEL_2;
  }
  v11 = RtlpCoalesceFreeBlocks(BaseAddress, v8, &v68, 0);
  v7 = v68;
  v12 = v11;
  if ( v68 - 257 <= 0xFDFF )
  {
    RtlpInsertFreeBlock((unsigned __int64)BaseAddress, v11, v68);
    v13 = BaseAddress[72] - 16LL * BaseAddress[24];
    if ( v13 < BaseAddress[85] - (BaseAddress[85] >> 4) && v13 > BaseAddress[86] - (BaseAddress[86] >> 2) )
    {
      RtlpCollectFreeBlocks((unsigned __int64)BaseAddress);
      BaseAddress[86] = v13;
      BaseAddress[85] = v13;
    }
    return;
  }
LABEL_19:
  v17 = *(unsigned __int8 *)(v8 + 14);
  if ( (_BYTE)v17 )
    v18 = (_QWORD *)((v8 & 0xFFFFFFFFFFFF0000uLL) - (v17 << 16) + 0x10000);
  else
    v18 = BaseAddress;
  v19 = v12 + 16 * v7;
  v66 = v19;
  if ( *(_BYTE *)(v19 + 15) == 3 )
  {
    v20 = v19 + 16;
    RtlpRemoveUCRBlock(BaseAddress, v19 + 16);
    v21 = *(_QWORD *)(v20 + 32);
    v22 = *(_QWORD *)(v20 + 40);
    --*((_DWORD *)v18 + 21);
    v64 = v21;
    *((_DWORD *)v18 + 20) -= *(_QWORD *)(v20 + 40) >> 12;
    v23 = *(_QWORD *)(v20 + 40) + BaseAddress[72];
    --*((_DWORD *)BaseAddress + 153);
    BaseAddress[72] = v23;
    v24 = *(_QWORD *)(v20 + 40);
    v63 = v22;
    if ( v24 >= 0xFF000 )
      BaseAddress[73] -= v24;
    v19 = v66;
    v4 = 1;
    v7 += (*(_QWORD *)(v20 + 40) >> 4) + 64LL;
    v68 = v7;
  }
  else
  {
    v63 = 0LL;
  }
  if ( *((_WORD *)BaseAddress + 70) != *(_WORD *)(v12 + 12) )
    goto LABEL_95;
  v25 = (unsigned __int64)(v18 + 12);
  *(_QWORD *)v62 = v12;
  v26 = (_QWORD *)v18[12];
  if ( v18 + 12 == v26 )
  {
LABEL_31:
    v27 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      v27 = v26 - 2;
      if ( v26[2] + v26[3] == v12 )
        break;
      v26 = (_QWORD *)*v26;
      if ( (_QWORD *)v25 == v26 )
        goto LABEL_31;
    }
  }
  if ( a4 && !v27 )
  {
LABEL_95:
    v25 = (v12 + 4159) & 0xFFFFFFFFFFFFF000uLL;
    *(_QWORD *)v62 = v25;
    if ( v25 == v12 + 80 )
    {
      v25 += 4096LL;
      *(_QWORD *)v62 = v25;
    }
    v45 = 16 * v7;
    if ( !v4 )
      v45 -= 32LL;
    v46 = (v12 + v45) & 0xFFFFFFFFFFFFF000uLL;
    if ( v46 < v25 )
    {
      if ( RtlpHeapErrorHandlerThreshold < 1 || !v4 )
        goto LABEL_155;
      if ( NtCurrentPeb()->Ldr )
      {
LABEL_150:
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v19);
        goto LABEL_152;
      }
LABEL_151:
      DbgPrint("HEAP: ", v25, v19);
LABEL_152:
      DbgPrint("(!TrailingUCR)");
      if ( !byte_1801D1908 )
        RtlpReportHeapFailure(1LL);
      goto LABEL_154;
    }
    v47 = v46 - v25;
    v48 = 2147353472LL;
    v67 = v47;
    if ( v69 || *(_BYTE *)(v19 + 15) == 3 )
    {
      if ( !v47 )
      {
LABEL_114:
        if ( !v4 )
        {
          v50 = (_BYTE *)(*(_QWORD *)v62 + v67);
          v51 = 16 * v7;
          *(_WORD *)(*(_QWORD *)v62 + v67 + 12) = *((_WORD *)BaseAddress + 70);
          v52 = v51 + v12;
          if ( v51 + v12 == v67 + *(_QWORD *)v62 )
          {
            if ( *((_DWORD *)BaseAddress + 31) )
            {
              v50[11] = v50[8] ^ v50[9] ^ v50[10];
              *((_DWORD *)v50 + 2) ^= *((_DWORD *)BaseAddress + 34);
            }
          }
          else
          {
            v50[15] = 0;
            v50[10] = 0;
            v53 = (v12 + v51 - v67 - *(_QWORD *)v62) >> 4;
            v37 = RtlpHeapErrorHandlerThreshold < 1;
            *((_WORD *)v50 + 4) = v53;
            if ( !v37 && (unsigned __int16)v53 <= 1u )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v19);
              else
                DbgPrint("HEAP: ", v52, v19);
              DbgPrint("(LONG)FreeEntry->Size > 1");
              if ( !byte_1801D1908 )
                RtlpReportHeapFailure(1LL);
            }
            v50[11] = 0;
            v54 = (_QWORD *)v18[5];
            if ( v54 == v18 )
            {
              LOBYTE(v55) = 0;
            }
            else
            {
              v55 = ((unsigned __int64)(v50 - (_BYTE *)v18) >> 16) + 1;
              if ( v55 >= 0xFE )
                RtlpLogHeapFailure(3, (_DWORD)v54, (_DWORD)v50, (_DWORD)v18, 0LL, 0LL);
            }
            v56 = *((unsigned __int16 *)v50 + 4);
            v50[14] = v55;
            RtlpInsertFreeBlock((unsigned __int64)BaseAddress, (unsigned __int64)v50, v56);
          }
        }
        RtlpCreateUCREntry((_DWORD)BaseAddress, (_DWORD)v18, v62[0] - 48, v67, v12, (__int64)&v65);
        RtlpInsertFreeBlock((unsigned __int64)BaseAddress, v12, v65);
        SharedData = NtCurrentPeb()->SharedData;
        if ( SharedData && *SharedData )
          v58 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v58 = 2147353472LL;
        if ( *(_BYTE *)v58 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v48 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapContractEvent(
            (int)BaseAddress,
            v62[0],
            v67,
            16 * BaseAddress[24],
            0,
            0LL,
            (HANDLE)*(unsigned __int8 *)v48);
        }
        v59 = 2147353482LL;
        v60 = NtCurrentPeb()->SharedData;
        if ( v60 && *v60 )
          v61 = (__int64)NtCurrentPeb()->SharedData + 560;
        else
          v61 = 2147353482LL;
        if ( *(_BYTE *)v61 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v59 = (__int64)NtCurrentPeb()->SharedData + 560;
          RtlpLogHeapContractEvent(
            (int)BaseAddress,
            v62[0],
            v67,
            16 * BaseAddress[24],
            0,
            0LL,
            (HANDLE)*(unsigned __int8 *)v59);
        }
        return;
      }
    }
    else if ( !v47 || v47 < BaseAddress[22] )
    {
      goto LABEL_155;
    }
    ++*((_DWORD *)BaseAddress + 155);
    if ( (int)RtlpSecMemFreeVirtualMemory(v47, v62, &v67, 0x4000LL) < 0 )
      goto LABEL_50;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v7 = v68;
      v49 = (__int64)NtCurrentPeb()->SharedData + 550;
    }
    else
    {
      v49 = 2147353472LL;
    }
    if ( *(_BYTE *)v49 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapDecommit(BaseAddress, *(_QWORD *)v62, v67, 6LL);
      v7 = v68;
    }
    goto LABEL_114;
  }
  if ( RtlpHeapErrorHandlerThreshold >= 1 && !v27 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v19);
    else
      DbgPrint("HEAP: ", v25, v19);
    DbgPrint("(UCRBlock != NULL)");
    if ( !byte_1801D1908 )
      RtlpReportHeapFailure(1LL);
    v7 = v68;
  }
  v28 = 16 * v7;
  if ( !v4 )
    v28 -= 32LL;
  v29 = ((v12 + v28) & 0xFFFFFFFFFFFFF000uLL) - *(_QWORD *)v62;
  v67 = v29;
  if ( !v29 )
  {
    if ( RtlpHeapErrorHandlerThreshold < 1 || !v4 )
      goto LABEL_155;
    if ( NtCurrentPeb()->Ldr )
      goto LABEL_150;
    goto LABEL_151;
  }
  if ( (int)RtlpSecMemFreeVirtualMemory(v29, v62, &v67, 0x4000LL) < 0 )
  {
LABEL_50:
    ++*((_DWORD *)BaseAddress + 159);
    if ( !v4 )
    {
LABEL_155:
      RtlpInsertFreeBlock((unsigned __int64)BaseAddress, v12, v7);
      return;
    }
    RtlpCreateUCREntry((_DWORD)BaseAddress, (_DWORD)v18, v64 - 48, v63, v12, (__int64)&v68);
LABEL_154:
    v7 = v68;
    goto LABEL_155;
  }
  v30 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
  {
    v7 = v68;
    v31 = (__int64)NtCurrentPeb()->SharedData + 550;
  }
  else
  {
    v31 = 2147353472LL;
  }
  if ( *(_BYTE *)v31 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapDecommit(BaseAddress, *(_QWORD *)v62, v67, 5LL);
    v7 = v68;
  }
  ++*((_DWORD *)BaseAddress + 155);
  v32 = v27[5];
  if ( v32 >= 0xFF000 )
    BaseAddress[73] -= v32;
  RtlpRemoveUCRBlock(BaseAddress, v27);
  v27[5] += v67;
  RtlpInsertUCRBlock(BaseAddress, v27);
  *((_DWORD *)v18 + 20) += v67 >> 12;
  BaseAddress[72] -= v67;
  v33 = v27[5];
  if ( v33 >= 0xFF000 )
    BaseAddress[73] += v33;
  if ( !v4 )
  {
    v34 = (_BYTE *)(*(_QWORD *)v62 + v67);
    v35 = 16 * v7;
    *(_WORD *)(*(_QWORD *)v62 + v67 + 12) = *((_WORD *)BaseAddress + 70);
    if ( v35 + v12 == v67 + *(_QWORD *)v62 )
    {
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v34[11] = v34[8] ^ v34[9] ^ v34[10];
        *((_DWORD *)v34 + 2) ^= *((_DWORD *)BaseAddress + 34);
      }
    }
    else
    {
      v34[15] = 0;
      v34[10] = 0;
      v36 = (v35 - v67) >> 4;
      v37 = RtlpHeapErrorHandlerThreshold < 1;
      *((_WORD *)v34 + 4) = v36;
      if ( !v37 && (unsigned __int16)v36 <= 1u )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("((LONG)FreeEntry->Size > 1)");
        if ( !byte_1801D1908 )
          RtlpReportHeapFailure(1LL);
      }
      v34[11] = 0;
      v38 = (_QWORD *)v18[5];
      if ( v38 == v18 )
      {
        LOBYTE(v39) = 0;
      }
      else
      {
        v39 = ((unsigned __int64)(v34 - (_BYTE *)v18) >> 16) + 1;
        if ( v39 >= 0xFE )
          RtlpLogHeapFailure(3, (_DWORD)v38, (_DWORD)v34, (_DWORD)v18, 0LL, 0LL);
      }
      v40 = *((unsigned __int16 *)v34 + 4);
      v34[14] = v39;
      RtlpInsertFreeBlock((unsigned __int64)BaseAddress, (unsigned __int64)v34, v40);
    }
  }
  if ( RtlGetCurrentServiceSessionId() )
    v41 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v41 = 2147353472LL;
  if ( *(_BYTE *)v41 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v30 = (__int64)NtCurrentPeb()->SharedData + 550;
    v42 = v63;
    RtlpLogHeapContractEvent(
      (int)BaseAddress,
      v62[0],
      v67,
      16 * BaseAddress[24],
      v4,
      v63,
      (HANDLE)*(unsigned __int8 *)v30);
  }
  else
  {
    v42 = v63;
  }
  v43 = 2147353482LL;
  if ( RtlGetCurrentServiceSessionId() )
    v44 = (__int64)NtCurrentPeb()->SharedData + 560;
  else
    v44 = 2147353482LL;
  if ( *(_BYTE *)v44 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v43 = (__int64)NtCurrentPeb()->SharedData + 560;
    RtlpLogHeapContractEvent(
      (int)BaseAddress,
      v62[0],
      v67,
      16 * BaseAddress[24],
      v4,
      v42,
      (HANDLE)*(unsigned __int8 *)v43);
  }
}
