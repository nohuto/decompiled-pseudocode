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

__int64 __fastcall RtlpLocalInfoAllocFromCache(volatile __int64 *a1, char a2)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  int v4; // r15d
  __int64 v5; // rbp
  unsigned int v6; // r9d
  unsigned int i; // r8d
  signed __int32 v8; // edx
  volatile signed __int32 *v9; // rdi
  __int64 v10; // rcx
  unsigned int v11; // r14d
  _SLIST_ENTRY *v12; // rbx
  PSLIST_ENTRY v13; // r15
  _SLIST_HEADER *v14; // rbp
  PSLIST_ENTRY v15; // rsi
  __int64 v16; // r8
  _QWORD *v17; // r9
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
  _QWORD *v30; // rcx
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
  int v46; // r9d
  unsigned int v47; // ebp
  __int64 v48; // r8
  __int64 v49; // r15
  volatile signed __int32 **v50; // r12
  __int64 v51; // rbx
  volatile signed __int64 *v52; // rbp
  volatile signed __int32 **v53; // rsi
  unsigned int v54; // r14d
  volatile signed __int32 *v55; // rdx
  _SLIST_HEADER *v56; // rsi
  PSLIST_ENTRY v57; // rax
  __int64 v58; // r8
  volatile signed __int64 **v59; // rbx
  PSLIST_ENTRY v60; // r14
  char v61; // r9
  _DWORD *SharedData; // rcx
  __int64 v63; // rcx
  _DWORD *v64; // rcx
  __int64 v65; // rcx
  _QWORD *v66; // rsi
  __int64 v67; // rax
  unsigned __int64 v69; // rax
  signed __int64 v70; // r8
  unsigned __int64 v71; // rtt
  __int64 v72; // rcx
  _QWORD *v73; // rax
  volatile signed __int64 v74; // rcx
  __int64 v75; // rdi
  char *v76; // rcx
  __int64 v77; // rax
  signed __int32 v78; // eax
  __int64 v79; // rax
  volatile signed __int32 *v80; // rdx
  _QWORD *v81; // rcx
  __int64 v82; // rcx
  _QWORD **v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rcx

  v2 = (__int64)a1;
LABEL_2:
  while ( 2 )
  {
    v3 = *(_QWORD *)(v2 + 8);
    if ( v3 )
    {
      v4 = 0;
      v5 = *(_QWORD *)(*(_QWORD *)v2 + 24LL);
      if ( (HIWORD(*(_DWORD *)(v3 + 32)) & 0x8000u) != 0 )
      {
        v4 = 1;
        v75 = v5 + 4LL * *(unsigned __int16 *)(v2 + 172);
        if ( (*(_BYTE *)(v75 + 679) & 1) == 0
          && (int)RtlpAffinitizeSegmentInfoForBucket(*(_QWORD *)(*(_QWORD *)v2 + 24LL), *(unsigned __int8 *)(v75 + 678)) >= 0 )
        {
          *(_BYTE *)(v75 + 679) |= 1u;
          v76 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 550 : (char *)2147353472;
          if ( *v76 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapAffinityManagerEnable(*(_QWORD *)(v5 + 24), *(unsigned __int8 *)(v75 + 678));
        }
      }
      v6 = 0;
      if ( MEMORY[0x7FFE036A] > 1u )
        v6 = 100;
      for ( i = 0; ; ++i )
      {
        if ( i > v6 )
          goto LABEL_56;
        v8 = *(_DWORD *)(v3 + 32);
        if ( (v8 & 0x80000000) == 0 )
        {
          if ( !(_WORD)v8 )
            goto LABEL_56;
          if ( _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 32), v8 | 0x80000000, v8) == v8 )
            break;
        }
      }
      if ( v8 == -1 )
        goto LABEL_56;
      v31 = *(_QWORD *)(v3 + 8);
      if ( !v31 || *(_QWORD *)v3 != v2 || !(_WORD)v8 )
      {
        *(_DWORD *)(v3 + 32) = v8;
        goto LABEL_56;
      }
      v32 = NtCurrentTeb();
      v33 = BYTE2(v32->HeapData);
      v34 = (unsigned __int8)RtlpSearchWidth[*(unsigned __int16 *)(v2 + 172)];
      if ( (_BYTE)v33 == HIBYTE(v32->HeapData) )
      {
        v69 = qword_1801CFF00;
        do
        {
          v70 = ((((v69 ^ (v69 >> 12)) << 25) ^ v69 ^ (v69 >> 12)) >> 27) ^ ((v69 ^ (v69 >> 12)) << 25) ^ v69 ^ (v69 >> 12);
          v71 = v69;
          v69 = _InterlockedCompareExchange64(&qword_1801CFF00, v70, v69);
        }
        while ( v71 != v69 );
        v35 = 29 * v70;
        HIBYTE(v32->HeapData) = 29 * v70;
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
        v66 = (_QWORD *)(v38 + 8 * ((v36 - 1) >> 6));
        v39 = (_QWORD *)(v38 + 8 * ((unsigned __int64)(unsigned int)(v8 >> 16) >> 6));
        do
        {
          if ( *v39 != -1LL )
            break;
          v73 = v39++;
          if ( v73 == v66 )
            v39 = *(_QWORD **)(v31 + 40);
        }
        while ( v39 != (_QWORD *)(v38 + 8 * ((unsigned __int64)(unsigned int)(v8 >> 16) >> 6)) );
        if ( v39 == v66 && (v36 & 0x3F) != 0 && (*(_QWORD *)(v31 + 32) & 0x3FuLL) < v34 )
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
      v46 = _RCX + ((unsigned int)(((__int64)v39 - *(_QWORD *)(v31 + 40)) >> 3) << 6);
      *(_DWORD *)(v3 + 32) = (v46 << 16) | ((unsigned __int16)v8 - 1);
      v47 = RtlpLFHKey ^ v31 ^ *(_DWORD *)(v31 + 24) ^ v5;
      v48 = v31 + v46 * HIWORD(v47) + (unsigned __int16)v47;
      if ( (*(_BYTE *)(v48 + 15) & 0x3F) != 0 )
      {
        RtlpLogHeapFailure(15, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 24LL) + 24LL), v48, 0LL, 0LL, 0LL);
LABEL_56:
        v48 = 0LL;
      }
      if ( v4 && (unsigned int)(HIDWORD(RtlpAffinityState[0]) + 1) < LODWORD(RtlpAffinityState[0]) )
        _InterlockedCompareExchange(
          (_DWORD *)RtlpAffinityState + 1,
          2 * (HIDWORD(RtlpAffinityState[0]) + 1) - 1,
          SHIDWORD(RtlpAffinityState[0]));
      if ( v48 )
        return v48;
    }
    v49 = *(_QWORD *)v2;
    v50 = (volatile signed __int32 **)(v2 + 16);
