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

struct _PEB *__fastcall RtlpLowFragHeapFlushCaches(__int64 a1, __int64 a2, __int64 a3, __int64 i)
{
  unsigned int v5; // ecx
  __int64 v6; // rdx
  unsigned int v7; // r12d
  _DWORD *v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rdi
  int v11; // ebx
  struct _PEB *result; // rax
  __int64 v13; // r12
  struct _PEB *v14; // rsi
  struct _PEB *v15; // rbp
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rsi
  __int64 v25; // rdx
  _QWORD **v26; // rdi
  _QWORD *v27; // r14
  int v28; // r15d
  unsigned int v29; // ebp
  __int64 v30; // rbx
  unsigned int v31; // ecx
  __int64 v32; // rdx
  __int64 v33; // rcx
  char *v34; // rdx
  int CurrentServiceSessionId; // eax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r8
  signed __int32 v39; // ebx
  int v40; // eax
  _WORD *v41; // rcx
  unsigned int v42; // ebp
  signed __int64 v43; // rdx
  __int64 *v44; // rsi
  volatile signed __int32 *v45; // rbx
  signed __int32 v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rax
  unsigned __int16 *v49; // rsi
  __int64 v50; // rbx
  __int64 v51; // rax
  unsigned __int16 ReservedBlockSize; // ax
  __int64 v53; // rcx
  unsigned int HeapProtection; // eax
  signed __int64 v55; // rcx
  __int64 v56; // rcx
  _QWORD **v57; // rdx
  signed __int32 v58; // eax
  __int64 v59; // rcx
  volatile signed __int32 *v60; // rdx
  __int64 v61; // rcx
  volatile signed __int32 *v62; // rdx
  _QWORD *v63; // rax
  unsigned int v64; // edx
  int *v65; // [rsp+20h] [rbp-78h]
  __int64 v66; // [rsp+28h] [rbp-70h]
  __int64 v67; // [rsp+30h] [rbp-68h]
  signed __int64 v68; // [rsp+38h] [rbp-60h]
  unsigned __int64 v69; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v70[10]; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v71; // [rsp+A0h] [rbp+8h]
  __int64 v72; // [rsp+A0h] [rbp+8h]
  unsigned int v73; // [rsp+A8h] [rbp+10h]
  int v74; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v75; // [rsp+B8h] [rbp+20h]

