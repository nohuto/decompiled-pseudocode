/*
 * XREFs of RtlpHpFreeHeap @ 0x14035B220
 * Callers:
 *     ExAllocateHeapPool @ 0x140277790 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x140359950 (ExFreeHeapPool.c)
 *     ExpHpCompactHeapCallback @ 0x14035CAD0 (ExpHpCompactHeapCallback.c)
 *     ExAllocateContiguousHeapPool @ 0x140396AFC (ExAllocateContiguousHeapPool.c)
 *     ExpFreeHeapSpecialPool @ 0x140398994 (ExpFreeHeapSpecialPool.c)
 *     ExFreeHeapPages @ 0x1403E931C (ExFreeHeapPages.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 *     RtlpHpVsContextFree @ 0x14035BAE0 (RtlpHpVsContextFree.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x14035C3DC (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpEnvCompactionSchedule @ 0x14035ED20 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpSegPageRangeShrink @ 0x140363BF0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpLargeFree @ 0x140458F38 (RtlpHpLargeFree.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F2F1C (RtlpHpLfhThreadDataInitializeSet.c)
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
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v19; // r9
  unsigned int v20; // eax
  unsigned int v21; // ecx
  int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rax
  signed __int64 v27; // rax
  unsigned __int64 v28; // r8
  int v29; // edx
  unsigned __int64 v30; // rdx
  signed __int64 v31; // rtt
  unsigned __int64 v33; // rdx
  unsigned int v34; // r14d
  __int64 v35; // r8
  __int64 v37; // r9
  signed __int64 v38; // rcx
  signed __int64 v39; // rdx
  __int64 v40; // r9
  signed __int64 v41; // rax
  __int64 v42; // r10
  signed __int64 v43; // rax
  signed __int64 v44; // rtt
  signed __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  signed __int64 v49; // [rsp+30h] [rbp-38h]
  signed __int64 v50; // [rsp+38h] [rbp-30h]
  int v51; // [rsp+3Ch] [rbp-2Ch]
  unsigned int v52; // [rsp+80h] [rbp+18h] BYREF
  int v53; // [rsp+88h] [rbp+20h]

  v52 = a3;
  if ( (_WORD)a2 )
  {
    v5 = (__int64 *)(a1 + 320);
    goto LABEL_7;
  }
  v6 = RtlCSparseBitmapBitmaskRead(&dword_140E68510, 2 * ((a2 - qword_140E68508) >> 20));
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
             + (((unsigned int)qword_140E28348 ^ *(_DWORD *)(v13 + 40) ^ (unsigned int)(v13 >> 12)) >> 16)))
           * (unsigned __int64)*(unsigned int *)(v16 + v15 + 72)) >> 32;
      if ( (_DWORD)a2
         - ((_DWORD)v13
          + (((unsigned int)qword_140E28348 ^ *(_DWORD *)(v13 + 40) ^ (unsigned int)(v13 >> 12)) >> 16)) == (unsigned __int16)(qword_140E28348 ^ *(_WORD *)(v13 + 40) ^ (v13 >> 12)) * ((((unsigned int)a2 - ((_DWORD)v13 + (((unsigned int)qword_140E28348 ^ *(_DWORD *)(v13 + 40) ^ (unsigned int)(v13 >> 12)) >> 16))) * (unsigned __int64)*(unsigned int *)(v16 + v15 + 72)) >> 32) )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v19 = (*(_DWORD *)(v15 + 76) >> 4) & 0x1FF;
        v20 = (*(_DWORD *)(v15 + 76) >> 13) & 0x3FFFF;
        _BitScanReverse(&v21, v20);
        v22 = 1 << v21;
        v23 = v21 - 2;
        v53 = v23;
        v24 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)CurrentPrcb->ExSaPageArray + v23) + 8LL * (v20 ^ v22) + 8) + 8 * v19);
        if ( !v24 )
          LOWORD(v24) = RtlpHpLfhThreadDataInitializeSet(v15);
        if ( (_WORD)v24 != *(_WORD *)(v13 + 46) || *(_BYTE *)(v13 + 22) == 1 )
        {
          v25 = v17;
          v26 = *(_QWORD *)(v13 + 8 * (v17 >> 6) + 64);
          if ( _bittest64(&v26, v17 & 0x3F) )
          {
            v27 = *(_QWORD *)(v13 + 16);
            do
            {
              v51 = HIDWORD(v27);
              v49 = v27;
              if ( BYTE6(v27) == 1 )
                BYTE6(v49) = 2;
              if ( a2 )
              {
                v28 = *(_QWORD *)(v15 + 80);
                v29 = v28;
                *(_WORD *)a2 = v27;
                CurrentPrcb = (struct _KPRCB *)HIDWORD(v28);
                LOWORD(v49) = v17 + 1;
                *(_DWORD *)(a2 + 8) = a2 ^ (unsigned int)CurrentPrcb ^ __ROL4__(*(_DWORD *)a2 ^ v29, v27);
              }
              WORD1(v49) = WORD1(v27) + 1;
              v30 = (unsigned __int64)*(unsigned __int16 *)(v13 + 44) << 6;
              v31 = v27;
              v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 16), v49, v27);
            }
            while ( v31 != v27 );
            if ( !*(_BYTE *)(v30 + v15 + 92) )
            {
              *(_BYTE *)(v30 + v15 + 92) = 1;
              if ( !(BYTE1(**(_QWORD **)(*(_QWORD *)v15 + 56LL)) == 1 ? ExpHpGCScheduledNonPaged : ExpHpGCScheduledPaged) )
                RtlpHpEnvCompactionSchedule(*(_QWORD *)(*(_QWORD *)v15 + 56LL), v30, CurrentPrcb);
            }
            if ( BYTE2(v51) == 1 )
            {
              v40 = v15 + ((unsigned __int16)v51 << 6);
              _m_prefetchw((const void *)(v40 + 8));
              v41 = *(_QWORD *)(v40 + 8);
              v42 = *(_QWORD *)(v13 + 24);
              *(_QWORD *)(v13 + 24) = v42 & 0xFFF | (v41 - (v41 & 0xFFF));
              v44 = v41;
              v43 = _InterlockedCompareExchange64((volatile signed __int64 *)(v40 + 8), v41 & 0xFFF | v13, v41);
              if ( v44 != v43 )
              {
                do
                {
                  v45 = v43;
                  *(_QWORD *)(v13 + 24) = v42 ^ (v43 ^ v42) & 0xFFFFFFFFFFFFF000uLL;
                  v43 = _InterlockedCompareExchange64((volatile signed __int64 *)(v40 + 8), v43 & 0xFFF | v13, v43);
                }
                while ( v43 != v45 );
              }
            }
            return 1;
          }
        }
        else
        {
          v25 = v17;
          v46 = 8 * (v17 >> 6);
          v47 = __ROL8__(-2LL, v17 & 0x3F);
          v48 = *(_QWORD *)(v46 + v13 + 64);
          *(_QWORD *)(v46 + v13 + 64) = v48 & v47;
          if ( (~v47 & v48) != 0 )
          {
            ++*(_WORD *)(v13 + 32);
            return 1;
          }
        }
        RtlpLogHeapFailure(17, *(_QWORD *)v15, a2, v13, v25, 0LL);
      }
      return v14;
    }
    v52 = 0;
    v33 = (v11 & v7) + ((__int64)(v11 - (v11 & v7)) >> 5 << v9);
    if ( (v12 & 3) == 3 )
    {
      if ( a2 == v33 )
        goto LABEL_32;
      if ( v12 == 15 )
      {
        if ( a2 > v33 )
        {
          v34 = RtlpHpVsContextFree(v5[4], v33, a2, &v52);
          if ( v34 )
          {
            v35 = v5[3];
            if ( v52 < *(unsigned __int16 *)(v35 + 68) )
            {
              v37 = v35
                  + 8LL
                  * ((unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned __int64)(v52 + 15) >> 4)) - 1);
              do
              {
                v50 = *(_QWORD *)(v37 + 448);
                v38 = v50;
                v39 = v50;
                if ( (v50 & 1) == 0 )
                  break;
                if ( WORD1(v50) > 1u )
                {
                  --WORD1(v50);
                  v39 = v50;
                }
              }
              while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v37 + 448), v39, v38) != v38 );
              return v34;
            }
          }
          return v34;
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
