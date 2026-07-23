/*
 * XREFs of LdrpFindLoadedDllByName @ 0x180044B80
 * Callers:
 *     LdrpFindLoadedDll @ 0x180036E00 (LdrpFindLoadedDll.c)
 *     LdrpLoadDependentModuleInternal @ 0x180039CE0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18003C480 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpFastpthReloadedDll @ 0x180046270 (LdrpFastpthReloadedDll.c)
 *     LdrpFindLoadedDllInternal @ 0x1800C73E0 (LdrpFindLoadedDllInternal.c)
 *     LdrGetDllHandleByName @ 0x1800E8F90 (LdrGetDllHandleByName.c)
 *     AVrfInitializeVerifier @ 0x180113994 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x180044840 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     LdrpEventAddUnicodeString @ 0x1800D4D60 (LdrpEventAddUnicodeString.c)
 *     NtSetInformationThread @ 0x1801601F0 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x180160C00 (NtTraceEvent.c)
 *     ZwAlertThreadByThreadIdEx @ 0x180160E80 (ZwAlertThreadByThreadIdEx.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
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
  char *SchedulerSharedDataSlot; // r8
  char *v18; // rcx
  char *v19; // rax
  _QWORD **v20; // r13
  _QWORD *j; // r15
  _QWORD *v22; // rdi
  __int64 v23; // rax
  unsigned __int16 *v24; // r10
  __int64 v25; // rbp
  unsigned __int16 *v26; // r11
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // ebp
  _DWORD *v32; // rdx
  signed __int64 v33; // rax
  signed __int64 v34; // rcx
  char *v35; // rcx
  unsigned int m; // edx
  char *v37; // rbx
  __int64 v38; // rax
  unsigned __int16 *v39; // r10
  __int64 v40; // rbp
  unsigned __int16 *v41; // r11
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // rbx
  _DWORD *SharedData; // rcx
  __int64 v47; // rcx
  __int64 v49; // rcx
  char *v50; // rcx
  size_t v51; // r15
  _BYTE *Heap; // rdi
  unsigned int v53; // esi
  char v54; // cl
  signed __int64 v55; // r8
  bool v56; // zf
  signed __int64 v57; // rax
  char *v58; // rcx
  size_t v59; // r15
  unsigned int v60; // r14d
  unsigned int v61; // r13d
  char v62; // cl
  _QWORD *v63; // rax
  __int64 k; // rdx
  __int64 v65; // r8
  __int64 v66; // rax
  signed __int64 v67; // rdx
  signed __int64 v68; // rax
  _RTL_SRWLOCK *v69; // rdi
  unsigned __int64 v70; // r8
  _QWORD *v71; // r9
  __int64 v72; // rcx
  __int64 v73; // rax
  signed __int64 v74; // rax
  __int64 v75; // rbx
  __int64 v76; // rax
  signed __int64 v77; // rax
  _QWORD *v78; // rax
  int v79; // [rsp+20h] [rbp-4F8h] BYREF
  _QWORD ThreadInformation[2]; // [rsp+28h] [rbp-4F0h] BYREF
  __int128 v81; // [rsp+38h] [rbp-4E0h] BYREF
  _QWORD *v82; // [rsp+48h] [rbp-4D0h]
  _BYTE v83[576]; // [rsp+50h] [rbp-4C8h] BYREF
  _BYTE Fields[576]; // [rsp+290h] [rbp-288h] BYREF

  ThreadInformation[0] = a5;
  v5 = a3;
  v82 = a4;
  v6 = (unsigned __int16 *)i;
  v79 = a3;
  v7 = a1;
  v81 = 0LL;
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
    v7 = (unsigned __int16 *)&v81;
    v11 = (unsigned __int16)i;
    LOWORD(i) = 2 * i;
    LOWORD(v81) = v8 - i;
    v12 = v10 + 2 * v11;
    LOWORD(v10) = v6[1] - i;
    *((_QWORD *)&v81 + 1) = v12;
    WORD1(v81) = v10;
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
          if ( qword_1801CC038 && (unsigned __int16)v16 >= 0xC0u )
          {
            i = (v16 & 0xF)
              + (unsigned int)*(unsigned __int16 *)(qword_1801CC038
                                                  + 2LL
                                                  * (((unsigned __int8)v16 >> 4)
                                                   + (unsigned int)*(unsigned __int16 *)(qword_1801CC038 + 2 * (v16 >> 8))));
            LOWORD(v16) = *(_WORD *)(qword_1801CC038 + 2 * i) + v16;
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
    v5 = v79;
  }
  if ( !v14 )
    v14 = 0x80000000;
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v18 = &SchedulerSharedDataSlot[8 * (unsigned int)i];
      if ( !*(_QWORD *)v18 )
      {
        if ( v18 )
          *(_QWORD *)v18 = &LdrpModuleDatatableLock;
        break;
      }
    }
  }
  v19 = (char *)_InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, 17LL, 0LL);
  if ( v19 )
    RtlpAcquireSRWLockSharedContended(
      (unsigned __int64)&LdrpModuleDatatableLock,
      i,
      v19,
      (char *)&LdrpModuleDatatableLock);
  v20 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v14 & 0x1F));
  for ( j = *v20; ; j = (_QWORD *)*j )
  {
    if ( j == v20 )
    {
      v31 = -1073741515;
      goto LABEL_51;
    }
    v22 = j - 14;
    if ( v14 != *((_DWORD *)j + 38) || (v5 & 8) != 0 && (v22[13] & 1) == 0 )
      continue;
    if ( !v6 )
      break;
    v23 = *v6;
    if ( (_WORD)v23 == *((_WORD *)v22 + 36) )
    {
      v24 = (unsigned __int16 *)*((_QWORD *)v6 + 1);
      v25 = v22[10] - (_QWORD)v24;
      v26 = (unsigned __int16 *)((char *)v24 + v23);
      while ( v24 < v26 )
      {
        v27 = *v24;
        v28 = *(unsigned __int16 *)((char *)v24 + v25);
        if ( (_WORD)v27 != (_WORD)v28 )
        {
          v29 = qword_1801CC038;
          if ( (unsigned int)v27 >= 0x61 )
          {
            if ( (unsigned int)v27 > 0x7A )
            {
              if ( qword_1801CC038 && (unsigned __int16)v27 >= 0xC0u )
              {
                v29 = qword_1801CC038;
                LOWORD(v27) = *(_WORD *)(qword_1801CC038
                                       + 2
                                       * ((v27 & 0xF)
                                        + *(unsigned __int16 *)(qword_1801CC038
                                                              + 2LL
                                                              * (*(unsigned __int16 *)(qword_1801CC038 + 2 * (v27 >> 8))
                                                               + (unsigned int)((unsigned __int8)v27 >> 4)))))
                            + v27;
              }
            }
            else
            {
              LOWORD(v27) = v27 - 32;
            }
          }
          if ( (unsigned int)v28 >= 0x61 )
          {
            if ( (unsigned int)v28 > 0x7A )
            {
              if ( v29 )
              {
                if ( (unsigned __int16)v28 >= 0xC0u )
                  LOWORD(v28) = *(_WORD *)(qword_1801CC038
                                         + 2
                                         * ((v28 & 0xF)
                                          + *(unsigned __int16 *)(qword_1801CC038
                                                                + 2LL
                                                                * (*(unsigned __int16 *)(v29 + 2 * (v28 >> 8))
                                                                 + (unsigned int)((unsigned __int8)v28 >> 4)))))
                              + v28;
              }
            }
            else
            {
              LOWORD(v28) = v28 - 32;
            }
          }
          if ( (_WORD)v27 != (_WORD)v28 )
            goto LABEL_60;
        }
        ++v24;
      }
      goto LABEL_46;
    }
LABEL_61:
    ;
  }
  if ( (v22[13] & 0x10000000) != 0 )
    goto LABEL_61;
  v38 = *v7;
  if ( (_WORD)v38 != *((_WORD *)v22 + 44) )
    goto LABEL_61;
  v39 = (unsigned __int16 *)*((_QWORD *)v7 + 1);
  v40 = v22[12] - (_QWORD)v39;
  v41 = (unsigned __int16 *)((char *)v39 + v38);
  while ( v39 < v41 )
  {
    v42 = *v39;
    v43 = *(unsigned __int16 *)((char *)v39 + v40);
    if ( (_WORD)v42 != (_WORD)v43 )
    {
      v44 = qword_1801CC038;
      if ( (unsigned int)v42 >= 0x61 )
      {
        if ( (unsigned int)v42 > 0x7A )
        {
          if ( qword_1801CC038 && (unsigned __int16)v42 >= 0xC0u )
          {
            v44 = qword_1801CC038;
            LOWORD(v42) = *(_WORD *)(qword_1801CC038
                                   + 2
                                   * ((v42 & 0xF)
                                    + *(unsigned __int16 *)(qword_1801CC038
                                                          + 2LL
                                                          * (*(unsigned __int16 *)(qword_1801CC038 + 2 * (v42 >> 8))
                                                           + (unsigned int)((unsigned __int8)v42 >> 4)))))
                        + v42;
          }
        }
        else
        {
          LOWORD(v42) = v42 - 32;
        }
      }
      if ( (unsigned int)v43 >= 0x61 )
      {
        if ( (unsigned int)v43 > 0x7A )
        {
          if ( v44 && (unsigned __int16)v43 >= 0xC0u )
            LOWORD(v43) = *(_WORD *)(qword_1801CC038
                                   + 2
                                   * ((v43 & 0xF)
                                    + *(unsigned __int16 *)(qword_1801CC038
                                                          + 2LL
                                                          * (*(unsigned __int16 *)(v44 + 2 * (v43 >> 8))
                                                           + (unsigned int)((unsigned __int8)v43 >> 4)))))
                        + v43;
        }
        else
        {
          LOWORD(v43) = v43 - 32;
        }
      }
      if ( (_WORD)v42 != (_WORD)v43 )
      {
LABEL_60:
        v5 = v79;
        goto LABEL_61;
      }
    }
    ++v39;
  }
LABEL_46:
  v30 = v22[19];
  if ( *(_DWORD *)(v30 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v30 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)v22 + 69);
  v31 = 0;
  v32 = (_DWORD *)ThreadInformation[0];
  *v82 = v22;
  if ( v32 )
    *v32 = *(_DWORD *)(v22[19] + 56LL);
LABEL_51:
  v33 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, 0LL, 17LL);
  v34 = v33;
  if ( v33 != 17 )
  {
    if ( (v33 & 1) == 0 )
      RtlRaiseStatus(-1073741212);
    while ( (v34 & 2) == 0 )
    {
      v55 = 0LL;
      if ( (v34 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
        v55 = v34 - 16;
      v57 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, v55, v34);
      v56 = v34 == v57;
      v34 = v57;
      if ( v56 )
        goto LABEL_52;
    }
    if ( (v34 & 8) != 0 )
    {
      v63 = (_QWORD *)(v34 & 0xFFFFFFFFFFFFFFF0uLL);
      for ( k = *(_QWORD *)((v34 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !k; k = v63[1] )
        v63 = (_QWORD *)*v63;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(k + 32), 0xFFFFFFFF) > 1 )
        goto LABEL_52;
      v65 = -9LL;
    }
    else
    {
      v65 = -1LL;
    }
    while ( 1 )
    {
      if ( (v34 & 4) != 0 || (v66 = v65 + 4, (v34 & 2) == 0) )
        v66 = v65;
      v67 = v66 + v34;
      v68 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, v66 + v34, v34);
      if ( v34 == v68 )
        break;
      v34 = v68;
    }
    if ( (v34 & 6) == 2 )
    {
      v69 = &LdrpModuleDatatableLock;
      while ( 1 )
      {
        while ( (v67 & 1) != 0 )
        {
          v77 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, v67 - 4, v67);
          v56 = v67 == v77;
          v67 = v77;
          if ( v56 )
            goto LABEL_52;
        }
        v70 = v67 & 0xFFFFFFFFFFFFFFF0uLL;
        v71 = (_QWORD *)(v67 & 0xFFFFFFFFFFFFFFF0uLL);
        v72 = *(_QWORD *)((v67 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
        if ( !v72 )
        {
          do
          {
            v78 = v71;
            v71 = (_QWORD *)*v71;
            v71[2] = v78;
            v72 = v71[1];
          }
          while ( !v72 );
          if ( v71 != (_QWORD *)v70 )
            *(_QWORD *)((v67 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v72;
        }
        if ( (*(_DWORD *)(v72 + 36) & 1) != 0 )
        {
          v73 = *(_QWORD *)(v72 + 16);
          if ( v73 )
            break;
        }
        v69 = 0LL;
        v74 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, 0LL, v67);
        v56 = v67 == v74;
        v67 = v74;
        if ( v56 )
          goto LABEL_152;
      }
      *(_QWORD *)((v67 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v73;
      *(_QWORD *)(v72 + 16) = 0LL;
      _InterlockedAnd64((volatile signed __int64 *)&LdrpModuleDatatableLock, 0xFFFFFFFFFFFFFFFBuLL);
      do
      {
LABEL_152:
        v75 = *(_QWORD *)(v72 + 16);
        v76 = *(_QWORD *)(v72 + 24);
        _interlockedbittestandset((volatile signed __int32 *)(v72 + 36), 2u);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)(v72 + 36), 1u) )
          ZwAlertThreadByThreadIdEx(v76, v69, v70, v71);
        v72 = v75;
      }
      while ( v75 );
    }
  }
LABEL_52:
  v35 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( v35 )
  {
    for ( m = 0; m < 8; ++m )
    {
      v37 = &v35[8 * m];
      if ( (*(_QWORD *)v37 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&LdrpModuleDatatableLock & 0x7FFFFFFFFFFFFFFCLL) )
      {
        if ( v37 )
        {
          *v37 |= 2u;
          if ( v37[7] < 0 )
          {
            ThreadInformation[1] = 0LL;
            ThreadInformation[0] = (v37 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
            NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUpdateLockOwnership, ThreadInformation, 0x10u);
          }
          *(_QWORD *)v37 = 0LL;
        }
        break;
      }
    }
  }
  v45 = 2147353476LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( v6 )
  {
    if ( SharedData && *SharedData )
      v47 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v47 = 2147353476LL;
    if ( *(_BYTE *)v47 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v58 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v58 & 0x20) != 0 )
      {
        v59 = 576LL;
        memset_thunk_772440563353939046(v83, 0, 0x240uLL);
        Heap = v83;
        v60 = *v6 + 2;
        v61 = *v6 + 44;
        if ( v60 <= 0x214 || (Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)*v6 + 44)) != 0LL )
        {
          if ( v61 > 0x240 )
            v59 = v61;
          memset_thunk_772440563353939046(Heap, 0, v59);
          v62 = 0;
          *((_WORD *)Heap + 3) = 5280;
          *((_QWORD *)Heap + 4) = 0LL;
          Heap[40] = 0;
          if ( v31 < 0 )
            v62 = 3;
          Heap[41] = v62;
          LdrpEventAddUnicodeString(v6, Heap + 42, v60, &v79);
          if ( RtlGetCurrentServiceSessionId() )
            v45 = (__int64)NtCurrentPeb()->SharedData + 554;
          NtTraceEvent((HANDLE)*(unsigned __int8 *)v45, 0x402u, v61 - 32, Heap);
          if ( v83 != Heap )
            goto LABEL_101;
        }
      }
    }
  }
  else
  {
    if ( SharedData && *SharedData )
      v49 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v49 = 2147353476LL;
    if ( *(_BYTE *)v49 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v50 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v50 & 0x20) != 0 )
      {
        v51 = 576LL;
        memset_thunk_772440563353939046(Fields, 0, 0x240uLL);
        Heap = Fields;
        v53 = 0;
        if ( v7 )
          v53 = *v7 + 2;
        if ( v53 <= 0x214 || (Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v53 + 42)) != 0LL )
        {
          if ( v53 + 42 > 0x240 )
            v51 = v53 + 42;
          memset_thunk_772440563353939046(Heap, 0, v51);
          v54 = 0;
          *((_WORD *)Heap + 3) = 5280;
          *((_QWORD *)Heap + 4) = 0LL;
          Heap[40] = 0;
          if ( v31 < 0 )
            v54 = 3;
          Heap[41] = v54;
          if ( v53 )
            LdrpEventAddUnicodeString(v7, Heap + 42, v53, &v79);
          if ( RtlGetCurrentServiceSessionId() )
            v45 = (__int64)NtCurrentPeb()->SharedData + 554;
          NtTraceEvent((HANDLE)*(unsigned __int8 *)v45, 0x402u, v53 + 10, Heap);
          if ( Fields != Heap )
LABEL_101:
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        }
      }
    }
  }
  return (unsigned int)v31;
}
