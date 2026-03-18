/*
 * XREFs of RtlpHpLargeAlloc @ 0x140420250
 * Callers:
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 *     RtlpHpAllocateHeap @ 0x1402B7A40 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x1402B819C (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpMetadataAlloc @ 0x140420674 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1402BDA80 (RtlRbInsertNodeEx.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x1402C257C (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1402C27C8 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpAllocVA @ 0x1402E98A8 (RtlpHpAllocVA.c)
 *     RtlpHpMetadataAlloc @ 0x140420674 (RtlpHpMetadataAlloc.c)
 *     RtlpHpLargeLockAcquire @ 0x140420E08 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpMetadataFree @ 0x140420E2C (RtlpHpMetadataFree.c)
 *     RtlpHpLargeLockRelease @ 0x140420F94 (RtlpHpLargeLockRelease.c)
 *     RtlpHpFreeVA @ 0x140420FB8 (RtlpHpFreeVA.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x140421384 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlHeapZero @ 0x1406B4F30 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpLargeAlloc(__int128 *a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 v4; // rsi
  __int64 v7; // rbx
  unsigned __int64 v8; // r13
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
  bool v27; // r8
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  ULONG_PTR v30; // [rsp+28h] [rbp-99h]
  __int64 v31; // [rsp+30h] [rbp-91h]
  ULONG_PTR v32; // [rsp+38h] [rbp-89h] BYREF
  int v33; // [rsp+40h] [rbp-81h]
  __int64 v34; // [rsp+48h] [rbp-79h] BYREF
  unsigned __int64 v35; // [rsp+50h] [rbp-71h] BYREF
  __int64 v36; // [rsp+58h] [rbp-69h] BYREF
  __int128 v37; // [rsp+68h] [rbp-59h] BYREF
  _DWORD v38[3]; // [rsp+78h] [rbp-49h] BYREF
  int v39; // [rsp+84h] [rbp-3Dh]
  __int64 v40; // [rsp+88h] [rbp-39h]
  __int128 v41; // [rsp+98h] [rbp-29h]
  __int128 v42; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v43; // [rsp+B8h] [rbp-9h] BYREF
  __int128 v44; // [rsp+C8h] [rbp+7h] BYREF
  __int128 v45; // [rsp+D8h] [rbp+17h]
  __int16 v46; // [rsp+130h] [rbp+6Fh]

  v46 = a2;
  v33 = 0;
  v4 = 0LL;
  v32 = 0LL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  v42 = *a1;
  v8 = RtlpHpMetadataAlloc(40LL, 40LL, 0LL, &v42);
  if ( !v8 )
    return 0LL;
  *(_OWORD *)v8 = 0LL;
  v9 = 0;
  *(_OWORD *)(v8 + 16) = 0LL;
  *(_QWORD *)(v8 + 32) = 0LL;
  if ( (*((_DWORD *)a1 + 5) & 0x4000000) != 0 )
    v9 = 0x1FFFFF - ((a3 - 1) & 0x1FFFFF) < a3 >> 2;
  v10 = 0;
  if ( !v9 )
    goto LABEL_8;
  v11 = 0x200000LL;
  for ( i = a3 - ((a3 - 1) & 0x1FFFFF) + 0x1FFFFF; ; i = a3 + (unsigned int)(v10 << 12) )
  {
    v14 = *a1;
    v35 = i;
    v41 = v14;
    v39 = 0;
    if ( BYTE3(v14) )
      v38[0] = BYTE3(v14) - 1;
    else
      v38[0] = -1;
    v38[1] = BYTE1(v14);
    v38[2] = BYTE2(v14);
    if ( (v14 & 8) != 0 )
      v39 = 1;
    v40 = *((_QWORD *)&v41 + 1);
    v34 = i - (((_DWORD)i - 1) & 0xFFFFF) + 0xFFFFF;
    v15 = RtlpHpVaMgrCtxAlloc(&unk_140E68358, &v34, v11, v38);
    if ( !v15 )
      goto LABEL_27;
    v4 = v15;
    v35 = v34;
    v32 = v15;
    v44 = 0LL;
    v45 = 0LL;
    RtlpHpVaMgrCtxQuery((__int64)&unk_140E68358, v15, (__int64)&v44);
    *(_QWORD *)v45 = a1;
    *(_QWORD *)&v41 = (a3 + 4095) >> 12;
    v16 = (_QWORD)v41 << 12;
    v36 = (_QWORD)v41 << 12;
    if ( !(unsigned int)RtlpHpSegHeapCheckCommitLimit((_QWORD)v41 << 12, a1) )
      goto LABEL_27;
    v17 = 4096;
    if ( v9 )
    {
      v17 = 536875008;
      v36 = v16 - ((v16 - 1) & 0x1FFFFF) + 0x1FFFFF;
      v18 = a4 & 2;
    }
    else
    {
      v18 = a4 & 2;
      if ( (a4 & 2) != 0 )
        v17 = 1073745920;
    }
    v19 = (*((_DWORD *)a1 + 5) & 0x40000000) != 0;
    v43 = *a1;
    LODWORD(v30) = v19 ? 64 : 4;
    if ( (int)RtlpHpAllocVA((__int64 *)&v32, &v36, 0LL, v17, v30, (__int64 *)&v43) >= 0 )
      break;
    if ( !v9 )
    {
      v4 = v32;
LABEL_27:
      v7 = 0LL;
      v37 = *a1;
      RtlpHpMetadataFree(v8, &v37);
      goto LABEL_28;
    }
    v9 = 0;
    v37 = *a1;
    ((void (__fastcall *)(ULONG_PTR *, unsigned __int64 *, __int64, __int128 *, ULONG_PTR, __int64))RtlpHpFreeVA)(
      &v32,
      &v35,
      0x8000LL,
      &v37,
      v30,
      v31);
    v4 = 0LL;
    v32 = 0LL;
    v10 = 0;
LABEL_8:
    v13 = *(_QWORD *)a1 >> 8;
    if ( (unsigned __int8)v13 < 2u || (unsigned __int8)v13 >= 5u )
      v10 = 1;
    v11 = 0LL;
  }
  v21 = v32;
  if ( v9 && v18 )
    RtlHeapZero(v32, (a3 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
  v22 = v41;
  v23 = v34;
  _BitScanForward64(&v24, v34);
  v33 = v24;
  *(_QWORD *)(v8 + 24) = v21;
  *(_QWORD *)(v8 + 32) = (unsigned __int8)(4 * v24) ^ (*(_DWORD *)(v8 + 32) & 0xF01 | (2
                                                                                     * ((v22 << 11) | v10 & 0xFFFFFF81)));
  *(_WORD *)(v8 + 24) = ((_WORD)v22 << 12) - v46;
  v25 = RtlpHpLargeLockAcquire(a1);
  v26 = *((_QWORD *)a1 + 9);
  if ( (a1[5] & 1) != 0 && v26 )
    v26 ^= (unsigned __int64)a1 + 72;
  v27 = 0;
  if ( v26 )
  {
    while ( 1 )
    {
      if ( v21 >= (*(_QWORD *)(v26 + 24) & 0xFFFFFFFFFFFF0000uLL) )
      {
        v28 = *(_QWORD *)(v26 + 8);
        if ( (a1[5] & 1) != 0 )
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
        if ( (a1[5] & 1) != 0 )
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
  RtlRbInsertNodeEx((__int64 *)a1 + 9, v26, v27, v8);
  LOBYTE(v29) = v25;
  RtlpHpLargeLockRelease(a1, v29);
  _InterlockedAdd64((volatile signed __int64 *)a1 + 11, v23 / 4096);
  _InterlockedAdd64((volatile signed __int64 *)a1 + 12, v22);
  v7 = v32;
  v4 = 0LL;
  v32 = 0LL;
LABEL_28:
  if ( v4 )
  {
    v37 = *a1;
    ((void (__fastcall *)(ULONG_PTR *, unsigned __int64 *, __int64, __int128 *, ULONG_PTR, __int64))RtlpHpFreeVA)(
      &v32,
      &v35,
      0x8000LL,
      &v37,
      v30,
      v31);
  }
  return v7;
}
