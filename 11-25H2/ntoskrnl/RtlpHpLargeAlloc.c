/*
 * XREFs of RtlpHpLargeAlloc @ 0x1403CAA94
 * Callers:
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     RtlpHpAllocateHeap @ 0x1403C93A0 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x1403C9AF8 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpMetadataAlloc @ 0x1403CAF34 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1402E2370 (RtlRbInsertNodeEx.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x1402FA210 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1402FA31C (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpAllocVA @ 0x1402FA5FC (RtlpHpAllocVA.c)
 *     RtlpHpFreeVA @ 0x1402FA99C (RtlpHpFreeVA.c)
 *     RtlpHpMetadataAlloc @ 0x1403CAF34 (RtlpHpMetadataAlloc.c)
 *     RtlpHpLargeLockAcquire @ 0x1403CB6A0 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpMetadataFree @ 0x1403CB6C4 (RtlpHpMetadataFree.c)
 *     RtlpHpLargeLockRelease @ 0x1403CBC24 (RtlpHpLargeLockRelease.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x1403CBC48 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlHeapZero @ 0x1406A9C60 (RtlHeapZero.c)
 */

unsigned __int64 __fastcall RtlpHpLargeAlloc(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v7; // rbx
  __int64 v8; // r13
  BOOL v9; // ebx
  int v10; // r12d
  __int64 v11; // r10
  __int64 i; // rcx
  __int64 v13; // rax
  __int128 v14; // xmm0
  ULONG_PTR v15; // rax
  __int64 v16; // r14
  int v17; // r9d
  int v18; // esi
  bool v19; // cf
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rbx
  signed __int64 v23; // r15
  unsigned __int64 v24; // rax
  char v25; // si
  unsigned __int64 v26; // rdx
  BOOLEAN v27; // r8
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  ULONG_PTR v30; // [rsp+28h] [rbp-99h]
  ULONG_PTR v31; // [rsp+38h] [rbp-89h] BYREF
  int v32; // [rsp+40h] [rbp-81h]
  __int64 v33; // [rsp+48h] [rbp-79h] BYREF
  __int64 v34; // [rsp+50h] [rbp-71h] BYREF
  __int64 v35; // [rsp+58h] [rbp-69h] BYREF
  __int128 v36; // [rsp+68h] [rbp-59h] BYREF
  _DWORD v37[3]; // [rsp+78h] [rbp-49h] BYREF
  int v38; // [rsp+84h] [rbp-3Dh]
  __int64 v39; // [rsp+88h] [rbp-39h]
  __int128 v40; // [rsp+98h] [rbp-29h]
  __int128 v41; // [rsp+A8h] [rbp-19h] BYREF
  int v42[4]; // [rsp+B8h] [rbp-9h] BYREF
  __int128 v43; // [rsp+C8h] [rbp+7h] BYREF
  __int128 v44; // [rsp+D8h] [rbp+17h]
  __int16 v45; // [rsp+130h] [rbp+6Fh]

  v45 = a2;
  v32 = 0;
  v4 = 0LL;
  v31 = 0LL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  v41 = *(_OWORD *)a1;
  v8 = RtlpHpMetadataAlloc(40LL, 40LL, 0LL, &v41);
  if ( !v8 )
    return 0LL;
  *(_OWORD *)v8 = 0LL;
  v9 = 0;
  *(_OWORD *)(v8 + 16) = 0LL;
  *(_QWORD *)(v8 + 32) = 0LL;
  if ( (*(_DWORD *)(a1 + 20) & 0x4000000) != 0 )
    v9 = 0x1FFFFF - ((a3 - 1) & 0x1FFFFF) < a3 >> 2;
  v10 = 0;
  if ( !v9 )
    goto LABEL_8;
  v11 = 0x200000LL;
  for ( i = a3 - ((a3 - 1) & 0x1FFFFF) + 0x1FFFFF; ; i = a3 + (unsigned int)(v10 << 12) )
  {
    v14 = *(_OWORD *)a1;
    v34 = i;
    v40 = v14;
    v38 = 0;
    if ( BYTE3(v14) )
      v37[0] = BYTE3(v14) - 1;
    else
      v37[0] = -1;
    v37[1] = BYTE1(v14);
    v37[2] = BYTE2(v14);
    if ( (v14 & 8) != 0 )
      v38 = 1;
    v39 = *((_QWORD *)&v40 + 1);
    v33 = i - (((_DWORD)i - 1) & 0xFFFFF) + 0xFFFFF;
    v15 = RtlpHpVaMgrCtxAlloc(&unk_140E68098, &v33, v11, v37);
    if ( !v15 )
      goto LABEL_27;
    v4 = v15;
    v34 = v33;
    v31 = v15;
    v43 = 0LL;
    v44 = 0LL;
    RtlpHpVaMgrCtxQuery((__int64)&unk_140E68098, v15, (__int64)&v43);
    *(_QWORD *)v44 = a1;
    *(_QWORD *)&v40 = (a3 + 4095) >> 12;
    v16 = (_QWORD)v40 << 12;
    v35 = (_QWORD)v40 << 12;
    if ( !(unsigned int)RtlpHpSegHeapCheckCommitLimit((_QWORD)v40 << 12, a1) )
      goto LABEL_27;
    v17 = 4096;
    if ( v9 )
    {
      v17 = 536875008;
      v35 = v16 - ((v16 - 1) & 0x1FFFFF) + 0x1FFFFF;
      v18 = a4 & 2;
    }
    else
    {
      v18 = a4 & 2;
      if ( (a4 & 2) != 0 )
        v17 = 1073745920;
    }
    v19 = (*(_DWORD *)(a1 + 20) & 0x40000000) != 0;
    *(_OWORD *)v42 = *(_OWORD *)a1;
    LODWORD(v30) = v19 ? 64 : 4;
    if ( (int)RtlpHpAllocVA(&v31, &v35, 0LL, v17, v30, v42) >= 0 )
      break;
    if ( !v9 )
    {
      v4 = v31;
LABEL_27:
      v7 = 0LL;
      v36 = *(_OWORD *)a1;
      RtlpHpMetadataFree(v8, &v36);
      goto LABEL_28;
    }
    v9 = 0;
    v36 = *(_OWORD *)a1;
    RtlpHpFreeVA(&v31, (unsigned __int64 *)&v34, 0x8000LL, &v36);
    v4 = 0LL;
    v31 = 0LL;
    v10 = 0;
LABEL_8:
    v13 = *(_QWORD *)a1 >> 8;
    if ( (unsigned __int8)v13 < 2u || (unsigned __int8)v13 >= 5u )
      v10 = 1;
    v11 = 0LL;
  }
  v21 = v31;
  if ( v9 && v18 )
    RtlHeapZero(v31, (a3 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
  v22 = v40;
  v23 = v33;
  _BitScanForward64(&v24, v33);
  v32 = v24;
  *(_QWORD *)(v8 + 24) = v21;
  *(_QWORD *)(v8 + 32) = (unsigned __int8)(4 * v24) ^ (*(_DWORD *)(v8 + 32) & 0xF01 | (2
                                                                                     * ((v22 << 11) | v10 & 0xFFFFFF81)));
  *(_WORD *)(v8 + 24) = ((_WORD)v22 << 12) - v45;
  v25 = RtlpHpLargeLockAcquire(a1);
  v26 = *(_QWORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v26 )
    v26 ^= a1 + 72;
  v27 = 0;
  if ( v26 )
  {
    while ( 1 )
    {
      if ( v21 >= (*(_QWORD *)(v26 + 24) & 0xFFFFFFFFFFFF0000uLL) )
      {
        v28 = *(_QWORD *)(v26 + 8);
        if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
        {
          if ( !v28 )
            goto LABEL_49;
          v28 ^= v26;
        }
        if ( !v28 )
        {
LABEL_49:
          v27 = 1;
          break;
        }
      }
      else
      {
        v28 = *(_QWORD *)v26;
        if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
        {
          if ( !v28 )
            break;
          v28 ^= v26;
        }
        if ( !v28 )
          break;
      }
      v26 = v28;
    }
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 72), (PRTL_BALANCED_NODE)v26, v27, (PRTL_BALANCED_NODE)v8);
  LOBYTE(v29) = v25;
  RtlpHpLargeLockRelease(a1, v29);
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), v23 / 4096);
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 96), v22);
  v7 = v31;
  v4 = 0LL;
  v31 = 0LL;
LABEL_28:
  if ( v4 )
  {
    v36 = *(_OWORD *)a1;
    RtlpHpFreeVA(&v31, (unsigned __int64 *)&v34, 0x8000LL, &v36);
  }
  return v7;
}
