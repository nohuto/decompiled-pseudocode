/*
 * XREFs of RtlpHpFreeHeap @ 0x180053AF0
 * Callers:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 * Callees:
 *     RtlpHpLargeFree @ 0x180009DDC (RtlpHpLargeFree.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x18000A350 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpEnvCompactionSchedule @ 0x18000B720 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpSegPageRangeShrink @ 0x1800100E0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlpHpFreeHeapSlow @ 0x180054194 (RtlpHpFreeHeapSlow.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x1800554D0 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpVsSlotFreeList @ 0x18011CCB0 (RtlpHpVsSlotFreeList.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x18011E484 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     RtlpHpEnvCompactionIsScheduled @ 0x180143DB4 (RtlpHpEnvCompactionIsScheduled.c)
 *     RtlpInterlockedPushEntrySList @ 0x180166FD0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x180167010 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall RtlpHpFreeHeap(__int64 a1, unsigned __int64 a2)
{
  _DWORD *v3; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdx
  char v10; // cl
  unsigned __int64 v11; // r9
  __int64 v12; // r9
  char v13; // r11
  unsigned __int64 v14; // rsi
  __int64 v15; // r14
  unsigned __int64 v16; // rbx
  unsigned int v17; // ecx
  unsigned __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rax
  signed __int64 v21; // rax
  unsigned __int64 v22; // r8
  int v23; // edx
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

  v3 = (_DWORD *)(a1 + 20);
  __writegsqword(0x1858u, (unsigned __int64)v3);
  v5 = *v3 & 0x20F0;
  if ( v5 )
  {
    if ( (v5 & 0x10) != 0 && *(_DWORD *)(a1 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
      RtlpHpEnvAcquireGlobalLockSharedContended(v3, v5);
    v26 = RtlpHpFreeHeapSlow(a1, a2, v5);
    goto LABEL_29;
  }
  if ( (_WORD)a2 )
  {
    v6 = a1 + 320;
  }
  else
  {
    v7 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((a2 - qword_1801D0978) >> 20));
    if ( !v7 || (_DWORD)v7 == 3 )
    {
      v26 = RtlpHpLargeFree((__int128 *)a1, a2) != 0;
      goto LABEL_29;
    }
    v6 = a1 + 320;
    if ( (_DWORD)v7 == 2 )
      v6 = a1 + 512;
  }
  v8 = *(_QWORD *)v6;
  v9 = a2 & *(_QWORD *)v6;
  if ( (v9 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v9 + 0x10)) != v6 )
  {
    RtlpLogHeapFailure(9, *(_QWORD *)(v6 + 56), a2, 0LL, 0LL, 0LL);
    goto LABEL_28;
  }
  v10 = *(_BYTE *)(v6 + 8);
  v11 = v9 + 32 * ((unsigned __int64)(unsigned int)(a2 - v9) >> v10);
  v12 = -32LL * *(unsigned __int8 *)(v11 + 26) + v11;
  v13 = *(_BYTE *)(v12 + 24);
  v14 = v9 + ((__int64)(v12 - v9) >> 5 << v10);
  if ( v13 + (v14 == a2) != 11 )
  {
    v28 = (_WORD *)((v12 & v8) + ((__int64)(v12 - (v12 & v8)) >> 5 << v10));
    if ( (v13 & 3) == 3 )
    {
      if ( (_WORD *)a2 == v28 )
        goto LABEL_56;
      if ( v13 == 15 )
      {
        if ( a2 > (unsigned __int64)v28 )
        {
          v29 = *(_QWORD *)(v6 + 32);
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
                    RtlpInterlockedPushEntrySList(v56, v30 + 16, 0x7FFFLL, v12);
LABEL_40:
                    v35 = *(_QWORD *)(v6 + 24);
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
                  v34 = RtlpInterlockedFlushSList(v56, v28, 0x7FFFLL, v12);
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
        RtlpHpSegPageRangeShrink(v6, v12, 0);
        v26 = 1;
        goto LABEL_29;
      }
    }
    v39 = *(_QWORD *)(v6 + 56);
    v40 = a2;
    v41 = 9;
    goto LABEL_48;
  }
  v15 = *(_QWORD *)(v6 + 24);
  v16 = (((unsigned int)a2
        - (((unsigned int)qword_1801CFEC8 ^ *(_DWORD *)(v14 + 40) ^ (unsigned int)(v14 >> 12)) >> 16)
        - (unsigned int)v14)
       * (unsigned __int64)*(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(v14 + 44) << 6) + v15 + 72)) >> 32;
  if ( (_DWORD)a2
     - (((unsigned int)qword_1801CFEC8 ^ *(_DWORD *)(v14 + 40) ^ (unsigned int)(v14 >> 12)) >> 16)
     - (_DWORD)v14 != (_DWORD)v16 * (unsigned __int16)(qword_1801CFEC8 ^ *(_WORD *)(v14 + 40) ^ (v14 >> 12)) )
  {
LABEL_28:
    v26 = 0;
    goto LABEL_29;
  }
  v17 = *(unsigned __int16 *)(v15 + 76);
  if ( v17 < 0x40 )
  {
    v18 = __readgsqword(8 * v17 + 5248);
    goto LABEL_13;
  }
  TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v18 = (unsigned __int64)TlsExpansionSlots[v17 - 64];
LABEL_13:
    if ( v18 )
      goto LABEL_14;
  }
  LOWORD(v18) = RtlpHpLfhThreadDataInitializeSet(v15);
LABEL_14:
  if ( (_WORD)v18 == *(_WORD *)(v14 + 46) && *(_BYTE *)(v14 + 22) != 1 )
  {
    v43 = *(_QWORD *)(v14 + 8 * (v16 >> 5) + 64);
    v44 = __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v16 & 0x1F);
    v19 = v16;
    *(_QWORD *)(v14 + 8 * (v16 >> 5) + 64) = v44 & v43;
    if ( ((unsigned int)v43 & ~(_DWORD)v44) != 0 )
    {
      ++*(_WORD *)(v14 + 32);
      v26 = 1;
      goto LABEL_29;
    }
    goto LABEL_51;
  }
  v19 = v16;
  v20 = *(unsigned int *)(v14 + 8 * (v16 >> 5) + 64);
  if ( !_bittest64(&v20, v16 & 0x1F) )
  {
LABEL_51:
    RtlpLogHeapFailure(17, *(_QWORD *)v15, a2, v14, v19, 0LL);
    goto LABEL_28;
  }
  v21 = *(_QWORD *)(v14 + 16);
  do
  {
    v57 = HIDWORD(v21);
    v58 = v21;
    if ( BYTE6(v21) == 1 )
      BYTE6(v58) = 2;
    if ( a2 )
    {
      v22 = *(_QWORD *)(v15 + 80);
      v23 = v22;
      *(_WORD *)a2 = v21;
      v8 = HIDWORD(v22);
      LOWORD(v58) = v16 + 1;
      *(_DWORD *)(a2 + 8) = a2 ^ v8 ^ __ROL4__(*(_DWORD *)a2 ^ v23, v21);
    }
    WORD1(v58) = WORD1(v21) + 1;
    v24 = (unsigned __int64)*(unsigned __int16 *)(v14 + 44) << 6;
    v25 = v21;
    v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 16), v58, v21);
  }
  while ( v25 != v21 );
  if ( !*(_BYTE *)(v24 + v15 + 92) )
  {
    *(_BYTE *)(v24 + v15 + 92) = 1;
    if ( !(unsigned int)RtlpHpEnvCompactionIsScheduled(v58, v24, v8, v16) )
      RtlpHpEnvCompactionSchedule();
  }
  if ( BYTE2(v57) == 1 )
  {
    v45 = v15 + ((unsigned __int16)v57 << 6);
    _m_prefetchw((const void *)(v45 + 8));
    v46 = *(_QWORD *)(v45 + 8);
    v47 = *(_QWORD *)(v14 + 24);
    *(_QWORD *)(v14 + 24) = v47 & 0xFFF | (v46 - (v46 & 0xFFF));
    v49 = v46;
    v48 = _InterlockedCompareExchange64((volatile signed __int64 *)(v45 + 8), v14 | v46 & 0xFFF, v46);
    if ( v49 != v48 )
    {
      do
      {
        v50 = v48;
        *(_QWORD *)(v14 + 24) = v47 ^ (v48 ^ v47) & 0xFFFFFFFFFFFFF000uLL;
        v48 = _InterlockedCompareExchange64((volatile signed __int64 *)(v45 + 8), v14 | v48 & 0xFFF, v48);
      }
      while ( v48 != v50 );
    }
  }
  v26 = 1;
LABEL_29:
  __writegsqword(0x1858u, 0LL);
  return v26;
}
