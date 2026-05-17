/*
 * XREFs of LdrpFindOrPrepareLoadingModule @ 0x18004E920
 * Callers:
 *     LdrpLoadDllInternal @ 0x18004A300 (LdrpLoadDllInternal.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x180006960 (LdrpLogEtwEvent.c)
 *     LdrpDestroyNode @ 0x180008BB8 (LdrpDestroyNode.c)
 *     LdrpReleaseTlsEntry @ 0x180008C0C (LdrpReleaseTlsEntry.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x18001A130 (RtlReleaseActivationContext.c)
 *     LdrpUnmapModule @ 0x180024A44 (LdrpUnmapModule.c)
 *     LdrpIncrementModuleLoadCount @ 0x180047B20 (LdrpIncrementModuleLoadCount.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     LdrpAllocateModuleEntry @ 0x18004F520 (LdrpAllocateModuleEntry.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     LdrpLoadKnownDll @ 0x18006CF10 (LdrpLoadKnownDll.c)
 *     LdrpFreeUnicodeString @ 0x18006F7E0 (LdrpFreeUnicodeString.c)
 *     LdrpFindLoadedDllByName @ 0x18007A380 (LdrpFindLoadedDllByName.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     memmove @ 0x180168980 (memmove.c)
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
  void *v38; // rcx
  __int64 Heap; // rax
  __int64 v40; // rbx
  __int64 ModuleEntry; // rax
  _DWORD *v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // r8
  _QWORD *v45; // rdx
  char *v46; // rcx
  char v47; // r9
  size_t v48; // rax
  _QWORD *v49; // rsi
  _QWORD *v50; // rbp
  __int64 v51; // rdx
  volatile signed __int32 *v52; // rcx
  int v53; // [rsp+40h] [rbp-58h] BYREF
  __int128 v54; // [rsp+48h] [rbp-50h] BYREF

  v7 = a6;
  v8 = 0;
  v53 = 0;
  v9 = a4;
  v10 = a3;
  v11 = a2;
  v12 = a1;
  *a6 = 0LL;
  v54 = 0LL;
  if ( a4 == 9 )
  {
    DWORD1(v54) = 0;
    *((_QWORD *)&v54 + 1) = ModuleNamePlaceholderBuffer;
    v48 = 2 * wcslen(ModuleNamePlaceholderBuffer);
    v12 = (unsigned __int16 *)&v54;
    v13 = 2147353476LL;
    if ( v48 >= 0xFFFE )
      LOWORD(v48) = -4;
    LOWORD(v54) = v48;
    WORD1(v54) = v48 + 2;
    v14 = 2147353477LL;
    goto LABEL_59;
  }
  v13 = 2147353476LL;
  v14 = 2147353477LL;
  if ( (a3 & 0x20) != 0 )
  {
    LoadedDllByName = LdrpFindLoadedDllByName((_DWORD)a1, 0, a3, (_DWORD)a6, (__int64)&v53);
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
            if ( qword_1801CF038 && (unsigned __int16)v21 >= 0xC0u )
              LOWORD(v21) = *(_WORD *)(qword_1801CF038
                                     + 2
                                     * ((v21 & 0xF)
                                      + *(unsigned __int16 *)(qword_1801CF038
                                                            + 2LL
                                                            * (((unsigned __int8)v21 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(qword_1801CF038
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
            if ( qword_1801CF038 && (unsigned __int16)v29 >= 0xC0u )
              LOWORD(v29) = *(_WORD *)(qword_1801CF038
                                     + 2
                                     * ((v29 & 0xF)
                                      + *(unsigned __int16 *)(qword_1801CF038
                                                            + 2LL
                                                            * (((unsigned __int8)v29 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(qword_1801CF038
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
            if ( qword_1801CF038 )
            {
              if ( (unsigned __int16)v30 >= 0xC0u )
                LOWORD(v30) = *(_WORD *)(qword_1801CF038
                                       + 2
                                       * ((v30 & 0xF)
                                        + *(unsigned __int16 *)(qword_1801CF038
                                                              + 2LL
                                                              * (((unsigned __int8)v30 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(qword_1801CF038 + 2 * (v30 >> 8))))))
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
    v53 = *(_DWORD *)(v24[19] + 56LL);
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
      v46 = (unsigned int)RtlGetCurrentServiceSessionId()
          ? (char *)NtCurrentPeb()->SharedData + 555
          : (char *)2147353477;
      if ( (*v46 & 0x20) != 0 )
      {
        v47 = 0;
        if ( LoadedDllByName < 0 )
          v47 = 3;
        LdrpLogEtwEvent(5280, 0LL, 0, v47, v12, 0LL);
      }
    }
    v9 = a4;
    v14 = 2147353477LL;
    v11 = a2;
  }
  if ( LoadedDllByName != -1073741515 )
  {
    if ( v53 >= 0 )
    {
      LdrpIncrementModuleLoadCount(*v7);
    }
    else
    {
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrmap.c",
        3400,
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
        RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpModuleDatatableLock);
        v44 = *(_QWORD *)(v35 + 160);
        if ( *(_QWORD *)(v44 + 8) != v35 + 160 || (v45 = *(_QWORD **)(v35 + 168), *v45 != v35 + 160) )
          __fastfail(3u);
        *v45 = v44;
        *(_QWORD *)(v44 + 8) = v45;
        v49 = *(_QWORD **)(v35 + 152);
        v50 = (_QWORD *)*v49;
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( *(_WORD *)(v35 + 110) )
          LdrpReleaseTlsEntry(v35, 0LL);
        LdrpUnmapModule(v35, v51);
        v52 = *(volatile signed __int32 **)(v35 + 136);
        if ( (unsigned __int64)v52 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext(v52);
        if ( *(_QWORD *)(v35 + 80) )
          LdrpFreeUnicodeString(v35 + 72);
        RtlFreeHeap(LdrpHeap, 0LL, v35);
        if ( v50 == v49 )
          LdrpDestroyNode((__int64)v49);
      }
      *v7 = 0LL;
    }
    return (unsigned int)LoadedDllByName;
  }
LABEL_59:
  v38 = (void *)LdrpHeap;
  *v7 = 0LL;
  Heap = RtlAllocateHeap(v38);
  v40 = Heap;
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
    *(_WORD *)(*(_QWORD *)(v40 + 8) + 2 * ((unsigned __int64)*v12 >> 1)) = 0;
    ModuleEntry = LdrpAllocateModuleEntry(v40);
    *v7 = ModuleEntry;
    if ( ModuleEntry )
    {
      *(_DWORD *)(ModuleEntry + 268) = v9;
      if ( v9 == 9 )
        *(_DWORD *)(*v7 + 304) = 1;
      v42 = NtCurrentPeb()->SharedData;
      if ( v42 && *v42 )
        v13 = (__int64)NtCurrentPeb()->SharedData + 554;
      if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v14 = (__int64)NtCurrentPeb()->SharedData + 555;
        if ( (*(_BYTE *)v14 & 0x20) != 0 )
          LdrpLogEtwEvent(5292, 0LL, 0, 0, (unsigned __int16 *)v40, 0LL);
      }
    }
    else
    {
      RtlFreeHeap(LdrpHeap, 0LL, v40);
    }
  }
  v43 = *v7;
  LoadedDllByName = 0;
  if ( !*v7 )
    LoadedDllByName = -1073741801;
  if ( v9 == 9 )
  {
    return (unsigned int)-1073741515;
  }
  else if ( v43 )
  {
    return (unsigned int)LdrpLoadKnownDll(*(_QWORD *)(v43 + 176));
  }
  return (unsigned int)LoadedDllByName;
}
