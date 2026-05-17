/*
 * XREFs of RtlpHpLargeAlloc @ 0x180093F08
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x180010830 (RtlpHpMetadataAlloc.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlpHpReallocMove @ 0x180094540 (RtlpHpReallocMove.c)
 *     RtlpHpTagAllocateHeap @ 0x180094EF0 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpSegReAlloc @ 0x1800A3160 (RtlpHpSegReAlloc.c)
 *     RtlpHpAllocateHeapSlow @ 0x1800ACEF0 (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x180010830 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x18004EF28 (RtlpHpMetadataFree.c)
 *     RtlRbInsertNodeEx @ 0x180054EB0 (RtlRbInsertNodeEx.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpHeapValidateProtection @ 0x180091990 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpAllocVA @ 0x180092190 (RtlpHpAllocVA.c)
 *     RtlpHpVaMgrCtxFree @ 0x180092700 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpTlLogVAChange @ 0x180092B90 (RtlpHpTlLogVAChange.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1800937AC (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpLargeLockAcquire @ 0x180093A88 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x180094430 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHeapLogRangeReserve @ 0x180116600 (RtlpHeapLogRangeReserve.c)
 *     RtlHeapZero @ 0x180167000 (RtlHeapZero.c)
 */

unsigned __int64 __fastcall RtlpHpLargeAlloc(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  BOOL v8; // edi
  unsigned int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // rsi
  __m128i *v12; // rcx
  __m128i v13; // xmm0
  int v14; // eax
  unsigned int v15; // eax
  unsigned __int64 v16; // rsi
  unsigned int v17; // r13d
  int v18; // esi
  bool v19; // cf
  unsigned int v20; // eax
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // r8
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  bool v30; // al
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  __m128i *v33; // rax
  bool v34; // zf
  __m128i *v35; // rcx
  __m128i *v36; // rdx
  unsigned __int64 v37; // [rsp+38h] [rbp-49h] BYREF
  __int64 v38; // [rsp+40h] [rbp-41h] BYREF
  unsigned __int64 v39; // [rsp+48h] [rbp-39h]
  __m128i *v40; // [rsp+50h] [rbp-31h] BYREF
  __m128i v41; // [rsp+58h] [rbp-29h] BYREF
  __m128i v42; // [rsp+68h] [rbp-19h] BYREF
  __m128i v43; // [rsp+78h] [rbp-9h] BYREF
  __int128 v44; // [rsp+88h] [rbp+7h] BYREF
  __int128 v45; // [rsp+98h] [rbp+17h]
  __int16 v46; // [rsp+F0h] [rbp+6Fh]

  v46 = a2;
  v38 = 0LL;
  LODWORD(v39) = 0;
  v37 = 0LL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  v42 = *(__m128i *)a1;
  v6 = RtlpHpMetadataAlloc(0x28uLL, 0x28uLL, 0, (__int128 *)v42.m128i_i8);
  v7 = v6;
  if ( !v6 )
  {
    v22 = 0LL;
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
    v12 = (__m128i *)(a3 - ((a3 - 1) & 0x1FFFFF) + 0x1FFFFF);
    goto LABEL_9;
  }
  while ( 1 )
  {
    v10 = *(_QWORD *)a1 >> 8;
    if ( (unsigned __int8)v10 < 2u || (unsigned __int8)v10 >= 5u )
      v9 = 1;
    v11 = 0LL;
    v12 = (__m128i *)(a3 + (v9 << 12));
LABEL_9:
    v13 = *(__m128i *)a1;
    v14 = *(_DWORD *)(a1 + 20) & 0x40000000;
    v38 = (__int64)v12;
    v43 = v13;
    v15 = RtlpHpHeapValidateProtection(a1, v14 != 0 ? 64 : 4);
    if ( (int)RtlpHpAllocVA((__int64 *)&v37, (__m128i **)&v38, v11, 0x2000u, v15, &v43) < 0
      || (v44 = 0LL,
          v45 = 0LL,
          RtlpHpVaMgrCtxQuery((__int64)&unk_1801CE978, v37, (__int64)&v44),
          *(_QWORD *)v45 = a1,
          v39 = (a3 + 4095) >> 12,
          v16 = v39 << 12,
          v40 = (__m128i *)(v39 << 12),
          !(unsigned int)RtlpHpSegHeapCheckCommitLimit(v39 << 12, a1)) )
    {
LABEL_16:
      v22 = 0LL;
      v41 = *(__m128i *)a1;
      RtlpHpMetadataFree(v7, &v41);
      goto LABEL_17;
    }
    v17 = 4096;
    if ( v8 )
    {
      v17 = 536875008;
      v40 = (__m128i *)(v16 - ((v16 - 1) & 0x1FFFFF) + 0x1FFFFF);
      v18 = a4 & 2;
    }
    else
    {
      v18 = a4 & 2;
      if ( (a4 & 2) != 0 )
        v17 = 1073745920;
    }
    v19 = (*(_DWORD *)(a1 + 20) & 0x40000000) != 0;
    v41 = *(__m128i *)a1;
    v20 = RtlpHpHeapValidateProtection(a1, v19 ? 64 : 4);
    if ( (int)RtlpHpAllocVA((__int64 *)&v37, &v40, 0LL, v17, v20, &v41) >= 0 )
      break;
    if ( !v8 )
      goto LABEL_16;
    v8 = 0;
    v35 = (__m128i *)((v37 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL);
    v36 = (__m128i *)(v37 + v38 - (_QWORD)v35);
    v34 = v37 + v38 == (_QWORD)v35;
    v37 = (unsigned __int64)v35;
    v38 = (__int64)v36;
    if ( !v34 )
    {
      RtlpHpVaMgrCtxFree((__int64)&unk_1801CE978, &v37, &v38);
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogVAChange(0x8000, v38, v37, 0LL);
    }
    v37 = 0LL;
    v9 = 0;
  }
  if ( v8 && v18 )
    RtlHeapZero(v37, (a3 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
  v25 = v39;
  *(_QWORD *)(v7 + 24) = v37;
  v26 = *(_DWORD *)(v7 + 32) & 0xFFD | (2 * (v9 | (v25 << 11)));
  *(_QWORD *)(v7 + 32) = v26;
  _BitScanForward64(&v27, v38);
  LODWORD(v39) = v27;
  *(_QWORD *)(v7 + 32) = (4 * v27) ^ (v26 ^ (4 * v27)) & 0xFFFFFFFFFFFFFF03uLL;
  *(_WORD *)(v7 + 24) = ((_WORD)v25 << 12) - v46;
  RtlpHpLargeLockAcquire(a1, (volatile signed __int32 **)v26, v21);
  v28 = a1 + 72;
  v29 = *(_QWORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v29 )
    v29 ^= v28;
  v30 = 0;
  if ( v29 )
  {
    while ( 1 )
    {
      if ( v37 < (*(_QWORD *)(v29 + 24) & 0xFFFFFFFFFFFF0000uLL) )
      {
        v31 = *(_QWORD *)v29;
        if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
        {
          if ( !v31 )
            goto LABEL_41;
          v31 ^= v29;
        }
        if ( !v31 )
        {
LABEL_41:
          v30 = 0;
          break;
        }
      }
      else
      {
        v31 = *(_QWORD *)(v29 + 8);
        if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
        {
          if ( !v31 )
          {
LABEL_25:
            v30 = 1;
            break;
          }
          v31 ^= v29;
        }
        if ( !v31 )
          goto LABEL_25;
      }
      v29 = v31;
    }
  }
  RtlRbInsertNodeEx(v28, v29, v30, v7);
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), v38 / 4096);
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 96), v25);
  v22 = v37;
  v37 = 0LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v32 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v32 = 2147353480LL;
  if ( *(_BYTE *)v32 )
  {
    RtlpHeapLogRangeReserve(a1, v22, v38);
LABEL_17:
    v23 = v37;
    if ( v37 )
    {
      v33 = (__m128i *)((v37 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL);
      v34 = v37 + v38 == (_QWORD)v33;
      v37 = (unsigned __int64)v33;
      v38 = v23 + v38 - (_QWORD)v33;
      if ( !v34 )
      {
        RtlpHpVaMgrCtxFree((__int64)&unk_1801CE978, &v37, &v38);
        if ( (RtlpHpHeapFeatures & 8) != 0 )
          RtlpHpTlLogVAChange(0x8000, v38, v37, 0LL);
      }
    }
  }
  return v22;
}
