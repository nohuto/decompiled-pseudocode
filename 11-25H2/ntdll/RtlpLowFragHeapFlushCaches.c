/*
 * XREFs of RtlpLowFragHeapFlushCaches @ 0x18000129C
 * Callers:
 *     RtlpFlushHeap @ 0x18000123C (RtlpFlushHeap.c)
 * Callees:
 *     RtlpLogHeapFreeEvent @ 0x1800010D4 (RtlpLogHeapFreeEvent.c)
 *     RtlpFreeUserBlockToHeap @ 0x180001A30 (RtlpFreeUserBlockToHeap.c)
 *     RtlpGetReservedBlockSize @ 0x180001B70 (RtlpGetReservedBlockSize.c)
 *     RtlpIsSubSegmentReuseable @ 0x180001BB0 (RtlpIsSubSegmentReuseable.c)
 *     RtlpLogHeapSubSegmentFree @ 0x1800020F4 (RtlpLogHeapSubSegmentFree.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x1800021A4 (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlpGetHeapProtection @ 0x180025250 (RtlpGetHeapProtection.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180052EB0 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpFreeUserBlock @ 0x180054420 (RtlpFreeUserBlock.c)
 *     ZwProtectVirtualMemory @ 0x180163C20 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x180166FD0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x180167010 (RtlpInterlockedFlushSList.c)
 */

