/*
 * XREFs of LdrpFindOrPrepareLoadingModule @ 0x18000FA80
 * Callers:
 *     LdrpLoadDllInternal @ 0x18000B460 (LdrpLoadDllInternal.c)
 * Callees:
 *     LdrpReleaseTlsEntry @ 0x1800049CC (LdrpReleaseTlsEntry.c)
 *     LdrpDestroyNode @ 0x180004B28 (LdrpDestroyNode.c)
 *     LdrpUnmapModule @ 0x1800067C8 (LdrpUnmapModule.c)
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     LdrpAllocateModuleEntry @ 0x180010680 (LdrpAllocateModuleEntry.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     LdrpFindLoadedDllByName @ 0x180018180 (LdrpFindLoadedDllByName.c)
 *     LdrpIncrementModuleLoadCount @ 0x180019B00 (LdrpIncrementModuleLoadCount.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x18005E4D0 (RtlReleaseActivationContext.c)
 *     LdrpLoadKnownDll @ 0x180074A60 (LdrpLoadKnownDll.c)
 *     LdrpFreeUnicodeString @ 0x18007625C (LdrpFreeUnicodeString.c)
 *     LdrpLogEtwEvent @ 0x18009B2F0 (LdrpLogEtwEvent.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall LdrpFindOrPrepareLoadingModule(
        unsigned __int16 *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7)
{
  __int64 *v7; // r13
  int v8; // ebx
  int v9; // edi
  int v10; // esi
  __int64 v11; // r15
  unsigned __int16 *v12; // rbp
  __int64 v13; // r14
  __int64 v14; // r12
  unsigned __int16 v15; // r9
  unsigned __int16 v16; // dx
  __int64 v17; // r8
  __int16 v18; // cx
  int v19; // r9d
  unsigned __int16 *v20; // r10
  unsigned __int64 v21; // rax
  _QWORD **v22; // r15
  _QWORD *i; // r14
  _QWORD *v24; // rdi
  __int64 v25; // rax
  unsigned __int16 *v26; // r10
  __int64 v27; // rsi
  unsigned __int16 *v28; // r11
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r9
  __int64 v31; // rax
  int LoadedDllByName; // ebx
  _DWORD *SharedData; // rcx
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v38; // rcx
  int v39; // edx
  __int64 Heap; // rax
  __int64 v41; // rbx
  __int64 ModuleEntry; // rax
  _DWORD *v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // r8
  _QWORD *v46; // rdx
  char *v47; // rcx
  int v48; // r9d
  size_t v49; // rax
  _QWORD *v50; // rsi
  _QWORD *v51; // rbp
  __int64 v52; // rdx
  __int64 v53; // rcx
  int v54; // [rsp+40h] [rbp-58h] BYREF
  __int128 v55; // [rsp+48h] [rbp-50h] BYREF

  v7 = a6;
  v8 = 0;
  v54 = 0;
  v9 = a4;
  v10 = a3;
  v11 = a2;
  v12 = a1;
  *a6 = 0LL;
  v55 = 0LL;
  if ( a4 == 9 )
  {
    DWORD1(v55) = 0;
    *((_QWORD *)&v55 + 1) = ModuleNamePlaceholderBuffer;
    v49 = 2 * wcslen(ModuleNamePlaceholderBuffer);
    v12 = (unsigned __int16 *)&v55;
    v13 = 2147353476LL;
    if ( v49 >= 0xFFFE )
      LOWORD(v49) = -4;
    LOWORD(v55) = v49;
    WORD1(v55) = v49 + 2;
    v14 = 2147353477LL;
    goto LABEL_59;
  }
  v13 = 2147353476LL;
  v14 = 2147353477LL;
  if ( (a3 & 0x20) != 0 )
  {
    LoadedDllByName = LdrpFindLoadedDllByName((_DWORD)a1, 0, a3, (_DWORD)a6, (__int64)&v54);
  }
  else
  {
    if ( (a3 & 0x200) == 0 )
      goto LABEL_59;
    v15 = *a1;
    v16 = *a1 >> 1;
    if ( v16 )
    {
      v17 = *((_QWORD *)a1 + 1);
      do
      {
        v18 = *(_WORD *)(v17 + 2LL * v16 - 2);
        if ( v18 == 92 )
          break;
        if ( v18 == 47 )
          break;
        --v16;
      }
      while ( v16 );
    }
    v19 = (unsigned __int16)(v15 - 2 * v16) >> 1;
    v20 = (unsigned __int16 *)(*((_QWORD *)v12 + 1) + 2LL * v16);
    if ( v19 )
    {
      do
      {
        v21 = *v20++;
        --v19;
        if ( (unsigned int)v21 >= 0x61 )
        {
          if ( (unsigned int)v21 > 0x7A )
          {
            if ( qword_1801CD038 && (unsigned __int16)v21 >= 0xC0u )
              LOWORD(v21) = *(_WORD *)(qword_1801CD038
                                     + 2
                                     * ((v21 & 0xF)
                                      + *(unsigned __int16 *)(qword_1801CD038
                                                            + 2LL
                                                            * (((unsigned __int8)v21 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(qword_1801CD038
                                                                                                 + 2 * (v21 >> 8))))))
                          + v21;
          }
          else
          {
            LOWORD(v21) = v21 - 32;
          }
        }
        v8 = (unsigned __int16)v21 + 65599 * v8;
      }
      while ( v19 );
      v7 = a6;
    }
    if ( !v8 )
      v8 = 0x80000000;
    RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
    v22 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v8 & 0x1F));
    for ( i = *v22; ; i = (_QWORD *)*i )
    {
      if ( i == v22 )
      {
        LoadedDllByName = -1073741515;
        goto LABEL_43;
      }
      v24 = i - 14;
      if ( v8 == *((_DWORD *)i + 38) && ((v10 & 8) == 0 || (v24[13] & 1) != 0) )
      {
        v25 = *v12;
        if ( (_WORD)v25 == *((_WORD *)v24 + 36) )
          break;
      }
LABEL_58:
      ;
    }
    v26 = (unsigned __int16 *)*((_QWORD *)v12 + 1);
    v27 = v24[10] - (_QWORD)v26;
    v28 = (unsigned __int16 *)((char *)v26 + v25);
    while ( v26 < v28 )
    {
      v29 = *v26;
      v30 = *(unsigned __int16 *)((char *)v26 + v27);
      if ( (_WORD)v29 != (_WORD)v30 )
      {
        if ( (unsigned int)v29 >= 0x61 )
        {
          if ( (unsigned int)v29 > 0x7A )
          {
            if ( qword_1801CD038 && (unsigned __int16)v29 >= 0xC0u )
              LOWORD(v29) = *(_WORD *)(qword_1801CD038
                                     + 2
                                     * ((v29 & 0xF)
                                      + *(unsigned __int16 *)(qword_1801CD038
                                                            + 2LL
                                                            * (((unsigned __int8)v29 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(qword_1801CD038
                                                                                                 + 2 * (v29 >> 8))))))
                          + v29;
          }
          else
          {
            LOWORD(v29) = v29 - 32;
          }
        }
        if ( (unsigned int)v30 >= 0x61 )
        {
          if ( (unsigned int)v30 > 0x7A )
          {
            if ( qword_1801CD038 )
            {
              if ( (unsigned __int16)v30 >= 0xC0u )
                LOWORD(v30) = *(_WORD *)(qword_1801CD038
                                       + 2
                                       * ((v30 & 0xF)
                                        + *(unsigned __int16 *)(qword_1801CD038
                                                              + 2LL
                                                              * (((unsigned __int8)v30 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(qword_1801CD038 + 2 * (v30 >> 8))))))
                            + v30;
            }
          }
          else
          {
            LOWORD(v30) = v30 - 32;
          }
        }
        if ( (_WORD)v29 != (_WORD)v30 )
        {
          v10 = a3;
          goto LABEL_58;
        }
      }
      ++v26;
    }
    v31 = v24[19];
    if ( *(_DWORD *)(v31 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v31 - 56LL) & 0x20) == 0 )
      _InterlockedIncrement((volatile signed __int32 *)v24 + 69);
    v10 = a3;
    *v7 = (__int64)v24;
    LoadedDllByName = 0;
    v54 = *(_DWORD *)(v24[19] + 56LL);
LABEL_43:
    RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
    {
      v13 = 2147353476LL;
      v34 = (__int64)NtCurrentPeb()->SharedData + 554;
    }
    else
    {
      v13 = 2147353476LL;
      v34 = 2147353476LL;
    }
    if ( *(_BYTE *)v34 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v47 = (unsigned int)RtlGetCurrentServiceSessionId()
          ? (char *)NtCurrentPeb()->SharedData + 555
          : (char *)2147353477;
      if ( (*v47 & 0x20) != 0 )
      {
        v48 = 0;
        if ( LoadedDllByName < 0 )
          v48 = 3;
        LdrpLogEtwEvent(5280, 0, 0, v48, (__int64)v12, 0LL);
      }
    }
    v9 = a4;
    v14 = 2147353477LL;
    v11 = a2;
  }
  if ( LoadedDllByName != -1073741515 )
  {
    if ( v54 >= 0 )
    {
      LdrpIncrementModuleLoadCount(*v7);
    }
    else
    {
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrmap.c",
        3390,
        (int)"LdrpFindOrPrepareLoadingModule",
        0,
        "Found circular dependent DLL: \"%wZ\" that failed to load previously, ModuleState: %d\n",
        *v7 + 72);
      v35 = *v7;
      LoadedDllByName = -1073741595;
      v36 = *(_QWORD *)(*v7 + 152);
      if ( *(_DWORD *)(v36 + 24) != -1
        && (*(_BYTE *)(*(_QWORD *)v36 - 56LL) & 0x20) == 0
        && _InterlockedExchangeAdd((volatile signed __int32 *)(v35 + 276), 0xFFFFFFFF) == 1 )
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        v45 = *(_QWORD *)(v35 + 160);
        if ( *(_QWORD *)(v45 + 8) != v35 + 160 || (v46 = *(_QWORD **)(v35 + 168), *v46 != v35 + 160) )
          __fastfail(3u);
        *v46 = v45;
        *(_QWORD *)(v45 + 8) = v46;
        v50 = *(_QWORD **)(v35 + 152);
        v51 = (_QWORD *)*v50;
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( *(_WORD *)(v35 + 110) )
          LdrpReleaseTlsEntry(v35, 0LL);
        LdrpUnmapModule(v35, v52);
        v53 = *(_QWORD *)(v35 + 136);
        if ( (unsigned __int64)(v53 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext(v53);
        if ( *(_QWORD *)(v35 + 80) )
          LdrpFreeUnicodeString(v35 + 72);
        RtlFreeHeap(LdrpHeap, 0LL, v35);
        if ( v51 == v50 )
          LdrpDestroyNode((__int64)v50);
      }
      *v7 = 0LL;
    }
    return (unsigned int)LoadedDllByName;
  }
LABEL_59:
  v38 = LdrpHeap;
  v39 = NtdllBaseTag + 0x40000;
  *v7 = 0LL;
  Heap = RtlAllocateHeap(v38, v39 | 8u, *v12 + 210LL);
  v41 = Heap;
  if ( Heap )
  {
    *(_QWORD *)(Heap + 40) = a7;
    *(_QWORD *)(Heap + 48) = a5;
    *(_DWORD *)(Heap + 32) = v10 | 0x8000;
    *(_QWORD *)(Heap + 16) = v11;
    *(_QWORD *)(Heap + 184) = -1LL;
    *(_QWORD *)(Heap + 8) = Heap + 208;
    *(_WORD *)Heap = *v12;
    *(_WORD *)(Heap + 2) = *v12 + 2;
    memmove((void *)(Heap + 208), *((const void **)v12 + 1), *v12);
    *(_WORD *)(*(_QWORD *)(v41 + 8) + 2 * ((unsigned __int64)*v12 >> 1)) = 0;
    ModuleEntry = LdrpAllocateModuleEntry(v41);
    *v7 = ModuleEntry;
    if ( ModuleEntry )
    {
      *(_DWORD *)(ModuleEntry + 268) = v9;
      if ( v9 == 9 )
        *(_DWORD *)(*v7 + 304) = 1;
      v43 = NtCurrentPeb()->SharedData;
      if ( v43 && *v43 )
        v13 = (__int64)NtCurrentPeb()->SharedData + 554;
      if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v14 = (__int64)NtCurrentPeb()->SharedData + 555;
        if ( (*(_BYTE *)v14 & 0x20) != 0 )
          LdrpLogEtwEvent(5292, 0, 0, 0, v41, 0LL);
      }
    }
    else
    {
      RtlFreeHeap(LdrpHeap, 0LL, v41);
    }
  }
  v44 = *v7;
  LoadedDllByName = 0;
  if ( !*v7 )
    LoadedDllByName = -1073741801;
  if ( v9 == 9 )
  {
    return (unsigned int)-1073741515;
  }
  else if ( v44 )
  {
    return (unsigned int)LdrpLoadKnownDll(*(_QWORD *)(v44 + 176));
  }
  return (unsigned int)LoadedDllByName;
}
