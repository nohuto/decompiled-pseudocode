/*
 * XREFs of LdrpSetAlternateResourceModuleHandle @ 0x18005F120
 * Callers:
 *     LdrIsResItemExist @ 0x18005F5C0 (LdrIsResItemExist.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18005FF20 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetRcConfig @ 0x180061480 (LdrpGetRcConfig.c)
 *     LdrpSearchResourceSection_U @ 0x180061FF0 (LdrpSearchResourceSection_U.c)
 *     LdrResGetRCConfig @ 0x1800795B0 (LdrResGetRCConfig.c)
 *     LdrSetMUICacheType @ 0x180136CA0 (LdrSetMUICacheType.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     RtlReAllocateHeap @ 0x1800A0E30 (RtlReAllocateHeap.c)
 *     LdrpSpecialCacheTypeHandle @ 0x180116C48 (LdrpSpecialCacheTypeHandle.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1801621D0 (NtUnmapViewOfSection.c)
 */

char __fastcall LdrpSetAlternateResourceModuleHandle(
        __int64 a1,
        volatile signed __int32 **a2,
        HANDLE *a3,
        __int64 a4,
        __int16 a5,
        int a6,
        int a7,
        __int64 a8)
{
  char v11; // di
  HANDLE v13; // r14
  unsigned int v14; // ebx
  __int16 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // r9
  unsigned __int64 v21; // rcx
  __int64 i; // rbx
  unsigned __int64 v23; // rcx
  volatile signed __int32 **v24; // rdi
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned __int64 v28; // rcx
  volatile signed __int32 **v29; // rsi
  volatile signed __int32 *v30; // rax
  __int64 v31; // rax
  __int64 Heap; // rax
  __int64 v33; // rbx
  __int64 v34; // [rsp+60h] [rbp+8h] BYREF
  volatile signed __int32 **v35; // [rsp+68h] [rbp+10h]

  v35 = a2;
  if ( !a1 )
    return 0;
  v11 = a6;
  if ( (a6 & 0xFFFFFFCC) != 0 || (a6 & 3) == 3 || (a6 & 1) != 0 && !a2 )
    return 0;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&MuiCacheSWRLock, a2, (unsigned __int64)a3);
  v13 = 0LL;
  v14 = 0;
  v15 = a5;
  v16 = (unsigned int)AlternateResourceModuleCount;
  v17 = AlternateResourceModules;
  while ( 1 )
  {
    if ( v14 >= (unsigned int)v16 )
      goto LABEL_21;
    v18 = (unsigned __int64)v14 << 6;
    v19 = (_QWORD *)(v18 + v17);
    if ( *(_QWORD *)(v18 + v17 + 8) != a1 )
    {
      if ( (v11 & 0x10) != 0 && gMUICacheType && (unsigned __int64)(v19[5] - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        LdrpSpecialCacheTypeHandle(v19, 0LL);
        v16 = (unsigned int)AlternateResourceModuleCount;
        v17 = AlternateResourceModules;
      }
      goto LABEL_10;
    }
    if ( (v11 & 2) != 0 && v19[2] )
      goto LABEL_72;
    if ( (v11 & 1) != 0 )
    {
      v20 = v19[4];
      if ( v20 )
      {
        if ( v15 && *(_WORD *)(v18 + v17) == v15 )
          break;
      }
    }
LABEL_10:
    ++v14;
  }
  if ( *v35 == (volatile signed __int32 *)-1LL )
  {
LABEL_17:
    v21 = (unsigned __int64)v14 << 6;
    *v35 = *(volatile signed __int32 **)(v21 + v17 + 32);
    if ( a3 )
      *a3 = *(HANDLE *)(v21 + v17 + 40);
    goto LABEL_72;
  }
  if ( (v11 & 0x20) == 0 )
  {
    NtUnmapViewOfSection(-1LL);
    if ( a3 )
      NtClose(*a3);
    v17 = AlternateResourceModules;
    goto LABEL_17;
  }
  if ( v20 == -1 )
    v19[4] = 0LL;
LABEL_21:
  if ( (v11 & 0x10) != 0 )
    goto LABEL_72;
  if ( v17 )
  {
    if ( (unsigned int)v16 < AltResMemBlockCount )
      goto LABEL_24;
    Heap = RtlReAllocateHeap(
             NtCurrentPeb()->ProcessHeap,
             8LL,
             AlternateResourceModules,
             (unsigned __int64)(unsigned int)(AltResMemBlockCount + 32) << 6);
    v17 = Heap;
    if ( !Heap )
      goto LABEL_72;
    AlternateResourceModules = Heap;
    AltResMemBlockCount += 32;
  }
  else
  {
    v31 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x800uLL);
    v17 = v31;
    if ( !v31 )
      goto LABEL_72;
    AlternateResourceModules = v31;
    AltResMemBlockCount = 32;
  }
  v16 = (unsigned int)AlternateResourceModuleCount;
