/*
 * XREFs of RtlpHpLargeReAlloc @ 0x180093AA4
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x1800A2F84 (RtlpHpReAllocateHeap.c)
 *     RtlpHpReAllocateHeapSlow @ 0x18011C8F0 (RtlpHpReAllocateHeapSlow.c)
 * Callees:
 *     RtlpHpLargeAllocGetMetadata @ 0x1800477C0 (RtlpHpLargeAllocGetMetadata.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapLogRangeRelease @ 0x180055A44 (RtlpHeapLogRangeRelease.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVaMgrCtxFree @ 0x180092700 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpTlLogVAChange @ 0x180092B90 (RtlpHpTlLogVAChange.c)
 *     RtlpHpLargeLockAcquire @ 0x180093A88 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpReallocMove @ 0x180094540 (RtlpHpReallocMove.c)
 *     RtlpHpVaMgrCtxDecommit @ 0x180158008 (RtlpHpVaMgrCtxDecommit.c)
 *     ZwFreeVirtualMemory @ 0x180162050 (ZwFreeVirtualMemory.c)
 *     memmove @ 0x180167400 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpLargeReAlloc(__m128i *a1, volatile signed __int32 **a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned __int64 Metadata; // rax
  unsigned __int64 v13; // r13
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned __int8 *v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  volatile signed __int32 **v20; // rdx
  unsigned __int64 v21; // r12
  bool v22; // zf
  unsigned __int64 v23; // r8
  char v24; // r9
  int v25; // eax
  unsigned __int64 v26; // rax
  __int64 v27; // rbx
  unsigned __int64 v29; // xmm1_8
  unsigned __int64 v30; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v32; // [rsp+40h] [rbp-38h]
  __int16 v33; // [rsp+88h] [rbp+10h]
  __int64 v34; // [rsp+98h] [rbp+20h]
  unsigned __int64 v35; // [rsp+98h] [rbp+20h]

  v33 = (__int16)a2;
  v4 = 0LL;
  v6 = *(_QWORD *)(a4 + 32);
  v7 = (unsigned __int64)(*(_QWORD *)(a4 + 8) + 4095LL) >> 12;
  v10 = (v6 + 4095) >> 12;
  v32 = v10 << 12;
  if ( v10 << 12 >= v6 )
  {
    if ( v10 > v7
      || (v11 = a1->m128i_i64[0], BYTE1(a1->m128i_i64[0]) >= 2u) && (v11 & 6) == 0
      || (a1[1].m128i_i32[1] & 0x4000000) != 0 )
    {
      if ( ((unsigned int)a2 & 0x10000000) == 0 )
        return RtlpHpReallocMove(a1, a3, a4, (unsigned int)a2);
    }
    else
    {
      RtlpHpLargeLockAcquire((__int64)a1, a2, a3);
      Metadata = RtlpHpLargeAllocGetMetadata((__int64)a1, a3);
      v13 = Metadata;
      if ( Metadata )
      {
        v14 = ((*(_QWORD *)(Metadata + 32) >> 12) + ((*(_QWORD *)(Metadata + 32) >> 1) & 1LL)) << 12;
        v34 = (1LL << (((unsigned __int8)*(_QWORD *)(Metadata + 32) >> 2) & 0x3F))
            - (((1LL << (((unsigned __int8)*(_QWORD *)(Metadata + 32) >> 2) & 0x3F)) - 1) & ((1LL << (((unsigned __int8)*(_QWORD *)(Metadata + 32) >> 2) & 0x3F))
                                                                                           + v14
                                                                                           - 1))
            + v14
            - 1;
        *(_QWORD *)(Metadata + 32) = (v10 << 12) | *(_QWORD *)(Metadata + 32) & 0xFFFLL;
        *(_WORD *)(Metadata + 24) = ((_WORD)v10 << 12) - *(_WORD *)(a4 + 24);
        RtlReleaseSRWLockExclusive(a1[4].m128i_i64);
        if ( *(_DWORD *)(a4 + 16) )
        {
          v15 = a3 + *(_QWORD *)a4 + 16;
          if ( (v33 & 0x2000) == 0 )
            v15 = a3 + *(_QWORD *)a4;
          v16 = (unsigned __int8 *)((v15 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
          v17 = a3 + *(_QWORD *)(a4 + 24) + 16;
          if ( (v33 & 0x2000) == 0 )
            v17 = a3 + *(_QWORD *)(a4 + 24);
          memmove((void *)((v17 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v16, 16 * (v16[3] + 1LL));
        }
        if ( v10 < v7 )
        {
          v18 = v34 - ((a3 + ((v10 + ((*(_DWORD *)(v13 + 32) >> 1) & 1)) << 12) + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL);
          v31 = (a3 + ((v10 + ((*(_DWORD *)(v13 + 32) >> 1) & 1)) << 12) + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
          v30 = v18 + a3;
          if ( v18 + a3 )
          {
            RtlpHpVaMgrCtxFree((__int64)&unk_1801CE978, &v31, (__int64 *)&v30);
            if ( (RtlpHpHeapFeatures & 8) != 0 )
              RtlpHpTlLogVAChange(0x8000, v30, v31, 0LL);
          }
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v19 = (__int64)NtCurrentPeb()->SharedData + 558;
          else
            v19 = 2147353480LL;
          if ( *(_BYTE *)v19 )
            RtlpHeapLogRangeRelease((__int64)a1, v31, v30);
          v20 = (volatile signed __int32 **)(a3 + v32);
          v21 = v30 >> 12;
          v23 = v31 - (a3 + v32);
          v22 = v31 == a3 + v32;
          v35 = v34 - v30;
          v30 = v23;
          v31 = a3 + v32;
          if ( !v22 )
          {
            v24 = _mm_cvtsi128_si32(_mm_srli_si128(*a1, 1));
            if ( (unsigned __int8)(v24 - 2) <= 2u )
            {
              RtlpHpVaMgrCtxDecommit(&unk_1801CE978, v20, v23);
            }
            else
            {
              if ( v24 == 5 )
              {
                v29 = _mm_srli_si128(*a1, 8).m128i_u64[0];
                v25 = ((__int64 (__fastcall *)(unsigned __int64, __int64, unsigned __int64 *, unsigned __int64 *, int))(*(_QWORD *)(v29 + 16) ^ v29 ^ RtlpHpHeapGlobals))(
                        RtlpHpHeapGlobals ^ *(_QWORD *)v29 ^ v29,
                        -1LL,
                        &v31,
                        &v30,
                        0x4000);
              }
              else
              {
                v25 = ZwFreeVirtualMemory(-1LL, &v31, &v30, 0x4000LL);
              }
              LODWORD(v4) = v25;
            }
            if ( (RtlpHpHeapFeatures & 8) != 0 )
              RtlpHpTlLogVAChange(0x4000, v30, v31, (unsigned int)v4);
          }
          _BitScanForward64(&v26, v35);
          v27 = (unsigned int)v26;
          if ( (unsigned int)v26 != (unsigned __int64)((*(_DWORD *)(v13 + 32) >> 2) & 0x3F) )
          {
            RtlpHpLargeLockAcquire((__int64)a1, v20, v23);
            *(_QWORD *)(v13 + 32) = (4 * v27) ^ (*(_QWORD *)(v13 + 32) ^ (4 * v27)) & 0xFFFFFFFFFFFFFF03uLL;
            RtlReleaseSRWLockExclusive(a1[4].m128i_i64);
          }
          _InterlockedAdd64(a1[6].m128i_i64, v10 - v7);
          _InterlockedAdd64(&a1[5].m128i_i64[1], -(__int64)v21);
        }
        return a3;
      }
      else
      {
        RtlReleaseSRWLockExclusive(a1[4].m128i_i64);
        return -1LL;
      }
    }
  }
  return v4;
}