  v5 = 0;
  v67 = 0LL;
  v6 = 0LL;
  v73 = 0;
  v75 = 0LL;
  do
  {
    v7 = 0;
    if ( (*(_BYTE *)(a1 + 4 * v6 + 679) & 1) == 0 || (*(_BYTE *)(a1 + 672) & 1) != 0 )
    {
      v71 = 1;
    }
    else
    {
      v71 = RtlpAffinityState;
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
        v23 = RtlpLocalInfoAllocFromCache(v8, v7);
        v24 = v23;
        if ( v23 )
        {
          *(_DWORD *)(*(_QWORD *)v8 + 36LL) = 0;
          v25 = *(_QWORD *)(a1 + 24);
          if ( (unsigned __int16)v25 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v23 + 8) ^ (v23 >> 4))
            || (v26 = *(_QWORD ***)(v23
                                  - ((unsigned __int64)((unsigned int)v25 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v23 + 8) ^ (unsigned int)(v23 >> 4)) >> 12))) == 0LL )
          {
            RtlpLogHeapFailure(3, v25, v23, 0, 0LL, 0LL);
          }
          else
          {
            _m_prefetchw(v26);
            v27 = v26[1];
            v28 = 0;
            v29 = (unsigned __int16)(*(_DWORD *)(v23 + 12) >> 8);
            v30 = *(_QWORD *)(**v26 + 24LL);
            v31 = (unsigned int)v27 ^ RtlpLFHKey ^ *((_DWORD *)v27 + 6) ^ v30;
            v32 = (unsigned __int16)v31;
            v33 = v29 * HIWORD(v31);
            v34 = (char *)v27 + v33 + v32;
            if ( v34 == (char *)v23 )
            {
              CurrentServiceSessionId = RtlGetCurrentServiceSessionId(
                                          v33,
                                          v34,
                                          (unsigned int)RtlpLFHKey,
                                          i,
                                          v65,
                                          v66,
                                          v67);
              i = 0LL;
              if ( CurrentServiceSessionId )
                v36 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v36 = 2147353472LL;
              if ( *(_BYTE *)v36 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              {
                RtlpLogHeapFreeEvent(*(_QWORD *)(v30 + 24), v24 + 16, 2LL, 0LL);
                i = 0LL;
              }
              v37 = 0LL;
              v38 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
              while ( 1 )
              {
                if ( (unsigned int)v37 > (unsigned int)v38 )
                {
                  LOWORD(v39) = -1;
                  v40 = -1;
                  goto LABEL_43;
                }
                v39 = *((_DWORD *)v26 + 8);
                if ( v39 >= 0
                  && _InterlockedCompareExchange((volatile signed __int32 *)v26 + 8, v39 | 0x80000000, v39) == v39 )
                {
                  break;
                }
                v37 = (unsigned int)(v37 + 1);
              }
              v40 = v39;
LABEL_43:
              *(_BYTE *)(v24 + 15) = 0x80;
              v41 = v26 + 2;
              if ( v40 == -1 )
              {
                RtlpInterlockedPushEntrySList(v41, v24 + 16, v38, 0LL);
              }
              else
              {
                _bittestandreset((signed __int32 *)v27[5], v29);
                if ( *v41 )
                {
                  v63 = (_QWORD *)RtlpInterlockedFlushSList(v41, v37, v38, 0LL);
                  while ( v63 )
                  {
                    v64 = *((_DWORD *)v63 - 1);
                    ++v28;
                    v63 = (_QWORD *)*v63;
                    v29 = (unsigned __int16)(v64 >> 8);
                    _bittestandreset((signed __int32 *)v27[5], v29);
                  }
                }
                a3 = (__int64)*v26;
                v42 = v29 << 16;
                if ( ((unsigned __int16)v42 | (unsigned __int16)(v28 + v39 + 1)) != *((_WORD *)v26 + 20)
                  || (i = *(unsigned int *)(a3 + 168),
                      v43 = *(unsigned int *)(*(_QWORD *)a3 + 32LL),
                      *(_DWORD *)(a3 + 164) == 1)
                  && (unsigned int)v43 >= (unsigned int)i
                  && (v43 = (unsigned int)(v43 - i), (unsigned int)v43 < *(_DWORD *)(*(_QWORD *)a3 + 36LL)) )
                {
                  *((_DWORD *)v26 + 8) = v42 | (v28 + (unsigned __int16)v39 + 1);
                  if ( (*((_DWORD *)v26 + 11) & 2) == 0 && (unsigned __int8)RtlpIsSubSegmentReuseable(a3, v26) )
                  {
                    while ( 1 )
                    {
                      v58 = *((_DWORD *)v26 + 11);
                      if ( !v58 || (v58 & 2) != 0 )
                        break;
                      if ( v58 == _InterlockedCompareExchange((volatile signed __int32 *)v26 + 11, v58 | 2, v58) )
                      {
                        a3 = (__int64)*v26;
                        for ( i = 0LL; ; i = (unsigned int)(i + 1) )
                        {
                          if ( (unsigned int)i >= 0x10 )
                          {
                            v56 = *(_QWORD *)(*(_QWORD *)(**v26 + 24LL) + 8LL * *((unsigned __int16 *)*v26 + 86) + 1192)
                                + 144LL;
                            goto LABEL_72;
                          }
                          v59 = ((_BYTE)i + (unsigned __int8)*(_WORD *)(a3 + 174)) & 0xF;
                          v60 = *(volatile signed __int32 **)(a3 + 8 * v59 + 16);
                          if ( v60 )
                          {
                            if ( (v60[11] & 1) == 0
                              && v60 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                                     (volatile signed __int64 *)(a3 + 8 * v59 + 16),
                                                                     (signed __int64)v26,
                                                                     (signed __int64)v60) )
                            {
                              _m_prefetchw((const void *)(v60 + 11));
                              if ( _InterlockedAnd(v60 + 11, 0xFFFFFFFD) != 2 )
                                goto LABEL_41;
                              v56 = **(_QWORD **)v60;
                              *(_QWORD *)v60 = 0LL;
                              v57 = (_QWORD **)(v60 + 12);
                              goto LABEL_73;
                            }
                          }
                          else if ( !_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)(a3 + 8 * v59 + 16),
                                       (signed __int64)v26,
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
                  v44 = *v26;
                  v45 = (volatile signed __int32 *)_InterlockedExchange64(*v26 + 1, 0LL);
                  if ( v45 )
                  {
                    _m_prefetchw((const void *)(v45 + 11));
                    if ( _InterlockedAnd(v45 + 11, 0xFFFFFFF9) == 6 )
                    {
                      v61 = **(_QWORD **)v45;
                      *(_QWORD *)v45 = 0LL;
LABEL_89:
                      v62 = v45 + 12;
LABEL_90:
                      RtlpInterlockedPushEntrySList(v61, v62, a3, i);
                    }
                    else if ( (unsigned __int8)RtlpIsSubSegmentReuseable(v44, v45) )
                    {
                      while ( 1 )
                      {
                        v46 = *((_DWORD *)v45 + 11);
                        if ( !v46 || (v46 & 2) != 0 )
                          break;
                        if ( v46 == _InterlockedCompareExchange(v45 + 11, v46 | 2, v46) )
                        {
                          a3 = *(_QWORD *)v45;
                          for ( i = 0LL; ; i = (unsigned int)(i + 1) )
                          {
                            if ( (unsigned int)i >= 0x10 )
                            {
                              v61 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v45 + 24LL)
                                              + 8LL * *(unsigned __int16 *)(*(_QWORD *)v45 + 172LL)
                                              + 1192)
                                  + 144LL;
                              goto LABEL_89;
                            }
                            v47 = ((_BYTE)i + (unsigned __int8)*(_WORD *)(a3 + 174)) & 0xF;
                            v43 = *(_QWORD *)(a3 + 8 * v47 + 16);
                            if ( v43 )
                            {
                              if ( (*(_DWORD *)(v43 + 44) & 1) == 0
                                && v43 == _InterlockedCompareExchange64(
                                            (volatile signed __int64 *)(a3 + 8 * v47 + 16),
                                            (signed __int64)v45,
                                            v43) )
                              {
                                _m_prefetchw((const void *)(v43 + 44));
                                if ( _InterlockedAnd((volatile signed __int32 *)(v43 + 44), 0xFFFFFFFD) != 2 )
                                  goto LABEL_66;
                                v61 = **(_QWORD **)v43;
                                *(_QWORD *)v43 = 0LL;
                                v62 = (volatile signed __int32 *)(v43 + 48);
                                goto LABEL_90;
                              }
                            }
                            else if ( !_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)(a3 + 8 * v47 + 16),
                                         (signed __int64)v45,
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
                  v48 = *v44;
                  v49 = (unsigned __int16 *)*v26;
                  v50 = *(_QWORD *)(v48 + 24);
                  if ( (*((_BYTE *)v26 + 38) & 3) != 0 )
                  {
                    v51 = (__int64)v26[1] + 4151;
                    v74 = 0;
                    v70[0] = v51 & 0xFFFFFFFFFFFFF000uLL;
                    ReservedBlockSize = RtlpGetReservedBlockSize(v26, v43, a3, i);
                    v53 = *(_QWORD *)(v50 + 24);
                    v69 = 16 * ReservedBlockSize * (unsigned __int64)*((unsigned __int16 *)v26 + 20);
                    HeapProtection = RtlpGetHeapProtection(v53, 1LL);
                    v65 = &v74;
                    ZwProtectVirtualMemory(-1LL, v70, &v69, HeapProtection);
                  }
                  *((_DWORD *)v26[1] + 5) = 0;
                  RtlpFreeUserBlock(v50, v26[1], a3, i);
                  a3 = (unsigned int)-*((unsigned __int16 *)v26 + 20);
                  _m_prefetchw(v49 + 80);
                  do
                  {
                    v55 = *((_QWORD *)v49 + 20);
                    LODWORD(v68) = v55 + a3;
                    HIDWORD(v68) = HIDWORD(v55) - 1;
                  }
                  while ( _InterlockedCompareExchange64((volatile signed __int64 *)v49 + 20, v68, v55) != v55 );
                  v26[1] = 0LL;
                  _InterlockedAdd((volatile signed __int32 *)(v50 + 60), 1u);
                  *((_DWORD *)v26 + 8) = 0;
                  _m_prefetchw((char *)v26 + 44);
                  if ( _InterlockedAnd((volatile signed __int32 *)v26 + 11, 0xFFFFFFFE) == 1 )
                  {
                    v56 = **v26;
                    *v26 = 0LL;
LABEL_72:
                    v57 = v26 + 6;
LABEL_73:
                    RtlpInterlockedPushEntrySList(v56, v57, a3, i);
                  }
                }
              }
            }
            else
            {
              RtlpLogHeapFailure(3, *(_QWORD *)(v30 + 24), v23, 0, 0LL, 0LL);
            }
          }
        }
LABEL_41:
        v6 = v75;
      }
      ++v7;
    }
    while ( v7 < v71 );
    v5 = v73;
LABEL_10:
    ++v5;
    ++v6;
    v73 = v5;
    v75 = v6;
  }
  while ( v5 < 0x81 );
  v9 = 12LL;
  v10 = a1 + 96;
  v72 = 12LL;
  do
  {
    v11 = 0;
    result = (struct _PEB *)RtlpInterlockedFlushSList(v10, v6, a3, i);
    v13 = v67;
    v14 = result;
    if ( result )
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
        RtlpFreeUserBlockToHeap(*(_QWORD *)(a1 + 24), v15);
        ++v11;
        result = (struct _PEB *)RtlGetCurrentServiceSessionId(v19, v18, v20, v21, v65, v66, v67);
        if ( (_DWORD)result )
        {
          result = NtCurrentPeb();
          v22 = (__int64)result->SharedData + 550;
        }
        else
        {
          v22 = 2147353472LL;
        }
        if ( *(_BYTE *)v22 )
        {
          result = NtCurrentPeb();
          a3 = 1LL;
          if ( (result->TracingFlags & 1) != 0 )
          {
            RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v15, v17, 0LL);
            result = (struct _PEB *)RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), v15, v17, 0LL);
          }
        }
      }
      while ( v14 );
      v9 = v72;
      v67 = v13;
      if ( v11 )
        _InterlockedAdd((volatile signed __int32 *)(v10 + 16), -v11);
    }
    v10 += 48LL;
    v72 = --v9;
  }
  while ( v9 );
  if ( v13 )
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 72), -v13);
  return result;
}