LABEL_60:
    v9 = 0LL;
    while ( 2 )
    {
      v51 = 0LL;
      v52 = 0LL;
      v53 = v50;
      v54 = 0;
      do
      {
        v55 = *v53;
        if ( *v53 && *((unsigned __int16 *)v55 + 16) > v54 )
        {
          if ( (RtlpLowFragHeapGlobalFlags & 4) != 0
            || (v67 = *(unsigned __int16 *)(v2 + 172), (unsigned int)v67 > 0x70)
            || *(_DWORD *)(v2 + 160) < 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v67]
            || (v61 = 1, (unsigned int)(*((_WORD *)v55 + 20) >> 2) <= *((_WORD *)v55 + 16)) )
          {
            v61 = 0;
          }
          SharedData = NtCurrentPeb()->SharedData;
          if ( SharedData && *SharedData )
            v63 = (__int64)NtCurrentPeb()->SharedData + 560;
          else
            v63 = 2147353482LL;
          if ( !*(_BYTE *)v63 )
          {
            v64 = NtCurrentPeb()->SharedData;
            if ( v64 && *v64 )
              v65 = (__int64)NtCurrentPeb()->SharedData + 550;
            else
              v65 = 2147353472LL;
            if ( !*(_BYTE *)v65 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
            {
              if ( v61 )
                goto LABEL_64;
LABEL_83:
              v9 = *v53;
              v52 = (volatile signed __int64 *)(v2 + 8 * v51 + 16);
              v54 = *((unsigned __int16 *)v55 + 16);
              goto LABEL_64;
            }
          }
          if ( !v61 )
            goto LABEL_83;
          RtlpLogHeapReuseThresholdActivate(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 24LL) + 24LL),
            *((_QWORD *)v55 + 1),
            *(unsigned __int16 *)(v2 + 172));
        }
