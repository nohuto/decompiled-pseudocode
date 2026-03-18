/*
 * XREFs of CcAcquireByteRangeForWrite @ 0x1404DC470
 * Callers:
 *     CcFlushCacheAcquireRange @ 0x1402ABBD0 (CcFlushCacheAcquireRange.c)
 *     CcNotifyOfMappedWrite @ 0x14036BCAC (CcNotifyOfMappedWrite.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14024DD90 (PsBoostThreadIoEx.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     CcUnpinFileDataEx @ 0x1402AB380 (CcUnpinFileDataEx.c)
 *     DbgPrintEx @ 0x1402CB2F0 (DbgPrintEx.c)
 *     CcDeductDirtyPages @ 0x1402CD7A8 (CcDeductDirtyPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     CcGetBcbListHeadLargeOffset @ 0x140427130 (CcGetBcbListHeadLargeOffset.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x14044ADDC (CcInsertIntoCleanSharedCacheMapList.c)
 *     FsRtlIsNtstatusExpected @ 0x140456400 (FsRtlIsNtstatusExpected.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

bool __fastcall CcAcquireByteRangeForWrite(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned int *a6,
        __int64 *a7,
        char a8,
        __int64 *a9)
{
  _QWORD *v9; // r12
  unsigned int v11; // edi
  __int64 *i; // rsi
  __int64 v13; // r15
  __int64 v14; // rbx
  unsigned int *v15; // r14
  __int64 v16; // rdx
  __int64 *v17; // r10
  __int64 v18; // r11
  _QWORD *v19; // rax
  __int64 *v20; // r8
  unsigned __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r10
  unsigned __int64 v25; // r9
  unsigned int v26; // r10d
  _QWORD *v27; // r9
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  _DWORD *v32; // r12
  int v33; // eax
  int v34; // ecx
  __int64 v35; // r9
  __int64 v36; // r10
  unsigned __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // ebx
  __int64 *v40; // rdx
  __int64 v41; // rbx
  __int64 v42; // rdi
  __int64 *v43; // rax
  __int64 v44; // r14
  unsigned __int64 v45; // r15
  char v46; // r12
  __int64 v47; // rcx
  _QWORD *BcbListHeadLargeOffset; // rdi
  char v49; // al
  __int64 v50; // rdx
  _QWORD *v51; // rcx
  __int64 v52; // rdi
  __int64 v53; // rax
  unsigned int v54; // ecx
  __int64 v55; // r8
  __int64 v56; // r9
  _QWORD *v57; // rcx
  __int64 v58; // r9
  unsigned int v59; // edi
  int v60; // eax
  unsigned int v61; // eax
  __int64 v62; // rax
  int v64; // [rsp+50h] [rbp-108h]
  int v65; // [rsp+54h] [rbp-104h]
  __int64 v66; // [rsp+58h] [rbp-100h]
  unsigned __int64 v67; // [rsp+60h] [rbp-F8h]
  _DWORD *v68; // [rsp+68h] [rbp-F0h]
  int v69; // [rsp+70h] [rbp-E8h]
  __int64 v70; // [rsp+A8h] [rbp-B0h]
  __int64 v71; // [rsp+B0h] [rbp-A8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+F0h] [rbp-68h] BYREF
  unsigned int v74; // [rsp+170h] [rbp+18h]

  v74 = a3;
  v9 = a4;
  v11 = a3;
  v65 = 0;
  i = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v64 = 0;
  v13 = 0LL;
  v66 = 0LL;
  v69 = 0;
  v14 = 0x7FFFFFFFFFFFFFFFLL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a8 )
    PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 0, 0LL, 0LL);
  v70 = *(_QWORD *)(a1 + 536);
  *a5 = 0LL;
  v15 = a6;
  *a6 = 0;
  if ( v9 )
  {
    guard_dispatch_icall_no_overrides(**(_QWORD **)(a1 + 248), *v9, a3, a4);
    v9 = 0LL;
  }
  ExAcquireFastMutex((PKGUARDED_MUTEX)(a1 + 288));
  v16 = *(_QWORD *)(a1 + 168);
  v71 = v16;
  if ( !v16 || !*(_DWORD *)(v16 + 8) || !*(_DWORD *)(v16 + 4) && !v74 )
  {
LABEL_58:
    v17 = a2;
    goto LABEL_59;
  }
  v17 = a2;
  if ( a2 )
  {
    v13 = *a2 >> 12;
    v66 = v13;
    v18 = v74;
    v14 = (v74 + *a2 - 1) >> 12;
    v19 = (_QWORD *)v13;
    *(_QWORD *)(v16 + 40) = -1LL;
    v20 = (__int64 *)(v16 + 16);
    for ( i = *(__int64 **)(v16 + 16); ; i = (__int64 *)*i )
    {
      while ( i == v20 )
      {
        v19 = v9;
        i = (__int64 *)*i;
      }
      v21 = *((unsigned int *)i + 7);
      v22 = i[2];
      v23 = v22 + v21;
      if ( (__int64)v19 <= (__int64)(v22 + v21) )
      {
        if ( *((_DWORD *)i + 8) )
          break;
      }
    }
    if ( v14 >= v22 + *((unsigned int *)i + 6) && v13 <= v23 )
    {
      v24 = i[5];
      if ( v14 >= v23 )
        v25 = v24 + 4 * (v21 >> 5);
      else
        v25 = v24 + 4 * (((unsigned __int64)(v14 - v22) >> 5) & 0x7FFFFFF);
      v26 = v74;
      goto LABEL_35;
    }
LABEL_59:
    v40 = (__int64 *)(a1 + 208);
    v41 = 0LL;
    while ( 1 )
    {
      v42 = *(_QWORD *)(a1 + 24) - 16LL;
      if ( (*(_DWORD *)(a1 + 152) & 0x200) == 0 )
        goto LABEL_87;
      v43 = v40;
      if ( v17 )
        v43 = v17;
      v44 = *v43;
      v45 = HIDWORD(*v43);
      if ( !*v43 )
      {
        v13 = v66;
        goto LABEL_87;
      }
      v46 = 0;
      v47 = *(_QWORD *)(a1 + 32);
      if ( v47 <= 0x200000 )
        goto LABEL_69;
      if ( v47 > 0x2000000 )
      {
        BcbListHeadLargeOffset = (_QWORD *)CcGetBcbListHeadLargeOffset(a1, v44 + 0x80000, 1);
        v17 = a2;
        v40 = (__int64 *)(a1 + 208);
        goto LABEL_70;
      }
      if ( v44 >= (((int)((((int)v47 >> 18) + 1) & 0xFFFFFFFE) / 2) << 19) - 0x80000 )
        break;
      BcbListHeadLargeOffset = (_QWORD *)(*(_QWORD *)(a1 + 88)
                                        + 8 * ((unsigned __int64)(unsigned int)v47 >> 18)
                                        + 16 * ((v44 + 0x80000) >> 19));
      v40 = (__int64 *)(a1 + 208);
LABEL_70:
      v42 = *BcbListHeadLargeOffset - 16LL;
      if ( (_DWORD)v45 )
        goto LABEL_78;
      if ( *(_WORD *)v42 == 765 )
      {
        if ( *(_DWORD *)(v42 + 36) )
        {
LABEL_78:
          if ( *(_WORD *)v42 == 765 )
          {
            while ( v44 < *(_QWORD *)(v42 + 32) )
            {
              if ( v44 >= *(_QWORD *)(v42 + 8) )
              {
LABEL_83:
                v46 = 1;
                goto LABEL_84;
              }
              v42 = *(_QWORD *)(v42 + 16) - 16LL;
              if ( *(_WORD *)v42 != 765 )
                goto LABEL_84;
            }
          }
          goto LABEL_84;
        }
        do
        {
          if ( (unsigned int)v44 >= *(_DWORD *)(v42 + 32) )
            break;
          if ( (unsigned int)v44 >= *(_DWORD *)(v42 + 8) )
            goto LABEL_83;
          v42 = *(_QWORD *)(v42 + 16) - 16LL;
        }
        while ( *(_WORD *)v42 == 765 );
      }
LABEL_84:
      v13 = v66;
      if ( !v46 )
        v42 = *(_QWORD *)(v42 + 24) - 16LL;
LABEL_87:
      if ( v42 != a1 )
      {
        while ( 1 )
        {
          if ( *(_WORD *)v42 != 765 )
            goto LABEL_123;
          if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 && a4 && *(_QWORD *)(v42 + 48) > *a4 )
            break;
          if ( v17 && *v17 + v74 <= *(_QWORD *)(v42 + 8) )
            goto LABEL_127;
          v15 = a6;
          v49 = *(_BYTE *)(v42 + 2);
          if ( *a6 )
          {
            if ( !v49 )
              goto LABEL_127;
            v50 = *(_QWORD *)(v42 + 8);
            v51 = a5;
            if ( v50 != *a5 + *a6 || *(_DWORD *)(v42 + 64) || (v50 & 0x1FFFFFF) == 0 )
              goto LABEL_128;
          }
          else
          {
            if ( !v49 )
              goto LABEL_123;
            if ( v17 )
            {
              if ( *v17 >= *(_QWORD *)(v42 + 32) )
                goto LABEL_123;
            }
            else if ( *(_QWORD *)(v42 + 8) < *v40 )
            {
              goto LABEL_123;
            }
            if ( v65 && v13 <= (unsigned int)(*(__int64 *)(v42 + 8) >> 12) )
              goto LABEL_142;
          }
          ++*(_DWORD *)(v42 + 64);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 288));
          if ( (*(_DWORD *)(a1 + 152) & 0x202) != 0x200 )
          {
            CcUnpinFileDataEx((char *)v42, 1, 2);
            ExAcquireFastMutex((PKGUARDED_MUTEX)(a1 + 288));
LABEL_118:
            v65 = 0;
            if ( !*a6 )
              *a5 = *(_QWORD *)(v42 + 8);
            *a7 = v42;
            *a6 += *(_DWORD *)(v42 + 4);
            if ( (*(_DWORD *)(a1 + 152) & 0x3000000) != 0 && *(_QWORD *)(v42 + 48) > v41 )
              v41 = *(_QWORD *)(v42 + 48);
LABEL_123:
            v52 = *(_QWORD *)(v42 + 24);
            goto LABEL_124;
          }
          if ( !ExAcquireResourceExclusiveLite((PERESOURCE)(v42 + 72), *a6 == 0) )
          {
            CcUnpinFileDataEx((char *)v42, 1, 0);
            ExAcquireFastMutex((PKGUARDED_MUTEX)(a1 + 288));
            goto LABEL_127;
          }
          ExAcquireFastMutex((PKGUARDED_MUTEX)(a1 + 288));
          if ( *(_BYTE *)(v42 + 2) )
          {
            if ( (*(_DWORD *)(a1 + 152) & 0x1000000) == 0 || !a4 || *(_QWORD *)(v42 + 48) <= *a4 )
              goto LABEL_118;
            ++CcDbgLsnLargerThanHint;
          }
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 288));
          CcUnpinFileDataEx((char *)v42, 0, 0);
          ExAcquireFastMutex((PKGUARDED_MUTEX)(a1 + 288));
          if ( *a6 )
            goto LABEL_127;
          v52 = *(_QWORD *)(a1 + 24);
LABEL_124:
          v42 = v52 - 16;
          if ( v42 == a1 )
            goto LABEL_127;
          v17 = a2;
          v40 = (__int64 *)(a1 + 208);
        }
        ++CcDbgLsnLargerThanHint;
        goto LABEL_123;
      }
LABEL_127:
      v51 = a5;
LABEL_128:
      v15 = a6;
      if ( v65 )
      {
        v17 = a2;
LABEL_142:
        v39 = v64;
        v32 = v68;
        goto LABEL_143;
      }
      v53 = *a6;
      if ( (_DWORD)v53 )
      {
        if ( !a2 )
        {
          *(_QWORD *)(a1 + 208) = *v51 + v53;
          v54 = *a6 >> 12;
          if ( *(_DWORD *)(a1 + 200) <= v54 )
            *(_DWORD *)(a1 + 200) = 0;
          else
            *(_DWORD *)(a1 + 200) -= v54;
        }
LABEL_137:
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 288));
        if ( v41 )
        {
          v57 = *(_QWORD **)(a1 + 248);
          if ( (*(_DWORD *)(a1 + 152) & 0x2000000) == 0 )
            v57 = (_QWORD *)*v57;
          guard_dispatch_icall_no_overrides(v57, v41, v55, v56);
        }
        goto LABEL_176;
      }
      v40 = (__int64 *)(a1 + 208);
      if ( !*(_QWORD *)(a1 + 208) )
        goto LABEL_137;
      v17 = a2;
      if ( a2 )
        goto LABEL_137;
      *v40 = 0LL;
    }
    v40 = (__int64 *)(a1 + 208);
LABEL_69:
    BcbListHeadLargeOffset = (_QWORD *)(a1 + 16);
    goto LABEL_70;
  }
  v13 = (__int64)v9;
  v26 = v74;
  if ( !v74 )
    v13 = *(_QWORD *)(v16 + 32);
  if ( a9 )
    v13 = *a9 >> 12;
  v27 = (_QWORD *)v13;
  *(_QWORD *)(v16 + 40) = -1LL;
  v20 = (__int64 *)(v16 + 16);
  for ( i = *(__int64 **)(v16 + 16); ; i = (__int64 *)*i )
  {
    while ( i == v20 )
    {
      v27 = v9;
      i = (__int64 *)*i;
    }
    v28 = *((unsigned int *)i + 7);
    v29 = i[2];
    if ( (__int64)v27 <= (__int64)(v29 + v28) )
    {
      if ( *((_DWORD *)i + 8) )
        break;
    }
  }
  if ( v13 > (__int64)(v29 + v28) )
    v13 = v29 + *((unsigned int *)i + 6);
  v25 = i[5] + 4 * (v28 >> 5);
  v18 = v11;
LABEL_35:
  v67 = v25;
  v30 = i[2];
  v31 = v30 + *((unsigned int *)i + 6);
  if ( v13 >= v31 )
    v31 = v13;
  v13 = v31;
  v66 = v31;
  v69 = v31 - v30;
  v32 = (_DWORD *)(i[5] + 4 * ((unsigned __int64)(unsigned int)(v31 - v30) >> 5));
  v68 = v32;
  v64 = -1 << (v31 % 32);
  v33 = *v32;
  if ( (*v32 & v64) == 0 )
  {
    v64 = -1;
    v13 = v31 & 0xFFFFFFFFFFFFFFE0uLL;
    v34 = v31 - v30;
    while ( 1 )
    {
      v68 = ++v32;
      v13 += 32LL;
      v66 = v13;
      if ( (unsigned __int64)v32 > v25 )
      {
        if ( !v26 )
          *((_DWORD *)i + 7) = v34 - 1;
        do
        {
          i = (__int64 *)*i;
          if ( i == v20 )
          {
            if ( v26 )
              goto LABEL_58;
            i = (__int64 *)*i;
          }
        }
        while ( !*((_DWORD *)i + 8) );
        v35 = *((unsigned int *)i + 6);
        v36 = i[2];
        if ( v14 < v36 + v35 )
          goto LABEL_58;
        v37 = *((unsigned int *)i + 7);
        if ( v13 > (__int64)(v36 + v37) )
          goto LABEL_58;
        v38 = i[5];
        v32 = (_DWORD *)(v38 + 4 * ((unsigned __int64)(unsigned int)v35 >> 5));
        v68 = v32;
        v67 = v38 + 4 * (v37 >> 5);
        v13 = v36 + ((unsigned int)v35 & 0xFFFFFFE0);
        v66 = v13;
        v34 = *((_DWORD *)i + 6);
        v69 = v34;
        v25 = v67;
      }
      v33 = *v32;
      if ( *v32 )
        break;
      v26 = v74;
    }
  }
  v39 = -v64;
  v64 = v39;
  if ( (v33 & v39) == 0 )
  {
    do
    {
      v39 *= 2;
      ++v13;
    }
    while ( (v33 & v39) == 0 );
    v64 = v39;
    v66 = v13;
    v18 = v11;
  }
  v17 = a2;
  if ( a2 )
  {
    if ( v13 < (v18 + *a2 + 4095) >> 12 )
    {
      if ( *(_QWORD *)(a1 + 16) == a1 + 16 )
        goto LABEL_143;
      v65 = 1;
    }
    goto LABEL_59;
  }
LABEL_143:
  if ( (gCcTrace & 1) != 0 )
  {
    if ( v17 )
      v58 = *v17;
    else
      v58 = 0LL;
    v59 = v74;
    DbgPrintEx(
      0x7Fu,
      0,
      "CcAcquireByteRange (AcceptPage) [0x%I64x, 0x%x]: %p (0x%I64x) BM:%p Dirty: 0x%x\n",
      v58,
      v74,
      (const void *)a1,
      v13,
      i,
      *((_DWORD *)i + 8));
  }
  else
  {
    v59 = v74;
  }
  while ( (v39 & *v32) != 0 )
  {
    if ( a2 && v13 + *v15 >= (unsigned int)((*a2 + 4095 + v59) >> 12) )
      break;
    if ( (unsigned __int64)v32 > i[5] + 4 * ((unsigned __int64)*((unsigned int *)i + 7) >> 5) )
      KeBugCheckEx(0x34u, 0x128EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( !a2 && *v15 >= CcMaxLazyWritePages )
      break;
    *v32 -= v39;
    ++*v15;
    v39 *= 2;
    if ( !v39 )
    {
      ++v32;
      v39 = 1;
      if ( (unsigned __int64)v32 > v67 )
        break;
    }
  }
  v60 = *(_DWORD *)(v71 + 4) - *v15;
  if ( *v15 >= *(_DWORD *)(v71 + 4) )
    v60 = 0;
  *(_DWORD *)(v71 + 4) = v60;
  v61 = *(_DWORD *)(v71 + 8);
  if ( v61 < *v15 )
    KeBugCheckEx(0x34u, 0x12BDuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  *(_DWORD *)(v71 + 8) = v61 - *v15;
  *((_DWORD *)i + 8) -= *v15;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v70 + 768), &LockHandle);
  CcDeductDirtyPages(a1, *v15);
  if ( *(_DWORD *)(v70 + 976) <= *v15 )
    *(_DWORD *)(v70 + 976) = 0;
  else
    *(_DWORD *)(v70 + 976) -= *v15;
  if ( !*(_DWORD *)(a1 + 112) )
    CcInsertIntoCleanSharedCacheMapList(a1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( *((_DWORD *)i + 8) )
  {
    if ( *((_DWORD *)i + 6) == v69 )
      *((_DWORD *)i + 6) = v13 + *v15 - *((_DWORD *)i + 4);
    if ( v59 )
      goto LABEL_173;
    v62 = v13 + *v15;
  }
  else
  {
    *((_DWORD *)i + 6) = -1;
    *((_DWORD *)i + 7) = 0;
    v62 = i[2] + 0x2000;
  }
  *(_QWORD *)(v71 + 32) = v62;
LABEL_173:
  if ( *(_QWORD *)(a1 + 16) == a1 + 16 )
    *(_DWORD *)(a1 + 200) = *(_DWORD *)(v71 + 4);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 288));
  *v15 <<= 12;
  *a5 = v13 << 12;
  *a7 = 0LL;
LABEL_176:
  if ( a8 )
    PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 1, 0LL, 0LL);
  return *v15 != 0;
}
