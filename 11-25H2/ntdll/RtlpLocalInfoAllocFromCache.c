/*
 * XREFs of RtlpLocalInfoAllocFromCache @ 0x180052EB0
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x18000129C (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     RtlpIsSubSegmentReuseable @ 0x180001BB0 (RtlpIsSubSegmentReuseable.c)
 *     RtlpLogHeapReuseThresholdActivate @ 0x180001E38 (RtlpLogHeapReuseThresholdActivate.c)
 *     RtlpSetSegmentInfo @ 0x180001ED0 (RtlpSetSegmentInfo.c)
 *     RtlpLogHeapSubSegmentActivate @ 0x180002060 (RtlpLogHeapSubSegmentActivate.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x1800F6C40 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpLogHeapAffinityManagerEnable @ 0x180119F00 (RtlpLogHeapAffinityManagerEnable.c)
 *     RtlpInterlockedPopEntrySList @ 0x180166F90 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x180166FD0 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x180167040 (InterlockedPushListSList.c)
 */

__int64 __fastcall RtlpLocalInfoAllocFromCache(volatile __int64 *a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v5; // rbx
  int v6; // r15d
  __int64 v7; // rbp
  unsigned int i; // r8d
  signed __int32 v9; // edx
  volatile signed __int32 *v10; // rdi
  __int64 v11; // rcx
  unsigned int v12; // r14d
  _SLIST_ENTRY *v13; // rbx
  PSLIST_ENTRY v14; // r15
  union _SLIST_HEADER *v15; // rbp
  PSLIST_ENTRY v16; // rsi
  __int64 v17; // r8
  signed __int32 v18; // eax
  __int64 j; // r8
  _DWORD *v20; // rcx
  __int64 v21; // rcx
  char v22; // dl
  _DWORD *v23; // rcx
  __int64 v24; // rcx
  _DWORD *v25; // rcx
  __int64 v26; // rcx
  signed __int32 v27; // eax
  __int64 v28; // rax
  volatile signed __int32 *v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r14
  struct _TEB *v32; // r9
  __int64 v33; // r11
  unsigned __int64 v34; // r10
  char v35; // cl
  unsigned __int64 v36; // r8
  int v37; // r11d
  __int64 v38; // rdi
  _QWORD *v39; // r9
  unsigned int v40; // r11d
  __int64 v43; // rax
  unsigned int v46; // ebp
  __int64 v47; // r8
  __int64 v48; // r15
  volatile signed __int32 **v49; // r12
  __int64 v50; // rbx
  volatile signed __int64 *v51; // rbp
  volatile signed __int32 **v52; // rsi
  unsigned int v53; // r14d
  volatile signed __int32 *v54; // rdx
  union _SLIST_HEADER *v55; // rsi
  PSLIST_ENTRY v56; // rax
  __int64 v57; // r8
  volatile signed __int64 **v58; // rbx
  PSLIST_ENTRY v59; // r14
  _DWORD *SharedData; // rcx
  __int64 v61; // rcx
  _DWORD *v62; // rcx
  __int64 v63; // rcx
  _QWORD *v64; // rsi
  __int64 v65; // rax
  unsigned __int64 v67; // rax
  signed __int64 v68; // r8
  unsigned __int64 v69; // rtt
  __int64 v70; // rcx
  _QWORD *v71; // rax
  volatile signed __int64 v72; // rcx
  __int64 v73; // rdi
  char *v74; // rcx
  __int64 v75; // rax
  signed __int32 v76; // eax
  __int64 v77; // rax
  volatile signed __int32 *v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rcx
  _QWORD **v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rcx

  v4 = (__int64)a1;
LABEL_2:
  while ( 2 )
  {
    v5 = *(_QWORD *)(v4 + 8);
    if ( v5 )
    {
      v6 = 0;
      v7 = *(_QWORD *)(*(_QWORD *)v4 + 24LL);
      if ( (HIWORD(*(_DWORD *)(v5 + 32)) & 0x8000u) != 0 )
      {
        v6 = 1;
        v73 = v7 + 4LL * *(unsigned __int16 *)(v4 + 172);
        if ( (*(_BYTE *)(v73 + 679) & 1) == 0
          && (int)RtlpAffinitizeSegmentInfoForBucket(*(_QWORD *)(*(_QWORD *)v4 + 24LL), *(unsigned __int8 *)(v73 + 678)) >= 0 )
        {
          *(_BYTE *)(v73 + 679) |= 1u;
          v74 = (unsigned int)RtlGetCurrentServiceSessionId()
              ? (char *)NtCurrentPeb()->SharedData + 550
              : (char *)2147353472;
          if ( *v74 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapAffinityManagerEnable(*(_QWORD *)(v7 + 24), *(unsigned __int8 *)(v73 + 678));
        }
      }
      a4 = 0LL;
      if ( MEMORY[0x7FFE036A] > 1u )
        a4 = 100LL;
      for ( i = 0; ; ++i )
      {
        if ( i > (unsigned int)a4 )
          goto LABEL_56;
        v9 = *(_DWORD *)(v5 + 32);
        if ( (v9 & 0x80000000) == 0 )
        {
          if ( !(_WORD)v9 )
            goto LABEL_56;
          if ( _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 32), v9 | 0x80000000, v9) == v9 )
            break;
        }
      }
      if ( v9 == -1 )
        goto LABEL_56;
      v31 = *(_QWORD *)(v5 + 8);
      if ( !v31 || *(_QWORD *)v5 != v4 || !(_WORD)v9 )
      {
        *(_DWORD *)(v5 + 32) = v9;
        goto LABEL_56;
      }
      v32 = NtCurrentTeb();
      v33 = BYTE2(v32->HeapData);
      v34 = (unsigned __int8)RtlpSearchWidth[*(unsigned __int16 *)(v4 + 172)];
      if ( (_BYTE)v33 == HIBYTE(v32->HeapData) )
      {
        v67 = qword_1801CFF00;
        do
        {
          v68 = ((((v67 ^ (v67 >> 12)) << 25) ^ v67 ^ (v67 >> 12)) >> 27) ^ ((v67 ^ (v67 >> 12)) << 25) ^ v67 ^ (v67 >> 12);
          v69 = v67;
          v67 = _InterlockedCompareExchange64(&qword_1801CFF00, v68, v67);
        }
        while ( v69 != v67 );
        v35 = 29 * v68;
        HIBYTE(v32->HeapData) = 29 * v68;
      }
      else
      {
        v35 = BYTE2(v32->HeapData);
      }
      BYTE2(v32->HeapData) = v35 + 1;
      v36 = *(_QWORD *)(v31 + 32);
      v37 = RtlpLowFragHeapRandomData[v33];
      v38 = *(_QWORD *)(v31 + 40);
      if ( v36 >= 0x40 )
      {
        v64 = (_QWORD *)(v38 + 8 * ((v36 - 1) >> 6));
        v39 = (_QWORD *)(v38 + 8 * ((unsigned __int64)(unsigned int)(v9 >> 16) >> 6));
        do
        {
          if ( *v39 != -1LL )
            break;
          v71 = v39++;
          if ( v71 == v64 )
            v39 = *(_QWORD **)(v31 + 40);
        }
        while ( v39 != (_QWORD *)(v38 + 8 * ((unsigned __int64)(unsigned int)(v9 >> 16) >> 6)) );
        if ( v39 == v64 && (v36 & 0x3F) != 0 && (*(_QWORD *)(v31 + 32) & 0x3FuLL) < v34 )
          LODWORD(v34) = v36 & 0x3F;
      }
      else
      {
        v39 = *(_QWORD **)(v31 + 40);
        if ( v36 >= v34 )
          LODWORD(v36) = v34;
        LODWORD(v34) = v36;
      }
      v40 = (unsigned int)(v34 * v37) >> 8;
      if ( (unsigned int)v34 >= 0x40 )
      {
        v43 = -1LL;
      }
      else
      {
        _RAX = ~*v39;
        __asm { tzcnt   r8, rax }
        LOBYTE(v40) = _R8 + v40;
        v43 = ((1LL << v34) - 1) << _R8;
      }
      _RAX = ~__ROR8__(*v39 | ~v43, v40);
      __asm { tzcnt   rcx, rax }
      LODWORD(_RCX) = ((_BYTE)v40 + (_BYTE)_RCX) & 0x3F;
      *v39 |= 1LL << _RCX;
      a4 = (unsigned int)_RCX + ((unsigned int)(((__int64)v39 - *(_QWORD *)(v31 + 40)) >> 3) << 6);
      *(_DWORD *)(v5 + 32) = ((_DWORD)a4 << 16) | ((unsigned __int16)v9 - 1);
      v46 = RtlpLFHKey ^ v31 ^ *(_DWORD *)(v31 + 24) ^ v7;
      v47 = v31 + (unsigned int)a4 * HIWORD(v46) + (unsigned __int16)v46;
      if ( (*(_BYTE *)(v47 + 15) & 0x3F) != 0 )
      {
        RtlpLogHeapFailure(15, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 24LL) + 24LL), v47, 0LL, 0LL, 0LL);
LABEL_56:
        v47 = 0LL;
      }
      if ( v6 && (unsigned int)(HIDWORD(RtlpAffinityState[0]) + 1) < LODWORD(RtlpAffinityState[0]) )
        _InterlockedCompareExchange(
          (_DWORD *)RtlpAffinityState + 1,
          2 * (HIDWORD(RtlpAffinityState[0]) + 1) - 1,
          SHIDWORD(RtlpAffinityState[0]));
      if ( v47 )
        return v47;
    }
    v48 = *(_QWORD *)v4;
    v49 = (volatile signed __int32 **)(v4 + 16);
