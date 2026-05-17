/*
 * XREFs of RtlpHpLfhSubsegmentCommitBlock @ 0x180011FD0
 * Callers:
 *     RtlpHpReallocMove @ 0x18002C3C0 (RtlpHpReallocMove.c)
 *     RtlpHpTagAllocateHeap @ 0x18002E060 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x18002F040 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpMetadataAlloc @ 0x18004F990 (RtlpHpMetadataAlloc.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x180011E60 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegPageRangeCommit @ 0x1800125C0 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x1800CCFA0 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     ZwSetInformationVirtualMemory @ 0x180166810 (ZwSetInformationVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentCommitBlock(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  char v3; // cl
  int v5; // r15d
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rdx
  signed __int16 *v10; // rbx
  signed __int16 *v11; // r12
  int v12; // edi
  int v13; // r13d
  signed __int16 v14; // ax
  signed __int16 v15; // tt
  char v17; // cl
  __int64 v18; // r10
  int v19; // r15d
  unsigned int v20; // r13d
  __int64 v21; // r15
  unsigned __int64 v22; // rbx
  __int64 v23; // r11
  unsigned __int64 v24; // r8
  char v25; // cl
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  __int64 v28; // r9
  char v29; // cl
  unsigned __int64 v30; // r9
  int v31; // edi
  char v32; // cl
  __int64 v33; // rdx
  __int64 v34; // r10
  signed __int16 *v35; // r9
  signed __int16 *v36; // r11
  int v37; // edi
  int v38; // r8d
  signed __int16 v39; // dx
  bool v40; // zf
  signed __int16 v41; // ax
  unsigned __int64 v42; // rdi
  char v43; // al
  unsigned int v44; // [rsp+30h] [rbp-58h]
  __int64 v45; // [rsp+38h] [rbp-50h]
  _QWORD v46[9]; // [rsp+40h] [rbp-48h] BYREF
  int v48; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v49; // [rsp+A0h] [rbp+18h] BYREF
  int v50; // [rsp+A8h] [rbp+20h] BYREF

  v49 = a3;
  v3 = *(_BYTE *)(a2 + 38);
  v48 = 0;
  v5 = 0;
  v6 = a3 >> 12 >> v3;
  v7 = *(unsigned __int8 *)(a2 + 24);
  v44 = (unsigned __int16)qword_1801CFEC8 ^ *(unsigned __int16 *)(a2 + 40) ^ (unsigned __int16)(a2 >> 12);
  v8 = 2 * v6;
  v9 = ((a3 + v44 - 1) >> 12 >> v3) - (unsigned int)v6 + 1;
  v10 = (signed __int16 *)(2 * v6 + a2 + 8 * v7);
  _m_prefetchw(v10);
  v11 = &v10[v9];
  LODWORD(v45) = 0;
  v12 = 0;
  v13 = -1;
  if ( v10 >= v11 )
    return 0LL;
  do
  {
    while ( 1 )
    {
      v14 = *v10;
      while ( v14 > 0 )
      {
        v15 = v14;
        v14 = _InterlockedCompareExchange16(v10, v14 + 1, v14);
        if ( v15 == v14 )
          goto LABEL_5;
      }
      if ( v5 )
        break;
      v5 = 1;
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a2 + 56));
    }
    if ( v14 )
    {
      ++v12;
      v45 = v8 >> 1;
      if ( v13 == -1 )
        v13 = v8 >> 1;
    }
    else
    {
      --v12;
    }
    *v10 = v14 + 1;
LABEL_5:
    ++v10;
    v8 += 2LL;
  }
  while ( v10 < v11 );
  if ( v12 )
    RtlpHpLfhContextUpdateFreeCommitCount(a1, a2, (v12 << 12 << *(_BYTE *)(a2 + 38)) / 4096);
  if ( v13 == -1 )
  {
    if ( v5 )
      RtlReleaseSRWLockExclusive(a2 + 56);
    return 0LL;
  }
  v17 = *(_BYTE *)(a2 + 38);
  v18 = *(_QWORD *)a1;
  v19 = ((_DWORD)v45 - v13 + 1) << 12;
  v20 = v13 << 12 << v17;
  v21 = (unsigned int)(v19 << v17);
  v22 = a2 + v20;
  if ( (__int64 (__fastcall *)(__int64 *, __int64, unsigned int, _DWORD *))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)) == RtlpHpSegLfhVsCommit )
  {
    v23 = *(_QWORD *)v18;
    v24 = *(_QWORD *)v18 & v22;
    v50 = 0;
    if ( v18 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v24 + 16) ^ v24
      || (v25 = *(_BYTE *)(v18 + 8),
          v26 = v24 + 32LL * ((unsigned int)(v22 - v24) >> v25),
          v27 = -32LL * *(unsigned __int8 *)(v26 + 26) + v26,
          v28 = (__int64)(v27 - v24) >> 5 << v25,
          v29 = *(_BYTE *)(v27 + 24),
          v30 = v24 + v28,
          (v29 & 3) != 3)
      || v30 != v22 && (v29 & 0xCu) < 8 )
    {
      v27 = 0LL;
    }
    v31 = RtlpHpSegPageRangeCommit(
            v18,
            v27,
            ((unsigned int)v22
           - (((unsigned int)v27 & (unsigned int)v23)
            + (unsigned int)((__int64)(v27 - (v27 & v23)) >> 5 << *(_BYTE *)(v18 + 8)))) >> 12,
            (unsigned int)v21 >> 12,
            0,
            (__int64)&v50);
    if ( v31 >= 0 )
      v48 = v50 << 12;
  }
  else
  {
    v31 = ((__int64 (__fastcall *)(_QWORD, unsigned __int64, _QWORD, int *))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)))(
            *(_QWORD *)a1,
            a2 + v20,
            (unsigned int)v21,
            &v48);
  }
  if ( v31 >= 0 )
  {
    v32 = *(_BYTE *)(a2 + 38);
    v33 = v20 >> 12 >> v32;
    v34 = 2 * v33;
    v35 = (signed __int16 *)(2 * v33 + a2 + 8LL * *(unsigned __int8 *)(a2 + 24));
    _m_prefetchw(v35);
    v36 = &v35[(((unsigned int)v21 + v20 - 1) >> 12 >> v32) - (unsigned int)v33 + 1];
    v37 = -1;
    v38 = 0;
    if ( v35 >= v36 )
      goto LABEL_37;
    do
    {
      v39 = *v35;
      while ( v39 > 0 )
      {
        v41 = _InterlockedCompareExchange16(v35, v39 + 1, v39);
        v40 = v39 == v41;
        v39 = v41;
        if ( v40 )
          goto LABEL_33;
      }
      if ( v39 )
      {
        ++v38;
        if ( v37 == -1 )
          v37 = v34 >> 1;
      }
      else
      {
        --v38;
      }
      *v35 = v39 + 1;
LABEL_33:
      ++v35;
      v34 += 2LL;
    }
    while ( v35 < v36 );
    if ( v38 )
      RtlpHpLfhContextUpdateFreeCommitCount(a1, a2, (v38 << 12 << *(_BYTE *)(a2 + 38)) / 4096);
    if ( v37 == -1 )
LABEL_37:
      RtlReleaseSRWLockExclusive(a2 + 56);
    v42 = v21 + v22;
    v43 = 3;
    if ( !v48 )
      v43 = 2;
    if ( (RtlpHpLfhPerfFlags & 2) != 0 )
    {
      if ( (v43 & 1) != 0 )
      {
        v46[1] = (unsigned int)v21;
        v46[0] = a2 + v20;
        v49 = 1;
        ((void (__fastcall *)(__int64, _QWORD, __int64, _QWORD *, unsigned int *, int, unsigned int, __int64))ZwSetInformationVirtualMemory)(
          -1LL,
          0LL,
          1LL,
          v46,
          &v49,
          4,
          v44,
          v45);
      }
      for ( ; v22 < v42; v22 += 4096LL )
        ;
    }
    return 0LL;
  }
  RtlpHpLfhSubsegmentDecBlockCounts(a1, a2, v49, v44);
  RtlReleaseSRWLockExclusive(a2 + 56);
  return (unsigned int)v31;
}
