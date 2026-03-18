/*
 * XREFs of MiViewMayContainPage @ 0x1402BA550
 * Callers:
 *     MiTrimSection @ 0x1402B9B70 (MiTrimSection.c)
 * Callees:
 *     MiEndingOffsetWithLock @ 0x14023A3EC (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x140244020 (MiStartingOffset.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiGetSharedProtos @ 0x1403025FC (MiGetSharedProtos.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140340450 (ObpTraceObjectReferenceIfActive.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  int v26; // r8d
  __int64 v27; // rsi
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int8 *v31; // rdx
  unsigned int *v32; // r8
  __int64 v33; // r14
  unsigned __int64 v34; // rbp
  unsigned __int64 v35; // rbp
  __int64 Pool; // rax
  void *v37; // r14
  volatile signed __int64 *v38; // r9
  signed __int64 v39; // rax
  signed __int64 v40; // rtt
  unsigned __int64 v41; // [rsp+68h] [rbp+20h]
  unsigned __int64 v42; // [rsp+80h] [rbp+38h]

  v8 = 0LL;
  v9 = *(_QWORD *)(a4 + 16);
  v42 = 0LL;
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
    v42 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( a2 && !a2[1] && *a2 != *(_DWORD *)((v9 & 0xFFFFFFFFFFFFFFFEuLL) + 464) )
      return 0LL;
    v26 = a3 & 0x20;
    v27 = *(_QWORD *)(a4 - 24);
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    {
      if ( v26 )
        return 0LL;
      v13 = 0LL;
      v31 = (unsigned __int8 *)(a4 - 64);
      v17 = 0LL;
      v32 = (unsigned int *)(a4 - 72);
    }
    else
    {
      if ( v26 && (*(_DWORD *)(a4 - 48) & 0x280) != 0x200 )
        return 0LL;
      v28 = *(_QWORD *)(a4 - 16);
      v29 = *(_QWORD *)(v27 + 8);
      if ( (*(_DWORD *)(*(_QWORD *)v27 + 56LL) & 0x20) != 0 )
      {
        if ( v28 < v29 || v28 >= v29 + 8LL * *(unsigned int *)(v27 + 44) )
          v33 = (v28 << 9) - (*(_QWORD *)(MiGetSharedProtos(*(_QWORD *)v27, 0xFFFFFFFFLL, v27) + 72) << 9);
        else
          v33 = (v28 << 9) - (v29 << 9);
        v13 = ((unsigned __int64)*(unsigned int *)(v27 + 36) << 9) + (v33 & 0xFFFFFFFFFFFFF000uLL);
      }
      else
      {
        if ( v29 )
          v30 = (__int64)(v28 - v29) >> 3 << 12;
        else
          v30 = 0LL;
        v13 = v30 + ((*(unsigned int *)(v27 + 36) | ((unsigned __int64)(*(_DWORD *)(v27 + 32) & 0xFFC0) << 26)) << 12);
      }
      v31 = (unsigned __int8 *)(a4 - 64);
      v32 = (unsigned int *)(a4 - 72);
      v17 = v13
          + (((*(unsigned int *)(a4 - 68) | ((unsigned __int64)*(unsigned __int8 *)(a4 - 63) << 32))
            - (*(unsigned int *)(a4 - 72) | ((unsigned __int64)*(unsigned __int8 *)(a4 - 64) << 32))
            + 1) << 12);
    }
    v16 = (*v32 | ((unsigned __int64)*v31 << 32)) << 12;
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
        v41 = MiStartingOffset((__int64 *)v20, *(_QWORD *)(v20 + 8), 0xFFFFFFFF);
        v23 = MiEndingOffsetWithLock((_QWORD *)v20, v21, v22);
        if ( a5 >= v41 && a5 < v23 )
        {
          v24 = *(_QWORD *)(v20 + 8);
          v25 = v24 + 8 * ((a5 - v41) >> 12);
          if ( v25 < v24 + 8 * (unsigned __int64)*(unsigned int *)(v20 + 44)
            && ((*(_DWORD *)(v20 + 32) & 0x20000) == 0 || (*(_DWORD *)(a1 + 56) & 0x8000000) == 0) )
          {
            v13 = 0LL;
            v16 = ((__int64)(v25 - *(_QWORD *)(a1 + 136)) >> 3 << 12) + v19;
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
    v35 = v16 + 4096;
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
    v34 = a6 - v8;
    if ( a6 > v17 )
      v34 = v17 - v8;
    v35 = v16 + v34;
  }
  Pool = MiAllocatePool(0x40uLL, 0x30uLL, 1633053005);
  v37 = (void *)Pool;
  if ( Pool )
  {
    *(_QWORD *)(Pool + 8) = v42;
    *(_QWORD *)(Pool + 16) = v16;
    *(_QWORD *)(Pool + 24) = v35;
    *(_QWORD *)(Pool + 32) = v8;
    *(_DWORD *)(Pool + 40) = *(_DWORD *)(a4 + 16) & 3;
    if ( v42 )
    {
      v38 = (volatile signed __int64 *)(v42 - 48);
      _m_prefetchw((const void *)(v42 - 48));
      v39 = *(_QWORD *)(v42 - 48);
      while ( v39 )
      {
        v40 = v39;
        v39 = _InterlockedCompareExchange64(v38, v39 + 1, v39);
        if ( v40 == v39 )
        {
          ObpTraceObjectReferenceIfActive(v38, 1LL, 2002152781LL);
          goto LABEL_49;
        }
      }
      ExFreePoolWithTag(v37, 0);
    }
    else
    {
LABEL_49:
      *a7 = v37;
    }
    return 0LL;
  }
  return 3221225626LL;
}
