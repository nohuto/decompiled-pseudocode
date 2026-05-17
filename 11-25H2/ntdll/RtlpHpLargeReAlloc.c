/*
 * XREFs of RtlpHpLargeReAlloc @ 0x1800BCCC4
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x18002BF34 (RtlpHpReAllocateHeap.c)
 *     RtlpHpReAllocateHeapSlow @ 0x18011E180 (RtlpHpReAllocateHeapSlow.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapLogRangeRelease @ 0x180011684 (RtlpHeapLogRangeRelease.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpReallocMove @ 0x18002C3C0 (RtlpHpReallocMove.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x18009B4A0 (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpVaMgrCtxFree @ 0x1800BBA80 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpTlLogVAChange @ 0x1800BBF10 (RtlpHpTlLogVAChange.c)
 *     RtlpHpLargeLockAcquire @ 0x1800BD0C8 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpVaMgrCtxDecommit @ 0x1801595B8 (RtlpHpVaMgrCtxDecommit.c)
 *     ZwFreeVirtualMemory @ 0x1801635E0 (ZwFreeVirtualMemory.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpLargeReAlloc(__m128i *a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
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
  unsigned __int64 v20; // r12
  bool v21; // zf
  unsigned __int64 v22; // r8
  char v23; // r9
  int v24; // eax
  unsigned __int64 v25; // rax
  __int64 v26; // rbx
  unsigned __int64 v28; // xmm1_8
  unsigned __int64 v29; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v31; // [rsp+40h] [rbp-38h]
  __int16 v32; // [rsp+88h] [rbp+10h]
  __int64 v33; // [rsp+98h] [rbp+20h]
  unsigned __int64 v34; // [rsp+98h] [rbp+20h]

  v32 = a2;
  v4 = 0LL;
  v6 = *(_QWORD *)(a4 + 32);
  v7 = (unsigned __int64)(*(_QWORD *)(a4 + 8) + 4095LL) >> 12;
  v10 = (v6 + 4095) >> 12;
  v31 = v10 << 12;
  if ( v10 << 12 >= v6 )
  {
    if ( v10 > v7
      || (v11 = a1->m128i_i64[0], BYTE1(a1->m128i_i64[0]) >= 2u) && (v11 & 6) == 0
      || (a1[1].m128i_i32[1] & 0x4000000) != 0 )
    {
      if ( (a2 & 0x10000000) == 0 )
        return RtlpHpReallocMove((__int64)a1, a3, a4, a2);
    }
    else
    {
      RtlpHpLargeLockAcquire(a1);
      Metadata = RtlpHpLargeAllocGetMetadata((__int64)a1, a3);
      v13 = Metadata;
      if ( Metadata )
      {
        v14 = ((*(_QWORD *)(Metadata + 32) >> 12) + ((*(_QWORD *)(Metadata + 32) >> 1) & 1LL)) << 12;
        v33 = (1LL << (((unsigned __int8)*(_QWORD *)(Metadata + 32) >> 2) & 0x3F))
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
          if ( (v32 & 0x2000) == 0 )
            v15 = a3 + *(_QWORD *)a4;
          v16 = (unsigned __int8 *)((v15 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
          v17 = a3 + *(_QWORD *)(a4 + 24) + 16;
          if ( (v32 & 0x2000) == 0 )
            v17 = a3 + *(_QWORD *)(a4 + 24);
          memmove((void *)((v17 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v16, 16 * (v16[3] + 1LL));
        }
        if ( v10 < v7 )
        {
          v18 = v33 - ((a3 + ((v10 + ((*(_DWORD *)(v13 + 32) >> 1) & 1)) << 12) + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL);
          v30 = (a3 + ((v10 + ((*(_DWORD *)(v13 + 32) >> 1) & 1)) << 12) + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
          v29 = v18 + a3;
          if ( v18 + a3 )
          {
            RtlpHpVaMgrCtxFree((__int64)&unk_1801D09C8, &v30, (__int64 *)&v29);
            if ( (RtlpHpHeapFeatures & 8) != 0 )
              RtlpHpTlLogVAChange(0x8000, v29, v30, 0LL);
          }
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v19 = (__int64)NtCurrentPeb()->SharedData + 558;
          else
            v19 = 2147353480LL;
          if ( *(_BYTE *)v19 )
            RtlpHeapLogRangeRelease((__int64)a1, v30, v29);
          v20 = v29 >> 12;
          v22 = v30 - (a3 + v31);
          v21 = v30 == a3 + v31;
          v34 = v33 - v29;
          v29 = v22;
          v30 = a3 + v31;
          if ( !v21 )
          {
            v23 = _mm_cvtsi128_si32(_mm_srli_si128(*a1, 1));
            if ( (unsigned __int8)(v23 - 2) <= 2u )
            {
              RtlpHpVaMgrCtxDecommit(&unk_1801D09C8, a3 + v31, v22);
            }
            else
            {
              if ( v23 == 5 )
              {
                v28 = _mm_srli_si128(*a1, 8).m128i_u64[0];
                v24 = ((__int64 (__fastcall *)(unsigned __int64, __int64, unsigned __int64 *, unsigned __int64 *, int))(*(_QWORD *)(v28 + 16) ^ v28 ^ RtlpHpHeapGlobals))(
                        RtlpHpHeapGlobals ^ *(_QWORD *)v28 ^ v28,
                        -1LL,
                        &v30,
                        &v29,
                        0x4000);
              }
              else
              {
                v24 = ZwFreeVirtualMemory(-1LL, &v30, &v29, 0x4000LL);
              }
              LODWORD(v4) = v24;
            }
            if ( (RtlpHpHeapFeatures & 8) != 0 )
              RtlpHpTlLogVAChange(0x4000, v29, v30, (unsigned int)v4);
          }
          _BitScanForward64(&v25, v34);
          v26 = (unsigned int)v25;
          if ( (unsigned int)v25 != (unsigned __int64)((*(_DWORD *)(v13 + 32) >> 2) & 0x3F) )
          {
            RtlpHpLargeLockAcquire(a1);
            *(_QWORD *)(v13 + 32) = (4 * v26) ^ (*(_QWORD *)(v13 + 32) ^ (4 * v26)) & 0xFFFFFFFFFFFFFF03uLL;
            RtlReleaseSRWLockExclusive(a1[4].m128i_i64);
          }
          _InterlockedAdd64(a1[6].m128i_i64, v10 - v7);
          _InterlockedAdd64(&a1[5].m128i_i64[1], -(__int64)v20);
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