LABEL_64:
        v51 = (unsigned int)(v51 + 1);
        ++v53;
      }
      while ( (unsigned int)v51 < 0x10 );
      v50 = (volatile signed __int32 **)(v2 + 16);
      if ( v52 )
      {
        v56 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v49 + 24) + 8LL * *(unsigned __int16 *)(v2 + 172) + 1192) + 144LL);
        while ( 1 )
        {
          v57 = RtlpInterlockedPopEntrySList(v56);
          v59 = (volatile signed __int64 **)v57;
          v60 = v57;
          if ( !v57 )
            break;
          v59 = (volatile signed __int64 **)&v57[-3];
          if ( (*((_DWORD *)&v57[-1].Next + 3) & 1) != 0 )
          {
            if ( !(unsigned int)RtlpSetSegmentInfo(v59, (volatile signed __int64 *)v2) )
            {
              RtlpInterlockedPushEntrySList(v56, v60, v58, v17);
              v59 = 0LL;
            }
            break;
          }
          _m_prefetchw((char *)v59 + 44);
          if ( _InterlockedAnd((volatile signed __int32 *)v59 + 11, 0xFFFFFFFD) == 2 )
          {
            v74 = **v59;
            *v59 = 0LL;
            RtlpInterlockedPushEntrySList(v74, v57, v58, v17);
          }
        }
        if ( v9 != (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                v52,
                                                (signed __int64)v59,
                                                (signed __int64)v9) )
        {
          if ( v59 )
            RtlpInterlockedPushEntrySList(v56, v59 + 6, v58, v17);
          continue;
        }
        if ( !v59 )
          *(_WORD *)(v2 + 174) = (unsigned __int8)(((__int64)v52 - v2 - 16) >> 3);
        if ( v9 )
        {
          _m_prefetchw((const void *)(v9 + 11));
          if ( _InterlockedAnd(v9 + 11, 0xFFFFFFFD) != 2 )
            goto LABEL_14;
          v72 = **(_QWORD **)v9;
          *(_QWORD *)v9 = 0LL;
          RtlpInterlockedPushEntrySList(v72, v9 + 12, v58, v17);
          goto LABEL_60;
        }
      }
      else
      {
        v9 = 0LL;
      }
      break;
    }
    v10 = *(_QWORD *)(v49 + 24);
    v11 = 0;
    v12 = 0LL;
    v13 = 0LL;
    v14 = (_SLIST_HEADER *)(*(_QWORD *)(v10 + 8LL * *(unsigned __int16 *)(v2 + 172) + 1192) + 144LL);
    v15 = RtlpInterlockedPopEntrySList(v14);
    if ( !v15 )
      goto LABEL_13;
    while ( 2 )
    {
      v9 = (volatile signed __int32 *)&v15[-3];
      if ( (*((_DWORD *)&v15[-1].Next + 3) & 1) == 0 )
      {
        _m_prefetchw((const void *)(v9 + 11));
        if ( _InterlockedAnd(v9 + 11, 0xFFFFFFFD) != 2 )
          goto LABEL_178;
LABEL_184:
        v85 = **(_QWORD **)v9;
        *(_QWORD *)v9 = 0LL;
        RtlpInterlockedPushEntrySList(v85, v15, v16, v17);
        goto LABEL_178;
      }
      if ( !(unsigned int)RtlpSetSegmentInfo((volatile signed __int64 **)&v15[-3], (volatile signed __int64 *)v2) )
      {
        v15->Next = v12;
        v12 = v15;
        if ( !v11 )
          v13 = v15;
        ++v11;
LABEL_178:
        v9 = 0LL;
        v15 = RtlpInterlockedPopEntrySList(v14);
        if ( !v15 )
          goto LABEL_160;
        continue;
      }
      break;
    }
    _m_prefetchw((const void *)(v9 + 11));
    if ( _InterlockedAnd(v9 + 11, 0xFFFFFFFD) == 2 )
      goto LABEL_184;
    if ( !RtlpIsSubSegmentReuseable(v2, (__int64)&v15[-3]) )
      goto LABEL_178;
LABEL_160:
    if ( v11 )
      InterlockedPushListSList(v14, v12, v13, v11);
