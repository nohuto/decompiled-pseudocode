/*
 * XREFs of LdrpFindLoadedDllByName @ 0x180018180
 * Callers:
 *     LdrpFindLoadedDllInternal @ 0x1800036C0 (LdrpFindLoadedDllInternal.c)
 *     LdrpFindLoadedDll @ 0x18000A400 (LdrpFindLoadedDll.c)
 *     LdrpLoadDependentModuleInternal @ 0x18000D2E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18000FA80 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpFastpthReloadedDll @ 0x180019870 (LdrpFastpthReloadedDll.c)
 *     LdrGetDllHandleByName @ 0x1800EDDB0 (LdrGetDllHandleByName.c)
 *     AVrfInitializeVerifier @ 0x180118960 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x180017E40 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     LdrpEventAddUnicodeString @ 0x1800D99F0 (LdrpEventAddUnicodeString.c)
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     ZwAlertThreadByThreadIdEx @ 0x180162AC0 (ZwAlertThreadByThreadIdEx.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpFindLoadedDllByName(unsigned __int16 *a1, unsigned __int64 i, int a3, _QWORD *a4, __int64 a5)
{
  char v5; // bp
  unsigned __int16 *v6; // rsi
  unsigned __int16 *v7; // r12
  unsigned __int16 v8; // r8
  __int16 v9; // cx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // r9d
  int v14; // ebx
  unsigned __int16 *v15; // r10
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r9
  char *SchedulerSharedDataSlot; // r8
  char *v19; // rcx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rax
  _QWORD **v22; // r13
  _QWORD *j; // r15
  _QWORD *v24; // rdi
  __int64 v25; // rax
  unsigned __int16 *v26; // r10
  __int64 v27; // rbp
  unsigned __int16 *v28; // r11
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // ebp
  signed __int64 v32; // rax
  signed __int64 v33; // rcx
  char *v34; // rcx
  char *v35; // rbx
  __int64 v36; // rax
  unsigned __int16 *v37; // r10
  __int64 v38; // rbp
  unsigned __int16 *v39; // r11
  __int64 v40; // rcx
  __int64 v41; // rbx
  _DWORD *SharedData; // rcx
  __int64 v43; // rcx
  __int64 v45; // rcx
  char *v46; // rcx
  size_t v47; // r15
  _BYTE *Heap; // rdi
  unsigned int v49; // esi
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rcx
  bool v54; // zf
  signed __int64 v55; // rax
  char *v56; // rcx
  size_t v57; // r15
  unsigned int v58; // r14d
  unsigned int v59; // r13d
  char v60; // cl
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  _QWORD *v65; // rax
  signed __int32 v66; // r8d
  bool v67; // cc
  unsigned __int64 v68; // rax
  signed __int64 v69; // rax
  __int64 *v70; // rdi
  __int64 v71; // rcx
  __int64 v72; // rax
  signed __int64 v73; // rax
  __int64 v74; // rbx
  __int64 v75; // rax
  signed __int64 v76; // rax
  unsigned __int64 v77; // rax
  int v78; // [rsp+20h] [rbp-4F8h] BYREF
  _QWORD v79[2]; // [rsp+28h] [rbp-4F0h] BYREF
  __int128 v80; // [rsp+38h] [rbp-4E0h] BYREF
  _QWORD *v81; // [rsp+48h] [rbp-4D0h]
  _BYTE v82[576]; // [rsp+50h] [rbp-4C8h] BYREF
  _BYTE v83[576]; // [rsp+290h] [rbp-288h] BYREF

  v79[0] = a5;
  v5 = a3;
  v81 = a4;
  v6 = (unsigned __int16 *)i;
  v78 = a3;
  v7 = a1;
  v80 = 0LL;
  if ( !a1 )
  {
    v8 = *(_WORD *)i;
    i = *(unsigned __int16 *)i;
    LOWORD(i) = v8 >> 1;
    if ( v8 >> 1 )
    {
      do
      {
        v9 = *(_WORD *)(*((_QWORD *)v6 + 1) + 2LL * (unsigned __int16)i - 2);
        if ( v9 == 92 )
          break;
        if ( v9 == 47 )
          break;
        LOWORD(i) = i - 1;
      }
      while ( (_WORD)i );
    }
    v10 = *((_QWORD *)v6 + 1);
    v7 = (unsigned __int16 *)&v80;
    v11 = (unsigned __int16)i;
    LOWORD(i) = 2 * i;
    LOWORD(v80) = v8 - i;
    v12 = v10 + 2 * v11;
    LOWORD(v10) = v6[1] - i;
    *((_QWORD *)&v80 + 1) = v12;
    WORD1(v80) = v10;
  }
  v13 = *v7 >> 1;
  v14 = 0;
  v15 = (unsigned __int16 *)*((_QWORD *)v7 + 1);
  if ( v13 )
  {
    do
    {
      v16 = *v15++;
      --v13;
      if ( (unsigned int)v16 >= 0x61 )
      {
        if ( (unsigned int)v16 > 0x7A )
        {
          if ( qword_1801CD038 && (unsigned __int16)v16 >= 0xC0u )
          {
            i = (v16 & 0xF)
              + (unsigned int)*(unsigned __int16 *)(qword_1801CD038
                                                  + 2LL
                                                  * (((unsigned __int8)v16 >> 4)
                                                   + (unsigned int)*(unsigned __int16 *)(qword_1801CD038 + 2 * (v16 >> 8))));
            LOWORD(v16) = *(_WORD *)(qword_1801CD038 + 2 * i) + v16;
          }
        }
        else
        {
          LOWORD(v16) = v16 - 32;
        }
      }
      v14 = (unsigned __int16)v16 + 65599 * v14;
    }
    while ( v13 );
    v5 = v78;
  }
  if ( !v14 )
    v14 = 0x80000000;
  v17 = (unsigned __int64)&LdrpModuleDatatableLock;
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v19 = &SchedulerSharedDataSlot[8 * (unsigned int)i];
      if ( !*(_QWORD *)v19 )
      {
        if ( v19 )
          *(_QWORD *)v19 = &LdrpModuleDatatableLock;
        break;
      }
    }
  }
  v20 = 17LL;
  v21 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 17LL, 0LL);
  if ( v21 )
    RtlpAcquireSRWLockSharedContended(
      (unsigned __int64)&LdrpModuleDatatableLock,
      i,
      v21,
      (unsigned __int64)&LdrpModuleDatatableLock);
  v22 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v14 & 0x1F));
  for ( j = *v22; ; j = (_QWORD *)*j )
  {
    if ( j == v22 )
    {
      v31 = -1073741515;
      goto LABEL_51;
    }
    v24 = j - 14;
    if ( v14 != *((_DWORD *)j + 38) || (v5 & 8) != 0 && (v24[13] & 1) == 0 )
      continue;
    if ( !v6 )
      break;
    v25 = *v6;
    if ( (_WORD)v25 == *((_WORD *)v24 + 36) )
    {
      v26 = (unsigned __int16 *)*((_QWORD *)v6 + 1);
      v27 = v24[10] - (_QWORD)v26;
      v28 = (unsigned __int16 *)((char *)v26 + v25);
      while ( v26 < v28 )
      {
        v20 = *v26;
        v17 = *(unsigned __int16 *)((char *)v26 + v27);
        if ( (_WORD)v20 != (_WORD)v17 )
        {
          v29 = qword_1801CD038;
          if ( (unsigned int)v20 >= 0x61 )
          {
            if ( (unsigned int)v20 > 0x7A )
            {
              if ( qword_1801CD038 && (unsigned __int16)v20 >= 0xC0u )
              {
                i = v20 & 0xF;
                v29 = qword_1801CD038;
                LOWORD(v20) = *(_WORD *)(qword_1801CD038
                                       + 2LL
                                       * ((unsigned int)i
                                        + *(unsigned __int16 *)(qword_1801CD038
                                                              + 2LL
                                                              * (*(unsigned __int16 *)(qword_1801CD038 + 2 * (v20 >> 8))
                                                               + (unsigned int)((unsigned __int8)v20 >> 4)))))
                            + v20;
              }
            }
            else
            {
              LOWORD(v20) = v20 - 32;
            }
          }
          if ( (unsigned int)v17 >= 0x61 )
          {
            if ( (unsigned int)v17 > 0x7A )
            {
              if ( v29 )
              {
                if ( (unsigned __int16)v17 >= 0xC0u )
                {
                  i = v17 & 0xF;
                  LOWORD(v17) = *(_WORD *)(qword_1801CD038
                                         + 2LL
                                         * ((unsigned int)i
                                          + *(unsigned __int16 *)(qword_1801CD038
                                                                + 2LL
                                                                * (*(unsigned __int16 *)(v29 + 2 * (v17 >> 8))
                                                                 + (unsigned int)((unsigned __int8)v17 >> 4)))))
                              + v17;
                }
              }
            }
            else
            {
              LOWORD(v17) = v17 - 32;
            }
          }
          if ( (_WORD)v20 != (_WORD)v17 )
            goto LABEL_60;
        }
        ++v26;
      }
      goto LABEL_46;
    }
LABEL_61:
    ;
  }
  if ( (v24[13] & 0x10000000) != 0 )
    goto LABEL_61;
  v36 = *v7;
  if ( (_WORD)v36 != *((_WORD *)v24 + 44) )
    goto LABEL_61;
  v37 = (unsigned __int16 *)*((_QWORD *)v7 + 1);
  v38 = v24[12] - (_QWORD)v37;
  v39 = (unsigned __int16 *)((char *)v37 + v36);
  while ( v37 < v39 )
  {
    v20 = *v37;
    v17 = *(unsigned __int16 *)((char *)v37 + v38);
    if ( (_WORD)v20 != (_WORD)v17 )
    {
      v40 = qword_1801CD038;
      if ( (unsigned int)v20 >= 0x61 )
      {
        if ( (unsigned int)v20 > 0x7A )
        {
          if ( qword_1801CD038 && (unsigned __int16)v20 >= 0xC0u )
          {
            i = v20 & 0xF;
            v40 = qword_1801CD038;
            LOWORD(v20) = *(_WORD *)(qword_1801CD038
                                   + 2LL
                                   * ((unsigned int)i
                                    + *(unsigned __int16 *)(qword_1801CD038
                                                          + 2LL
                                                          * (*(unsigned __int16 *)(qword_1801CD038 + 2 * (v20 >> 8))
                                                           + (unsigned int)((unsigned __int8)v20 >> 4)))))
                        + v20;
          }
        }
        else
        {
          LOWORD(v20) = v20 - 32;
        }
      }
      if ( (unsigned int)v17 >= 0x61 )
      {
        if ( (unsigned int)v17 > 0x7A )
        {
          if ( v40 && (unsigned __int16)v17 >= 0xC0u )
          {
            i = v17 & 0xF;
            LOWORD(v17) = *(_WORD *)(qword_1801CD038
                                   + 2LL
                                   * ((unsigned int)i
                                    + *(unsigned __int16 *)(qword_1801CD038
                                                          + 2LL
                                                          * (*(unsigned __int16 *)(v40 + 2 * (v17 >> 8))
                                                           + (unsigned int)((unsigned __int8)v17 >> 4)))))
                        + v17;
          }
        }
        else
        {
          LOWORD(v17) = v17 - 32;
        }
      }
      if ( (_WORD)v20 != (_WORD)v17 )
      {
LABEL_60:
        v5 = v78;
        goto LABEL_61;
      }
    }
    ++v37;
  }
LABEL_46:
  v30 = v24[19];
  if ( *(_DWORD *)(v30 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v30 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)v24 + 69);
  v31 = 0;
  i = v79[0];
  *v81 = v24;
  if ( i )
    *(_DWORD *)i = *(_DWORD *)(v24[19] + 56LL);
LABEL_51:
  v32 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 0LL, 17LL);
  v33 = v32;
  if ( v32 != 17 )
  {
    if ( (v32 & 1) == 0 )
      RtlRaiseStatus(-1073741212);
    while ( (v33 & 2) == 0 )
    {
      i = v33 & 0xFFFFFFFFFFFFFFF0uLL;
      v20 = 0LL;
      if ( (v33 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
        v20 = v33 - 16;
      v55 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, v20, v33);
      v54 = v33 == v55;
      v33 = v55;
      if ( v54 )
        goto LABEL_52;
    }
    if ( (v33 & 8) != 0 )
    {
      v65 = (_QWORD *)(v33 & 0xFFFFFFFFFFFFFFF0uLL);
      for ( i = *(_QWORD *)((v33 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = v65[1] )
        v65 = (_QWORD *)*v65;
      v66 = _InterlockedExchangeAdd((volatile signed __int32 *)(i + 32), 0xFFFFFFFF);
      v67 = v66 <= 1;
      v20 = (unsigned int)(v66 - 1);
      if ( !v67 )
        goto LABEL_52;
      v20 = -9LL;
    }
    else
    {
      v20 = -1LL;
    }
    while ( 1 )
    {
      if ( (v33 & 4) != 0 || (v68 = v20 + 4, (v33 & 2) == 0) )
        v68 = v20;
      i = v68 + v33;
      v69 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, v68 + v33, v33);
      if ( v33 == v69 )
        break;
      v33 = v69;
    }
    if ( (v33 & 6) == 2 )
    {
      v70 = &LdrpModuleDatatableLock;
      while ( 1 )
      {
        while ( (i & 1) != 0 )
        {
          v76 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, i - 4, i);
          v54 = i == v76;
          i = v76;
          if ( v54 )
            goto LABEL_52;
        }
        v20 = i & 0xFFFFFFFFFFFFFFF0uLL;
        v17 = i & 0xFFFFFFFFFFFFFFF0uLL;
        v71 = *(_QWORD *)((i & 0xFFFFFFFFFFFFFFF0uLL) + 8);
        if ( !v71 )
        {
          do
          {
            v77 = v17;
            v17 = *(_QWORD *)v17;
            *(_QWORD *)(v17 + 16) = v77;
            v71 = *(_QWORD *)(v17 + 8);
          }
          while ( !v71 );
          if ( v17 != v20 )
            *(_QWORD *)((i & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v71;
        }
        if ( (*(_DWORD *)(v71 + 36) & 1) != 0 )
        {
          v72 = *(_QWORD *)(v71 + 16);
          if ( v72 )
            break;
        }
        v70 = 0LL;
        v73 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 0LL, i);
        v54 = i == v73;
        i = v73;
        if ( v54 )
          goto LABEL_152;
      }
      *(_QWORD *)((i & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v72;
      *(_QWORD *)(v71 + 16) = 0LL;
      _InterlockedAnd64(&LdrpModuleDatatableLock, 0xFFFFFFFFFFFFFFFBuLL);
      do
      {
LABEL_152:
        v74 = *(_QWORD *)(v71 + 16);
        v75 = *(_QWORD *)(v71 + 24);
        _interlockedbittestandset((volatile signed __int32 *)(v71 + 36), 2u);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)(v71 + 36), 1u) )
          ZwAlertThreadByThreadIdEx(v75, v70, v20, v17);
        v71 = v74;
      }
      while ( v74 );
    }
  }
LABEL_52:
  v34 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( v34 )
  {
    v20 = 0x7FFFFFFFFFFFFFFCLL;
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v35 = &v34[8 * (unsigned int)i];
      if ( (*(_QWORD *)v35 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&LdrpModuleDatatableLock & 0x7FFFFFFFFFFFFFFCLL) )
      {
        if ( v35 )
        {
          *v35 |= 2u;
          if ( v35[7] < 0 )
          {
            v79[1] = 0LL;
            v79[0] = (v35 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
            NtSetInformationThread(-2LL, 56LL, v79);
          }
          *(_QWORD *)v35 = 0LL;
        }
        break;
      }
    }
  }
  v41 = 2147353476LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( v6 )
  {
    if ( SharedData && *SharedData )
      v43 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v43 = 2147353476LL;
    if ( *(_BYTE *)v43 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v56 = (unsigned int)RtlGetCurrentServiceSessionId(v43, i, v20, v17)
          ? (char *)NtCurrentPeb()->SharedData + 555
          : (char *)2147353477;
      if ( (*v56 & 0x20) != 0 )
      {
        v57 = 576LL;
        memset_thunk_772440563353939046(v82, 0, 0x240uLL);
        Heap = v82;
        v58 = *v6 + 2;
        v59 = *v6 + 44;
        if ( v58 <= 0x214
          || (Heap = (_BYTE *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned int)*v6 + 44)) != 0LL )
        {
          if ( v59 > 0x240 )
            v57 = v59;
          memset_thunk_772440563353939046(Heap, 0, v57);
          v60 = 0;
          *((_WORD *)Heap + 3) = 5280;
          *((_QWORD *)Heap + 4) = 0LL;
          Heap[40] = 0;
          if ( v31 < 0 )
            v60 = 3;
          Heap[41] = v60;
          LdrpEventAddUnicodeString(v6, Heap + 42, v58, &v78);
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v62, v61, v63, v64) )
            v41 = (__int64)NtCurrentPeb()->SharedData + 554;
          NtTraceEvent(*(unsigned __int8 *)v41, 1026LL, v59 - 32, Heap);
          if ( v82 != Heap )
            goto LABEL_101;
        }
      }
    }
  }
  else
  {
    if ( SharedData && *SharedData )
      v45 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v45 = 2147353476LL;
    if ( *(_BYTE *)v45 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v46 = (unsigned int)RtlGetCurrentServiceSessionId(v45, i, v20, v17)
          ? (char *)NtCurrentPeb()->SharedData + 555
          : (char *)2147353477;
      if ( (*v46 & 0x20) != 0 )
      {
        v47 = 576LL;
        memset_thunk_772440563353939046(v83, 0, 0x240uLL);
        Heap = v83;
        v49 = 0;
        if ( v7 )
          v49 = *v7 + 2;
        if ( v49 <= 0x214 || (Heap = (_BYTE *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v49 + 42)) != 0LL )
        {
          if ( v49 + 42 > 0x240 )
            v47 = v49 + 42;
          memset_thunk_772440563353939046(Heap, 0, v47);
          v53 = 0LL;
          *((_WORD *)Heap + 3) = 5280;
          *((_QWORD *)Heap + 4) = 0LL;
          Heap[40] = 0;
          if ( v31 < 0 )
            v53 = 3LL;
          Heap[41] = v53;
          if ( v49 )
            LdrpEventAddUnicodeString(v7, Heap + 42, v49, &v78);
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v53, v50, v51, v52) )
            v41 = (__int64)NtCurrentPeb()->SharedData + 554;
          NtTraceEvent(*(unsigned __int8 *)v41, 1026LL, v49 + 10, Heap);
          if ( v83 != Heap )
LABEL_101:
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
        }
      }
    }
  }
  return (unsigned int)v31;
}
