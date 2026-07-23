/*
 * XREFs of RtlpFreeNTHeapInternal @ 0x180054850
 * Callers:
 *     RtlpHpTagFreeHeap @ 0x1800818A0 (RtlpHpTagFreeHeap.c)
 * Callees:
 *     RtlpLogHeapFreeEvent @ 0x1800010D4 (RtlpLogHeapFreeEvent.c)
 *     RtlpLogHeapReuseThresholdActivate @ 0x180001E38 (RtlpLogHeapReuseThresholdActivate.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180028990 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpCallInterceptRoutine @ 0x18004F6D0 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlpFreeUserBlock @ 0x180054420 (RtlpFreeUserBlock.c)
 *     RtlpProbeUserBufferSafe @ 0x180055450 (RtlpProbeUserBufferSafe.c)
 *     RtlpFreeHeap @ 0x1800560F0 (RtlpFreeHeap.c)
 *     RtlpValidateLFHBlock @ 0x1800DC930 (RtlpValidateLFHBlock.c)
 *     RtlpHpStackTraceRemoveStack @ 0x1800DF5A0 (RtlpHpStackTraceRemoveStack.c)
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x180163C20 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x180166FD0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x180167010 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall RtlpFreeNTHeapInternal(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v4; // r13d
  int v5; // r14d
  unsigned __int64 v6; // rdi
  __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  _DWORD *v9; // rdi
  __int64 v10; // r15
  int v11; // r12d
  unsigned int v12; // r14d
  __int64 v13; // r10
  __int64 v14; // rbp
  _DWORD *SharedData; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  signed __int32 v19; // esi
  __int64 v20; // rdx
  _WORD *v21; // rcx
  unsigned __int16 *v23; // r9
  unsigned int v24; // r14d
  __int64 i; // r8
  unsigned int v26; // edx
  __int64 *v27; // rbx
  signed __int64 v28; // r9
  char v29; // dl
  _DWORD *v30; // rcx
  __int64 v31; // rcx
  _DWORD *v32; // rcx
  signed __int32 v33; // eax
  __int64 *v34; // r10
  __int64 v35; // rax
  volatile signed __int32 *v36; // rdx
  __int64 *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // r14
  _DWORD *v41; // rsi
  unsigned __int64 v42; // rcx
  ULONG v43; // ebp
  unsigned __int64 v44; // rcx
  __int64 v45; // r9
  signed __int64 v46; // rcx
  unsigned __int64 v47; // r8
  __int64 v48; // rcx
  unsigned __int8 v49; // al
  _DWORD *v50; // r8
  __int64 v51; // rcx
  __int64 v52; // rdx
  struct _TEB *v53; // rbx
  char v54; // dl
  _DWORD *v55; // rcx
  __int64 v56; // rcx
  _DWORD *v57; // rcx
  signed __int32 v58; // eax
  __int64 v59; // r9
  __int64 j; // r8
  __int64 v61; // rax
  __int64 **v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rcx
  _QWORD **v65; // rdx
  int v66; // edx
  char v67; // cl
  __int64 v68; // rax
  __int64 v69; // rax
  _QWORD *v70; // rax
  unsigned int v71; // edx
  __int64 v72; // rcx
  int v73; // eax
  __int64 v74; // rcx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-B8h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-B0h] BYREF
  __int128 v77; // [rsp+40h] [rbp-A8h]
  __int128 v78; // [rsp+50h] [rbp-98h]
  __int128 v79; // [rsp+60h] [rbp-88h]
  _OWORD MemoryInformation[2]; // [rsp+70h] [rbp-78h] BYREF
  __int128 v81; // [rsp+90h] [rbp-58h]
  ULONG OldProtect; // [rsp+108h] [rbp+20h] BYREF

  v4 = 0;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = 0LL;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
  {
LABEL_74:
    v49 = RtlpFreeHeap(v7);
    v4 = v49;
    if ( v49 )
      goto LABEL_28;
    return v4;
  }
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    v8 = RtlpProbeUserBufferSafe(a1, a2);
  }
  else if ( (a2 & 0xF) != 0 )
  {
    RtlpLogHeapFailure(9, a1, a2, 0LL, 0LL, 0LL);
  }
  else
  {
    v8 = a2 - 16;
    _m_prefetchw((const void *)(a2 - 16));
    if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
      v8 -= 16LL * *(unsigned __int8 *)(v8 + 14);
    if ( (*(_BYTE *)(v8 + 15) & 0x3F) == 0 )
    {
      RtlpLogHeapFailure(8, a1, v8, 0LL, 0LL, 0LL);
      v8 = 0LL;
    }
  }
  if ( !v8 )
  {
LABEL_87:
    v53 = NtCurrentTeb();
    v53->LastStatusValue = -1073741811;
    v53->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
    return v4;
  }
  if ( *(_BYTE *)(v6 - 1) != 5 )
    goto LABEL_10;
  if ( *(char *)(v8 + 15) < 0 )
  {
    if ( (unsigned __int8)RtlpValidateLFHBlock(v7, v8) )
    {
      v50 = (_DWORD *)(v7 + 124);
      goto LABEL_79;
    }
LABEL_86:
    RtlpLogHeapFailure(3, v7, v8, v6, 0LL, 0LL);
    goto LABEL_87;
  }
  v50 = (_DWORD *)(v7 + 124);
  if ( *(_DWORD *)(v7 + 124) )
  {
    v66 = *(_DWORD *)(v7 + 136) ^ *(_DWORD *)(v8 + 8);
    v67 = v66 ^ ((unsigned __int16)(*(_WORD *)(v7 + 136) ^ *(_WORD *)(v8 + 8)) >> 8) ^ BYTE2(v66);
    v77 = 0LL;
    DWORD2(v77) = v66;
    if ( HIBYTE(v66) != v67 )
      goto LABEL_86;
  }
LABEL_79:
  if ( *(char *)(v8 + 15) >= 0 )
  {
    if ( *v50 )
    {
      LODWORD(v51) = *(_DWORD *)(v8 + 8);
      v78 = 0LL;
      if ( ((unsigned int)v51 & *v50) != 0 )
      {
        LODWORD(v51) = *(_DWORD *)(v7 + 136) ^ v51;
        v50 = (_DWORD *)(v7 + 124);
        DWORD2(v78) = v51;
      }
    }
    else
    {
      LOWORD(v51) = *(_WORD *)(v8 + 8);
    }
  }
  else
  {
    if ( *(_WORD *)(v8 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ v7 ^ (v8 >> 4)) )
      v51 = 0LL;
    else
      v51 = *(_QWORD *)(v8
                      - ((unsigned __int64)(*(_DWORD *)(v8 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)v7 ^ (unsigned int)(v8 >> 4)) >> 12));
    LOWORD(v51) = *(_WORD *)(v51 + 36);
  }
  if ( *(_BYTE *)(v8 + 15) == 4 )
  {
    if ( *v50 )
    {
      v73 = *(_DWORD *)(v8 + 8);
      v79 = 0LL;
      if ( (v73 & *v50) != 0 )
      {
        v73 ^= *(_DWORD *)(v7 + 136);
        DWORD2(v79) = v73;
      }
    }
    else
    {
      LOWORD(v73) = *(_WORD *)(v8 + 8);
    }
    v52 = (unsigned __int16)v51 + *(_QWORD *)(v8 - 16) - (unsigned __int16)v73;
  }
  else
  {
    v52 = 16LL * (unsigned __int16)v51;
  }
  if ( v52 + v8 < v6 )
    goto LABEL_86;
  if ( (v5 & 0x3C000102) == 0 )
  {
    v72 = *(_BYTE *)(v6 - 1) == 5 ? v6 - 16LL * *(unsigned __int8 *)(v6 - 16 + 14) : 0LL;
    if ( (int)RtlpCallInterceptRoutine(*(_DWORD *)(v6 - 8), (PVOID)v7, v6, 3u, v72) < 0 )
      goto LABEL_87;
  }
LABEL_10:
  if ( *(char *)(v8 + 15) >= 0 )
    goto LABEL_74;
  if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(v7 ^ *(_WORD *)(v8 + 8) ^ (v8 >> 4))
    || (v9 = *(_DWORD **)(v8
                        - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)v7 ^ *(_DWORD *)(v8 + 8) ^ (unsigned int)(v8 >> 4)) >> 12))) == 0LL )
  {
    v20 = v7;
LABEL_24:
    RtlpLogHeapFailure(3, v20, v8, 0LL, 0LL, 0LL);
    goto LABEL_27;
  }
  _m_prefetchw(v9);
  v10 = *((_QWORD *)v9 + 1);
  v11 = 0;
  v12 = (unsigned __int16)(*(_DWORD *)(v8 + 12) >> 8);
  v13 = *(_QWORD *)(**(_QWORD **)v9 + 24LL);
  if ( v10
     + v12 * (((unsigned int)v13 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v10 + 24) ^ (unsigned int)v10) >> 16)
     + (unsigned __int16)(v13 ^ RtlpLFHKey ^ *(_WORD *)(v10 + 24) ^ v10) != v8 )
  {
    v20 = *(_QWORD *)(v13 + 24);
    goto LABEL_24;
  }
  v14 = 2147353472LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v16 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v16 = 2147353472LL;
  if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapFreeEvent(*(_QWORD *)(v13 + 24), v8 + 16, 2);
  v17 = 0LL;
  v18 = 0LL;
  if ( MEMORY[0x7FFE036A] > 1u )
    v17 = 100LL;
  while ( 1 )
  {
    if ( (unsigned int)v18 > (unsigned int)v17 )
    {
      *(_BYTE *)(v8 + 15) = 0x80;
      v21 = v9 + 4;
      goto LABEL_26;
    }
    v19 = v9[8];
    if ( v19 >= 0 && _InterlockedCompareExchange(v9 + 8, v19 | 0x80000000, v19) == v19 )
      break;
    v18 = (unsigned int)(v18 + 1);
  }
  *(_BYTE *)(v8 + 15) = 0x80;
  v21 = v9 + 4;
  if ( v19 == -1 )
  {
LABEL_26:
    RtlpInterlockedPushEntrySList(v21, v8 + 16, v17, a4);
    goto LABEL_27;
  }
  _bittestandreset(*(signed __int32 **)(v10 + 40), v12);
  if ( *v21 )
  {
    v70 = (_QWORD *)RtlpInterlockedFlushSList(v21, v18, v17, a4);
    while ( v70 )
    {
      v71 = *((_DWORD *)v70 - 1);
      ++v11;
      v70 = (_QWORD *)*v70;
      v12 = (unsigned __int16)(v71 >> 8);
      _bittestandreset(*(signed __int32 **)(v10 + 40), v12);
    }
  }
  v23 = *(unsigned __int16 **)v9;
  v24 = v12 << 16;
  if ( ((unsigned __int16)v24 | (unsigned __int16)(v11 + v19 + 1)) == *((_WORD *)v9 + 20) )
  {
    i = *((unsigned int *)v23 + 42);
    v26 = *(_DWORD *)(*(_QWORD *)v23 + 32LL);
    if ( *((_DWORD *)v23 + 41) != 1
      || v26 < (unsigned int)i
      || v26 - (unsigned int)i >= *(_DWORD *)(*(_QWORD *)v23 + 36LL) )
    {
      v27 = *(__int64 **)v9;
      v28 = _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)v9 + 8LL), 0LL);
      if ( v28 )
      {
        _m_prefetchw((const void *)(v28 + 44));
        if ( _InterlockedAnd((volatile signed __int32 *)(v28 + 44), 0xFFFFFFF9) == 6 )
        {
          v64 = **(_QWORD **)v28;
          *(_QWORD *)v28 = 0LL;
LABEL_108:
          v65 = (_QWORD **)(v28 + 48);
LABEL_109:
          RtlpInterlockedPushEntrySList(v64, v65, i, v28);
          goto LABEL_66;
        }
        if ( *(_WORD *)(v28 + 32) )
        {
          if ( (RtlpLowFragHeapGlobalFlags & 4) != 0
            || (v68 = *((unsigned __int16 *)v27 + 86), (unsigned int)v68 > 0x70)
            || *((_DWORD *)v27 + 40) < 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v68]
            || (v29 = 1, (unsigned int)(*(_WORD *)(v28 + 40) >> 2) <= *(_WORD *)(v28 + 32)) )
          {
            v29 = 0;
          }
          v30 = NtCurrentPeb()->SharedData;
          if ( v30 && *v30 )
            v31 = (__int64)NtCurrentPeb()->SharedData + 560;
          else
            v31 = 2147353482LL;
          if ( *(_BYTE *)v31 )
            goto LABEL_126;
          v32 = NtCurrentPeb()->SharedData;
          if ( v32 && *v32 )
            v14 = (__int64)NtCurrentPeb()->SharedData + 550;
          if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
LABEL_126:
            if ( v29 )
            {
              RtlpLogHeapReuseThresholdActivate(
                *(_QWORD *)(*(_QWORD *)(*v27 + 24) + 24LL),
                *(_QWORD *)(v28 + 8),
                *((unsigned __int16 *)v27 + 86));
              goto LABEL_66;
            }
LABEL_55:
            while ( 1 )
            {
              v33 = *(_DWORD *)(v28 + 44);
              if ( !v33 || (v33 & 2) != 0 )
                goto LABEL_66;
              if ( v33 == _InterlockedCompareExchange((volatile signed __int32 *)(v28 + 44), v33 | 2, v33) )
              {
                v34 = *(__int64 **)v28;
                for ( i = 0LL; ; i = (unsigned int)(i + 1) )
                {
                  if ( (unsigned int)i >= 0x10 )
                  {
                    v64 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v28 + 24LL)
                                    + 8LL * *(unsigned __int16 *)(*(_QWORD *)v28 + 172LL)
                                    + 1192)
                        + 144LL;
                    goto LABEL_108;
                  }
                  v35 = ((_BYTE)i + (unsigned __int8)*((_WORD *)v34 + 87)) & 0xF;
                  v36 = (volatile signed __int32 *)v34[v35 + 2];
                  v37 = &v34[v35];
                  if ( v36 )
                  {
                    if ( (v36[11] & 1) == 0
                      && v36 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                             v37 + 2,
                                                             v28,
                                                             (signed __int64)v36) )
                    {
                      _m_prefetchw((const void *)(v36 + 11));
                      if ( _InterlockedAnd(v36 + 11, 0xFFFFFFFD) != 2 )
                        goto LABEL_66;
                      v64 = **(_QWORD **)v36;
                      *(_QWORD *)v36 = 0LL;
                      v65 = (_QWORD **)(v36 + 12);
                      goto LABEL_109;
                    }
                  }
                  else if ( !_InterlockedCompareExchange64(v37 + 2, v28, 0LL) )
                  {
                    goto LABEL_66;
                  }
                }
              }
            }
          }
          if ( !v29 )
            goto LABEL_55;
        }
      }
LABEL_66:
      v38 = *v27;
      v39 = *(_QWORD *)v9;
      v40 = *(_QWORD *)(v38 + 24);
      if ( (*((_BYTE *)v9 + 38) & 3) != 0 )
      {
        v41 = *(_DWORD **)(v40 + 24);
        v42 = (16 * (*((unsigned __int16 *)v9 + 18) + 256LL)) & 0xFFFFFFFFFFFFF000uLL;
        BaseAddress = (PVOID)((*((_QWORD *)v9 + 1) + 4151LL) & 0xFFFFFFFFFFFFF000uLL);
        OldProtect = 0;
        v43 = 64;
        v44 = (unsigned __int16)((v42 + 4096) >> 4) * (unsigned __int64)*((unsigned __int16 *)v9 + 20);
        memset(MemoryInformation, 0, sizeof(MemoryInformation));
        v81 = 0LL;
        RegionSize = 16 * v44;
        if ( (v41[28] & 0x40000) != 0 )
        {
          if ( ZwQueryVirtualMemory(
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 v41,
                 MemoryBasicInformation,
                 MemoryInformation,
                 0x30uLL,
                 0LL) < 0
            || (BYTE4(v81) & 0x60) == 0
            || *(_DWORD **)&MemoryInformation[0] != v41 )
          {
            RtlpLogHeapFailure(0, (__int64)v41, 1LL, DWORD1(v81), 0LL, 0LL);
            v43 = 4;
          }
        }
        else
        {
          v43 = 4;
        }
        ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, v43, &OldProtect);
      }
      *(_DWORD *)(*((_QWORD *)v9 + 1) + 20LL) = 0;
      RtlpFreeUserBlock(v40, *((unsigned __int8 **)v9 + 1), i, v28);
      v45 = *((unsigned __int16 *)v9 + 20);
      _m_prefetchw((const void *)(v39 + 160));
      do
      {
        v46 = *(_QWORD *)(v39 + 160);
        v47 = (unsigned int)(v46 - v45) | ((unsigned __int64)(unsigned int)(HIDWORD(v46) - 1) << 32);
      }
      while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v39 + 160), v47, v46) != v46 );
      *((_QWORD *)v9 + 1) = 0LL;
      _InterlockedIncrement((volatile signed __int32 *)(v40 + 60));
      v9[8] = 0;
      _m_prefetchw(v9 + 11);
      if ( _InterlockedAnd(v9 + 11, 0xFFFFFFFE) == 1 )
      {
        v48 = **(_QWORD **)v9;
        *(_QWORD *)v9 = 0LL;
        RtlpInterlockedPushEntrySList(v48, v9 + 12, v47, v45);
      }
      goto LABEL_27;
    }
  }
  v9[8] = v24 | (v11 + (unsigned __int16)v19 + 1);
  if ( (v9[11] & 2) != 0 || !*((_WORD *)v9 + 16) )
    goto LABEL_27;
  if ( (RtlpLowFragHeapGlobalFlags & 4) != 0
    || (v69 = v23[86], (unsigned int)v69 > 0x70)
    || *((_DWORD *)v23 + 40) < 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v69]
    || (v54 = 1, (unsigned int)(*((_WORD *)v9 + 20) >> 2) <= *((_WORD *)v9 + 16)) )
  {
    v54 = 0;
  }
  v55 = NtCurrentPeb()->SharedData;
  if ( v55 && *v55 )
    v56 = (__int64)NtCurrentPeb()->SharedData + 560;
  else
    v56 = 2147353482LL;
  if ( *(_BYTE *)v56 )
    goto LABEL_129;
  v57 = NtCurrentPeb()->SharedData;
  if ( v57 && *v57 )
    v14 = (__int64)NtCurrentPeb()->SharedData + 550;
  if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
LABEL_129:
    if ( v54 )
    {
      RtlpLogHeapReuseThresholdActivate(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v23 + 24LL) + 24LL),
        *((_QWORD *)v9 + 1),
        v23[86]);
      goto LABEL_27;
    }
  }
  else if ( v54 )
  {
    goto LABEL_27;
  }
  do
  {
    v58 = v9[11];
    if ( !v58 || (v58 & 2) != 0 )
      goto LABEL_27;
  }
  while ( v58 != _InterlockedCompareExchange(v9 + 11, v58 | 2, v58) );
  v59 = *(_QWORD *)v9;
  for ( j = 0LL; ; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= 0x10 )
    {
      RtlpInterlockedPushEntrySList(
        *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v9 + 24LL) + 8LL * *(unsigned __int16 *)(*(_QWORD *)v9 + 172LL) + 1192)
      + 144LL,
        v9 + 12,
        j,
        v59);
      goto LABEL_27;
    }
    v61 = ((_BYTE)j + (unsigned __int8)*(_WORD *)(v59 + 174)) & 0xF;
    v62 = *(__int64 ***)(v59 + 8 * v61 + 16);
    v63 = v59 + 8 * v61;
    if ( v62 )
      break;
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v63 + 16), (signed __int64)v9, 0LL) )
      goto LABEL_27;
LABEL_105:
    ;
  }
  if ( (*((_DWORD *)v62 + 11) & 1) != 0
    || v62 != (__int64 **)_InterlockedCompareExchange64(
                            (volatile signed __int64 *)(v63 + 16),
                            (signed __int64)v9,
                            (signed __int64)v62) )
  {
    goto LABEL_105;
  }
  _m_prefetchw((char *)v62 + 44);
  if ( _InterlockedAnd((volatile signed __int32 *)v62 + 11, 0xFFFFFFFD) == 2 )
  {
    v74 = **v62;
    *v62 = 0LL;
    RtlpInterlockedPushEntrySList(v74, v62 + 6, j, v59);
  }
LABEL_27:
  v7 = a1;
  v6 = a2;
  v4 = 1;
  v5 = a3;
LABEL_28:
  if ( (dword_1801D0918 & 1) != 0
    && (dword_1801D0918 & 2) != 0
    && NtCurrentPeb()->ProcessHeap
    && v7 != qword_1801D4208[2 * (unsigned int)dword_1801816F8[BYTE1(RtlpHpEnvHandle)]]
    && (v5 & 0x10000000) == 0 )
  {
    RtlpHpStackTraceRemoveStack(v7, v6);
  }
  return v4;
}
