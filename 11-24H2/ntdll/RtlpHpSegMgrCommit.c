/*
 * XREFs of RtlpHpSegMgrCommit @ 0x180091A20
 * Callers:
 *     RtlpHpSegMgrRelease @ 0x18005589C (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegPageRangeCommit @ 0x180056980 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegMgrAllocate @ 0x180091660 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 *     RtlpHpEnvAllocVA @ 0x180092390 (RtlpHpEnvAllocVA.c)
 *     RtlpHpVaMgrCtxFree @ 0x180092700 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x1800929C4 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpHpTlLogVAChange @ 0x180092B90 (RtlpHpTlLogVAChange.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1800937AC (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpEnvQueryVA @ 0x18009386C (RtlpHpEnvQueryVA.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x1801162E4 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpSegMgrCommitComplete @ 0x180117B98 (RtlpHpSegMgrCommitComplete.c)
 *     RtlpHpVaMgrCtxCommit @ 0x18011D0CC (RtlpHpVaMgrCtxCommit.c)
 *     RtlpHpVaMgrCtxDecommit @ 0x180158008 (RtlpHpVaMgrCtxDecommit.c)
 *     ZwFreeVirtualMemory @ 0x180162050 (ZwFreeVirtualMemory.c)
 *     RtlHeapZero @ 0x180167000 (RtlHeapZero.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
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
  __int64 v23; // r8
  _WORD *v24; // r13
  unsigned __int64 v25; // r10
  __int64 v26; // rdi
  __m128i v27; // xmm1
  unsigned int v28; // r12d
  bool v29; // zf
  __int128 v30; // xmm2
  int v31; // eax
  __int64 v32; // r8
  int v33; // ecx
  int v34; // edi
  __m128i v36; // xmm1
  char v37; // cl
  __int64 v38; // r9
  int v39; // eax
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  int v43; // eax
  unsigned __int64 v44; // xmm1_8
  unsigned __int64 v45; // rcx
  __int16 v46; // [rsp+28h] [rbp-120h]
  unsigned __int64 v47; // [rsp+50h] [rbp-F8h] BYREF
  size_t v48; // [rsp+58h] [rbp-F0h] BYREF
  __int64 v49; // [rsp+60h] [rbp-E8h] BYREF
  void *v50; // [rsp+68h] [rbp-E0h]
  __m128i v51; // [rsp+70h] [rbp-D8h]
  __int64 v52; // [rsp+80h] [rbp-C8h] BYREF
  size_t Size; // [rsp+88h] [rbp-C0h]
  _DWORD v54[3]; // [rsp+90h] [rbp-B8h] BYREF
  int v55; // [rsp+9Ch] [rbp-ACh]
  unsigned __int64 v56; // [rsp+A0h] [rbp-A8h]
  __int128 v57; // [rsp+A8h] [rbp-A0h] BYREF
  __int128 v58; // [rsp+B8h] [rbp-90h]
  _OWORD v59[2]; // [rsp+C8h] [rbp-80h] BYREF
  __int128 v60; // [rsp+E8h] [rbp-60h]
  __int128 v61; // [rsp+100h] [rbp-48h]
  __m128i v62; // [rsp+110h] [rbp-38h]
  char v63; // [rsp+150h] [rbp+8h] BYREF
  unsigned __int64 v64; // [rsp+158h] [rbp+10h]

  v64 = a2;
  v8 = a5;
  v9 = a6 & 0x40000000;
  v10 = a6 & 0xBFFFFFFF;
  v11 = a3;
  v12 = -*(_DWORD *)a1;
  v63 = 0;
  v52 = 0LL;
  if ( a5 > 0 )
  {
    v14 = *(_QWORD *)(a1 + 56);
    v15 = a5 << 12;
    v16 = (__int64 *)(v14 + 32);
    v17 = (*(_QWORD *)(v14 + 136) + *(_QWORD *)(v14 + 96)) << 12;
    if ( !dword_1801CC578 )
    {
      v18 = *v16;
      if ( *v16 || (v18 = qword_1801CDED8, v16 = &qword_1801CDED8, qword_1801CDED8) )
      {
        if ( v17 + v15 > v18 )
        {
          v40 = v16[1];
          if ( v40 )
            RtlpLogHeapFailure(21, v14, 0LL, v40, v15, v17);
          return 3221225773LL;
        }
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
  {
    v47 = a2 & 0xFFFFFFFFFFE00000uLL;
    v57 = 0LL;
    v58 = 0LL;
    RtlpHpVaMgrCtxQuery(&unk_1801CE978, a2 & 0xFFFFFFFFFFE00000uLL, &v57);
    a2 = v64;
    if ( (int)v8 <= 0 || (_DWORD)v11 || v12 >= 0x200000 || v64 <= v47 )
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
        v20 = v58 + 2 * (v11 >> 9);
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
  v51.m128i_i64[0] = v20;
  v22 = (void *)(a2 + (unsigned int)((_DWORD)v11 << 12));
  v23 = v21;
  v24 = (_WORD *)v51.m128i_i64[0];
  v25 = (unsigned __int64)v22;
  v50 = v22;
  Size = v21;
  v47 = (unsigned __int64)v22;
  v48 = v21;
  if ( v51.m128i_i64[0] )
    goto LABEL_60;
LABEL_8:
  if ( (int)v8 > 0 )
    goto LABEL_9;
  while ( 1 )
  {
    v36 = *(__m128i *)(a1 + 40);
    v62 = v36;
    if ( v10 != 0x8000 )
    {
      v37 = _mm_cvtsi128_si32(_mm_srli_si128(v36, 1));
      if ( (unsigned __int8)(v37 - 2) <= 2u )
      {
        RtlpHpVaMgrCtxDecommit(&unk_1801CE978, v25, v23);
        v34 = 0;
      }
      else
      {
        v38 = (unsigned __int16)v10 & 0xC000;
        if ( v37 == 5 )
        {
          v44 = _mm_srli_si128(v36, 8).m128i_u64[0];
          v39 = ((__int64 (__fastcall *)(unsigned __int64, __int64, unsigned __int64 *, size_t *, _DWORD))(*(_QWORD *)(v44 + 16) ^ v44 ^ RtlpHpHeapGlobals))(
                  RtlpHpHeapGlobals ^ *(_QWORD *)v44 ^ v44,
                  -1LL,
                  &v47,
                  &v48,
                  v38);
        }
        else
        {
          v39 = ZwFreeVirtualMemory(-1LL, &v47, &v48, v38);
        }
        v34 = v39;
      }
      goto LABEL_32;
    }
    v41 = (v25 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v33 = v23 + v25 - v41;
    v47 = v41;
    v48 = v23 + v25 - v41;
    if ( v23 + v25 != v41 )
    {
      RtlpHpVaMgrCtxFree(&unk_1801CE978, &v47, &v48);
      v34 = 0;
LABEL_32:
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogVAChange(v10, v48, v47, (unsigned int)v34);
      goto LABEL_25;
    }
    v34 = 0;
LABEL_25:
    if ( !v24 )
      return (unsigned int)v34;
    if ( (*v24 & 0x4000) != 0 && v34 >= 0 )
    {
      v45 = 1LL;
      if ( (int)v8 <= 0 )
        v45 = -1LL;
      _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1 + 8), v45);
      v33 = v8;
      _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), v8);
    }
    RtlpHpSegMgrCommitComplete(v33, (_DWORD)v24, v8, v34 >= 0, (__int64)&v52, v46);
    if ( (v10 & 0x20000000) == 0 || v34 >= 0 || (a5 & 2) != 0 )
      return (unsigned int)v34;
    v21 = Size;
    v19 = a5 | 1;
    a5 |= 1u;
    v10 &= ~0x20000000u;
    v48 = Size;
    v47 = (unsigned __int64)v22;
LABEL_60:
    v43 = RtlpHpSegMgrCommitInitiate(a1, (_DWORD)v24, v8, v19, (__int64)&v52, (__int64)&v63);
    if ( v43 == -1073741568 )
      break;
    v25 = v47;
    if ( v43 != -1073741566 )
    {
      v23 = v48;
      goto LABEL_8;
    }
    v25 = v47 & 0xFFFFFFFFFFE00000uLL;
    v23 = 0x200000LL;
    v47 &= 0xFFFFFFFFFFE00000uLL;
    v48 = 0x200000LL;
    if ( (int)v8 > 0 )
    {
      v10 |= 0x20000000u;
LABEL_9:
      if ( v9 && (v10 & 0x20000000) == 0 )
        v10 |= 0x40000000u;
      v26 = *(_QWORD *)(a1 + 56);
      v27 = *(__m128i *)(a1 + 40);
      v28 = 64;
      v59[0] = 0LL;
      v29 = (*(_DWORD *)(v26 + 20) & 0x40000000) == 0;
      v30 = *(_OWORD *)v26;
      if ( (*(_DWORD *)(v26 + 20) & 0x40000000) == 0 )
        v28 = 4;
      v51 = v27;
      v61 = v30;
      v59[1] = 0LL;
      v60 = 0LL;
      if ( !v29 )
      {
        if ( (int)RtlpHpEnvQueryVA(v26, v59) < 0 || (BYTE4(v60) & 0x60) == 0 || *(_QWORD *)&v59[0] != v26 )
        {
          RtlpLogHeapFailure(0, v26, 1LL, DWORD1(v60), 0LL, 0LL);
          v28 = 4;
        }
        v27 = v51;
        v23 = v48;
        v25 = v47;
      }
      v55 = 0;
      if ( v27.m128i_i8[3] )
        v54[0] = v27.m128i_u8[3] - 1;
      else
        v54[0] = -1;
      v54[2] = v27.m128i_u8[2];
      v54[1] = v27.m128i_u8[1];
      if ( (v27.m128i_i8[0] & 8) != 0 )
        v55 = 1;
      v31 = v23 - 1;
      v56 = _mm_srli_si128(v27, 8).m128i_u64[0];
      if ( v10 == 0x2000 )
      {
        v49 = v23 - (v31 & 0xFFFFF) + 0xFFFFF;
        v42 = RtlpHpVaMgrCtxAlloc(&unk_1801CE978, &v49, 0LL, v54);
        v33 = v42;
        if ( !v42 )
        {
          v34 = -1073741670;
          goto LABEL_21;
        }
        v47 = v42;
      }
      else
      {
        v32 = v23 - (v31 & 0xFFF) + 4095;
        v49 = v32;
        if ( (unsigned __int8)(_mm_cvtsi128_si32(_mm_srli_si128(v27, 1)) - 2) <= 2u )
        {
          v34 = RtlpHpVaMgrCtxCommit(&unk_1801CE978, v25, v32, v28);
          if ( v34 < 0 )
            goto LABEL_21;
          if ( (v10 & 0x40000000) != 0 )
            RtlHeapZero(v47, v49);
        }
        else
        {
          v34 = RtlpHpEnvAllocVA((unsigned int)&v47, (unsigned int)&v49, 0, v10, v28);
          if ( v34 < 0 )
          {
LABEL_21:
            if ( (RtlpHpHeapFeatures & 8) != 0 )
              RtlpHpTlLogVAChange(v10, v48, v47, (unsigned int)v34);
            if ( v9 && v34 >= 0 )
            {
              v22 = v50;
              if ( (v10 & 0x40000000) == 0 )
                memset_thunk_772440563353939046(v50, 0, Size);
            }
            else
            {
              v22 = v50;
            }
            goto LABEL_25;
          }
        }
      }
      v34 = 0;
      v48 = v49;
      goto LABEL_21;
    }
  }
  _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), v8);
  if ( v9 )
    memset_thunk_772440563353939046(v22, 0, v21);
  return 0LL;
}
