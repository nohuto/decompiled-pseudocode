/*
 * XREFs of RtlpHpFreeHeap @ 0x1402B2660
 * Callers:
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402B0E50 (ExFreeHeapPool.c)
 *     ExpHpCompactHeapCallback @ 0x1402B3980 (ExpHpCompactHeapCallback.c)
 *     ExAllocateContiguousHeapPool @ 0x1402C2E9C (ExAllocateContiguousHeapPool.c)
 *     ExpFreeHeapSpecialPool @ 0x1403A8B6C (ExpFreeHeapSpecialPool.c)
 *     ExFreeHeapPages @ 0x14044074C (ExFreeHeapPages.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1402B2E04 (RtlpLogHeapFailure.c)
 *     RtlpHpVsContextFree @ 0x1402B2F20 (RtlpHpVsContextFree.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x1402B381C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpEnvCompactionSchedule @ 0x1402B389C (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpSegPageRangeShrink @ 0x1402BC4B0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpLargeFree @ 0x140420C64 (RtlpHpLargeFree.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F561C (RtlpHpLfhThreadDataInitializeSet.c)
 */

__int64 __fastcall RtlpHpFreeHeap(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  char v9; // r11
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r9
  char v12; // r10
  unsigned __int64 v13; // rbp
  unsigned int v14; // ebx
  __int64 v15; // r15
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rsi
  __int64 v18; // r9
  unsigned int v19; // eax
  unsigned int v20; // ecx
  int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rax
  signed __int64 v26; // rax
  __int64 v27; // r8
  unsigned __int64 v28; // rdx
  signed __int64 v29; // rtt
  unsigned __int64 v31; // rdx
  unsigned int v32; // r14d
  __int64 v33; // r8
  __int64 v35; // r9
  signed __int64 v36; // rcx
  signed __int64 v37; // rdx
  __int64 v38; // r9
  signed __int64 v39; // rax
  __int64 v40; // r10
  signed __int64 v41; // rax
  signed __int64 v42; // rtt
  signed __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdx
  signed __int64 v47; // [rsp+30h] [rbp-38h]
  signed __int64 v48; // [rsp+38h] [rbp-30h]
  int v49; // [rsp+3Ch] [rbp-2Ch]
  unsigned int v50; // [rsp+80h] [rbp+18h] BYREF
  int v51; // [rsp+88h] [rbp+20h]

  v50 = a3;
  if ( (_WORD)a2 )
  {
    v5 = (__int64 *)(a1 + 320);
    goto LABEL_7;
  }
  v6 = RtlCSparseBitmapBitmaskRead(&dword_140E68310, 2 * ((a2 - qword_140E68308) >> 20));
  if ( v6 && (_DWORD)v6 != 3 )
  {
    v5 = (__int64 *)(a1 + 320);
    if ( (_DWORD)v6 == 2 )
      v5 += 24;
LABEL_7:
    v7 = *v5;
    v8 = a2 & v7;
    if ( (__int64 *)(a2 & v7 ^ RtlpHpHeapGlobals ^ *(_QWORD *)((a2 & v7) + 0x10)) != v5 )
    {
      v14 = 0;
      RtlpLogHeapFailure(9, v5[7], a2, 0, 0LL, 0LL);
      return v14;
    }
    v9 = *((_BYTE *)v5 + 8);
    v10 = v8 + 32LL * ((unsigned int)(a2 - v8) >> v9);
    v11 = -32LL * *(unsigned __int8 *)(v10 + 26) + v10;
    v12 = *(_BYTE *)(v11 + 24);
    v13 = v8 + ((__int64)(v11 - v8) >> 5 << v9);
    v14 = 0;
    if ( (v13 == a2) + v12 == 11 )
    {
      v15 = v5[3];
      v16 = (unsigned __int64)*(unsigned __int16 *)(v13 + 44) << 6;
      v17 = (((unsigned int)a2
            - ((_DWORD)v13
             + (((unsigned int)qword_140E28208 ^ *(_DWORD *)(v13 + 40) ^ (unsigned int)(v13 >> 12)) >> 16)))
           * (unsigned __int64)*(unsigned int *)(v16 + v15 + 72)) >> 32;
      if ( (_DWORD)a2
         - ((_DWORD)v13
          + (((unsigned int)qword_140E28208 ^ *(_DWORD *)(v13 + 40) ^ (unsigned int)(v13 >> 12)) >> 16)) == (unsigned __int16)(qword_140E28208 ^ *(_WORD *)(v13 + 40) ^ (v13 >> 12)) * ((((unsigned int)a2 - ((_DWORD)v13 + (((unsigned int)qword_140E28208 ^ *(_DWORD *)(v13 + 40) ^ (unsigned int)(v13 >> 12)) >> 16))) * (unsigned __int64)*(unsigned int *)(v16 + v15 + 72)) >> 32) )
      {
        v18 = (*(_DWORD *)(v15 + 76) >> 4) & 0x1FF;
        v19 = (*(_DWORD *)(v15 + 76) >> 13) & 0x3FFFF;
        _BitScanReverse(&v20, v19);
        v21 = 1 << v20;
        v22 = v20 - 2;
        v51 = v22;
        v23 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v22) + 8LL * (v19 ^ v21) + 8)
                        + 8 * v18);
        if ( !v23 )
          LOWORD(v23) = RtlpHpLfhThreadDataInitializeSet(v15);
        if ( (_WORD)v23 != *(_WORD *)(v13 + 46) || *(_BYTE *)(v13 + 22) == 1 )
        {
          v24 = v17;
          v25 = *(_QWORD *)(v13 + 8 * (v17 >> 6) + 64);
          if ( _bittest64(&v25, v17 & 0x3F) )
          {
            v26 = *(_QWORD *)(v13 + 16);
            do
            {
              v49 = HIDWORD(v26);
              v47 = v26;
              if ( BYTE6(v26) == 1 )
                BYTE6(v47) = 2;
              if ( a2 )
              {
                v27 = *(_QWORD *)(v15 + 80);
                *(_WORD *)a2 = v26;
                LOWORD(v47) = v17 + 1;
                *(_DWORD *)(a2 + 8) = a2 ^ HIDWORD(v27) ^ __ROL4__(*(_DWORD *)a2 ^ v27, v26);
              }
              WORD1(v47) = WORD1(v26) + 1;
              v28 = (unsigned __int64)*(unsigned __int16 *)(v13 + 44) << 6;
              v29 = v26;
              v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 16), v47, v26);
            }
            while ( v29 != v26 );
            if ( !*(_BYTE *)(v28 + v15 + 92) )
            {
              *(_BYTE *)(v28 + v15 + 92) = 1;
              if ( !(BYTE1(**(_QWORD **)(*(_QWORD *)v15 + 56LL)) == 1 ? ExpHpGCScheduledNonPaged : ExpHpGCScheduledPaged) )
                RtlpHpEnvCompactionSchedule(*(_QWORD *)(*(_QWORD *)v15 + 56LL));
            }
            if ( BYTE2(v49) == 1 )
            {
              v38 = v15 + ((unsigned __int16)v49 << 6);
              _m_prefetchw((const void *)(v38 + 8));
              v39 = *(_QWORD *)(v38 + 8);
              v40 = *(_QWORD *)(v13 + 24);
              *(_QWORD *)(v13 + 24) = v40 & 0xFFF | (v39 - (v39 & 0xFFF));
              v42 = v39;
              v41 = _InterlockedCompareExchange64((volatile signed __int64 *)(v38 + 8), v39 & 0xFFF | v13, v39);
              if ( v42 != v41 )
              {
                do
                {
                  v43 = v41;
                  *(_QWORD *)(v13 + 24) = v40 ^ (v41 ^ v40) & 0xFFFFFFFFFFFFF000uLL;
                  v41 = _InterlockedCompareExchange64((volatile signed __int64 *)(v38 + 8), v41 & 0xFFF | v13, v41);
                }
                while ( v41 != v43 );
              }
            }
            return 1;
          }
        }
        else
        {
          v24 = v17;
          v44 = 8 * (v17 >> 6);
          v45 = __ROL8__(-2LL, v17 & 0x3F);
          v46 = *(_QWORD *)(v44 + v13 + 64);
          *(_QWORD *)(v44 + v13 + 64) = v46 & v45;
          if ( (~v45 & v46) != 0 )
          {
            ++*(_WORD *)(v13 + 32);
            return 1;
          }
        }
        RtlpLogHeapFailure(17, *(_QWORD *)v15, a2, v13, v24, 0LL);
      }
      return v14;
    }
    v50 = 0;
    v31 = (v11 & v7) + ((__int64)(v11 - (v11 & v7)) >> 5 << v9);
    if ( (v12 & 3) == 3 )
    {
      if ( a2 == v31 )
        goto LABEL_32;
      if ( v12 == 15 )
      {
        if ( a2 > v31 )
        {
          v32 = RtlpHpVsContextFree(v5[4], v31, a2, &v50);
          if ( v32 )
          {
            v33 = v5[3];
            if ( v50 < *(unsigned __int16 *)(v33 + 68) )
            {
              v35 = v33
                  + 8LL
                  * ((unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned __int64)(v50 + 15) >> 4)) - 1);
              do
              {
                v48 = *(_QWORD *)(v35 + 448);
                v36 = v48;
                v37 = v48;
                if ( (v48 & 1) == 0 )
                  break;
                if ( WORD1(v48) > 1u )
                {
                  --WORD1(v48);
                  v37 = v48;
                }
              }
              while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v35 + 448), v37, v36) != v36 );
              return v32;
            }
          }
          return v32;
        }
LABEL_32:
        RtlpHpSegPageRangeShrink(v5, v11);
        return 1;
      }
    }
    RtlpLogHeapFailure(9, v5[7], a2, 0, 0LL, 0LL);
    return 0;
  }
  return RtlpHpLargeFree(a1, a2) != 0;
}
