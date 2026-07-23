/*
 * XREFs of RtlpFreeNTHeapInternal @ 0x180058780
 * Callers:
 *     RtlpHpTagFreeHeap @ 0x180053EC0 (RtlpHpTagFreeHeap.c)
 * Callees:
 *     RtlpCallInterceptRoutine @ 0x180054AE0 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpFreeUserBlock @ 0x180058350 (RtlpFreeUserBlock.c)
 *     RtlpProbeUserBufferSafe @ 0x180059380 (RtlpProbeUserBufferSafe.c)
 *     RtlpFreeHeap @ 0x18005A020 (RtlpFreeHeap.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x1800872D0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpLogHeapReuseThresholdActivate @ 0x1800A1658 (RtlpLogHeapReuseThresholdActivate.c)
 *     RtlpLogHeapFreeEvent @ 0x1800A19C4 (RtlpLogHeapFreeEvent.c)
 *     RtlpValidateLFHBlock @ 0x1800D9AC0 (RtlpValidateLFHBlock.c)
 *     RtlpHpStackTraceRemoveStack @ 0x1800DDEC0 (RtlpHpStackTraceRemoveStack.c)
 *     ZwQueryVirtualMemory @ 0x1801604B0 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x180160A50 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x180163E00 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x180163E40 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall RtlpFreeNTHeapInternal(_DWORD *BaseAddress, __int64 a2, int a3)
{
  unsigned int v3; // r13d
  int v4; // r14d
  unsigned __int64 v5; // rdi
  __int64 v6; // rbp
  unsigned __int64 v7; // rbx
  _DWORD *v8; // rdi
  __int64 v9; // r15
  int v10; // r12d
  unsigned int v11; // r14d
  __int64 v12; // r10
  __int64 v13; // rbp
  _DWORD *SharedData; // rcx
  __int64 v15; // rcx
  unsigned int v16; // r8d
  unsigned int v17; // edx
  signed __int32 v18; // esi
  __int64 v19; // rdx
  _WORD *v20; // rcx
  unsigned __int16 *v22; // r9
  unsigned int v23; // r14d
  ULONG i; // r8d
  ULONG v25; // edx
  __int64 *v26; // rbx
  signed __int64 v27; // r9
  char v28; // dl
  _DWORD *v29; // rcx
  __int64 v30; // rcx
  _DWORD *v31; // rcx
  signed __int32 v32; // eax
  __int64 *v33; // r10
  __int64 v34; // rax
  volatile signed __int32 *v35; // rdx
  __int64 *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // r14
  _DWORD *v40; // rsi
  unsigned __int64 v41; // rcx
  ULONG v42; // ebp
  unsigned __int64 v43; // rcx
  int v44; // r9d
  signed __int64 v45; // rcx
  __int64 v46; // rcx
  unsigned __int8 v47; // al
  _DWORD *v48; // r8
  __int64 v49; // rcx
  __int64 v50; // rdx
  struct _TEB *v51; // rbx
  char v52; // dl
  _DWORD *v53; // rcx
  __int64 v54; // rcx
  _DWORD *v55; // rcx
  signed __int32 v56; // eax
  __int64 v57; // r9
  unsigned int j; // r8d
  __int64 v59; // rax
  __int64 **v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rcx
  _QWORD **v63; // rdx
  int v64; // edx
  char v65; // cl
  __int64 v66; // rax
  __int64 v67; // rax
  _QWORD *v68; // rax
  unsigned int v69; // edx
  int v70; // eax
  __int64 v71; // rcx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-B8h] BYREF
  PVOID BaseAddressa; // [rsp+38h] [rbp-B0h] BYREF
  __int128 v74; // [rsp+40h] [rbp-A8h]
  __int128 v75; // [rsp+50h] [rbp-98h]
  __int128 v76; // [rsp+60h] [rbp-88h]
  _OWORD MemoryInformation[2]; // [rsp+70h] [rbp-78h] BYREF
  __int128 v78; // [rsp+90h] [rbp-58h]
  ULONG OldProtect; // [rsp+108h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a3;
  v5 = a2;
  v6 = (__int64)BaseAddress;
  v7 = 0LL;
  if ( (BaseAddress[29] & 0x1000000) != 0 )
  {
LABEL_74:
    v47 = RtlpFreeHeap((PVOID)v6);
    v3 = v47;
    if ( v47 )
      goto LABEL_28;
    return v3;
  }
  if ( (BaseAddress[30] & 1) != 0 )
  {
    v7 = RtlpProbeUserBufferSafe(BaseAddress, a2);
  }
  else if ( (a2 & 0xF) != 0 )
  {
    RtlpLogHeapFailure(9, (__int64)BaseAddress, a2, 0LL, 0LL, 0LL);
  }
  else
  {
    v7 = a2 - 16;
    _m_prefetchw((const void *)(a2 - 16));
    if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
      v7 -= 16LL * *(unsigned __int8 *)(v7 + 14);
    if ( (*(_BYTE *)(v7 + 15) & 0x3F) == 0 )
    {
      RtlpLogHeapFailure(8, (__int64)BaseAddress, v7, 0LL, 0LL, 0LL);
      v7 = 0LL;
    }
  }
  if ( !v7 )
  {
LABEL_87:
    v51 = NtCurrentTeb();
    v51->LastStatusValue = -1073741811;
    v51->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
    return v3;
  }
  if ( *(_BYTE *)(v5 - 1) != 5 )
    goto LABEL_10;
  if ( *(char *)(v7 + 15) < 0 )
  {
    if ( (unsigned __int8)RtlpValidateLFHBlock(v6, v7) )
    {
      v48 = (_DWORD *)(v6 + 124);
      goto LABEL_79;
    }
LABEL_86:
    RtlpLogHeapFailure(3, v6, v7, v5, 0LL, 0LL);
    goto LABEL_87;
  }
  v48 = (_DWORD *)(v6 + 124);
  if ( *(_DWORD *)(v6 + 124) )
  {
    v64 = *(_DWORD *)(v6 + 136) ^ *(_DWORD *)(v7 + 8);
    v65 = v64 ^ ((unsigned __int16)(*(_WORD *)(v6 + 136) ^ *(_WORD *)(v7 + 8)) >> 8) ^ BYTE2(v64);
    v74 = 0LL;
    DWORD2(v74) = v64;
    if ( HIBYTE(v64) != v65 )
      goto LABEL_86;
  }
LABEL_79:
  if ( *(char *)(v7 + 15) >= 0 )
  {
    if ( *v48 )
    {
      LODWORD(v49) = *(_DWORD *)(v7 + 8);
      v75 = 0LL;
      if ( ((unsigned int)v49 & *v48) != 0 )
      {
        LODWORD(v49) = *(_DWORD *)(v6 + 136) ^ v49;
        v48 = (_DWORD *)(v6 + 124);
        DWORD2(v75) = v49;
      }
    }
    else
    {
      LOWORD(v49) = *(_WORD *)(v7 + 8);
    }
  }
  else
  {
    if ( *(_WORD *)(v7 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ v6 ^ (v7 >> 4)) )
      v49 = 0LL;
    else
      v49 = *(_QWORD *)(v7
                      - ((unsigned __int64)(*(_DWORD *)(v7 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)v6 ^ (unsigned int)(v7 >> 4)) >> 12));
    LOWORD(v49) = *(_WORD *)(v49 + 36);
  }
  if ( *(_BYTE *)(v7 + 15) == 4 )
  {
    if ( *v48 )
    {
      v70 = *(_DWORD *)(v7 + 8);
      v76 = 0LL;
      if ( (v70 & *v48) != 0 )
      {
        v70 ^= *(_DWORD *)(v6 + 136);
        DWORD2(v76) = v70;
      }
    }
    else
    {
      LOWORD(v70) = *(_WORD *)(v7 + 8);
    }
    v50 = (unsigned __int16)v49 + *(_QWORD *)(v7 - 16) - (unsigned __int16)v70;
  }
  else
  {
    v50 = 16LL * (unsigned __int16)v49;
  }
  if ( v50 + v7 < v5 )
    goto LABEL_86;
  if ( (v4 & 0x3C000102) == 0 && (int)RtlpCallInterceptRoutine(*(_DWORD *)(v5 - 8), (PVOID)v6, v5, 3) < 0 )
    goto LABEL_87;
LABEL_10:
  if ( *(char *)(v7 + 15) >= 0 )
    goto LABEL_74;
  if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(v6 ^ *(_WORD *)(v7 + 8) ^ (v7 >> 4))
    || (v8 = *(_DWORD **)(v7
                        - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)v6 ^ *(_DWORD *)(v7 + 8) ^ (unsigned int)(v7 >> 4)) >> 12))) == 0LL )
  {
    v19 = v6;
LABEL_24:
    RtlpLogHeapFailure(3, v19, v7, 0LL, 0LL, 0LL);
    goto LABEL_27;
  }
  _m_prefetchw(v8);
  v9 = *((_QWORD *)v8 + 1);
  v10 = 0;
  v11 = (unsigned __int16)(*(_DWORD *)(v7 + 12) >> 8);
  v12 = *(_QWORD *)(**(_QWORD **)v8 + 24LL);
  if ( v9
     + v11 * (((unsigned int)v12 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v9 + 24) ^ (unsigned int)v9) >> 16)
     + (unsigned __int16)(v12 ^ RtlpLFHKey ^ *(_WORD *)(v9 + 24) ^ v9) != v7 )
  {
    v19 = *(_QWORD *)(v12 + 24);
    goto LABEL_24;
  }
  v13 = 2147353472LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v15 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v15 = 2147353472LL;
  if ( *(_BYTE *)v15 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapFreeEvent(*(_QWORD *)(v12 + 24), v7 + 16, 2LL);
  v16 = 0;
  v17 = 0;
  if ( MEMORY[0x7FFE036A] > 1u )
    v16 = 100;
  while ( 1 )
  {
    if ( v17 > v16 )
    {
      *(_BYTE *)(v7 + 15) = 0x80;
      v20 = v8 + 4;
      goto LABEL_26;
    }
    v18 = v8[8];
    if ( v18 >= 0 && _InterlockedCompareExchange(v8 + 8, v18 | 0x80000000, v18) == v18 )
      break;
    ++v17;
  }
  *(_BYTE *)(v7 + 15) = 0x80;
  v20 = v8 + 4;
  if ( v18 == -1 )
  {
LABEL_26:
    RtlpInterlockedPushEntrySList(v20, v7 + 16);
    goto LABEL_27;
  }
  _bittestandreset(*(signed __int32 **)(v9 + 40), v11);
  if ( *v20 )
  {
    v68 = (_QWORD *)RtlpInterlockedFlushSList(v20);
    while ( v68 )
    {
      v69 = *((_DWORD *)v68 - 1);
      ++v10;
      v68 = (_QWORD *)*v68;
      v11 = (unsigned __int16)(v69 >> 8);
      _bittestandreset(*(signed __int32 **)(v9 + 40), v11);
    }
  }
  v22 = *(unsigned __int16 **)v8;
  v23 = v11 << 16;
  if ( ((unsigned __int16)v23 | (unsigned __int16)(v10 + v18 + 1)) == *((_WORD *)v8 + 20) )
  {
    i = *((_DWORD *)v22 + 42);
    v25 = *(_DWORD *)(*(_QWORD *)v22 + 32LL);
    if ( *((_DWORD *)v22 + 41) != 1 || v25 < i || v25 - i >= *(_DWORD *)(*(_QWORD *)v22 + 36LL) )
    {
      v26 = *(__int64 **)v8;
      v27 = _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)v8 + 8LL), 0LL);
      if ( v27 )
      {
        _m_prefetchw((const void *)(v27 + 44));
        if ( _InterlockedAnd((volatile signed __int32 *)(v27 + 44), 0xFFFFFFF9) == 6 )
        {
          v62 = **(_QWORD **)v27;
          *(_QWORD *)v27 = 0LL;
LABEL_108:
          v63 = (_QWORD **)(v27 + 48);
LABEL_109:
          RtlpInterlockedPushEntrySList(v62, v63);
          goto LABEL_66;
        }
        if ( *(_WORD *)(v27 + 32) )
        {
          if ( (RtlpLowFragHeapGlobalFlags & 4) != 0
            || (v66 = *((unsigned __int16 *)v26 + 86), (unsigned int)v66 > 0x70)
            || *((_DWORD *)v26 + 40) < 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v66]
            || (v28 = 1, (unsigned int)(*(_WORD *)(v27 + 40) >> 2) <= *(_WORD *)(v27 + 32)) )
          {
            v28 = 0;
          }
          v29 = NtCurrentPeb()->SharedData;
          if ( v29 && *v29 )
            v30 = (__int64)NtCurrentPeb()->SharedData + 560;
          else
            v30 = 2147353482LL;
          if ( *(_BYTE *)v30 )
            goto LABEL_126;
          v31 = NtCurrentPeb()->SharedData;
          if ( v31 && *v31 )
            v13 = (__int64)NtCurrentPeb()->SharedData + 550;
          if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
LABEL_126:
            if ( v28 )
            {
              RtlpLogHeapReuseThresholdActivate(
                *(_QWORD *)(*(_QWORD *)(*v26 + 24) + 24LL),
                *(_QWORD *)(v27 + 8),
                *((unsigned __int16 *)v26 + 86),
                v27);
              goto LABEL_66;
            }
LABEL_55:
            while ( 1 )
            {
              v32 = *(_DWORD *)(v27 + 44);
              if ( !v32 || (v32 & 2) != 0 )
                goto LABEL_66;
              if ( v32 == _InterlockedCompareExchange((volatile signed __int32 *)(v27 + 44), v32 | 2, v32) )
              {
                v33 = *(__int64 **)v27;
                for ( i = 0; ; ++i )
                {
                  if ( i >= 0x10 )
                  {
                    v62 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v27 + 24LL)
                                    + 8LL * *(unsigned __int16 *)(*(_QWORD *)v27 + 172LL)
                                    + 1192)
                        + 144LL;
                    goto LABEL_108;
                  }
                  v34 = ((_BYTE)i + (unsigned __int8)*((_WORD *)v33 + 87)) & 0xF;
                  v35 = (volatile signed __int32 *)v33[v34 + 2];
                  v36 = &v33[v34];
                  if ( v35 )
                  {
                    if ( (v35[11] & 1) == 0
                      && v35 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                             v36 + 2,
                                                             v27,
                                                             (signed __int64)v35) )
                    {
                      _m_prefetchw((const void *)(v35 + 11));
                      if ( _InterlockedAnd(v35 + 11, 0xFFFFFFFD) != 2 )
                        goto LABEL_66;
                      v62 = **(_QWORD **)v35;
                      *(_QWORD *)v35 = 0LL;
                      v63 = (_QWORD **)(v35 + 12);
                      goto LABEL_109;
                    }
                  }
                  else if ( !_InterlockedCompareExchange64(v36 + 2, v27, 0LL) )
                  {
                    goto LABEL_66;
                  }
                }
              }
            }
          }
          if ( !v28 )
            goto LABEL_55;
        }
      }
LABEL_66:
      v37 = *v26;
      v38 = *(_QWORD *)v8;
      v39 = *(_QWORD *)(v37 + 24);
      if ( (*((_BYTE *)v8 + 38) & 3) != 0 )
      {
        v40 = *(_DWORD **)(v39 + 24);
        v41 = (16 * (*((unsigned __int16 *)v8 + 18) + 256LL)) & 0xFFFFFFFFFFFFF000uLL;
        BaseAddressa = (PVOID)((*((_QWORD *)v8 + 1) + 4151LL) & 0xFFFFFFFFFFFFF000uLL);
        OldProtect = 0;
        v42 = 64;
        v43 = (unsigned __int16)((v41 + 4096) >> 4) * (unsigned __int64)*((unsigned __int16 *)v8 + 20);
        memset(MemoryInformation, 0, sizeof(MemoryInformation));
        v78 = 0LL;
        RegionSize = 16 * v43;
        if ( (v40[28] & 0x40000) != 0 )
        {
          if ( ZwQueryVirtualMemory(
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 v40,
                 MemoryBasicInformation,
                 MemoryInformation,
                 0x30uLL,
                 0LL) < 0
            || (BYTE4(v78) & 0x60) == 0
            || *(_DWORD **)&MemoryInformation[0] != v40 )
          {
            RtlpLogHeapFailure(0, (__int64)v40, 1LL, DWORD1(v78), 0LL, 0LL);
            v42 = 4;
          }
        }
        else
        {
          v42 = 4;
        }
        ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, v42, &OldProtect);
      }
      *(_DWORD *)(*((_QWORD *)v8 + 1) + 20LL) = 0;
      RtlpFreeUserBlock(v39, *((unsigned __int8 **)v8 + 1), i);
      v44 = *((unsigned __int16 *)v8 + 20);
      _m_prefetchw((const void *)(v38 + 160));
      do
        v45 = *(_QWORD *)(v38 + 160);
      while ( _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v38 + 160),
                (unsigned int)(v45 - v44) | ((unsigned __int64)(unsigned int)(HIDWORD(v45) - 1) << 32),
                v45) != v45 );
      *((_QWORD *)v8 + 1) = 0LL;
      _InterlockedIncrement((volatile signed __int32 *)(v39 + 60));
      v8[8] = 0;
      _m_prefetchw(v8 + 11);
      if ( _InterlockedAnd(v8 + 11, 0xFFFFFFFE) == 1 )
      {
        v46 = **(_QWORD **)v8;
        *(_QWORD *)v8 = 0LL;
        RtlpInterlockedPushEntrySList(v46, v8 + 12);
      }
      goto LABEL_27;
    }
  }
  v8[8] = v23 | (v10 + (unsigned __int16)v18 + 1);
  if ( (v8[11] & 2) != 0 || !*((_WORD *)v8 + 16) )
    goto LABEL_27;
  if ( (RtlpLowFragHeapGlobalFlags & 4) != 0
    || (v67 = v22[86], (unsigned int)v67 > 0x70)
    || *((_DWORD *)v22 + 40) < 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v67]
    || (v52 = 1, (unsigned int)(*((_WORD *)v8 + 20) >> 2) <= *((_WORD *)v8 + 16)) )
  {
    v52 = 0;
  }
  v53 = NtCurrentPeb()->SharedData;
  if ( v53 && *v53 )
    v54 = (__int64)NtCurrentPeb()->SharedData + 560;
  else
    v54 = 2147353482LL;
  if ( *(_BYTE *)v54 )
    goto LABEL_129;
  v55 = NtCurrentPeb()->SharedData;
  if ( v55 && *v55 )
    v13 = (__int64)NtCurrentPeb()->SharedData + 550;
  if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
LABEL_129:
    if ( v52 )
    {
      RtlpLogHeapReuseThresholdActivate(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v22 + 24LL) + 24LL),
        *((_QWORD *)v8 + 1),
        v22[86],
        v22);
      goto LABEL_27;
    }
  }
  else if ( v52 )
  {
    goto LABEL_27;
  }
  do
  {
    v56 = v8[11];
    if ( !v56 || (v56 & 2) != 0 )
      goto LABEL_27;
  }
  while ( v56 != _InterlockedCompareExchange(v8 + 11, v56 | 2, v56) );
  v57 = *(_QWORD *)v8;
  for ( j = 0; ; ++j )
  {
    if ( j >= 0x10 )
    {
      RtlpInterlockedPushEntrySList(
        *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v8 + 24LL) + 8LL * *(unsigned __int16 *)(*(_QWORD *)v8 + 172LL) + 1192)
      + 144LL,
        v8 + 12);
      goto LABEL_27;
    }
    v59 = ((_BYTE)j + (unsigned __int8)*(_WORD *)(v57 + 174)) & 0xF;
    v60 = *(__int64 ***)(v57 + 8 * v59 + 16);
    v61 = v57 + 8 * v59;
    if ( v60 )
      break;
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v61 + 16), (signed __int64)v8, 0LL) )
      goto LABEL_27;
LABEL_105:
    ;
  }
  if ( (*((_DWORD *)v60 + 11) & 1) != 0
    || v60 != (__int64 **)_InterlockedCompareExchange64(
                            (volatile signed __int64 *)(v61 + 16),
                            (signed __int64)v8,
                            (signed __int64)v60) )
  {
    goto LABEL_105;
  }
  _m_prefetchw((char *)v60 + 44);
  if ( _InterlockedAnd((volatile signed __int32 *)v60 + 11, 0xFFFFFFFD) == 2 )
  {
    v71 = **v60;
    *v60 = 0LL;
    RtlpInterlockedPushEntrySList(v71, v60 + 6);
  }
LABEL_27:
  v6 = (__int64)BaseAddress;
  v5 = a2;
  v3 = 1;
  v4 = a3;
LABEL_28:
  if ( (dword_1801CD8B8 & 1) != 0
    && (dword_1801CD8B8 & 2) != 0
    && NtCurrentPeb()->ProcessHeap
    && v6 != qword_1801D11A8[2 * (unsigned int)dword_18017E8C8[BYTE1(RtlpHpEnvHandle)]]
    && (v4 & 0x10000000) == 0 )
  {
    RtlpHpStackTraceRemoveStack(v6, v5);
  }
  return v3;
}
