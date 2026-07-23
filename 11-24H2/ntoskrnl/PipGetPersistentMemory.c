/*
 * XREFs of PipGetPersistentMemory @ 0x1407199A0
 * Callers:
 *     IoAcquireKsrPersistentMemoryEx @ 0x1407188B0 (IoAcquireKsrPersistentMemoryEx.c)
 *     IoMapKsrPersistentMemoryEx @ 0x140718BA0 (IoMapKsrPersistentMemoryEx.c)
 *     IoQueryKsrPersistentMemorySizeEx @ 0x140718DB0 (IoQueryKsrPersistentMemorySizeEx.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x140718FD0 (IoReserveKsrPersistentMemoryEx.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     PipUnpackMetadata @ 0x1405A13EC (PipUnpackMetadata.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PipGetDriverKsrGuid @ 0x140719810 (PipGetDriverKsrGuid.c)
 *     PipMatchPersistentMemory @ 0x14071A05C (PipMatchPersistentMemory.c)
 *     PipMatchPersistentMemoryV1 @ 0x14071A140 (PipMatchPersistentMemoryV1.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipGetPersistentMemory(
        __int64 a1,
        ULONG_PTR a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        size_t *a6,
        void *a7,
        __int64 *a8,
        char a9)
{
  ULONG_PTR v9; // rsi
  _WORD *Pool2; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  _WORD *v13; // rcx
  __int64 v14; // rcx
  unsigned __int16 *v15; // rbx
  _WORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  size_t *v19; // r12
  int DriverKsrGuid; // ebx
  unsigned int v21; // ebx
  struct _MDL *v22; // r14
  unsigned __int64 *v23; // rdi
  __int64 v24; // rbx
  char v25; // r9
  __int64 v26; // r14
  int v27; // eax
  unsigned __int64 *v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  unsigned int v32; // r12d
  _QWORD *v33; // r9
  unsigned int v34; // edx
  unsigned int i; // r8d
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r8
  size_t *v40; // rax
  void *v41; // r9
  size_t *v42; // rcx
  size_t v43; // rax
  size_t v44; // rdx
  __int64 v45; // rbx
  __int64 v46; // r8
  __int64 *v47; // r13
  __int64 v48; // rax
  char v50; // [rsp+30h] [rbp-79h] BYREF
  char v51; // [rsp+31h] [rbp-78h]
  unsigned int v52; // [rsp+34h] [rbp-75h]
  unsigned int v53; // [rsp+38h] [rbp-71h] BYREF
  __int64 v54; // [rsp+40h] [rbp-69h]
  int v55; // [rsp+48h] [rbp-61h]
  size_t *v56; // [rsp+50h] [rbp-59h]
  void *v57; // [rsp+58h] [rbp-51h]
  __int64 *v58; // [rsp+60h] [rbp-49h]
  __int128 v59; // [rsp+68h] [rbp-41h] BYREF
  __int64 v60; // [rsp+78h] [rbp-31h]
  __int64 v61; // [rsp+80h] [rbp-29h]
  _DWORD *v62; // [rsp+88h] [rbp-21h]
  ULONG_PTR v63; // [rsp+90h] [rbp-19h]
  __int128 v64; // [rsp+98h] [rbp-11h] BYREF

  v9 = a2;
  v62 = a5;
  Pool2 = 0LL;
  v56 = a6;
  v63 = a2;
  v57 = a7;
  v60 = a4;
  v61 = a3;
  v58 = a8;
  v52 = 0;
  v64 = 0LL;
  if ( a2 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
    if ( !v11 || (*(_DWORD *)(v11 + 396) & 0x20000) != 0 )
    {
      IoAddTriageDumpDataBlock(a2, (PVOID)*(unsigned __int16 *)(a2 + 2));
      v12 = *(_QWORD *)(v9 + 8);
      if ( v12 )
      {
        IoAddTriageDumpDataBlock(v12, (PVOID)(unsigned int)*(__int16 *)(v12 + 2));
        v13 = (_WORD *)(*(_QWORD *)(v9 + 8) + 56LL);
        if ( *v13 )
        {
          IoAddTriageDumpDataBlock((ULONG)v13, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v9 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v9 + 8) + 56LL));
        }
      }
      v14 = *(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL);
      if ( v14 )
      {
        v15 = (unsigned __int16 *)(v14 + 40);
        IoAddTriageDumpDataBlock(v14, (PVOID)0x388);
        if ( *v15 )
        {
          IoAddTriageDumpDataBlock((ULONG)v15, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v15 + 1), (PVOID)*v15);
        }
        v16 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL) + 56LL);
        if ( *v16 )
        {
          IoAddTriageDumpDataBlock((ULONG)v16, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL) + 56LL));
        }
        v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL) + 16LL);
        if ( v17 )
        {
          if ( *(_WORD *)(v17 + 56) )
          {
            IoAddTriageDumpDataBlock(v17 + 56, (PVOID)2);
            v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL) + 16LL);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v18 + 64), (PVOID)*(unsigned __int16 *)(v18 + 56));
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, v9, 0LL, 0LL);
    }
  }
  v53 = 0;
  v51 = 0;
  v19 = 0LL;
  v50 = 0;
  if ( a8 && (a9 & 1) != 0 )
    return (unsigned int)-1073741811;
  DriverKsrGuid = PipGetDriverKsrGuid(a1, (__int64)&v64);
  if ( DriverKsrGuid >= 0 )
  {
    v59 = 0LL;
    DriverKsrGuid = KsrEnumeratePersistedMemory(&v64, PipEnumeratePersistedMemory, &v59);
    if ( DriverKsrGuid >= 0 )
    {
      if ( !DWORD2(v59) )
        return (unsigned int)-1073741772;
      *(_QWORD *)&v59 = ExAllocatePool2(0x40uLL, 8LL * DWORD2(v59), 0x61706E50u);
      if ( !(_QWORD)v59 )
        return (unsigned int)-1073741670;
      DriverKsrGuid = KsrEnumeratePersistedMemory(&v64, PipEnumeratePersistedMemory, &v59);
      if ( DriverKsrGuid < 0 )
        return (unsigned int)DriverKsrGuid;
      v21 = 0;
      v54 = 0LL;
      v55 = 0;
      v22 = 0LL;
      v23 = 0LL;
      while ( 1 )
      {
        if ( v21 >= DWORD2(v59) )
          goto LABEL_67;
        Pool2 = 0LL;
        if ( v51 )
        {
          v45 = v54;
          goto LABEL_72;
        }
        v24 = *(_QWORD *)(v59 + 8LL * v21);
        v54 = v24;
        KsrQueryMetadata(&v64, v24, 0LL, 0LL, &v53);
        Pool2 = (_WORD *)ExAllocatePool2(0x40uLL, v53, 0x61706E50u);
        if ( !Pool2 )
          return (unsigned int)-1073741670;
        DriverKsrGuid = KsrQueryMetadata(&v64, v24, Pool2, v53, &v53);
        if ( DriverKsrGuid < 0 )
          goto LABEL_82;
        if ( v53 < 2 )
        {
LABEL_66:
          DriverKsrGuid = -1073741637;
          goto LABEL_82;
        }
        if ( *Pool2 == 2 )
        {
          DriverKsrGuid = PipMatchPersistentMemory(v9, v61, v60, (_DWORD)Pool2, 0, (__int64)&v50);
          if ( DriverKsrGuid < 0 )
            goto LABEL_82;
          v51 = v50;
          if ( !v50 )
            goto LABEL_40;
          PipUnpackMetadata((__int64)Pool2, 0LL, v62);
        }
        else
        {
          if ( *Pool2 != 1 )
            goto LABEL_66;
          DriverKsrGuid = PipMatchPersistentMemoryV1(v9, Pool2, 0LL, &v50);
          if ( DriverKsrGuid < 0 )
            goto LABEL_82;
          v25 = v50;
          v51 = v50;
        }
        if ( v25 )
        {
          v26 = v54;
          v27 = KsrClaimPersistedMemory(&v64, v54, 0LL, 0LL);
          DriverKsrGuid = 0;
          if ( v27 != -1073741789 )
            DriverKsrGuid = v27;
          if ( DriverKsrGuid >= 0 )
          {
            v23 = (unsigned __int64 *)ExAllocatePool2(0x40uLL, 8LL * v52, 0x61706E50u);
            if ( !v23 )
            {
              DriverKsrGuid = -1073741670;
              goto LABEL_82;
            }
            DriverKsrGuid = KsrClaimPersistedMemory(&v64, v26, v23, v52);
            if ( DriverKsrGuid >= 0 )
            {
              if ( v52 )
              {
                v28 = v23;
                v29 = v52;
                do
                {
                  v30 = *v28++;
                  v19 = (size_t *)((v30 >> 40) + (unsigned int)v19);
                  --v29;
                }
                while ( v29 );
                v9 = v63;
              }
              v31 = ExAllocatePool2(0x40uLL, 8LL * (_QWORD)v19 + 48, 0x61706E50u);
              v22 = (struct _MDL *)v31;
              if ( v31 )
              {
                v32 = (_DWORD)v19 << 12;
                *(_QWORD *)v31 = 0LL;
                v33 = (_QWORD *)(v31 + 48);
                *(_WORD *)(v31 + 10) = 2;
                v34 = 0;
                *(_QWORD *)(v31 + 32) = 0LL;
                *(_WORD *)(v31 + 8) = 8 * ((v32 >> 12) + 6);
                *(_QWORD *)(v31 + 40) = v32;
                for ( i = v52; v34 < i; ++v34 )
                {
                  v36 = v23[v34];
                  v37 = v36 >> 40;
                  v38 = v36 & 0xFFFFFFFFFFLL;
                  if ( (_DWORD)v37 )
                  {
                    v39 = (unsigned int)v37;
                    do
                    {
                      *v33++ = v38++;
                      --v39;
                    }
                    while ( v39 );
                    i = v52;
                  }
                }
                v40 = (size_t *)MmMapLockedPagesSpecifyCache(v22, 0, MmCached, 0LL, 0, 0x40000010u);
                v19 = v40;
                if ( !v40 )
                {
                  DriverKsrGuid = -1073741670;
                  goto LABEL_80;
                }
                v41 = v57;
                v42 = v56;
                v43 = *v40;
                if ( v57 )
                {
                  v44 = *v56;
                  *v56 = v43;
                  if ( v44 >= v43 )
                  {
                    memmove(v41, v19 + 1, *v19);
                    if ( (a9 & 1) != 0 )
                    {
                      MmUnmapLockedPages(v19, v22);
                      v19 = 0LL;
                      v45 = v54;
                      LOBYTE(v46) = 1;
                      KsrFreePersistedMemoryBlock(&v64, v54, v46);
                    }
                    else
                    {
LABEL_67:
                      v45 = v54;
                    }
                    v42 = v56;
LABEL_69:
                    if ( !v51 )
                    {
                      *v42 = 0LL;
                      DriverKsrGuid = -1073741772;
                      goto LABEL_77;
                    }
LABEL_72:
                    v47 = v58;
                    if ( v58 )
                    {
                      v48 = ExAllocatePool2(0x40uLL, 0x38uLL, 0x61706E50u);
                      if ( !v48 )
                      {
                        DriverKsrGuid = -1073741670;
                        goto LABEL_77;
                      }
                      *(_OWORD *)(v48 + 16) = v64;
                      *(_DWORD *)v48 = (v9 != 0) + 1;
                      *(_QWORD *)(v48 + 48) = Pool2;
                      Pool2 = 0LL;
                      *(_QWORD *)(v48 + 40) = v19;
                      v19 = 0LL;
                      *(_QWORD *)(v48 + 8) = v22;
                      v22 = 0LL;
                      *(_QWORD *)(v48 + 32) = v45;
                      *v47 = v48;
                    }
                    DriverKsrGuid = 0;
LABEL_77:
                    if ( v22 )
                    {
                      if ( v19 )
                        MmUnmapLockedPages(v19, v22);
LABEL_80:
                      ExFreePoolWithTag(v22, 0x61706E50u);
                    }
                    if ( !Pool2 )
                      goto LABEL_83;
                    goto LABEL_82;
                  }
                }
                else
                {
                  *v56 = v43;
                }
                v45 = v54;
                goto LABEL_69;
              }
            }
          }
LABEL_82:
          ExFreePoolWithTag(Pool2, 0x61706E50u);
LABEL_83:
          if ( v23 )
            ExFreePoolWithTag(v23, 0x61706E50u);
          return (unsigned int)DriverKsrGuid;
        }
LABEL_40:
        v21 = ++v55;
        ExFreePoolWithTag(Pool2, 0x61706E50u);
        Pool2 = 0LL;
      }
    }
  }
  return (unsigned int)DriverKsrGuid;
}
