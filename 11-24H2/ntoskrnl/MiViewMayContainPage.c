/*
 * XREFs of MiViewMayContainPage @ 0x140361C90
 * Callers:
 *     MiTrimSection @ 0x1403612B0 (MiTrimSection.c)
 * Callees:
 *     MiStartingOffset @ 0x14020C7B0 (MiStartingOffset.c)
 *     MiEndingOffsetWithLock @ 0x1402724D4 (MiEndingOffsetWithLock.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiGetSharedProtos @ 0x14030CC0C (MiGetSharedProtos.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14031F930 (ObpTraceObjectReferenceIfActive.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  int v27; // r8d
  __int64 v28; // rsi
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int8 *v32; // rdx
  unsigned int *v33; // r8
  __int64 v34; // r14
  unsigned __int64 v35; // rbp
  unsigned __int64 v36; // rbp
  __int64 Pool; // rax
  void *v38; // r14
  volatile signed __int64 *v39; // r9
  signed __int64 v40; // rax
  signed __int64 v41; // rtt
  unsigned __int64 v42; // [rsp+68h] [rbp+20h]
  unsigned __int64 v43; // [rsp+80h] [rbp+38h]

  v8 = 0LL;
  v9 = *(_QWORD *)(a4 + 16);
  v43 = 0LL;
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
    v43 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( a2 && !a2[1] && *a2 != *(_DWORD *)((v9 & 0xFFFFFFFFFFFFFFFEuLL) + 464) )
      return 0LL;
    v27 = a3 & 0x20;
    v28 = *(_QWORD *)(a4 - 24);
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    {
      if ( v27 )
        return 0LL;
      v13 = 0LL;
      v32 = (unsigned __int8 *)(a4 - 64);
      v17 = 0LL;
      v33 = (unsigned int *)(a4 - 72);
    }
    else
    {
      if ( v27 && (*(_DWORD *)(a4 - 48) & 0x280) != 0x200 )
        return 0LL;
      v29 = *(_QWORD *)(a4 - 16);
      v30 = *(_QWORD *)(v28 + 8);
      if ( (*(_DWORD *)(*(_QWORD *)v28 + 56LL) & 0x20) != 0 )
      {
        if ( v29 < v30 || v29 >= v30 + 8LL * *(unsigned int *)(v28 + 44) )
          v34 = (v29 << 9) - (*(_QWORD *)(MiGetSharedProtos(*(_QWORD *)v28, 0xFFFFFFFF, v28) + 72) << 9);
        else
          v34 = (v29 << 9) - (v30 << 9);
        v13 = ((unsigned __int64)*(unsigned int *)(v28 + 36) << 9) + (v34 & 0xFFFFFFFFFFFFF000uLL);
      }
      else
      {
        if ( v30 )
          v31 = (__int64)(v29 - v30) >> 3 << 12;
        else
          v31 = 0LL;
        v13 = v31 + ((*(unsigned int *)(v28 + 36) | ((unsigned __int64)(*(_DWORD *)(v28 + 32) & 0xFFC0) << 26)) << 12);
      }
      v32 = (unsigned __int8 *)(a4 - 64);
      v33 = (unsigned int *)(a4 - 72);
      v17 = v13
          + (((*(unsigned int *)(a4 - 68) | ((unsigned __int64)*(unsigned __int8 *)(a4 - 63) << 32))
            - (*(unsigned int *)(a4 - 72) | ((unsigned __int64)*(unsigned __int8 *)(a4 - 64) << 32))
            + 1) << 12);
    }
    v16 = (*v33 | ((unsigned __int64)*v32 << 32)) << 12;
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
        v42 = MiStartingOffset((__int64 *)v20, *(_QWORD *)(v20 + 8), 0xFFFFFFFF);
        v24 = MiEndingOffsetWithLock((_QWORD *)v20, v21, v22, v23);
        if ( a5 >= v42 && a5 < v24 )
        {
          v25 = *(_QWORD *)(v20 + 8);
          v26 = v25 + 8 * ((a5 - v42) >> 12);
          if ( v26 < v25 + 8 * (unsigned __int64)*(unsigned int *)(v20 + 44)
            && ((*(_DWORD *)(v20 + 32) & 0x20000) == 0 || (*(_DWORD *)(a1 + 56) & 0x8000000) == 0) )
          {
            v13 = 0LL;
            v16 = ((__int64)(v26 - *(_QWORD *)(a1 + 136)) >> 3 << 12) + v19;
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
    v36 = v16 + 4096;
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
    v35 = a6 - v8;
    if ( a6 > v17 )
      v35 = v17 - v8;
    v36 = v16 + v35;
  }
  Pool = MiAllocatePool(0x40uLL, 0x30uLL, 1633053005);
  v38 = (void *)Pool;
  if ( Pool )
  {
    *(_QWORD *)(Pool + 8) = v43;
    *(_QWORD *)(Pool + 16) = v16;
    *(_QWORD *)(Pool + 24) = v36;
    *(_QWORD *)(Pool + 32) = v8;
    *(_DWORD *)(Pool + 40) = *(_DWORD *)(a4 + 16) & 3;
    if ( v43 )
    {
      v39 = (volatile signed __int64 *)(v43 - 48);
      _m_prefetchw((const void *)(v43 - 48));
      v40 = *(_QWORD *)(v43 - 48);
      while ( v40 )
      {
        v41 = v40;
        v40 = _InterlockedCompareExchange64(v39, v40 + 1, v40);
        if ( v41 == v40 )
        {
          ObpTraceObjectReferenceIfActive((int)v39);
          goto LABEL_49;
        }
      }
      ExFreePoolWithTag(v38, 0);
    }
    else
    {
LABEL_49:
      *a7 = v38;
    }
    return 0LL;
  }
  return 3221225626LL;
}
