/*
 * XREFs of RtlpHpLargeAlloc @ 0x18009A714
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x18003D230 (RtlpHpMetadataAlloc.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlpHpSegReAlloc @ 0x18005CF10 (RtlpHpSegReAlloc.c)
 *     RtlpHpTagAllocateHeap @ 0x180083CE0 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpReallocMove @ 0x18009EFF0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeapSlow @ 0x18009FA50 (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x18003D230 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x180064B08 (RtlpHpMetadataFree.c)
 *     RtlRbInsertNodeEx @ 0x18006AA90 (RtlRbInsertNodeEx.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x18009A690 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHpHeapValidateProtection @ 0x18009C520 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpAllocVA @ 0x18009CD20 (RtlpHpAllocVA.c)
 *     RtlpHpVaMgrCtxFree @ 0x18009D290 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpTlLogVAChange @ 0x18009D720 (RtlpHpTlLogVAChange.c)
 *     RtlpHpVaMgrCtxQuery @ 0x18009E33C (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpLargeLockAcquire @ 0x18009EEEC (RtlpHpLargeLockAcquire.c)
 *     RtlpHeapLogRangeReserve @ 0x180111834 (RtlpHeapLogRangeReserve.c)
 *     RtlHeapZero @ 0x1801653C0 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpLargeAlloc(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 v6; // rax
  __int64 v7; // r14
  BOOL v8; // edi
  unsigned int v9; // r12d
  __int64 v10; // rax
  int v11; // esi
  __int64 v12; // rcx
  __int128 v13; // xmm0
  __int64 v14; // r9
  __int64 v15; // r8
  int v16; // eax
  ULONG v17; // eax
  unsigned __int64 v18; // rsi
  int v19; // r13d
  int v20; // esi
  __int64 v21; // r9
  __int64 v22; // r8
  bool v23; // cf
  ULONG v24; // eax
  __int64 v25; // rdi
  __int64 v26; // r8
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  _RTL_RB_TREE *v31; // rcx
  unsigned __int64 v32; // rdx
  BOOLEAN v33; // al
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  bool v37; // zf
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  int v40[2]; // [rsp+38h] [rbp-49h] BYREF
  int v41[2]; // [rsp+40h] [rbp-41h] BYREF
  unsigned __int64 v42; // [rsp+48h] [rbp-39h]
  int v43[2]; // [rsp+50h] [rbp-31h] BYREF
  ULONG_PTR v44[2]; // [rsp+58h] [rbp-29h] BYREF
  __int128 v45; // [rsp+68h] [rbp-19h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+78h] [rbp-9h] BYREF
  __int128 v47; // [rsp+88h] [rbp+7h] BYREF
  __int128 v48; // [rsp+98h] [rbp+17h]
  __int16 v49; // [rsp+F0h] [rbp+6Fh]

  v49 = a2;
  *(_QWORD *)v41 = 0LL;
  LODWORD(v42) = 0;
  *(_QWORD *)v40 = 0LL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  v45 = *(_OWORD *)a1;
  v6 = RtlpHpMetadataAlloc(0x28uLL, 0x28uLL, 0, &v45);
  v7 = v6;
  if ( !v6 )
  {
    v25 = 0LL;
    goto LABEL_17;
  }
  *(_OWORD *)v6 = 0LL;
  v8 = 0;
  *(_OWORD *)(v6 + 16) = 0LL;
  *(_QWORD *)(v6 + 32) = 0LL;
  if ( (*(_DWORD *)(a1 + 20) & 0x4000000) != 0 )
    v8 = 0x1FFFFF - ((a3 - 1) & 0x1FFFFF) < a3 >> 2;
  v9 = 0;
  if ( v8 )
  {
    v11 = 0x200000;
    v12 = a3 - ((a3 - 1) & 0x1FFFFF) + 0x1FFFFF;
    goto LABEL_9;
  }
  while ( 1 )
  {
    v10 = *(_QWORD *)a1 >> 8;
    if ( (unsigned __int8)v10 < 2u || (unsigned __int8)v10 >= 5u )
      v9 = 1;
    v11 = 0;
    v12 = a3 + (v9 << 12);
LABEL_9:
    v13 = *(_OWORD *)a1;
    v14 = *(_QWORD *)(a1 + 8);
    v15 = (unsigned __int8)BYTE1(*(_QWORD *)a1);
    v16 = *(_DWORD *)(a1 + 20) & 0x40000000;
    *(_QWORD *)v41 = v12;
    *(_OWORD *)RegionSize = v13;
    v17 = RtlpHpHeapValidateProtection(a1, v16 != 0 ? 64 : 4, v15, v14);
    if ( (int)RtlpHpAllocVA((int)v40, (int)v41, v11, 0x2000, v17, (ULONG_PTR)RegionSize) < 0
      || (v47 = 0LL,
          v48 = 0LL,
          RtlpHpVaMgrCtxQuery(&unk_1801CD968, *(_QWORD *)v40, &v47),
          *(_QWORD *)v48 = a1,
          v42 = (a3 + 4095) >> 12,
          v18 = v42 << 12,
          *(_QWORD *)v43 = v42 << 12,
          !(unsigned int)RtlpHpSegHeapCheckCommitLimit(v42 << 12, a1)) )
    {
LABEL_16:
      v25 = 0LL;
      *(_OWORD *)v44 = *(_OWORD *)a1;
      RtlpHpMetadataFree(v7, v44);
      goto LABEL_17;
    }
    v19 = 4096;
    if ( v8 )
    {
      v19 = 536875008;
      *(_QWORD *)v43 = v18 - ((v18 - 1) & 0x1FFFFF) + 0x1FFFFF;
      v20 = a4 & 2;
    }
    else
    {
      v20 = a4 & 2;
      if ( (a4 & 2) != 0 )
        v19 = 1073745920;
    }
    v21 = *(_QWORD *)(a1 + 8);
    v22 = (unsigned __int8)BYTE1(*(_QWORD *)a1);
    v23 = (*(_DWORD *)(a1 + 20) & 0x40000000) != 0;
    *(_OWORD *)v44 = *(_OWORD *)a1;
    v24 = RtlpHpHeapValidateProtection(a1, v23 ? 64 : 4, v22, v21);
    if ( (int)RtlpHpAllocVA((int)v40, (int)v43, 0, v19, v24, (ULONG_PTR)v44) >= 0 )
      break;
    if ( !v8 )
      goto LABEL_16;
    v8 = 0;
    v38 = (*(_QWORD *)v40 + 0xFFFFFLL) & 0xFFFFFFFFFFF00000uLL;
    v39 = *(_QWORD *)v40 + *(_QWORD *)v41 - v38;
    v37 = *(_QWORD *)v40 + *(_QWORD *)v41 == v38;
    *(_QWORD *)v40 = v38;
    *(_QWORD *)v41 = v39;
    if ( !v37 )
    {
      RtlpHpVaMgrCtxFree(&unk_1801CD968, v40, v41);
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogVAChange(0x8000LL, *(_QWORD *)v41, *(_QWORD *)v40, 0LL);
    }
    *(_QWORD *)v40 = 0LL;
    v9 = 0;
  }
  if ( v8 && v20 )
    RtlHeapZero(*(_QWORD *)v40, (a3 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
  v28 = v42;
  *(_QWORD *)(v7 + 24) = *(_QWORD *)v40;
  v29 = *(_DWORD *)(v7 + 32) & 0xFFD | (2 * (v9 | (v28 << 11)));
  *(_QWORD *)(v7 + 32) = v29;
  _BitScanForward64(&v30, *(unsigned __int64 *)v41);
  LODWORD(v42) = v30;
  *(_QWORD *)(v7 + 32) = (4 * v30) ^ (v29 ^ (4 * v30)) & 0xFFFFFFFFFFFFFF03uLL;
  *(_WORD *)(v7 + 24) = ((_WORD)v28 << 12) - v49;
  RtlpHpLargeLockAcquire(a1);
  v31 = (_RTL_RB_TREE *)(a1 + 72);
  v32 = *(_QWORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v32 )
    v32 ^= (unsigned __int64)v31;
  v33 = 0;
  if ( v32 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)v40 < (*(_QWORD *)(v32 + 24) & 0xFFFFFFFFFFFF0000uLL) )
      {
        v34 = *(_QWORD *)v32;
        if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
        {
          if ( !v34 )
            goto LABEL_41;
          v34 ^= v32;
        }
        if ( !v34 )
        {
LABEL_41:
          v33 = 0;
          break;
        }
      }
      else
      {
        v34 = *(_QWORD *)(v32 + 8);
        if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
        {
          if ( !v34 )
          {
LABEL_25:
            v33 = 1;
            break;
          }
          v34 ^= v32;
        }
        if ( !v34 )
          goto LABEL_25;
      }
      v32 = v34;
    }
  }
  RtlRbInsertNodeEx(v31, (PRTL_BALANCED_NODE)v32, v33, (PRTL_BALANCED_NODE)v7);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), *(_QWORD *)v41 / 4096LL);
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 96), v28);
  v25 = *(_QWORD *)v40;
  *(_QWORD *)v40 = 0LL;
  if ( RtlGetCurrentServiceSessionId() )
    v35 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v35 = 2147353480LL;
  if ( *(_BYTE *)v35 )
  {
    RtlpHeapLogRangeReserve(a1, v25, *(_QWORD *)v41);
LABEL_17:
    v26 = *(_QWORD *)v40;
    if ( *(_QWORD *)v40 )
    {
      v36 = (*(_QWORD *)v40 + 0xFFFFFLL) & 0xFFFFFFFFFFF00000uLL;
      v37 = *(_QWORD *)v40 + *(_QWORD *)v41 == v36;
      *(_QWORD *)v40 = v36;
      *(_QWORD *)v41 = v26 + *(_QWORD *)v41 - v36;
      if ( !v37 )
      {
        RtlpHpVaMgrCtxFree(&unk_1801CD968, v40, v41);
        if ( (RtlpHpHeapFeatures & 8) != 0 )
          RtlpHpTlLogVAChange(0x8000LL, *(_QWORD *)v41, *(_QWORD *)v40, 0LL);
      }
    }
  }
  return v25;
}
