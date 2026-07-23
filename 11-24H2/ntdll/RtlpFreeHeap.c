/*
 * XREFs of RtlpFreeHeap @ 0x18005A020
 * Callers:
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpFreeNTHeapInternal @ 0x180058780 (RtlpFreeNTHeapInternal.c)
 * Callees:
 *     RtlpHeapAddListEntry @ 0x18000C420 (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x18000C880 (RtlpFindEntry.c)
 *     RtlpCoalesceFreeBlocks @ 0x18000EB10 (RtlpCoalesceFreeBlocks.c)
 *     RtlpAnalyzeHeapFailure @ 0x18000F2D0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpInsertFreeBlock @ 0x18000FC70 (RtlpInsertFreeBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180010840 (RtlpDeCommitFreeBlock.c)
 *     RtlDebugFreeHeap @ 0x180022020 (RtlDebugFreeHeap.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180028580 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlStdLogStackTrace @ 0x180030E50 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x1800310D0 (RtlStdReleaseStackTrace.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapLogRangeRelease @ 0x18006B624 (RtlpHeapLogRangeRelease.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x1800872D0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlTryEnterCriticalSection @ 0x1800A09E0 (RtlTryEnterCriticalSection.c)
 *     RtlpLogHeapFreeEvent @ 0x1800A19C4 (RtlpLogHeapFreeEvent.c)
 *     RtlpUpdateHeapWatermarks @ 0x1800D7250 (RtlpUpdateHeapWatermarks.c)
 *     RtlpUpdateTagEntry @ 0x1800EE4DC (RtlpUpdateTagEntry.c)
 *     RtlpLogHeapContractEvent @ 0x1800F20F0 (RtlpLogHeapContractEvent.c)
 *     ZwAllocateVirtualMemory @ 0x180160350 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall RtlpFreeHeap(_QWORD *BaseAddress, int a2, _QWORD *a3, char *a4)
{
  char v5; // r15
  int v7; // edi
  __int64 v8; // r8
  _DWORD *SharedData; // rcx
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rsi
  struct _TEB *v13; // rdi
  unsigned int v14; // ecx
  unsigned int v15; // eax
  int v16; // edx
  __int64 **v17; // rcx
  int v18; // edx
  _BYTE *v19; // r9
  char v20; // al
  unsigned __int16 *v21; // rdi
  unsigned __int64 v22; // rax
  _WORD *v23; // rdx
  int v24; // edx
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r14
  _QWORD **v27; // rdi
  _QWORD *Entry; // r8
  int v29; // eax
  _QWORD *v30; // r14
  __int64 *v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdi
  _DWORD *v35; // rdi
  _DWORD *v36; // r8
  unsigned __int64 v37; // rdx
  _QWORD **v38; // rdi
  _QWORD *v39; // r8
  int v40; // eax
  __int64 *v41; // rax
  unsigned __int64 v42; // rdi
  int v43; // edx
  unsigned __int16 v44; // cx
  __int64 v45; // r12
  PRTL_SRWLOCK v46; // rsi
  unsigned __int16 *v47; // r14
  __int64 v48; // rdi
  unsigned int i; // edx
  __int64 v50; // r13
  volatile signed __int32 *v51; // r8
  volatile signed __int32 **v52; // rdx
  _QWORD *SchedulerSharedDataSlot; // rdi
  unsigned int j; // ecx
  unsigned __int16 **v55; // r15
  PRTL_SRWLOCK *v56; // rdx
  _QWORD *v57; // rdi
  unsigned int k; // ecx
  unsigned __int64 Value; // rdi
  char *v60; // rcx
  unsigned __int64 v61; // rax
  __int64 v62; // rsi
  __int64 v63; // rax
  __int64 *v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // r9
  __int64 v67; // rdi
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rdi
  __int64 v71; // rcx
  char v72; // [rsp+40h] [rbp-108h]
  __int16 updated; // [rsp+44h] [rbp-104h]
  unsigned int v74; // [rsp+68h] [rbp-E0h]
  ULONG_PTR v75; // [rsp+70h] [rbp-D8h] BYREF
  PVOID BaseAddressa; // [rsp+78h] [rbp-D0h] BYREF
  int v77; // [rsp+80h] [rbp-C8h]
  unsigned __int64 v78; // [rsp+88h] [rbp-C0h] BYREF
  unsigned __int64 v79; // [rsp+90h] [rbp-B8h]
  unsigned __int64 v80; // [rsp+98h] [rbp-B0h]
  unsigned __int64 v81; // [rsp+A0h] [rbp-A8h]
  volatile signed __int32 **v82; // [rsp+A8h] [rbp-A0h]
  PRTL_SRWLOCK *v83; // [rsp+B0h] [rbp-98h]
  ULONG_PTR RegionSize; // [rsp+B8h] [rbp-90h] BYREF
  int v85[2]; // [rsp+C0h] [rbp-88h]
  unsigned int NtGlobalFlag; // [rsp+C8h] [rbp-80h]
  int v87; // [rsp+CCh] [rbp-7Ch]
  __int64 v88; // [rsp+D0h] [rbp-78h]
  volatile signed __int32 **v89; // [rsp+D8h] [rbp-70h]
  PRTL_SRWLOCK *v90; // [rsp+E0h] [rbp-68h]
  unsigned __int64 v91; // [rsp+E8h] [rbp-60h]
  __int64 v92; // [rsp+F0h] [rbp-58h]
  int v93; // [rsp+100h] [rbp-48h]
  int v94; // [rsp+110h] [rbp-38h]
  _BYTE *v95; // [rsp+160h] [rbp+18h]

  v95 = a3;
  v5 = 1;
  v75 = 0LL;
  v72 = 0;
  v74 = 1;
  v78 = 0LL;
  updated = 0;
  if ( BaseAddress == a3 )
  {
    RtlpLogHeapFailure(9, (__int64)BaseAddress, (__int64)a3, 0LL, 0LL, 0LL);
    return 0LL;
  }
  v7 = *((_DWORD *)BaseAddress + 29) | a2;
  if ( (v7 & 0x7D010F60) != 0 )
  {
    v5 = 0;
    v8 = 4LL;
    if ( (v7 & 0x61000000) != 0 && (v7 & 0x10000000) == 0 )
      return RtlDebugFreeHeap(BaseAddress, v7, a4);
  }
  else
  {
    v8 = 3LL;
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
  {
    v10 = (__int64)NtCurrentPeb()->SharedData + 550;
    v11 = 2147353472LL;
  }
  else
  {
    v11 = 2147353472LL;
    v10 = 2147353472LL;
  }
  if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    v12 = (__int64)v95;
    if ( ((v95[10] ^ (unsigned __int8)(*((_BYTE *)BaseAddress + 138) & (*((_DWORD *)BaseAddress + 31) >> 17))) & 8) == 0 )
      RtlpLogHeapFreeEvent(BaseAddress, a4, v8);
  }
  else
  {
    v12 = (__int64)v95;
  }
  if ( (v7 & 1) != 0 )
  {
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      v18 = *(_DWORD *)(v12 + 8) ^ *((_DWORD *)BaseAddress + 34);
      *(_DWORD *)(v12 + 8) = v18;
      if ( HIBYTE(v18) != ((unsigned __int8)v18 ^ (unsigned __int8)(BYTE1(v18) ^ BYTE2(v18))) )
        RtlpAnalyzeHeapFailure((unsigned __int64)BaseAddress, v12);
    }
LABEL_37:
    v19 = (_BYTE *)(v12 + 10);
    v20 = *(_BYTE *)(v12 + 10);
    if ( (v20 & 8) != 0 )
      *v19 = v20 & 0xF7;
    if ( *(_BYTE *)(v12 + 15) == 4 )
    {
      v62 = v12 - 48;
      *(_QWORD *)v85 = *(_QWORD *)(v62 + 32);
      v78 = v62 & 0xFFFFFFFFFFFF0000uLL;
      BaseAddress[75] -= *(_QWORD *)v85;
      BaseAddress[74] -= *(_QWORD *)(v62 + 40);
      v63 = *(_QWORD *)v62;
      v64 = *(__int64 **)(v62 + 8);
      v65 = *v64;
      v66 = *(_QWORD *)(*(_QWORD *)v62 + 8LL);
      if ( *v64 == v66 && v65 == v62 )
      {
        *v64 = v63;
        *(_QWORD *)(v63 + 8) = v64;
      }
      else
      {
        RtlpLogHeapFailure(13, 0LL, v62, v66, v65, 0LL);
      }
      if ( !v5 && (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
        RtlpUpdateTagEntry((_DWORD)BaseAddress, *(unsigned __int16 *)(v62 + 18), *(_QWORD *)(v62 + 32) >> 4, 0, 3);
      if ( v72 )
      {
        RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)BaseAddress[44]);
        v72 = 0;
      }
      v67 = *(_QWORD *)(v62 + 40);
      v92 = v67;
      if ( RtlGetCurrentServiceSessionId() )
      {
        v68 = (__int64)NtCurrentPeb()->SharedData + 558;
        v67 = v92;
      }
      else
      {
        v68 = 2147353480LL;
      }
      if ( *(_BYTE *)v68 )
        RtlpHeapLogRangeRelease(BaseAddress, v78, v67);
      v75 = 0LL;
      RtlpSecMemFreeVirtualMemory(v68, (PVOID *)&v78, &v75, 0x8000u);
      if ( RtlGetCurrentServiceSessionId() )
        v69 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v69 = 2147353472LL;
      if ( *(_BYTE *)v69 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v11 = (__int64)NtCurrentPeb()->SharedData + 550;
        RtlpLogHeapContractEvent(
          (int)BaseAddress,
          v62,
          v85[0],
          16 * BaseAddress[24],
          0,
          0LL,
          (HANDLE)*(unsigned __int8 *)v11);
      }
      v70 = 2147353482LL;
      if ( RtlGetCurrentServiceSessionId() )
        v71 = (__int64)NtCurrentPeb()->SharedData + 560;
      else
        v71 = 2147353482LL;
      if ( *(_BYTE *)v71 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v70 = (__int64)NtCurrentPeb()->SharedData + 560;
        RtlpLogHeapContractEvent(
          (int)BaseAddress,
          v62,
          v85[0],
          16 * BaseAddress[24],
          0,
          0LL,
          (HANDLE)*(unsigned __int8 *)v70);
      }
      goto LABEL_200;
    }
    v21 = (unsigned __int16 *)(v12 + 8);
    v22 = *(unsigned __int16 *)(v12 + 8);
    if ( (unsigned __int16)v22 < *((_WORD *)BaseAddress + 216) )
    {
      if ( ((unsigned __int8)(1 << (*(_WORD *)(v12 + 8) & 7)) & *((_BYTE *)BaseAddress + (v22 >> 3) + 434)) == 0 )
      {
        v23 = (_WORD *)(BaseAddress[53] + 2LL * *v21);
        if ( *v23 > 1u )
          --*v23;
      }
      v12 = (__int64)v95;
    }
    if ( !v5 )
    {
      NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
      v12 = (__int64)v95;
      if ( (NtGlobalFlag & 0x800) != 0 )
      {
        if ( (*v19 & 2) != 0 )
          v24 = *(unsigned __int16 *)&v95[16 * *v21 - 14];
        else
          v24 = (unsigned __int8)v95[11];
        updated = RtlpUpdateTagEntry((_DWORD)BaseAddress, v24, *v21, 0, 2);
      }
    }
    v25 = *v21;
    v75 = v25;
    if ( *((char *)BaseAddress + 112) >= 0 )
    {
      v12 = RtlpCoalesceFreeBlocks(BaseAddress, v12, &v75, 0);
      v95 = (_BYTE *)v12;
      v25 = v75;
    }
    if ( v25 >= BaseAddress[22] && v25 + BaseAddress[24] >= BaseAddress[23]
      || v25 + BaseAddress[24] > BaseAddress[23] && v25 >= 0x100 && *((_WORD *)BaseAddress + 70) == *(_WORD *)(v12 + 12) )
    {
      RtlpDeCommitFreeBlock(BaseAddress, v12, v25, 0);
      goto LABEL_200;
    }
    if ( v25 > 0xFF00 )
    {
      RtlpInsertFreeBlock((unsigned __int64)BaseAddress, v12, v25);
      v35 = (_DWORD *)BaseAddress + 31;
      goto LABEL_115;
    }
    v26 = (unsigned __int16)v25;
    if ( v5 )
    {
      *(_BYTE *)(v12 + 10) = 0;
      *(_BYTE *)(v12 + 15) = 0;
      v27 = (_QWORD **)(BaseAddress + 42);
      if ( BaseAddress[39] )
        Entry = RtlpFindEntry((__int64)BaseAddress, (unsigned __int16)v25);
      else
        Entry = *v27;
      while ( v27 != Entry )
      {
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v29 = *((_DWORD *)Entry - 2);
          v93 = v29;
          if ( (v29 & *((_DWORD *)BaseAddress + 31)) != 0 )
          {
            v29 ^= *((_DWORD *)BaseAddress + 34);
            v93 = v29;
          }
          v12 = (__int64)v95;
        }
        else
        {
          LOWORD(v29) = *((_WORD *)Entry - 4);
        }
        if ( v26 <= (unsigned __int16)v29 )
          break;
        Entry = (_QWORD *)*Entry;
      }
      v30 = (_QWORD *)(v12 + 16);
      v31 = (__int64 *)Entry[1];
      if ( (_QWORD *)*v31 == Entry )
      {
        *v30 = Entry;
        *(_QWORD *)(v12 + 24) = v31;
        *v31 = (__int64)v30;
        Entry[1] = v30;
      }
      else
      {
        RtlpLogHeapFailure(13, 0LL, (__int64)Entry, 0LL, *v31, 0LL);
      }
      BaseAddress[24] += *(unsigned __int16 *)(v12 + 8);
      v32 = BaseAddress[39];
      if ( !v32 )
        goto LABEL_82;
      v79 = 0LL;
      v33 = *(unsigned __int16 *)(v12 + 8);
      while ( 1 )
      {
        v34 = *(unsigned int *)(v32 + 8);
        if ( v33 < v34 )
          break;
        if ( !*(_QWORD *)v32 )
        {
          v33 = (unsigned int)(v34 - 1);
          break;
        }
        v32 = *(_QWORD *)v32;
      }
      v79 = v33;
LABEL_81:
      RtlpHeapAddListEntry((__int64)BaseAddress, v32, 1, (__int64)v30, v33, *(unsigned __int16 *)(v12 + 8));
LABEL_82:
      v35 = (_DWORD *)BaseAddress + 31;
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *(_BYTE *)(v12 + 11) = *(_BYTE *)(v12 + 8) ^ *(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10);
        *(_DWORD *)(v12 + 8) ^= *((_DWORD *)BaseAddress + 34);
      }
LABEL_115:
      if ( !updated )
        goto LABEL_200;
      if ( *v35 )
      {
        v43 = *(_DWORD *)(v12 + 8) ^ *((_DWORD *)BaseAddress + 34);
        *(_DWORD *)(v12 + 8) = v43;
        if ( HIBYTE(v43) != ((unsigned __int8)v43 ^ (unsigned __int8)(BYTE2(v43) ^ BYTE1(v43))) )
          RtlpAnalyzeHeapFailure((unsigned __int64)BaseAddress, v12);
      }
      *(_BYTE *)(v12 + 10) |= 2u;
      v44 = *(_WORD *)(v12 + 8);
      v45 = 16LL * v44 + v12;
      if ( *v35 )
      {
        *(_BYTE *)(v12 + 11) = HIBYTE(v44) ^ *(_BYTE *)(v12 + 10) ^ v44;
        *(_DWORD *)(v12 + 8) ^= *((_DWORD *)BaseAddress + 34);
      }
      *(_WORD *)(v45 - 4) = updated;
      *(_WORD *)(v45 - 2) = 0;
      if ( (BaseAddress[14] & 0x8000000) == 0 )
        goto LABEL_200;
      v46 = RtlpStackTraceDatabase;
      if ( !RtlpStackTraceDatabase )
      {
        *(_WORD *)(v45 - 2) = 0;
        goto LABEL_200;
      }
      v47 = (unsigned __int16 *)RtlStdLogStackTrace((__int64)RtlpStackTraceDatabase, 1);
      LODWORD(v48) = 0;
      if ( !v47 )
      {
LABEL_169:
        *(_WORD *)(v45 - 2) = v48;
        goto LABEL_200;
      }
      v77 = 0;
      for ( i = 0; i < v47[7]; ++i )
      {
        v87 = *(_DWORD *)&v47[4 * i + 8];
        LODWORD(v48) = v87 + v48;
        v77 = v48;
      }
      v50 = 2LL * ((unsigned int)v48 % *(_DWORD *)&v46[90].0);
      if ( !byte_1801D1908 )
      {
        v51 = (volatile signed __int32 *)&v46[2 * ((unsigned int)v48 % *(_DWORD *)&v46[90].0) + 92];
        v89 = 0LL;
        v52 = 0LL;
        v82 = 0LL;
        SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
        if ( SchedulerSharedDataSlot )
        {
          for ( j = 0; j < 8; ++j )
          {
            if ( !SchedulerSharedDataSlot[j] )
            {
              v52 = (volatile signed __int32 **)&SchedulerSharedDataSlot[j];
              v82 = v52;
              break;
            }
          }
        }
        v89 = v52;
        if ( v52 )
          *v52 = v51;
        if ( _interlockedbittestandset64(v51, 0LL) )
          RtlpAcquireSRWLockExclusiveContended(&v46[v50 + 92]);
      }
      if ( *(_DWORD *)(v47 + 5) )
      {
        LODWORD(v48) = v47[6] + (v47[5] << 16);
LABEL_165:
        if ( !byte_1801D1908 )
          RtlReleaseSRWLockExclusive(&v46[v50 + 92]);
        if ( !(_DWORD)v48 )
          RtlStdReleaseStackTrace((__int64)v46, (__int64)v47);
        goto LABEL_169;
      }
      BaseAddressa = 0LL;
      RegionSize = 0LL;
      v55 = 0LL;
      v91 = 0LL;
      if ( !byte_1801D1908 )
      {
        v90 = 0LL;
        v56 = 0LL;
        v83 = 0LL;
        v57 = NtCurrentTeb()->SchedulerSharedDataSlot;
        if ( v57 )
        {
          for ( k = 0; k < 8; ++k )
          {
            if ( !v57[k] )
            {
              v56 = (PRTL_SRWLOCK *)&v57[k];
              v83 = v56;
              break;
            }
          }
        }
        v90 = v56;
        if ( v56 )
          *v56 = v46;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v46, 0LL) )
          RtlpAcquireSRWLockExclusiveContended(v46);
      }
      Value = v46[21].Value;
      v60 = (char *)v46[19].Value;
      BaseAddressa = v60;
      v61 = Value - 8;
      if ( v46[16].0 )
      {
        if ( v61 < v46[20].Value )
        {
LABEL_157:
          if ( !byte_1801D1908 )
            RtlReleaseSRWLockExclusive(v46);
          if ( v55 )
          {
            *v55 = v47;
            v48 = (__int64)(v46[23].Value - (_QWORD)v55) >> 3;
            v47[6] = v48;
            v47[5] = WORD1(v48);
          }
          else
          {
            LODWORD(v48) = 0;
          }
          goto LABEL_165;
        }
      }
      else if ( v61 < (unsigned __int64)v60 )
      {
        RegionSize = 4096LL;
        if ( (unsigned __int64)(v60 - 4096) <= v46[18].Value )
          goto LABEL_157;
        BaseAddressa = v60 - 4096;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
          goto LABEL_157;
        v46[19].Value = (unsigned __int64)BaseAddressa;
      }
      v55 = (unsigned __int16 **)(Value - 8);
      v46[21].Value = Value - 8;
      v91 = Value - 8;
      ++HIDWORD(v46[22].Ptr);
      goto LABEL_157;
    }
    *(_BYTE *)(v12 + 10) &= 0xF0u;
    *(_BYTE *)(v12 + 15) = 0;
    if ( (BaseAddress[14] & 0x40) == 0 )
    {
LABEL_93:
      v38 = (_QWORD **)(BaseAddress + 42);
      if ( BaseAddress[39] )
        v39 = RtlpFindEntry((__int64)BaseAddress, v26);
      else
        v39 = *v38;
      while ( v38 != v39 )
      {
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v40 = *((_DWORD *)v39 - 2);
          v94 = v40;
          if ( (v40 & *((_DWORD *)BaseAddress + 31)) != 0 )
          {
            v40 ^= *((_DWORD *)BaseAddress + 34);
            v94 = v40;
          }
          v12 = (__int64)v95;
        }
        else
        {
          LOWORD(v40) = *((_WORD *)v39 - 4);
        }
        if ( v26 <= (unsigned __int16)v40 )
          break;
        v39 = (_QWORD *)*v39;
      }
      v30 = (_QWORD *)(v12 + 16);
      v41 = (__int64 *)v39[1];
      if ( (_QWORD *)*v41 == v39 )
      {
        *v30 = v39;
        *(_QWORD *)(v12 + 24) = v41;
        *v41 = (__int64)v30;
        v39[1] = v30;
      }
      else
      {
        RtlpLogHeapFailure(13, 0LL, (__int64)v39, 0LL, *v41, 0LL);
      }
      BaseAddress[24] += *(unsigned __int16 *)(v12 + 8);
      v32 = BaseAddress[39];
      if ( !v32 )
        goto LABEL_82;
      v81 = 0LL;
      v33 = *(unsigned __int16 *)(v12 + 8);
      while ( 1 )
      {
        v42 = *(unsigned int *)(v32 + 8);
        if ( v33 < v42 )
          break;
        if ( !*(_QWORD *)v32 )
        {
          v33 = (unsigned int)(v42 - 1);
          break;
        }
        v32 = *(_QWORD *)v32;
      }
      v81 = v33;
      goto LABEL_81;
    }
    v36 = (_DWORD *)(v12 + 32);
    v88 = v12 + 32;
    v37 = (16 * v26 - 32) >> 2;
    v80 = v37;
    if ( v37 )
    {
      if ( ((unsigned __int8)v36 & 4) == 0 )
        goto LABEL_90;
      *v36 = -17891602;
      v80 = --v37;
      if ( v37 )
      {
        v36 = (_DWORD *)(v12 + 36);
        v88 = v12 + 36;
LABEL_90:
        memset64(v36, 0xFEEEFEEEFEEEFEEEuLL, v37 >> 1);
        if ( (v37 & 1) != 0 )
          v36[v37 - 1] = -17891602;
      }
    }
    *(_BYTE *)(v12 + 10) |= 4u;
    goto LABEL_93;
  }
  if ( RtlTryEnterCriticalSection((PRTL_CRITICAL_SECTION)BaseAddress[44]) )
  {
    ++*((_DWORD *)BaseAddress + 156);
LABEL_27:
    v72 = 1;
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      v16 = *(_DWORD *)(v12 + 8) ^ *((_DWORD *)BaseAddress + 34);
      *(_DWORD *)(v12 + 8) = v16;
      if ( HIBYTE(v16) != ((unsigned __int8)v16 ^ (unsigned __int8)(BYTE1(v16) ^ BYTE2(v16))) )
        RtlpAnalyzeHeapFailure((unsigned __int64)BaseAddress, v12);
    }
    v17 = (__int64 **)BaseAddress[39];
    do
    {
      if ( *(unsigned __int16 *)(v12 + 8) < (unsigned __int64)*((unsigned int *)v17 + 2) )
        break;
      v17 = (__int64 **)*v17;
    }
    while ( v17 );
    goto LABEL_37;
  }
  if ( !byte_1801D1908 )
  {
    RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)BaseAddress[44]);
    v14 = *((_DWORD *)BaseAddress + 156) + 1;
    *((_DWORD *)BaseAddress + 156) = v14;
    v15 = *((_DWORD *)BaseAddress + 157) + 1;
    *((_DWORD *)BaseAddress + 157) = v15;
    if ( *((_BYTE *)BaseAddress + 418) != 2 )
    {
      if ( v14 < v15 )
      {
        BaseAddress[78] = 0LL;
        v14 = 0;
        v15 = 0;
      }
      if ( v15 >= v14 >> 4 )
        *((_DWORD *)BaseAddress + 30) |= 0x20000000u;
    }
    goto LABEL_27;
  }
  v13 = NtCurrentTeb();
  v13->LastStatusValue = -1073741420;
  v13->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741420);
  v74 = 0;
LABEL_200:
  if ( v72 )
  {
    RtlpUpdateHeapWatermarks(BaseAddress);
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)BaseAddress[44]);
  }
  return v74;
}
