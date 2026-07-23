/*
 * XREFs of RtlpHpLargeAlloc @ 0x1800BD0E4
 * Callers:
 *     RtlpHpReallocMove @ 0x18002C3C0 (RtlpHpReallocMove.c)
 *     RtlpHpTagAllocateHeap @ 0x18002E060 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x18002F040 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpMetadataAlloc @ 0x18004F990 (RtlpHpMetadataAlloc.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x18000AB68 (RtlpHpMetadataFree.c)
 *     RtlRbInsertNodeEx @ 0x180010AF0 (RtlRbInsertNodeEx.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpMetadataAlloc @ 0x18004F990 (RtlpHpMetadataAlloc.c)
 *     RtlpHpHeapValidateProtection @ 0x1800BAD10 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpAllocVA @ 0x1800BB510 (RtlpHpAllocVA.c)
 *     RtlpHpVaMgrCtxFree @ 0x1800BBA80 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpTlLogVAChange @ 0x1800BBF10 (RtlpHpTlLogVAChange.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1800BCB2C (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpLargeLockAcquire @ 0x1800BD0C8 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x1800BD610 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHeapLogRangeReserve @ 0x1801197F0 (RtlpHeapLogRangeReserve.c)
 *     RtlHeapZero @ 0x180168590 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpLargeAlloc(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r14
  BOOL v8; // edi
  unsigned int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int128 v13; // xmm0
  int v14; // eax
  ULONG v15; // eax
  unsigned __int64 v16; // rsi
  unsigned int v17; // r13d
  int v18; // esi
  bool v19; // cf
  ULONG v20; // eax
  __int64 v21; // rdi
  __int64 v22; // r8
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  _RTL_RB_TREE *v27; // rcx
  unsigned __int64 v28; // rdx
  BOOLEAN v29; // al
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  bool v33; // zf
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  int v36[2]; // [rsp+38h] [rbp-49h] BYREF
  int v37[2]; // [rsp+40h] [rbp-41h] BYREF
  unsigned __int64 v38; // [rsp+48h] [rbp-39h]
  int v39[2]; // [rsp+50h] [rbp-31h] BYREF
  ULONG_PTR v40[2]; // [rsp+58h] [rbp-29h] BYREF
  __int128 v41; // [rsp+68h] [rbp-19h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+78h] [rbp-9h] BYREF
  __int128 v43; // [rsp+88h] [rbp+7h] BYREF
  __int128 v44; // [rsp+98h] [rbp+17h]
  __int16 v45; // [rsp+F0h] [rbp+6Fh]

  v45 = a2;
  *(_QWORD *)v37 = 0LL;
  LODWORD(v38) = 0;
  *(_QWORD *)v36 = 0LL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  v41 = *(_OWORD *)a1;
  v6 = RtlpHpMetadataAlloc(0x28uLL, 0x28uLL, 0, &v41);
  v7 = v6;
  if ( !v6 )
  {
    v21 = 0LL;
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
    v11 = 0x200000LL;
    v12 = a3 - ((a3 - 1) & 0x1FFFFF) + 0x1FFFFF;
    goto LABEL_9;
  }
  while ( 1 )
  {
    v10 = *(_QWORD *)a1 >> 8;
    if ( (unsigned __int8)v10 < 2u || (unsigned __int8)v10 >= 5u )
      v9 = 1;
    v11 = 0LL;
    v12 = a3 + (v9 << 12);
LABEL_9:
    v13 = *(_OWORD *)a1;
    v14 = *(_DWORD *)(a1 + 20) & 0x40000000;
    *(_QWORD *)v37 = v12;
    *(_OWORD *)RegionSize = v13;
    v15 = RtlpHpHeapValidateProtection((void *)a1, v14 != 0 ? 64 : 4);
    if ( (int)RtlpHpAllocVA((PVOID *)v36, (__m128i **)v37, v11, 0x2000u, v15, (__m128i *)RegionSize) < 0
      || (v43 = 0LL,
          v44 = 0LL,
          RtlpHpVaMgrCtxQuery((__int64)&unk_1801D09C8, *(__int64 *)v36, (__int64)&v43),
          *(_QWORD *)v44 = a1,
          v38 = (a3 + 4095) >> 12,
          v16 = v38 << 12,
          *(_QWORD *)v39 = v38 << 12,
          !(unsigned int)RtlpHpSegHeapCheckCommitLimit(v38 << 12, a1)) )
    {
LABEL_16:
      v21 = 0LL;
      *(_OWORD *)v40 = *(_OWORD *)a1;
      RtlpHpMetadataFree(v7, v40);
      goto LABEL_17;
    }
    v17 = 4096;
    if ( v8 )
    {
      v17 = 536875008;
      *(_QWORD *)v39 = v16 - ((v16 - 1) & 0x1FFFFF) + 0x1FFFFF;
      v18 = a4 & 2;
    }
    else
    {
      v18 = a4 & 2;
      if ( (a4 & 2) != 0 )
        v17 = 1073745920;
    }
    v19 = (*(_DWORD *)(a1 + 20) & 0x40000000) != 0;
    *(_OWORD *)v40 = *(_OWORD *)a1;
    v20 = RtlpHpHeapValidateProtection((void *)a1, v19 ? 64 : 4);
    if ( (int)RtlpHpAllocVA((PVOID *)v36, (__m128i **)v39, 0LL, v17, v20, (__m128i *)v40) >= 0 )
      break;
    if ( !v8 )
      goto LABEL_16;
    v8 = 0;
    v34 = (*(_QWORD *)v36 + 0xFFFFFLL) & 0xFFFFFFFFFFF00000uLL;
    v35 = *(_QWORD *)v36 + *(_QWORD *)v37 - v34;
    v33 = *(_QWORD *)v36 + *(_QWORD *)v37 == v34;
    *(_QWORD *)v36 = v34;
    *(_QWORD *)v37 = v35;
    if ( !v33 )
    {
      RtlpHpVaMgrCtxFree((__int64)&unk_1801D09C8, (PVOID *)v36, (ULONG_PTR *)v37);
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogVAChange(0x8000, *(__int64 *)v37, *(__int64 *)v36, 0LL);
    }
    *(_QWORD *)v36 = 0LL;
    v9 = 0;
  }
  if ( v8 && v18 )
    RtlHeapZero(*(_QWORD *)v36, (a3 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
  v24 = v38;
  *(_QWORD *)(v7 + 24) = *(_QWORD *)v36;
  v25 = *(_DWORD *)(v7 + 32) & 0xFFD | (2 * (v9 | (v24 << 11)));
  *(_QWORD *)(v7 + 32) = v25;
  _BitScanForward64(&v26, *(unsigned __int64 *)v37);
  LODWORD(v38) = v26;
  *(_QWORD *)(v7 + 32) = (4 * v26) ^ (v25 ^ (4 * v26)) & 0xFFFFFFFFFFFFFF03uLL;
  *(_WORD *)(v7 + 24) = ((_WORD)v24 << 12) - v45;
  RtlpHpLargeLockAcquire((_RTL_SRWLOCK *)a1);
  v27 = (_RTL_RB_TREE *)(a1 + 72);
  v28 = *(_QWORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v28 )
    v28 ^= (unsigned __int64)v27;
  v29 = 0;
  if ( v28 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)v36 < (*(_QWORD *)(v28 + 24) & 0xFFFFFFFFFFFF0000uLL) )
      {
        v30 = *(_QWORD *)v28;
        if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
        {
          if ( !v30 )
            goto LABEL_41;
          v30 ^= v28;
        }
        if ( !v30 )
        {
LABEL_41:
          v29 = 0;
          break;
        }
      }
      else
      {
        v30 = *(_QWORD *)(v28 + 8);
        if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
        {
          if ( !v30 )
          {
LABEL_25:
            v29 = 1;
            break;
          }
          v30 ^= v28;
        }
        if ( !v30 )
          goto LABEL_25;
      }
      v28 = v30;
    }
  }
  RtlRbInsertNodeEx(v27, (PRTL_BALANCED_NODE)v28, v29, (PRTL_BALANCED_NODE)v7);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), *(_QWORD *)v37 / 4096LL);
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 96), v24);
  v21 = *(_QWORD *)v36;
  *(_QWORD *)v36 = 0LL;
  if ( RtlGetCurrentServiceSessionId() )
    v31 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v31 = 2147353480LL;
  if ( *(_BYTE *)v31 )
  {
    RtlpHeapLogRangeReserve(a1, v21, *(_QWORD *)v37);
LABEL_17:
    v22 = *(_QWORD *)v36;
    if ( *(_QWORD *)v36 )
    {
      v32 = (*(_QWORD *)v36 + 0xFFFFFLL) & 0xFFFFFFFFFFF00000uLL;
      v33 = *(_QWORD *)v36 + *(_QWORD *)v37 == v32;
      *(_QWORD *)v36 = v32;
      *(_QWORD *)v37 = v22 + *(_QWORD *)v37 - v32;
      if ( !v33 )
      {
        RtlpHpVaMgrCtxFree((__int64)&unk_1801D09C8, (PVOID *)v36, (ULONG_PTR *)v37);
        if ( (RtlpHpHeapFeatures & 8) != 0 )
          RtlpHpTlLogVAChange(0x8000, *(__int64 *)v37, *(__int64 *)v36, 0LL);
      }
    }
  }
  return v21;
}