LABEL_60:
    v10 = 0LL;
    while ( 2 )
    {
      v50 = 0LL;
      v51 = 0LL;
      v52 = v49;
      v53 = 0;
      do
      {
        v54 = *v52;
        if ( *v52 && *((unsigned __int16 *)v54 + 16) > v53 )
        {
          if ( (RtlpLowFragHeapGlobalFlags & 4) != 0
            || (v65 = *(unsigned __int16 *)(v4 + 172), (unsigned int)v65 > 0x70)
            || *(_DWORD *)(v4 + 160) < 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v65]
            || (LOBYTE(a4) = 1, (unsigned int)(*((_WORD *)v54 + 20) >> 2) <= *((_WORD *)v54 + 16)) )
          {
            LOBYTE(a4) = 0;
          }
          SharedData = NtCurrentPeb()->SharedData;
          if ( SharedData && *SharedData )
            v61 = (__int64)NtCurrentPeb()->SharedData + 560;
          else
            v61 = 2147353482LL;
          if ( !*(_BYTE *)v61 )
          {
            v62 = NtCurrentPeb()->SharedData;
            if ( v62 && *v62 )
              v63 = (__int64)NtCurrentPeb()->SharedData + 550;
            else
              v63 = 2147353472LL;
            if ( !*(_BYTE *)v63 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
            {
              if ( (_BYTE)a4 )
                goto LABEL_64;
LABEL_83:
              v10 = *v52;
              v51 = (volatile signed __int64 *)(v4 + 8 * v50 + 16);
              v53 = *((unsigned __int16 *)v54 + 16);
              goto LABEL_64;
            }
          }
          if ( !(_BYTE)a4 )
            goto LABEL_83;
          RtlpLogHeapReuseThresholdActivate(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 24LL) + 24LL),
            *((_QWORD *)v54 + 1),
            *(unsigned __int16 *)(v4 + 172),
            a4);
        }
