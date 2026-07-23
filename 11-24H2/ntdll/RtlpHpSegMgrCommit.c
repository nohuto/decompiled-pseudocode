/*
 * XREFs of RtlpHpSegMgrCommit @ 0x18009C5B0
 * Callers:
 *     RtlpHpSegMgrRelease @ 0x18006B47C (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegPageRangeCommit @ 0x18006C560 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegMgrAllocate @ 0x18009C1EC (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpHpEnvAllocVA @ 0x18009CF20 (RtlpHpEnvAllocVA.c)
 *     RtlpHpVaMgrCtxFree @ 0x18009D290 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x18009D554 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpHpTlLogVAChange @ 0x18009D720 (RtlpHpTlLogVAChange.c)
 *     RtlpHpVaMgrCtxQuery @ 0x18009E33C (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpEnvQueryVA @ 0x18009E3FC (RtlpHpEnvQueryVA.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x180111468 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpSegMgrCommitComplete @ 0x180112CC8 (RtlpHpSegMgrCommitComplete.c)
 *     RtlpHpVaMgrCtxCommit @ 0x18011B2FC (RtlpHpVaMgrCtxCommit.c)
 *     RtlpHpVaMgrCtxDecommit @ 0x1801563C8 (RtlpHpVaMgrCtxDecommit.c)
 *     ZwFreeVirtualMemory @ 0x180160410 (ZwFreeVirtualMemory.c)
 *     RtlHeapZero @ 0x1801653C0 (RtlHeapZero.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpSegMgrCommit(__int64 a1, unsigned __int64 a2, unsigned int a3, int a4, int a5, int a6, int a7)
{
  unsigned __int64 v8; // r15
  int v9; // esi
  unsigned int v10; // ebx
  unsigned __int64 v11; // r12
  unsigned int v12; // edi
  __int64 v14; // r10
  __int64 v15; // r9
  __int64 *v16; // r8
  __int64 v17; // r11
  unsigned __int64 v18; // rcx
  int v19; // r9d
  __int64 v20; // r8
  size_t v21; // rdi
  void *v22; // r12
  ULONG_PTR v23; // r8
  _WORD *v24; // r13
  unsigned __int64 v25; // r10
  _DWORD *v26; // rdi
  __m128i v27; // xmm1
  ULONG v28; // r12d
  bool v29; // zf
  __int128 v30; // xmm2
  int v31; // eax
  __int64 v32; // xmm0_8
  ULONG_PTR v33; // r8
  int v34; // ecx
  int v35; // edi
  __m128i v37; // xmm1
  char v38; // cl
  ULONG v39; // r9d
  NTSTATUS v40; // eax
  __int64 v41; // rax
  void *v42; // rax
  void *v43; // rax
  int v44; // eax
  unsigned __int64 v45; // xmm1_8
  unsigned __int64 v46; // rcx
  int v47; // [rsp+28h] [rbp-120h]
  PVOID BaseAddress; // [rsp+50h] [rbp-F8h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-F0h] BYREF
  ULONG_PTR v50; // [rsp+60h] [rbp-E8h] BYREF
  void *v51; // [rsp+68h] [rbp-E0h]
  int v52[4]; // [rsp+70h] [rbp-D8h]
  _RTL_SRWLOCK SRWLock; // [rsp+80h] [rbp-C8h] BYREF
  size_t Size; // [rsp+88h] [rbp-C0h]
  _DWORD v55[3]; // [rsp+90h] [rbp-B8h] BYREF
  int v56; // [rsp+9Ch] [rbp-ACh]
  __int64 v57; // [rsp+A0h] [rbp-A8h]
  __int128 v58; // [rsp+A8h] [rbp-A0h] BYREF
  __int128 v59; // [rsp+B8h] [rbp-90h]
  _OWORD MemoryInformation[2]; // [rsp+C8h] [rbp-80h] BYREF
  __int128 v61; // [rsp+E8h] [rbp-60h]
  __int128 v62; // [rsp+100h] [rbp-48h]
  __m128i v63; // [rsp+110h] [rbp-38h]
  __int64 v64; // [rsp+150h] [rbp+8h] BYREF
  unsigned __int64 v65; // [rsp+158h] [rbp+10h]

  v65 = a2;
  v8 = a5;
  v9 = a6 & 0x40000000;
  v10 = a6 & 0xBFFFFFFF;
  v11 = a3;
  v12 = -*(_DWORD *)a1;
  LOBYTE(v64) = 0;
  SRWLock.0 = 0LL;
  if ( a5 > 0 )
  {
    v14 = *(_QWORD *)(a1 + 56);
    v15 = a5 << 12;
    v16 = (__int64 *)(v14 + 32);
    v17 = (*(_QWORD *)(v14 + 136) + *(_QWORD *)(v14 + 96)) << 12;
    if ( !dword_1801CB578 )
    {
      v18 = *v16;
      if ( *v16 || (v18 = qword_1801CCED8, v16 = &qword_1801CCED8, qword_1801CCED8) )
      {
        if ( v17 + v15 > v18 )
        {
          v41 = v16[1];
          if ( v41 )
            RtlpLogHeapFailure(21, v14, 0LL, v41, v15, v17);
          return 3221225773LL;
        }
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
  {
    BaseAddress = (PVOID)(a2 & 0xFFFFFFFFFFE00000uLL);
    v58 = 0LL;
    v59 = 0LL;
    RtlpHpVaMgrCtxQuery(&unk_1801CD968, a2 & 0xFFFFFFFFFFE00000uLL, &v58);
    a2 = v65;
    if ( (int)v8 <= 0 || (_DWORD)v11 || v12 >= 0x200000 || v65 <= (unsigned __int64)BaseAddress )
    {
      v19 = a7;
    }
    else
    {
      v19 = a7;
      a5 = a7;
      if ( (a7 & 2) != 0 )
      {
LABEL_74:
        v20 = v59 + 2 * (v11 >> 9);
        goto LABEL_7;
      }
      v19 = a7 | 1;
    }
    a5 = v19;
    goto LABEL_74;
  }
  v19 = a7;
  v20 = 0LL;
  a5 = a7;
LABEL_7:
  v21 = (unsigned int)(a4 << 12);
  *(_QWORD *)v52 = v20;
  v22 = (void *)(a2 + (unsigned int)((_DWORD)v11 << 12));
  v23 = v21;
  v24 = *(_WORD **)v52;
  v25 = (unsigned __int64)v22;
  v51 = v22;
  Size = v21;
  BaseAddress = v22;
  RegionSize = v21;
  if ( *(_QWORD *)v52 )
    goto LABEL_60;
LABEL_8:
  if ( (int)v8 > 0 )
    goto LABEL_9;
  while ( 1 )
  {
    v37 = *(__m128i *)(a1 + 40);
    v63 = v37;
    if ( v10 != 0x8000 )
    {
      v38 = _mm_cvtsi128_si32(_mm_srli_si128(v37, 1));
      if ( (unsigned __int8)(v38 - 2) <= 2u )
      {
        RtlpHpVaMgrCtxDecommit(&unk_1801CD968, v25, v23);
        v35 = 0;
      }
      else
      {
        v39 = v10 & 0xC000;
        if ( v38 == 5 )
        {
          v45 = _mm_srli_si128(v37, 8).m128i_u64[0];
          v40 = ((__int64 (__fastcall *)(unsigned __int64, __int64, PVOID *, ULONG_PTR *, ULONG))(*(_QWORD *)(v45 + 16) ^ v45 ^ RtlpHpHeapGlobals))(
                  RtlpHpHeapGlobals ^ *(_QWORD *)v45 ^ v45,
                  -1LL,
                  &BaseAddress,
                  &RegionSize,
                  v39);
        }
        else
        {
          v40 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, v39);
        }
        v35 = v40;
      }
      goto LABEL_32;
    }
    v42 = (void *)((v25 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL);
    v34 = v23 + v25 - (_DWORD)v42;
    BaseAddress = v42;
    RegionSize = v23 + v25 - (_QWORD)v42;
    if ( (void *)(v23 + v25) != v42 )
    {
      RtlpHpVaMgrCtxFree(&unk_1801CD968, &BaseAddress, &RegionSize);
      v35 = 0;
LABEL_32:
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogVAChange(v10, RegionSize, BaseAddress, (unsigned int)v35);
      goto LABEL_25;
    }
    v35 = 0;
LABEL_25:
    if ( !v24 )
      return (unsigned int)v35;
    if ( (*v24 & 0x4000) != 0 && v35 >= 0 )
    {
      v46 = 1LL;
      if ( (int)v8 <= 0 )
        v46 = -1LL;
      _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1 + 8), v46);
      v34 = v8;
      _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), v8);
    }
    RtlpHpSegMgrCommitComplete(v34, (int)v24, v8, v35 >= 0, &SRWLock, v47);
    if ( (v10 & 0x20000000) == 0 || v35 >= 0 || (a5 & 2) != 0 )
      return (unsigned int)v35;
    v21 = Size;
    v19 = a5 | 1;
    a5 |= 1u;
    v10 &= ~0x20000000u;
    RegionSize = Size;
    BaseAddress = v22;
LABEL_60:
    v44 = RtlpHpSegMgrCommitInitiate(a1, (int)v24, v8, v19, &SRWLock, (__int64)&v64);
    if ( v44 == -1073741568 )
      break;
    v25 = (unsigned __int64)BaseAddress;
    if ( v44 != -1073741566 )
    {
      v23 = RegionSize;
      goto LABEL_8;
    }
    v25 = (unsigned __int64)BaseAddress & 0xFFFFFFFFFFE00000uLL;
    v23 = 0x200000LL;
    BaseAddress = (PVOID)((unsigned __int64)BaseAddress & 0xFFFFFFFFFFE00000uLL);
    RegionSize = 0x200000LL;
    if ( (int)v8 > 0 )
    {
      v10 |= 0x20000000u;
LABEL_9:
      if ( v9 && (v10 & 0x20000000) == 0 )
        v10 |= 0x40000000u;
      v26 = *(_DWORD **)(a1 + 56);
      v27 = *(__m128i *)(a1 + 40);
      v28 = 64;
      MemoryInformation[0] = 0LL;
      v29 = (v26[5] & 0x40000000) == 0;
      v30 = *(_OWORD *)v26;
      if ( (v26[5] & 0x40000000) == 0 )
        v28 = 4;
      *(__m128i *)v52 = v27;
      v62 = v30;
      MemoryInformation[1] = 0LL;
      v61 = 0LL;
      if ( !v29 )
      {
        if ( (int)RtlpHpEnvQueryVA(v26, MemoryInformation) < 0
          || (BYTE4(v61) & 0x60) == 0
          || *(_DWORD **)&MemoryInformation[0] != v26 )
        {
          RtlpLogHeapFailure(0, (__int64)v26, 1LL, DWORD1(v61), 0LL, 0LL);
          v28 = 4;
        }
        v27 = *(__m128i *)v52;
        v23 = RegionSize;
        v25 = (unsigned __int64)BaseAddress;
      }
      v56 = 0;
      if ( v27.m128i_i8[3] )
        v55[0] = v27.m128i_u8[3] - 1;
      else
        v55[0] = -1;
      v55[2] = v27.m128i_u8[2];
      v55[1] = v27.m128i_u8[1];
      if ( (v27.m128i_i8[0] & 8) != 0 )
        v56 = 1;
      v31 = v23 - 1;
      v32 = _mm_srli_si128(v27, 8).m128i_u64[0];
      v57 = v32;
      if ( v10 == 0x2000 )
      {
        v50 = v23 - (v31 & 0xFFFFF) + 0xFFFFF;
        v43 = (void *)RtlpHpVaMgrCtxAlloc(&unk_1801CD968, &v50, 0LL, v55);
        v34 = (int)v43;
        if ( !v43 )
        {
          v35 = -1073741670;
          goto LABEL_21;
        }
        BaseAddress = v43;
      }
      else
      {
        v33 = v23 - (v31 & 0xFFF) + 4095;
        v50 = v33;
        if ( (unsigned __int8)(_mm_cvtsi128_si32(_mm_srli_si128(v27, 1)) - 2) <= 2u )
        {
          v35 = RtlpHpVaMgrCtxCommit(&unk_1801CD968, v25, v33, v28);
          if ( v35 < 0 )
            goto LABEL_21;
          if ( (v10 & 0x40000000) != 0 )
            RtlHeapZero(BaseAddress, v50);
        }
        else
        {
          v35 = RtlpHpEnvAllocVA(&BaseAddress, &v50, v28, v47, v27.m128i_u8[1], v32);
          if ( v35 < 0 )
          {
LABEL_21:
            if ( (RtlpHpHeapFeatures & 8) != 0 )
              RtlpHpTlLogVAChange(v10, RegionSize, BaseAddress, (unsigned int)v35);
            if ( v9 && v35 >= 0 )
            {
              v22 = v51;
              if ( (v10 & 0x40000000) == 0 )
                memset_thunk_772440563353939046(v51, 0, Size);
            }
            else
            {
              v22 = v51;
            }
            goto LABEL_25;
          }
        }
      }
      v35 = 0;
      RegionSize = v50;
      goto LABEL_21;
    }
  }
  _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), v8);
  if ( v9 )
    memset_thunk_772440563353939046(v22, 0, v21);
  return 0LL;
}