int __fastcall RtlpLowFragHeapFlushCaches(__int64 a1, __int64 a2, __int64 a3, __int64 i)
{
  unsigned int v5; // ecx
  __int64 v6; // rdx
  unsigned int v7; // r12d
  _DWORD *v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rdi
  int v11; // ebx
  struct _PEB *v12; // rax
  __int64 v13; // r12
  struct _PEB *v14; // rsi
  struct _PEB *v15; // rbp
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r14
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rsi
  __int64 v21; // rdx
  _QWORD **v22; // rdi
  _QWORD *v23; // r14
  int v24; // r15d
  unsigned int v25; // ebp
  __int64 v26; // rbx
  unsigned int v27; // ecx
  ULONG CurrentServiceSessionId; // eax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  signed __int32 v32; // ebx
  int v33; // eax
  _WORD *v34; // rcx
  unsigned int v35; // ebp
  signed __int64 v36; // rdx
  __int64 *v37; // rsi
  volatile signed __int32 *v38; // rbx
  signed __int32 v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned __int16 *v42; // rsi
  __int64 v43; // rbx
  __int64 v44; // rax
  unsigned __int16 ReservedBlockSize; // ax
  void *v46; // rcx
  ULONG HeapProtection; // eax
  signed __int64 v48; // rcx
  __int64 v49; // rcx
  _QWORD **v50; // rdx
  signed __int32 v51; // eax
  __int64 v52; // rcx
  volatile signed __int32 *v53; // rdx
  __int64 v54; // rcx
  volatile signed __int32 *v55; // rdx
  _QWORD *v56; // rax
  unsigned int v57; // edx
  __int64 v59; // [rsp+30h] [rbp-68h]
  signed __int64 v60; // [rsp+38h] [rbp-60h]
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-58h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v63; // [rsp+A0h] [rbp+8h]
  __int64 v64; // [rsp+A0h] [rbp+8h]
  unsigned int v65; // [rsp+A8h] [rbp+10h]
  ULONG OldProtect; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v67; // [rsp+B8h] [rbp+20h]

  v5 = 0;
  v59 = 0LL;
  v6 = 0LL;
  v65 = 0;
  v67 = 0LL;
  do
  {
    v7 = 0;
    if ( (*(_BYTE *)(a1 + 4 * v6 + 679) & 1) == 0 || (*(_BYTE *)(a1 + 672) & 1) != 0 )
    {
      v63 = 1;
    }
    else
    {
      v63 = RtlpAffinityState;
      if ( !(_DWORD)RtlpAffinityState )
        goto LABEL_10;
    }
    do
    {
      if ( v7 )
        v8 = (_DWORD *)(*(_QWORD *)(a1 + 8 * v6 + 2224) + 192LL * v7 - 192);
      else
        v8 = *(_DWORD **)(a1 + 8 * v6 + 1192);
      if ( v8 && v8[41] == 1 )
      {
        v19 = RtlpLocalInfoAllocFromCache(v8, v7);
        v20 = v19;
        if ( v19 )
        {
          *(_DWORD *)(*(_QWORD *)v8 + 36LL) = 0;
          v21 = *(_QWORD *)(a1 + 24);
          if ( (unsigned __int16)v21 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v19 + 8) ^ (v19 >> 4))
            || (v22 = *(_QWORD ***)(v19
                                  - ((unsigned __int64)((unsigned int)v21 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v19 + 8) ^ (unsigned int)(v19 >> 4)) >> 12))) == 0LL )
          {
            RtlpLogHeapFailure(3, v21, v19, 0, 0LL, 0LL);
          }
          else
          {
            _m_prefetchw(v22);
            v23 = v22[1];
            v24 = 0;
            v25 = (unsigned __int16)(*(_DWORD *)(v19 + 12) >> 8);
            v26 = *(_QWORD *)(**v22 + 24LL);
            v27 = (unsigned int)v23 ^ RtlpLFHKey ^ *((_DWORD *)v23 + 6) ^ v26;
            if ( (_QWORD *)((char *)v23 + v25 * HIWORD(v27) + (unsigned __int16)v27) == (_QWORD *)v19 )
            {
              CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
              i = 0LL;
              if ( CurrentServiceSessionId )
                v29 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v29 = 2147353472LL;
              if ( *(_BYTE *)v29 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              {
                RtlpLogHeapFreeEvent(*(_QWORD *)(v26 + 24), v20 + 16, 2);
                i = 0LL;
              }
              v30 = 0LL;
              v31 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
              while ( 1 )
              {
                if ( (unsigned int)v30 > (unsigned int)v31 )
                {
                  LOWORD(v32) = -1;
                  v33 = -1;
                  goto LABEL_43;
                }
                v32 = *((_DWORD *)v22 + 8);
                if ( v32 >= 0
                  && _InterlockedCompareExchange((volatile signed __int32 *)v22 + 8, v32 | 0x80000000, v32) == v32 )
                {
                  break;
                }
                v30 = (unsigned int)(v30 + 1);
              }
              v33 = v32;
LABEL_43:
              *(_BYTE *)(v20 + 15) = 0x80;
              v34 = v22 + 2;
              if ( v33 == -1 )
              {
                RtlpInterlockedPushEntrySList(v34, v20 + 16, v31, 0LL);
              }
              else
              {
                _bittestandreset((signed __int32 *)v23[5], v25);
                if ( *v34 )
                {
                  v56 = (_QWORD *)RtlpInterlockedFlushSList(v34, v30, v31, 0LL);
                  while ( v56 )
                  {
                    v57 = *((_DWORD *)v56 - 1);
                    ++v24;
                    v56 = (_QWORD *)*v56;
                    v25 = (unsigned __int16)(v57 >> 8);
                    _bittestandreset((signed __int32 *)v23[5], v25);
                  }
                }
                a3 = (__int64)*v22;
                v35 = v25 << 16;
                if ( ((unsigned __int16)v35 | (unsigned __int16)(v24 + v32 + 1)) != *((_WORD *)v22 + 20)
                  || (i = *(unsigned int *)(a3 + 168),
                      v36 = *(unsigned int *)(*(_QWORD *)a3 + 32LL),
                      *(_DWORD *)(a3 + 164) == 1)
                  && (unsigned int)v36 >= (unsigned int)i
                  && (v36 = (unsigned int)(v36 - i), (unsigned int)v36 < *(_DWORD *)(*(_QWORD *)a3 + 36LL)) )
                {
                  *((_DWORD *)v22 + 8) = v35 | (v24 + (unsigned __int16)v32 + 1);
                  if ( (*((_DWORD *)v22 + 11) & 2) == 0 && (unsigned __int8)RtlpIsSubSegmentReuseable(a3, v22) )
                  {
                    while ( 1 )
                    {
                      v51 = *((_DWORD *)v22 + 11);
                      if ( !v51 || (v51 & 2) != 0 )
                        break;
                      if ( v51 == _InterlockedCompareExchange((volatile signed __int32 *)v22 + 11, v51 | 2, v51) )
                      {
                        a3 = (__int64)*v22;
                        for ( i = 0LL; ; i = (unsigned int)(i + 1) )
                        {
                          if ( (unsigned int)i >= 0x10 )
                          {
                            v49 = *(_QWORD *)(*(_QWORD *)(**v22 + 24LL) + 8LL * *((unsigned __int16 *)*v22 + 86) + 1192)
                                + 144LL;
                            goto LABEL_72;
                          }
                          v52 = ((_BYTE)i + (unsigned __int8)*(_WORD *)(a3 + 174)) & 0xF;
                          v53 = *(volatile signed __int32 **)(a3 + 8 * v52 + 16);
                          if ( v53 )
                          {
                            if ( (v53[11] & 1) == 0
                              && v53 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                                     (volatile signed __int64 *)(a3 + 8 * v52 + 16),
                                                                     (signed __int64)v22,
                                                                     (signed __int64)v53) )
                            {
                              _m_prefetchw((const void *)(v53 + 11));
                              if ( _InterlockedAnd(v53 + 11, 0xFFFFFFFD) != 2 )
                                goto LABEL_41;
                              v49 = **(_QWORD **)v53;
                              *(_QWORD *)v53 = 0LL;
                              v50 = (_QWORD **)(v53 + 12);
                              goto LABEL_73;
                            }
                          }
                          else if ( !_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)(a3 + 8 * v52 + 16),
                                       (signed __int64)v22,
                                       0LL) )
                          {
                            goto LABEL_41;
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  v37 = *v22;
                  v38 = (volatile signed __int32 *)_InterlockedExchange64(*v22 + 1, 0LL);
                  if ( v38 )
                  {
                    _m_prefetchw((const void *)(v38 + 11));
                    if ( _InterlockedAnd(v38 + 11, 0xFFFFFFF9) == 6 )
                    {
                      v54 = **(_QWORD **)v38;
                      *(_QWORD *)v38 = 0LL;
LABEL_89:
                      v55 = v38 + 12;
LABEL_90:
                      RtlpInterlockedPushEntrySList(v54, v55, a3, i);
                    }
                    else if ( (unsigned __int8)RtlpIsSubSegmentReuseable(v37, v38) )
                    {
                      while ( 1 )
                      {
                        v39 = *((_DWORD *)v38 + 11);
                        if ( !v39 || (v39 & 2) != 0 )
                          break;
                        if ( v39 == _InterlockedCompareExchange(v38 + 11, v39 | 2, v39) )
                        {
                          a3 = *(_QWORD *)v38;
                          for ( i = 0LL; ; i = (unsigned int)(i + 1) )
                          {
                            if ( (unsigned int)i >= 0x10 )
                            {
                              v54 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v38 + 24LL)
                                              + 8LL * *(unsigned __int16 *)(*(_QWORD *)v38 + 172LL)
                                              + 1192)
                                  + 144LL;
                              goto LABEL_89;
                            }
                            v40 = ((_BYTE)i + (unsigned __int8)*(_WORD *)(a3 + 174)) & 0xF;
                            v36 = *(_QWORD *)(a3 + 8 * v40 + 16);
                            if ( v36 )
                            {
                              if ( (*(_DWORD *)(v36 + 44) & 1) == 0
                                && v36 == _InterlockedCompareExchange64(
                                            (volatile signed __int64 *)(a3 + 8 * v40 + 16),
                                            (signed __int64)v38,
                                            v36) )
                              {
                                _m_prefetchw((const void *)(v36 + 44));
                                if ( _InterlockedAnd((volatile signed __int32 *)(v36 + 44), 0xFFFFFFFD) != 2 )
                                  goto LABEL_66;
                                v54 = **(_QWORD **)v36;
                                *(_QWORD *)v36 = 0LL;
                                v55 = (volatile signed __int32 *)(v36 + 48);
                                goto LABEL_90;
                              }
                            }
                            else if ( !_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)(a3 + 8 * v40 + 16),
                                         (signed __int64)v38,
                                         0LL) )
                            {
                              goto LABEL_66;
                            }
                          }
                        }
                      }
                    }
                  }
LABEL_66:
                  v41 = *v37;
                  v42 = (unsigned __int16 *)*v22;
                  v43 = *(_QWORD *)(v41 + 24);
                  if ( (*((_BYTE *)v22 + 38) & 3) != 0 )
                  {
                    v44 = (__int64)v22[1] + 4151;
                    OldProtect = 0;
                    BaseAddress = (PVOID)(v44 & 0xFFFFFFFFFFFFF000uLL);
                    ReservedBlockSize = RtlpGetReservedBlockSize(v22, v36, a3, i);
                    v46 = *(void **)(v43 + 24);
                    RegionSize = 16 * ReservedBlockSize * (unsigned __int64)*((unsigned __int16 *)v22 + 20);
                    HeapProtection = RtlpGetHeapProtection(v46);
                    ZwProtectVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      &BaseAddress,
                      &RegionSize,
                      HeapProtection,
                      &OldProtect);
                  }
                  *((_DWORD *)v22[1] + 5) = 0;
                  RtlpFreeUserBlock(v43, v22[1], a3, i);
                  a3 = (unsigned int)-*((unsigned __int16 *)v22 + 20);
                  _m_prefetchw(v42 + 80);
                  do
                  {
                    v48 = *((_QWORD *)v42 + 20);
                    LODWORD(v60) = v48 + a3;
                    HIDWORD(v60) = HIDWORD(v48) - 1;
                  }
                  while ( _InterlockedCompareExchange64((volatile signed __int64 *)v42 + 20, v60, v48) != v48 );
                  v22[1] = 0LL;
                  _InterlockedAdd((volatile signed __int32 *)(v43 + 60), 1u);
                  *((_DWORD *)v22 + 8) = 0;
                  _m_prefetchw((char *)v22 + 44);
                  if ( _InterlockedAnd((volatile signed __int32 *)v22 + 11, 0xFFFFFFFE) == 1 )
                  {
                    v49 = **v22;
                    *v22 = 0LL;
LABEL_72:
                    v50 = v22 + 6;
LABEL_73:
                    RtlpInterlockedPushEntrySList(v49, v50, a3, i);
                  }
                }
              }
            }
            else
            {
              RtlpLogHeapFailure(3, *(_QWORD *)(v26 + 24), v19, 0, 0LL, 0LL);
            }
          }
        }