LABEL_24:
  for ( i = 0LL; (unsigned int)i < (unsigned int)v16; i = (unsigned int)(i + 1) )
  {
    v23 = ((unsigned __int64)(unsigned int)i << 6) + v17;
    if ( *(_QWORD *)(v23 + 8) == a1 )
    {
      if ( (v11 & 2) != 0 && !*(_QWORD *)(v23 + 16) )
      {
        *(_QWORD *)(v23 + 16) = a4;
        *(_DWORD *)(v23 + 56) = a7;
        goto LABEL_72;
      }
      if ( (v11 & 1) != 0 && !*(_QWORD *)(v23 + 32) && (*(_WORD *)v23 == v15 || !*(_WORD *)v23) )
      {
        v24 = v35;
        *(_QWORD *)(v23 + 32) = *v35;
        if ( a3 )
          v13 = *a3;
        *(_QWORD *)(((unsigned __int64)(unsigned int)i << 6) + v17 + 40) = v13;
        *(_WORD *)(((unsigned __int64)(unsigned int)i << 6) + v17) = v15;
        *(_DWORD *)(((unsigned __int64)(unsigned int)i << 6) + v17 + 56) = a7;
        *(_QWORD *)(((unsigned __int64)(unsigned int)i << 6) + v17 + 48) = a8;
        if ( gMUICacheType )
        {
          LOBYTE(v16) = 1;
          if ( (int)LdrpSpecialCacheTypeHandle(v17 + ((unsigned __int64)(unsigned int)i << 6), v16) >= 0
            && (gMUICacheType & 2) != 0 )
          {
            v25 = (unsigned __int64)(unsigned int)i << 6;
            if ( *(_DWORD *)(v25 + AlternateResourceModules + 56) == -1073741799 )
              *v24 = *(volatile signed __int32 **)(v25 + AlternateResourceModules + 32);
          }
        }
        goto LABEL_72;
      }
    }
  }
  v34 = 0LL;
  RtlImageNtHeaderEx(1, a1 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, &v34);
  if ( v34 )
  {
    v26 = *(unsigned int *)(v34 + 88);
    v27 = AlternateResourceModules;
    v28 = AlternateResourceModules + ((unsigned __int64)(unsigned int)AlternateResourceModuleCount << 6);
    *(_QWORD *)(v28 + 8) = a1;
    *(_QWORD *)(v28 + 16) = a4;
    if ( (v11 & 1) != 0 )
    {
      v29 = v35;
      if ( v35 )
        v30 = *v35;
      else
        v30 = 0LL;
      *(_QWORD *)(v28 + 32) = v30;
      if ( a3 )
        v13 = *a3;
      *(_QWORD *)(v28 + 40) = v13;
      *(_QWORD *)(v28 + 48) = a8;
    }
    else
    {
      *(_QWORD *)(v28 + 32) = 0LL;
      *(_QWORD *)(v28 + 40) = 0LL;
      *(_QWORD *)(v28 + 48) = 0LL;
      v29 = v35;
    }
    *(_WORD *)v28 = v15;
    *(_DWORD *)(v28 + 24) = v26;
    *(_DWORD *)(v28 + 56) = a7;
    if ( gMUICacheType )
    {
      if ( (v11 & 1) != 0 )
      {
        v33 = i << 6;
        LOBYTE(v26) = 1;
        if ( (int)LdrpSpecialCacheTypeHandle(v33 + v27, v26) >= 0
          && (gMUICacheType & 2) != 0
          && *(_DWORD *)(v33 + AlternateResourceModules + 56) == -1073741799 )
        {
          *v29 = *(volatile signed __int32 **)(v33 + AlternateResourceModules + 32);
        }
      }
    }
    ++AlternateResourceModuleCount;
  }
LABEL_72:
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return 1;
}