LABEL_64:
        v50 = (unsigned int)(v50 + 1);
        ++v52;
      }
      while ( (unsigned int)v50 < 0x10 );
      v49 = (volatile signed __int32 **)(v4 + 16);
      if ( v51 )
      {
        v55 = (union _SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v48 + 24) + 8LL * *(unsigned __int16 *)(v4 + 172) + 1192)
                                    + 144LL);
        while ( 1 )
        {
          v56 = RtlpInterlockedPopEntrySList(v55);
          v58 = (volatile signed __int64 **)v56;
          v59 = v56;
          if ( !v56 )
            break;
          v58 = (volatile signed __int64 **)&v56[-3];
          if ( (*((_DWORD *)&v56[-1].Next + 3) & 1) != 0 )
          {
            if ( !(unsigned int)RtlpSetSegmentInfo(v58, (volatile signed __int64 *)v4) )
            {
              RtlpInterlockedPushEntrySList(v55, v59, v57, a4);
              v58 = 0LL;
            }
            break;
          }
          _m_prefetchw((char *)v58 + 44);
          if ( _InterlockedAnd((volatile signed __int32 *)v58 + 11, 0xFFFFFFFD) == 2 )
          {
            v72 = **v58;
            *v58 = 0LL;
            RtlpInterlockedPushEntrySList(v72, v56, v57, a4);
          }
        }
        if ( v10 != (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                 v51,
                                                 (signed __int64)v58,
                                                 (signed __int64)v10) )
        {
          if ( v58 )
            RtlpInterlockedPushEntrySList(v55, v58 + 6, v57, a4);
          continue;
        }
        if ( !v58 )
          *(_WORD *)(v4 + 174) = (unsigned __int8)(((__int64)v51 - v4 - 16) >> 3);
        if ( v10 )
        {
          _m_prefetchw((const void *)(v10 + 11));
          if ( _InterlockedAnd(v10 + 11, 0xFFFFFFFD) != 2 )
            goto LABEL_14;
          v70 = **(_QWORD **)v10;
          *(_QWORD *)v10 = 0LL;
          RtlpInterlockedPushEntrySList(v70, v10 + 12, v57, a4);
          goto LABEL_60;
        }
      }
      else
      {
        v10 = 0LL;
      }
      break;
    }
    v11 = *(_QWORD *)(v48 + 24);
    v12 = 0;
    v13 = 0LL;
    v14 = 0LL;
    v15 = (union _SLIST_HEADER *)(*(_QWORD *)(v11 + 8LL * *(unsigned __int16 *)(v4 + 172) + 1192) + 144LL);
    v16 = RtlpInterlockedPopEntrySList(v15);
    if ( !v16 )
      goto LABEL_13;
    while ( 2 )
    {
      v10 = (volatile signed __int32 *)&v16[-3];
      if ( (*((_DWORD *)&v16[-1].Next + 3) & 1) == 0 )
      {
        _m_prefetchw((const void *)(v10 + 11));
        if ( _InterlockedAnd(v10 + 11, 0xFFFFFFFD) != 2 )
          goto LABEL_178;
LABEL_184:
        v83 = **(_QWORD **)v10;
        *(_QWORD *)v10 = 0LL;
        RtlpInterlockedPushEntrySList(v83, v16, v17, a4);
        goto LABEL_178;
      }
      if ( !(unsigned int)RtlpSetSegmentInfo((volatile signed __int64 **)&v16[-3], (volatile signed __int64 *)v4) )
      {
        v16->Next = v13;
        v13 = v16;
        if ( !v12 )
          v14 = v16;
        ++v12;
LABEL_178:
        v10 = 0LL;
        v16 = RtlpInterlockedPopEntrySList(v15);
        if ( !v16 )
          goto LABEL_160;
        continue;
      }
      break;
    }
    _m_prefetchw((const void *)(v10 + 11));
    if ( _InterlockedAnd(v10 + 11, 0xFFFFFFFD) == 2 )
      goto LABEL_184;
    if ( !RtlpIsSubSegmentReuseable(v4, (__int64)&v16[-3]) )
      goto LABEL_178;
