/*
 * XREFs of MiViewMayContainPage @ 0x140321440
 * Callers:
 *     MiTrimSection @ 0x140320A50 (MiTrimSection.c)
 * Callees:
 *     ObpTraceObjectReferenceIfActive @ 0x14029B0E0 (ObpTraceObjectReferenceIfActive.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiEndingOffsetWithLock @ 0x1402FD558 (MiEndingOffsetWithLock.c)
 *     MiGetSharedProtos @ 0x140322970 (MiGetSharedProtos.c)
 *     MiStartingOffset @ 0x1403236B0 (MiStartingOffset.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiViewMayContainPage(
        __int64 a1,
        _DWORD *a2,
        char a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  unsigned __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r14
  unsigned int v14; // ecx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r15
  unsigned __int64 v19; // rsi
  __int64 v20; // r14
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  int v24; // r8d
  __int64 v25; // rsi
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int8 *v29; // rdx
  unsigned int *v30; // r8
  __int64 v31; // r14
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // rbp
  __int64 Pool; // rax
  void *v35; // r14
  volatile signed __int64 *v36; // r9
  signed __int64 v37; // rax
  signed __int64 v38; // rtt
  unsigned __int64 v39; // [rsp+68h] [rbp+20h]
  unsigned __int64 v40; // [rsp+80h] [rbp+38h]

  v8 = 0LL;
  v9 = *(_QWORD *)(a4 + 16);
  v40 = 0LL;
  *a7 = 0LL;
  if ( (v9 & 3) == 1 )
    goto LABEL_23;
  if ( a2 && !a2[1] )
    return 0LL;
  if ( (v9 & 3) == 0 )
  {
    v12 = *(_QWORD *)(a4 + 32);
    v13 = 4 * (v12 & 0xFFFFFFFFFFFF0000uLL);
    if ( v12 >> 62 == 3 )
    {
      v14 = v12 & 0x3F;
      if ( v14 )
        v15 = (unsigned __int64)v14 << 12;
      else
        v15 = 0x40000LL;
      v16 = *(_QWORD *)(a4 + 16);
      v17 = v13 + v15;
      goto LABEL_8;
    }
    return 0LL;
  }
  if ( (v9 & 3) == 1 )
  {
LABEL_23:
    v40 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( a2 && !a2[1] && *a2 != *(_DWORD *)((v9 & 0xFFFFFFFFFFFFFFFEuLL) + 464) )
      return 0LL;
    v24 = a3 & 0x20;
    v25 = *(_QWORD *)(a4 - 24);
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    {
      if ( v24 )
        return 0LL;
      v13 = 0LL;
      v29 = (unsigned __int8 *)(a4 - 64);
      v17 = 0LL;
      v30 = (unsigned int *)(a4 - 72);
    }
    else
    {
      if ( v24 && (*(_DWORD *)(a4 - 48) & 0x280) != 0x200 )
        return 0LL;
      v26 = *(_QWORD *)(a4 - 16);
      v27 = *(_QWORD *)(v25 + 8);
      if ( (*(_DWORD *)(*(_QWORD *)v25 + 56LL) & 0x20) != 0 )
      {
        if ( v26 < v27 || v26 >= v27 + 8LL * *(unsigned int *)(v25 + 44) )
          v31 = (v26 << 9) - (*(_QWORD *)(MiGetSharedProtos(*(_QWORD *)v25, 0xFFFFFFFFLL, v25) + 72) << 9);
        else
          v31 = (v26 << 9) - (v27 << 9);
        v13 = ((unsigned __int64)*(unsigned int *)(v25 + 36) << 9) + (v31 & 0xFFFFFFFFFFFFF000uLL);
      }
      else
      {
        if ( v27 )
          v28 = (__int64)(v26 - v27) >> 3 << 12;
        else
          v28 = 0LL;
        v13 = v28 + ((*(unsigned int *)(v25 + 36) | ((unsigned __int64)(*(_DWORD *)(v25 + 32) & 0xFFC0) << 26)) << 12);
      }
      v29 = (unsigned __int8 *)(a4 - 64);
      v30 = (unsigned int *)(a4 - 72);
      v17 = v13
          + (((*(unsigned int *)(a4 - 68) | ((unsigned __int64)*(unsigned __int8 *)(a4 - 63) << 32))
            - (*(unsigned int *)(a4 - 72) | ((unsigned __int64)*(unsigned __int8 *)(a4 - 64) << 32))
            + 1) << 12);
    }
    v16 = (*v30 | ((unsigned __int64)*v29 << 32)) << 12;
    goto LABEL_8;
  }
  if ( (v9 & 3) != 2 )
  {
    if ( (v9 & 3) == 3 )
    {
      v19 = v9 & 0xFFFFFFFFFFFFFFFCuLL;
      v20 = a1 + 128;
      v17 = 0LL;
      while ( v20 )
      {
        v39 = MiStartingOffset(v20, *(_QWORD *)(v20 + 8), 0xFFFFFFFFLL);
        v21 = MiEndingOffsetWithLock((_QWORD *)v20);
        if ( a5 >= v39 && a5 < v21 )
        {
          v22 = *(_QWORD *)(v20 + 8);
          v23 = v22 + 8 * ((a5 - v39) >> 12);
          if ( v23 < v22 + 8 * (unsigned __int64)*(unsigned int *)(v20 + 44)
            && ((*(_DWORD *)(v20 + 32) & 0x20000) == 0 || (*(_DWORD *)(a1 + 56) & 0x8000000) == 0) )
          {
            v13 = 0LL;
            v16 = ((__int64)(v23 - *(_QWORD *)(a1 + 136)) >> 3 << 12) + v19;
            goto LABEL_8;
          }
          return 0LL;
        }
        v20 = *(_QWORD *)(v20 + 16);
      }
    }
    return 0LL;
  }
  v16 = v9 & 0xFFFFFFFFFFFFFFFDuLL;
  v13 = *(_QWORD *)(a4 - 48) << 12;
  v17 = v13 + *(_QWORD *)(a4 - 40);
LABEL_8:
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
  {
    v33 = v16 + 4096;
  }
  else
  {
    if ( a5 >= v17 || a6 <= v13 )
      return 0LL;
    v8 = v13;
    if ( a5 >= v13 )
    {
      v8 = a5;
      v16 += a5 - v13;
    }
    v32 = a6 - v8;
    if ( a6 > v17 )
      v32 = v17 - v8;
    v33 = v16 + v32;
  }
  Pool = MiAllocatePool(0x40uLL, 0x30uLL, 1633053005);
  v35 = (void *)Pool;
  if ( Pool )
  {
    *(_QWORD *)(Pool + 8) = v40;
    *(_QWORD *)(Pool + 16) = v16;
    *(_QWORD *)(Pool + 24) = v33;
    *(_QWORD *)(Pool + 32) = v8;
    *(_DWORD *)(Pool + 40) = *(_DWORD *)(a4 + 16) & 3;
    if ( v40 )
    {
      v36 = (volatile signed __int64 *)(v40 - 48);
      _m_prefetchw((const void *)(v40 - 48));
      v37 = *(_QWORD *)(v40 - 48);
      while ( v37 )
      {
        v38 = v37;
        v37 = _InterlockedCompareExchange64(v36, v37 + 1, v37);
        if ( v38 == v37 )
        {
          ObpTraceObjectReferenceIfActive((int)v36);
          goto LABEL_49;
        }
      }
      ExFreePoolWithTag(v35, 0);
    }
    else
    {
LABEL_49:
      *a7 = v35;
    }
    return 0LL;
  }
  return 3221225626LL;
}
