/*
 * XREFs of RtlpFreeUserBlock @ 0x18002B950
 * Callers:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180028AA0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpFreeNTHeapInternal @ 0x18002BD80 (RtlpFreeNTHeapInternal.c)
 *     RtlpLowFragHeapFlushCaches @ 0x180095D9C (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlpFreeUserBlockToHeap @ 0x180096530 (RtlpFreeUserBlockToHeap.c)
 *     RtlpLogHeapSubSegmentFree @ 0x180096BF4 (RtlpLogHeapSubSegmentFree.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x180096CA4 (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpLogHeapSubSegmentFreeCached @ 0x18011644C (RtlpLogHeapSubSegmentFreeCached.c)
 *     ZwQueryVirtualMemory @ 0x1801620F0 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x180162690 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPopEntrySList @ 0x180165A00 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x180165A40 (RtlpInterlockedPushEntrySList.c)
 */

__int16 __fastcall RtlpFreeUserBlock(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // rsi
  __int64 v5; // r13
  volatile signed __int32 *v7; // rbx
  unsigned int v8; // esi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r8
  _DWORD *SharedData; // rcx
  __int64 v12; // r15
  PSLIST_ENTRY v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // r10
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned int v18; // r15d
  bool v19; // zf
  __int64 v20; // r15
  _SLIST_ENTRY *Next; // rcx
  __int64 v22; // rcx
  PSLIST_ENTRY v23; // rdi
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v31; // [rsp+30h] [rbp-88h]
  _OWORD v32[2]; // [rsp+38h] [rbp-80h] BYREF
  __int128 v33; // [rsp+58h] [rbp-60h]
  __int64 v34; // [rsp+C0h] [rbp+8h]
  __int64 v35; // [rsp+C8h] [rbp+10h] BYREF
  int v36; // [rsp+D0h] [rbp+18h] BYREF
  unsigned __int64 v37; // [rsp+D8h] [rbp+20h] BYREF

  v36 = a3;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)a2;
  v7 = (volatile signed __int32 *)(a1 + 48 * (*(unsigned __int8 *)(a2 + 16) - 5LL));
  if ( *(_WORD *)(v4 + 416) && (*(_BYTE *)(v4 + 112) & 1) == 0 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(v4 + 352));
    RtlLeaveCriticalSection(*(_QWORD *)(v4 + 352));
  }
  v8 = *(unsigned __int16 *)v7;
  if ( v8 <= *((_DWORD *)v7 + 5) || v8 <= *((_DWORD *)v7 + 4) >> *((_DWORD *)v7 + 6) )
  {
    v9 = 1LL << *(_BYTE *)(a2 + 16);
    if ( v9 > 0xF0000 )
      v9 = 983040LL;
    v10 = v9 + *(unsigned __int16 *)(a2 + 18);
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 72), v10);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v12 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v12 = 2147353472LL;
    if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentFreeCached(*(_QWORD *)(a1 + 24), a2, v10, 16LL * *(unsigned __int16 *)(v5 + 36));
    RtlpInterlockedPushEntrySList(v7, a2);
    LOWORD(v13) = *((_WORD *)v7 + 15) + 1;
    *((_WORD *)v7 + 15) = (_WORD)v13;
  }
  else
  {
    v14 = 1LL << *(_BYTE *)(a2 + 16);
    if ( v14 > 0xF0000 )
      v14 = 983040LL;
    v15 = *(_QWORD *)(a1 + 24);
    v34 = v15;
    v31 = v14 + *(unsigned __int16 *)(a2 + 18);
    v37 = 0LL;
    v36 = 0;
    v35 = 0LL;
    if ( *(_BYTE *)(a2 + 17) )
    {
      v16 = *(unsigned __int16 *)(a2 + 18);
      v17 = 1LL << *(_BYTE *)(a2 + 16);
      v18 = 64;
      v35 = 4096LL;
      if ( v17 > 0xF0000 )
        v17 = 983040LL;
      v19 = (*(_DWORD *)(v15 + 112) & 0x40000) == 0;
      v37 = a2 + v17 + v16;
      if ( v19 )
        v18 = 4;
      memset(v32, 0, sizeof(v32));
      v33 = 0LL;
      if ( !v19
        && ((int)ZwQueryVirtualMemory(-1LL, v15, 0LL, v32, 48LL, 0LL) < 0
         || (BYTE4(v33) & 0x60) == 0
         || *(_QWORD *)&v32[0] != v34) )
      {
        RtlpLogHeapFailure(0, v34, 1LL, DWORD1(v33), 0LL, 0LL);
        v18 = 4;
      }
      ZwProtectVirtualMemory(-1LL, &v37, &v35, v18, &v36);
      v15 = v34;
    }
    RtlFreeHeap(v15, 0x800000u, a2);
    v13 = (PSLIST_ENTRY)NtCurrentPeb();
    v20 = 2147353472LL;
    Next = v13[9].Next;
    if ( Next && LODWORD(Next->Next) )
    {
      v13 = (PSLIST_ENTRY)NtCurrentPeb();
      v22 = (__int64)&v13[9].Next[34].Next + 6;
    }
    else
    {
      v22 = 2147353472LL;
    }
    if ( *(_BYTE *)v22 )
    {
      v13 = (PSLIST_ENTRY)NtCurrentPeb();
      if ( (*(_BYTE *)(&v13[55].Next + 1) & 1) != 0 )
        LOWORD(v13) = RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), a2, v31, 16LL * *(unsigned __int16 *)(v5 + 36));
    }
    _InterlockedDecrement(v7 + 4);
    if ( v8 )
    {
      v13 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v7);
      v23 = v13;
      if ( v13 )
      {
        v24 = 1LL << LOBYTE(v13[1].Next);
        if ( v24 > 0xF0000 )
          v24 = 983040LL;
        v25 = v24 + WORD1(v13[1].Next);
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v25);
        RtlpFreeUserBlockToHeap(*(_QWORD *)(a1 + 24), v13);
        LODWORD(v13) = RtlGetCurrentServiceSessionId(v27, v26, v28, v29);
        if ( (_DWORD)v13 )
        {
          v13 = (PSLIST_ENTRY)NtCurrentPeb();
          v20 = (__int64)&v13[9].Next[34].Next + 6;
        }
        if ( *(_BYTE *)v20 )
        {
          v13 = (PSLIST_ENTRY)NtCurrentPeb();
          if ( (*(_BYTE *)(&v13[55].Next + 1) & 1) != 0 )
          {
            RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v23, v25, 0LL);
            LOWORD(v13) = RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), v23, v25, 0LL);
          }
        }
        _InterlockedDecrement(v7 + 4);
      }
    }
  }
  return (__int16)v13;
}