LABEL_160:
    if ( v12 )
      InterlockedPushListSList(v15, v13, v14, v12);
LABEL_13:
    if ( v10 )
    {
LABEL_14:
      *((_BYTE *)v10 + 43) = a2;
      v4 = (__int64)a1;
      do
      {
        v18 = *((_DWORD *)v10 + 11);
        if ( !v18 || (v18 & 6) != 0 )
          goto LABEL_2;
      }
      while ( v18 != _InterlockedCompareExchange(v10 + 11, v18 | 6, v18) );
      j = *(_QWORD *)v10;
      if ( *(volatile __int64 **)v10 == a1 )
      {
        v20 = NtCurrentPeb()->SharedData;
        if ( v20 && *v20 )
          v21 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v21 = 2147353472LL;
        if ( *(_BYTE *)v21 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*a1 + 24) + 24LL), *((_QWORD *)v10 + 1), j, a4);
        v10 = (volatile signed __int32 *)_InterlockedExchange64(a1 + 1, (__int64)v10);
        if ( v10 )
        {
          _m_prefetchw((const void *)(v10 + 11));
          if ( _InterlockedAnd(v10 + 11, 0xFFFFFFF9) == 6 )
            goto LABEL_164;
          if ( *((_WORD *)v10 + 16) )
          {
            if ( (RtlpLowFragHeapGlobalFlags & 4) != 0
              || (v75 = *((unsigned __int16 *)a1 + 86), (unsigned int)v75 > 0x70)
              || *((_DWORD *)a1 + 40) < 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v75]
              || (v22 = 1, (unsigned int)(*((_WORD *)v10 + 20) >> 2) <= *((_WORD *)v10 + 16)) )
            {
              v22 = 0;
            }
            v23 = NtCurrentPeb()->SharedData;
            if ( v23 && *v23 )
              v24 = (__int64)NtCurrentPeb()->SharedData + 560;
            else
              v24 = 2147353482LL;
            if ( *(_BYTE *)v24
              || ((v25 = NtCurrentPeb()->SharedData) == 0LL || !*v25
                ? (v26 = 2147353472LL)
                : (v26 = (__int64)NtCurrentPeb()->SharedData + 550),
                  *(_BYTE *)v26 && (NtCurrentPeb()->TracingFlags & 1) != 0) )
            {
              if ( !v22 )
                goto LABEL_34;
              RtlpLogHeapReuseThresholdActivate(
                *(_QWORD *)(*(_QWORD *)(*a1 + 24) + 24LL),
                *((_QWORD *)v10 + 1),
                *((unsigned __int16 *)a1 + 86),
                a4);
            }
            else if ( !v22 )
            {
LABEL_34:
              while ( 1 )
              {
                v27 = *((_DWORD *)v10 + 11);
                if ( !v27 || (v27 & 2) != 0 )
                  break;
                if ( v27 == _InterlockedCompareExchange(v10 + 11, v27 | 2, v27) )
                {
                  a4 = *(_QWORD *)v10;
                  for ( j = 0LL; (unsigned int)j < 0x10; j = (unsigned int)(j + 1) )
                  {
                    v28 = ((_BYTE)j + (unsigned __int8)*(_WORD *)(a4 + 174)) & 0xF;
                    v29 = *(volatile signed __int32 **)(a4 + 8 * v28 + 16);
                    v30 = a4 + 8 * v28;
                    if ( v29 )
                    {
                      if ( (v29[11] & 1) == 0
                        && v29 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                               (volatile signed __int64 *)(v30 + 16),
                                                               (signed __int64)v10,
                                                               (signed __int64)v29) )
                      {
                        _m_prefetchw((const void *)(v29 + 11));
                        if ( _InterlockedAnd(v29 + 11, 0xFFFFFFFD) == 2 )
                        {
                          v80 = **(_QWORD **)v29;
                          *(_QWORD *)v29 = 0LL;
                          RtlpInterlockedPushEntrySList(v80, v29 + 12, j, a4);
                        }
                        goto LABEL_2;
                      }
                    }
                    else if ( !_InterlockedCompareExchange64(
                                 (volatile signed __int64 *)(v30 + 16),
                                 (signed __int64)v10,
                                 0LL) )
                    {
                      goto LABEL_2;
                    }
                  }
                  goto LABEL_159;
                }
              }
            }
          }
        }
        continue;
      }
      _m_prefetchw((const void *)(v10 + 11));
      if ( _InterlockedAnd(v10 + 11, 0xFFFFFFF9) == 6 )
      {
LABEL_164:
        v81 = (_QWORD **)(v10 + 12);
        v82 = **(_QWORD **)v10;
        *(_QWORD *)v10 = 0LL;
        goto LABEL_165;
      }
      if ( !RtlpIsSubSegmentReuseable(j, (__int64)v10) )
        continue;
      do
      {
        v76 = *((_DWORD *)v10 + 11);
        if ( !v76 || (v76 & 2) != 0 )
          goto LABEL_2;
      }
      while ( v76 != _InterlockedCompareExchange(v10 + 11, v76 | 2, v76) );
      a4 = *(_QWORD *)v10;
      for ( j = 0LL; ; j = (unsigned int)(j + 1) )
      {
        if ( (unsigned int)j >= 0x10 )
        {
LABEL_159:
          RtlpInterlockedPushEntrySList(
            *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v10 + 24LL) + 8LL * *(unsigned __int16 *)(*(_QWORD *)v10 + 172LL) + 1192)
          + 144LL,
            v10 + 12,
            j,
            a4);
          goto LABEL_2;
        }
        v77 = ((_BYTE)j + (unsigned __int8)*(_WORD *)(a4 + 174)) & 0xF;
        v78 = *(volatile signed __int32 **)(a4 + 8 * v77 + 16);
        v79 = a4 + 8 * v77;
        if ( v78 )
        {
          if ( (v78[11] & 1) == 0
            && v78 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                   (volatile signed __int64 *)(v79 + 16),
                                                   (signed __int64)v10,
                                                   (signed __int64)v78) )
          {
            _m_prefetchw((const void *)(v78 + 11));
            if ( _InterlockedAnd(v78 + 11, 0xFFFFFFFD) == 2 )
            {
              v82 = **(_QWORD **)v78;
              *(_QWORD *)v78 = 0LL;
              v81 = (_QWORD **)(v78 + 12);
LABEL_165:
              RtlpInterlockedPushEntrySList(v82, v81, j, a4);
            }
            goto LABEL_2;
          }
        }
        else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v79 + 16), (signed __int64)v10, 0LL) )
        {
          goto LABEL_2;
        }
      }
    }
    return 0LL;
  }
}
