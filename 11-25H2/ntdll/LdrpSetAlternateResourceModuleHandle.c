/*
 * XREFs of LdrpSetAlternateResourceModuleHandle @ 0x18001AD80
 * Callers:
 *     LdrIsResItemExist @ 0x18001B220 (LdrIsResItemExist.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001BB80 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetRcConfig @ 0x18001D0E0 (LdrpGetRcConfig.c)
 *     LdrpSearchResourceSection_U @ 0x18001DC50 (LdrpSearchResourceSection_U.c)
 *     LdrResGetRCConfig @ 0x1800A3B50 (LdrResGetRCConfig.c)
 *     LdrSetMUICacheType @ 0x180138410 (LdrSetMUICacheType.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     RtlReAllocateHeap @ 0x180029DE0 (RtlReAllocateHeap.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     LdrpSpecialCacheTypeHandle @ 0x180119F8C (LdrpSpecialCacheTypeHandle.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 */

char __fastcall LdrpSetAlternateResourceModuleHandle(
        __int64 a1,
        _QWORD *a2,
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
  _QWORD *v17; // r8
  unsigned __int64 v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // r9
  unsigned __int64 v21; // rcx
  __int64 i; // rbx
  char *v23; // rcx
  _QWORD *v24; // rdi
  unsigned __int64 v25; // rcx
  __int64 CheckSum; // rdx
  char *v27; // r8
  char *v28; // rcx
  _QWORD *v29; // rsi
  __int64 v30; // rax
  _QWORD *v31; // rax
  _QWORD *Heap; // rax
  __int64 v33; // rbx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v35; // [rsp+68h] [rbp+10h]

  v35 = a2;
  if ( !a1 )
    return 0;
  v11 = a6;
  if ( (a6 & 0xFFFFFFCC) != 0 || (a6 & 3) == 3 || (a6 & 1) != 0 && !a2 )
    return 0;
  RtlAcquireSRWLockExclusive(&MuiCacheSWRLock);
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
    v19 = (_QWORD *)((char *)v17 + v18);
    if ( *(_QWORD *)((char *)v17 + v18 + 8) != a1 )
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
        if ( v15 && *(_WORD *)((char *)v17 + v18) == v15 )
          break;
      }
    }
LABEL_10:
    ++v14;
  }
  if ( *v35 == -1LL )
  {
LABEL_17:
    v21 = (unsigned __int64)v14 << 6;
    *v35 = *(_QWORD *)((char *)v17 + v21 + 32);
    if ( a3 )
      *a3 = *(HANDLE *)((char *)v17 + v21 + 40);
    goto LABEL_72;
  }
  if ( (v11 & 0x20) == 0 )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID)(*v35 & 0xFFFFFFFFFFFFFFFCuLL));
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
             8u,
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
    v31 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x800uLL);
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
    v23 = (char *)&v17[8 * (unsigned __int64)(unsigned int)i];
    if ( *((_QWORD *)v23 + 1) == a1 )
    {
      if ( (v11 & 2) != 0 && !*((_QWORD *)v23 + 2) )
      {
        *((_QWORD *)v23 + 2) = a4;
        *((_DWORD *)v23 + 14) = a7;
        goto LABEL_72;
      }
      if ( (v11 & 1) != 0 && !*((_QWORD *)v23 + 4) && (*(_WORD *)v23 == v15 || !*(_WORD *)v23) )
      {
        v24 = v35;
        *((_QWORD *)v23 + 4) = *v35;
        if ( a3 )
          v13 = *a3;
        v17[8 * (unsigned __int64)(unsigned int)i + 5] = v13;
        LOWORD(v17[8 * (unsigned __int64)(unsigned int)i]) = v15;
        LODWORD(v17[8 * (unsigned __int64)(unsigned int)i + 7]) = a7;
        v17[8 * (unsigned __int64)(unsigned int)i + 6] = a8;
        if ( gMUICacheType )
        {
          LOBYTE(v16) = 1;
          if ( (int)LdrpSpecialCacheTypeHandle(&v17[8 * (unsigned __int64)(unsigned int)i], v16) >= 0
            && (gMUICacheType & 2) != 0 )
          {
            v25 = (unsigned __int64)(unsigned int)i << 6;
            if ( *(_DWORD *)((char *)AlternateResourceModules + v25 + 56) == -1073741799 )
              *v24 = *(_QWORD *)((char *)AlternateResourceModules + v25 + 32);
          }
        }
        goto LABEL_72;
      }
    }
  }
  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL), 0LL, &OutHeaders);
  if ( OutHeaders )
  {
    CheckSum = OutHeaders->OptionalHeader.CheckSum;
    v27 = (char *)AlternateResourceModules;
    v28 = (char *)AlternateResourceModules + 64 * (unsigned __int64)(unsigned int)AlternateResourceModuleCount;
    *((_QWORD *)v28 + 1) = a1;
    *((_QWORD *)v28 + 2) = a4;
    if ( (v11 & 1) != 0 )
    {
      v29 = v35;
      if ( v35 )
        v30 = *v35;
      else
        v30 = 0LL;
      *((_QWORD *)v28 + 4) = v30;
      if ( a3 )
        v13 = *a3;
      *((_QWORD *)v28 + 5) = v13;
      *((_QWORD *)v28 + 6) = a8;
    }
    else
    {
      *((_QWORD *)v28 + 4) = 0LL;
      *((_QWORD *)v28 + 5) = 0LL;
      *((_QWORD *)v28 + 6) = 0LL;
      v29 = v35;
    }
    *(_WORD *)v28 = v15;
    *((_DWORD *)v28 + 6) = CheckSum;
    *((_DWORD *)v28 + 14) = a7;
    if ( gMUICacheType )
    {
      if ( (v11 & 1) != 0 )
      {
        v33 = i << 6;
        LOBYTE(CheckSum) = 1;
        if ( (int)LdrpSpecialCacheTypeHandle(&v27[v33], CheckSum) >= 0
          && (gMUICacheType & 2) != 0
          && *(_DWORD *)((char *)AlternateResourceModules + v33 + 56) == -1073741799 )
        {
          *v29 = *(_QWORD *)((char *)AlternateResourceModules + v33 + 32);
        }
      }
    }
    ++AlternateResourceModuleCount;
  }
LABEL_72:
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return 1;
}
