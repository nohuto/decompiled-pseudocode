/*
 * XREFs of RtlpHpFreeHeap @ 0x180057A20
 * Callers:
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpHpFreeHeapSlow @ 0x1800580C4 (RtlpHpFreeHeapSlow.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180059400 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1800646A0 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpEnvCompactionSchedule @ 0x1800656C0 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpSegPageRangeShrink @ 0x18006A080 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpLargeFree @ 0x18009E878 (RtlpHpLargeFree.c)
 *     RtlpHpVsSlotFreeList @ 0x180119648 (RtlpHpVsSlotFreeList.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x18011AE24 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     RtlpHpEnvCompactionIsScheduled @ 0x180140874 (RtlpHpEnvCompactionIsScheduled.c)
 *     RtlpInterlockedPushEntrySList @ 0x180163E00 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x180163E40 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall RtlpHpFreeHeap(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  char v11; // cl
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r9
  char v14; // r11
  unsigned __int64 v15; // rsi
  __int64 v16; // r14
  unsigned __int64 v17; // rbx
  unsigned int v18; // ecx
  unsigned __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // rax
  signed __int64 v22; // rax
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  signed __int64 v25; // rtt
  unsigned int v26; // r8d
  _WORD *v28; // rdx
  __int64 v29; // r14
  __int64 v30; // r15
  char v31; // cl
  __int64 v32; // rdi
  unsigned int v33; // esi
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r9
  signed __int64 v37; // rcx
  signed __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // r8
  int v41; // ecx
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  signed __int64 v46; // rax
  __int64 v47; // r10
  signed __int64 v48; // rax
  signed __int64 v49; // rtt
  signed __int64 v50; // rdx
  void **TlsExpansionSlots; // rdx
  __int64 v52; // rdx
  unsigned __int64 v53; // r8
  int v54; // r8d
  unsigned __int64 v55; // r8
  __int64 v56; // rcx
  int v57; // [rsp+34h] [rbp-34h]
  signed __int64 v58; // [rsp+88h] [rbp+20h]
  signed __int64 v59; // [rsp+88h] [rbp+20h]

  v5 = (_DWORD *)(a1 + 20);
  __writegsqword(0x1858u, (unsigned __int64)v5);
  v7 = *v5 & 0x20F0;
  if ( v7 )
  {
    if ( (v7 & 0x10) != 0 && *(_DWORD *)(a1 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
      RtlpHpEnvAcquireGlobalLockSharedContended(v5, v7);
    v26 = RtlpHpFreeHeapSlow(a1, a2, v7, a4);
    goto LABEL_29;
  }
  if ( (_WORD)a2 )
  {
    v8 = a1 + 320;
  }
  else
  {
    v9 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((a2 - qword_1801CD918) >> 20));
    if ( !v9 || (_DWORD)v9 == 3 )
    {
      v26 = RtlpHpLargeFree(a1, a2) != 0;
      goto LABEL_29;
    }
    v8 = a1 + 320;
    if ( (_DWORD)v9 == 2 )
      v8 = a1 + 512;
  }
  v10 = a2 & *(_QWORD *)v8;
  if ( (v10 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v10 + 0x10)) != v8 )
  {
    RtlpLogHeapFailure(9, *(_QWORD *)(v8 + 56), a2, 0LL, 0LL, 0LL);
    goto LABEL_28;
  }
  v11 = *(_BYTE *)(v8 + 8);
  v12 = v10 + 32 * ((unsigned __int64)(unsigned int)(a2 - v10) >> v11);
  v13 = -32LL * *(unsigned __int8 *)(v12 + 26) + v12;
  v14 = *(_BYTE *)(v13 + 24);
  v15 = v10 + ((__int64)(v13 - v10) >> 5 << v11);
  if ( v14 + (v15 == a2) != 11 )
  {
    v28 = (_WORD *)((v13 & *(_QWORD *)v8) + ((__int64)(v13 - (v13 & *(_QWORD *)v8)) >> 5 << v11));
    if ( (v14 & 3) == 3 )
    {
      if ( (_WORD *)a2 == v28 )
        goto LABEL_56;
      if ( v14 == 15 )
      {
        if ( a2 > (unsigned __int64)v28 )
        {
          v29 = *(_QWORD *)(v8 + 32);
          v30 = a2 - 16;
          v31 = *(_BYTE *)(v29 + 4);
          if ( (v31 & 1) != 0 && (a2 & 0xFFF) == 0 )
            v30 = a2 - 32;
          if ( v28 )
            goto LABEL_36;
          v52 = v30;
          v53 = (RtlpHpHeapGlobals ^ *(_QWORD *)v30 ^ (unsigned __int64)v30) >> 32;
          if ( (v53 & 0xFF0000) != 0 )
          {
            v54 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v30 + 8) ^ v30);
LABEL_79:
            v28 = (_WORD *)((v52 - (unsigned int)(v54 << 12)) & 0xFFFFFFFFFFFFF000uLL);
LABEL_36:
            if ( (((unsigned __int16)(v28[16] ^ v28[18]) ^ 0x2BED) & 0x7FFF) == 0 )
            {
              if ( ((RtlpHpHeapGlobals ^ *(_QWORD *)v30 ^ v30) & 0xFF000000000000LL) != 0 )
              {
                v32 = v29 + ((unsigned __int64)(unsigned __int16)v28[17] << 6);
                v33 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v30 ^ (unsigned int)*(_QWORD *)v30) >> 16)) - 16;
                v34 = 0LL;
                if ( (v31 & 2) != 0 && v33 < 0x1000 )
                {
                  v56 = v32 + 64;
                  if ( *(_WORD *)(v32 + 64) < 0x20u )
                  {
                    RtlpInterlockedPushEntrySList(v56, v30 + 16);
LABEL_40:
                    v35 = *(_QWORD *)(v8 + 24);
                    v26 = 1;
                    if ( v33 < *(unsigned __int16 *)(v35 + 68) )
                    {
                      v36 = v35 + 8LL * ((unsigned int)RtlpLfhBucketIndexMap[(unsigned __int64)v33 >> 4] - 1);
                      do
                      {
                        v59 = *(_QWORD *)(v36 + 448);
                        v37 = v59;
                        v38 = v59;
                        if ( (v59 & 1) == 0 )
                          break;
                        if ( WORD1(v59) > 1u )
                        {
                          --WORD1(v59);
                          v38 = v59;
                        }
                      }
                      while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v36 + 448), v38, v37) != v37 );
                    }
                    goto LABEL_29;
                  }
                  v34 = RtlpInterlockedFlushSList(v56);
                }
                *(_QWORD *)(v30 + 16) = v34;
                RtlpHpVsSlotFreeList(v29, v32);
                goto LABEL_40;
              }
              v42 = v30;
              v39 = *(_QWORD *)(v29 + 8) ^ v29;
              v40 = a2;
              v41 = 8;
LABEL_49:
              RtlpLogHeapFailure(v41, v39, v40, v42, 0LL, 0LL);
              v26 = 0;
              goto LABEL_29;
            }
            v40 = (__int64)v28;
            v39 = *(_QWORD *)(v29 + 8) ^ v29;
            v41 = 18;
LABEL_48:
            v42 = 0LL;
            goto LABEL_49;
          }
          if ( (_WORD)v53 )
          {
            v52 = v30 - 16LL * (unsigned __int16)v53;
            v55 = (RtlpHpHeapGlobals ^ *(_QWORD *)v52 ^ (unsigned __int64)v52) >> 32;
            if ( (v55 & 0xFF0000) != 0 )
            {
              v54 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v52 + 8) ^ v52);
              goto LABEL_79;
            }
            if ( (_WORD)v55 )
            {
              v52 -= 16LL * (unsigned __int16)v55;
              v54 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v52 + 8) ^ v52);
              goto LABEL_79;
            }
          }
          v54 = 0;
          goto LABEL_79;
        }
LABEL_56:
        RtlpHpSegPageRangeShrink(v8, v13, 0LL);
        v26 = 1;
        goto LABEL_29;
      }
    }
    v39 = *(_QWORD *)(v8 + 56);
    v40 = a2;
    v41 = 9;
    goto LABEL_48;
  }
  v16 = *(_QWORD *)(v8 + 24);
  v17 = (((unsigned int)a2
        - (((unsigned int)qword_1801CCEC8 ^ *(_DWORD *)(v15 + 40) ^ (unsigned int)(v15 >> 12)) >> 16)
        - (unsigned int)v15)
       * (unsigned __int64)*(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(v15 + 44) << 6) + v16 + 72)) >> 32;
  if ( (_DWORD)a2
     - (((unsigned int)qword_1801CCEC8 ^ *(_DWORD *)(v15 + 40) ^ (unsigned int)(v15 >> 12)) >> 16)
     - (_DWORD)v15 != (_DWORD)v17 * (unsigned __int16)(qword_1801CCEC8 ^ *(_WORD *)(v15 + 40) ^ (v15 >> 12)) )
  {
LABEL_28:
    v26 = 0;
    goto LABEL_29;
  }
  v18 = *(unsigned __int16 *)(v16 + 76);
  if ( v18 < 0x40 )
  {
    v19 = __readgsqword(8 * v18 + 5248);
    goto LABEL_13;
  }
  TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v19 = (unsigned __int64)TlsExpansionSlots[v18 - 64];
LABEL_13:
    if ( v19 )
      goto LABEL_14;
  }
  LOWORD(v19) = RtlpHpLfhThreadDataInitializeSet(v16);
LABEL_14:
  if ( (_WORD)v19 == *(_WORD *)(v15 + 46) && *(_BYTE *)(v15 + 22) != 1 )
  {
    v43 = *(_QWORD *)(v15 + 8 * (v17 >> 5) + 64);
    v44 = __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v17 & 0x1F);
    v20 = v17;
    *(_QWORD *)(v15 + 8 * (v17 >> 5) + 64) = v44 & v43;
    if ( ((unsigned int)v43 & ~(_DWORD)v44) != 0 )
    {
      ++*(_WORD *)(v15 + 32);
      v26 = 1;
      goto LABEL_29;
    }
    goto LABEL_51;
  }
  v20 = v17;
  v21 = *(unsigned int *)(v15 + 8 * (v17 >> 5) + 64);
  if ( !_bittest64(&v21, v17 & 0x1F) )
  {
LABEL_51:
    RtlpLogHeapFailure(17, *(_QWORD *)v16, a2, v15, v20, 0LL);
    goto LABEL_28;
  }
  v22 = *(_QWORD *)(v15 + 16);
  do
  {
    v57 = HIDWORD(v22);
    v58 = v22;
    if ( BYTE6(v22) == 1 )
      BYTE6(v58) = 2;
    if ( a2 )
    {
      v23 = *(_QWORD *)(v16 + 80);
      *(_WORD *)a2 = v22;
      LOWORD(v58) = v17 + 1;
      *(_DWORD *)(a2 + 8) = a2 ^ HIDWORD(v23) ^ __ROL4__(*(_DWORD *)a2 ^ v23, v22);
    }
    WORD1(v58) = WORD1(v22) + 1;
    v24 = (unsigned __int64)*(unsigned __int16 *)(v15 + 44) << 6;
    v25 = v22;
    v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 16), v58, v22);
  }
  while ( v25 != v22 );
  if ( !*(_BYTE *)(v24 + v16 + 92) )
  {
    *(_BYTE *)(v24 + v16 + 92) = 1;
    if ( !(unsigned int)RtlpHpEnvCompactionIsScheduled() )
      RtlpHpEnvCompactionSchedule();
  }
  if ( BYTE2(v57) == 1 )
  {
    v45 = v16 + ((unsigned __int16)v57 << 6);
    _m_prefetchw((const void *)(v45 + 8));
    v46 = *(_QWORD *)(v45 + 8);
    v47 = *(_QWORD *)(v15 + 24);
    *(_QWORD *)(v15 + 24) = v47 & 0xFFF | (v46 - (v46 & 0xFFF));
    v49 = v46;
    v48 = _InterlockedCompareExchange64((volatile signed __int64 *)(v45 + 8), v15 | v46 & 0xFFF, v46);
    if ( v49 != v48 )
    {
      do
      {
        v50 = v48;
        *(_QWORD *)(v15 + 24) = v47 ^ (v48 ^ v47) & 0xFFFFFFFFFFFFF000uLL;
        v48 = _InterlockedCompareExchange64((volatile signed __int64 *)(v45 + 8), v15 | v48 & 0xFFF, v48);
      }
      while ( v48 != v50 );
    }
  }
  v26 = 1;
LABEL_29:
  __writegsqword(0x1858u, 0LL);
  return v26;
}