LABEL_13:
    if ( v9 )
    {
LABEL_14:
      *((_BYTE *)v9 + 43) = a2;
      v2 = (__int64)a1;
      do
      {
        v18 = *((_DWORD *)v9 + 11);
        if ( !v18 || (v18 & 6) != 0 )
          goto LABEL_2;
      }
      while ( v18 != _InterlockedCompareExchange(v9 + 11, v18 | 6, v18) );
      j = *(_QWORD *)v9;
      if ( *(volatile __int64 **)v9 == a1 )
      {
        v20 = NtCurrentPeb()->SharedData;
        if ( v20 && *v20 )
          v21 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v21 = 2147353472LL;
        if ( *(_BYTE *)v21 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*a1 + 24) + 24LL), *((_QWORD *)v9 + 1));
        v9 = (volatile signed __int32 *)_InterlockedExchange64(a1 + 1, (__int64)v9);
        if ( v9 )
        {
          _m_prefetchw((const void *)(v9 + 11));
          if ( _InterlockedAnd(v9 + 11, 0xFFFFFFF9) == 6 )
            goto LABEL_164;
          if ( *((_WORD *)v9 + 16) )
          {
            if ( (RtlpLowFragHeapGlobalFlags & 4) != 0
              || (v77 = *((unsigned __int16 *)a1 + 86), (unsigned int)v77 > 0x70)
              || *((_DWORD *)a1 + 40) < 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v77]
              || (v22 = 1, (unsigned int)(*((_WORD *)v9 + 20) >> 2) <= *((_WORD *)v9 + 16)) )
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
                *((_QWORD *)v9 + 1),
                *((unsigned __int16 *)a1 + 86));
            }
            else if ( !v22 )
            {
LABEL_34:
              while ( 1 )
              {
                v27 = *((_DWORD *)v9 + 11);
                if ( !v27 || (v27 & 2) != 0 )
                  break;
                if ( v27 == _InterlockedCompareExchange(v9 + 11, v27 | 2, v27) )
                {
                  v17 = *(_QWORD **)v9;
                  for ( j = 0LL; (unsigned int)j < 0x10; j = (unsigned int)(j + 1) )
                  {
                    v28 = ((_BYTE)j + (unsigned __int8)*((_WORD *)v17 + 87)) & 0xF;
                    v29 = (volatile signed __int32 *)v17[v28 + 2];
                    v30 = &v17[v28];
                    if ( v29 )
                    {
                      if ( (v29[11] & 1) == 0
                        && v29 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                               v30 + 2,
                                                               (signed __int64)v9,
                                                               (signed __int64)v29) )
                      {
                        _m_prefetchw((const void *)(v29 + 11));
                        if ( _InterlockedAnd(v29 + 11, 0xFFFFFFFD) == 2 )
                        {
                          v82 = **(_QWORD **)v29;
                          *(_QWORD *)v29 = 0LL;
                          RtlpInterlockedPushEntrySList(v82, v29 + 12, j, v17);
                        }
                        goto LABEL_2;
                      }
                    }
                    else if ( !_InterlockedCompareExchange64(v30 + 2, (signed __int64)v9, 0LL) )
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
      _m_prefetchw((const void *)(v9 + 11));
      if ( _InterlockedAnd(v9 + 11, 0xFFFFFFF9) == 6 )
      {
LABEL_164:
        v83 = (_QWORD **)(v9 + 12);
        v84 = **(_QWORD **)v9;
        *(_QWORD *)v9 = 0LL;
        goto LABEL_165;
      }
      if ( !RtlpIsSubSegmentReuseable(j, (__int64)v9) )
        continue;
      do
      {
        v78 = *((_DWORD *)v9 + 11);
        if ( !v78 || (v78 & 2) != 0 )
          goto LABEL_2;
      }
      while ( v78 != _InterlockedCompareExchange(v9 + 11, v78 | 2, v78) );
      v17 = *(_QWORD **)v9;
      for ( j = 0LL; ; j = (unsigned int)(j + 1) )
      {
        if ( (unsigned int)j >= 0x10 )
        {
LABEL_159:
          RtlpInterlockedPushEntrySList(
            *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v9 + 24LL) + 8LL * *(unsigned __int16 *)(*(_QWORD *)v9 + 172LL) + 1192)
          + 144LL,
            v9 + 12,
            j,
            v17);
          goto LABEL_2;
        }
        v79 = ((_BYTE)j + (unsigned __int8)*((_WORD *)v17 + 87)) & 0xF;
        v80 = (volatile signed __int32 *)v17[v79 + 2];
        v81 = &v17[v79];
        if ( v80 )
        {
          if ( (v80[11] & 1) == 0
            && v80 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                   v81 + 2,
                                                   (signed __int64)v9,
                                                   (signed __int64)v80) )
          {
            _m_prefetchw((const void *)(v80 + 11));
            if ( _InterlockedAnd(v80 + 11, 0xFFFFFFFD) == 2 )
            {
              v84 = **(_QWORD **)v80;
              *(_QWORD *)v80 = 0LL;
              v83 = (_QWORD **)(v80 + 12);
LABEL_165:
              RtlpInterlockedPushEntrySList(v84, v83, j, v17);
            }
            goto LABEL_2;
          }
        }
        else if ( !_InterlockedCompareExchange64(v81 + 2, (signed __int64)v9, 0LL) )
        {
          goto LABEL_2;
        }
      }
    }
    return 0LL;
  }
}