LABEL_41:
        v6 = v67;
      }
      ++v7;
    }
    while ( v7 < v63 );
    v5 = v65;
LABEL_10:
    ++v5;
    ++v6;
    v65 = v5;
    v67 = v6;
  }
  while ( v5 < 0x81 );
  v9 = 12LL;
  v10 = a1 + 96;
  v64 = 12LL;
  do
  {
    v11 = 0;
    v12 = (struct _PEB *)RtlpInterlockedFlushSList(v10, v6, a3, i);
    v13 = v59;
    v14 = v12;
    if ( v12 )
    {
      do
      {
        v15 = v14;
        v14 = *(struct _PEB **)&v14->InheritedAddressSpace;
        v16 = 1LL << LOBYTE(v15->ImageBaseAddress);
        if ( v16 > 0xF0000 )
          v16 = 983040LL;
        v17 = v16 + WORD1(v15->ImageBaseAddress);
        v13 += v17;
        RtlpFreeUserBlockToHeap(*(PVOID *)(a1 + 24), v15);
        ++v11;
        LODWORD(v12) = RtlGetCurrentServiceSessionId();
        if ( (_DWORD)v12 )
        {
          v12 = NtCurrentPeb();
          v18 = (__int64)v12->SharedData + 550;
        }
        else
        {
          v18 = 2147353472LL;
        }
        if ( *(_BYTE *)v18 )
        {
          v12 = NtCurrentPeb();
          a3 = 1LL;
          if ( (v12->TracingFlags & 1) != 0 )
          {
            RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v15, v17, 0LL);
            LODWORD(v12) = RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), v15, v17, 0LL);
          }
        }
      }
      while ( v14 );
      v9 = v64;
      v59 = v13;
      if ( v11 )
        _InterlockedAdd((volatile signed __int32 *)(v10 + 16), -v11);
    }
    v10 += 48LL;
    v64 = --v9;
  }
  while ( v9 );
  if ( v13 )
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 72), -v13);
  return (int)v12;
}
