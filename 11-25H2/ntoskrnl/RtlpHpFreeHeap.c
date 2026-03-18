/*
 * XREFs of RtlpHpFreeHeap @ 0x1402DE7F0
 * Callers:
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402DECE0 (ExFreeHeapPool.c)
 *     ExFreeHeapPages @ 0x1402F72DC (ExFreeHeapPages.c)
 *     ExpFreeHeapSpecialPool @ 0x1402F7C14 (ExpFreeHeapSpecialPool.c)
 *     ExAllocateContiguousHeapPool @ 0x1402F7F74 (ExAllocateContiguousHeapPool.c)
 *     ExpHpCompactHeapCallback @ 0x1403C7C20 (ExpHpCompactHeapCallback.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1402DA9BC (RtlpLogHeapFailure.c)
 *     RtlpHpVsContextFree @ 0x1402E0830 (RtlpHpVsContextFree.c)
 *     RtlpHpSegPageRangeShrink @ 0x1402E0DA0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpEnvCompactionSchedule @ 0x1403BBC64 (RtlpHpEnvCompactionSchedule.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x1403C7D9C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeFree @ 0x1403CB4FC (RtlpHpLargeFree.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F2D18 (RtlpHpLfhThreadDataInitializeSet.c)
 */

__int64 __fastcall RtlpHpFreeHeap(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  __int64 *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r8
  ULONG_PTR v8; // rdx
  unsigned int v9; // ebx
  char v11; // r11
  ULONG_PTR v12; // r9
  ULONG_PTR v13; // r9
  char v14; // r10
  unsigned __int64 v15; // rbp
  ULONG_PTR *v16; // r15
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  __int64 v19; // r9
  unsigned int v20; // eax
  unsigned int v21; // ecx
  int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rax
  signed __int64 v27; // rax
  ULONG_PTR v28; // r8
  unsigned __int64 v29; // rdx
  signed __int64 v30; // rtt
  unsigned __int64 v31; // rdx
  unsigned int v32; // r14d
  __int64 v33; // r8
  __int64 v34; // r9
  signed __int64 v35; // rcx
  signed __int64 v36; // rdx
  ULONG_PTR *v38; // r9
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
  v6 = RtlCSparseBitmapBitmaskRead(&dword_140E68050, 2 * ((a2 - qword_140E68048) >> 20));
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
      v9 = 0;
      RtlpLogHeapFailure(9, v5[7], a2, 0LL, 0LL, 0LL);
      return v9;
    }
    v11 = *((_BYTE *)v5 + 8);
    v12 = v8 + 32LL * ((unsigned int)(a2 - v8) >> v11);
    v13 = -32LL * *(unsigned __int8 *)(v12 + 26) + v12;
    v14 = *(_BYTE *)(v13 + 24);
    v15 = v8 + ((__int64)(v13 - v8) >> 5 << v11);
    v9 = 0;
    if ( (v15 == a2) + v14 == 11 )
    {
      v16 = (ULONG_PTR *)v5[3];
      v17 = (unsigned __int64)*(unsigned __int16 *)(v15 + 44) << 6;
      v18 = (((unsigned int)a2
            - ((_DWORD)v15
             + (((unsigned int)qword_140E27FC8 ^ *(_DWORD *)(v15 + 40) ^ (unsigned int)(v15 >> 12)) >> 16)))
           * (unsigned __int64)*(unsigned int *)((char *)v16 + v17 + 72)) >> 32;
      if ( (_DWORD)a2
         - ((_DWORD)v15
          + (((unsigned int)qword_140E27FC8 ^ *(_DWORD *)(v15 + 40) ^ (unsigned int)(v15 >> 12)) >> 16)) == (unsigned __int16)(qword_140E27FC8 ^ *(_WORD *)(v15 + 40) ^ (v15 >> 12)) * ((((unsigned int)a2 - ((_DWORD)v15 + (((unsigned int)qword_140E27FC8 ^ *(_DWORD *)(v15 + 40) ^ (unsigned int)(v15 >> 12)) >> 16))) * (unsigned __int64)*(unsigned int *)((char *)v16 + v17 + 72)) >> 32) )
      {
        v19 = (*((_DWORD *)v16 + 19) >> 4) & 0x1FF;
        v20 = (*((_DWORD *)v16 + 19) >> 13) & 0x3FFFF;
        _BitScanReverse(&v21, v20);
        v22 = 1 << v21;
        v23 = v21 - 2;
        v51 = v23;
        v24 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v23) + 8LL * (v20 ^ v22) + 8)
                        + 8 * v19);
        if ( !v24 )
          LOWORD(v24) = RtlpHpLfhThreadDataInitializeSet(v16);
        if ( (_WORD)v24 != *(_WORD *)(v15 + 46) || *(_BYTE *)(v15 + 22) == 1 )
        {
          v25 = v18;
          v26 = *(_QWORD *)(v15 + 8 * (v18 >> 6) + 64);
          if ( _bittest64(&v26, v18 & 0x3F) )
          {
            v27 = *(_QWORD *)(v15 + 16);
            do
            {
              v49 = HIDWORD(v27);
              v47 = v27;
              if ( BYTE6(v27) == 1 )
                BYTE6(v47) = 2;
              if ( a2 )
              {
                v28 = v16[10];
                *(_WORD *)a2 = v27;
                LOWORD(v47) = v18 + 1;
                *(_DWORD *)(a2 + 8) = a2 ^ HIDWORD(v28) ^ __ROL4__(*(_DWORD *)a2 ^ v28, v27);
              }
              WORD1(v47) = WORD1(v27) + 1;
              v29 = (unsigned __int64)*(unsigned __int16 *)(v15 + 44) << 6;
              v30 = v27;
              v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 16), v47, v27);
            }
            while ( v30 != v27 );
            if ( !*((_BYTE *)v16 + v29 + 92) )
            {
              *((_BYTE *)v16 + v29 + 92) = 1;
              if ( !(BYTE1(**(_QWORD **)(*v16 + 56)) == 1 ? ExpHpGCScheduledNonPaged : ExpHpGCScheduledPaged) )
                RtlpHpEnvCompactionSchedule(*(_QWORD *)(*v16 + 56));
            }
            if ( BYTE2(v49) == 1 )
            {
              v38 = &v16[8 * (unsigned __int16)v49];
              _m_prefetchw(v38 + 1);
              v39 = v38[1];
              v40 = *(_QWORD *)(v15 + 24);
              *(_QWORD *)(v15 + 24) = v40 & 0xFFF | (v39 - (v39 & 0xFFF));
              v42 = v39;
              v41 = _InterlockedCompareExchange64((volatile signed __int64 *)v38 + 1, v39 & 0xFFF | v15, v39);
              if ( v42 != v41 )
              {
                do
                {
                  v43 = v41;
                  *(_QWORD *)(v15 + 24) = v40 ^ (v41 ^ v40) & 0xFFFFFFFFFFFFF000uLL;
                  v41 = _InterlockedCompareExchange64((volatile signed __int64 *)v38 + 1, v41 & 0xFFF | v15, v41);
                }
                while ( v41 != v43 );
              }
            }
            return 1;
          }
        }
        else
        {
          v25 = v18;
          v44 = 8 * (v18 >> 6);
          v45 = __ROL8__(-2LL, v18 & 0x3F);
          v46 = *(_QWORD *)(v44 + v15 + 64);
          *(_QWORD *)(v44 + v15 + 64) = v46 & v45;
          if ( (~v45 & v46) != 0 )
          {
            ++*(_WORD *)(v15 + 32);
            return 1;
          }
        }
        RtlpLogHeapFailure(17, *v16, a2, v15, v25, 0LL);
      }
      return v9;
    }
    v50 = 0;
    v31 = (v13 & v7) + ((__int64)(v13 - (v13 & v7)) >> 5 << v11);
    if ( (v14 & 3) == 3 )
    {
      if ( a2 == v31 )
      {
LABEL_37:
        RtlpHpSegPageRangeShrink(v5, v13);
        return 1;
      }
      if ( v14 == 15 )
      {
        if ( a2 > v31 )
        {
          v32 = RtlpHpVsContextFree(v5[4], v31, a2, &v50);
          if ( v32 )
          {
            v33 = v5[3];
            if ( v50 < *(unsigned __int16 *)(v33 + 68) )
            {
              v34 = v33
                  + 8LL
                  * ((unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned __int64)(v50 + 15) >> 4)) - 1);
              do
              {
                v48 = *(_QWORD *)(v34 + 448);
                v35 = v48;
                v36 = v48;
                if ( (v48 & 1) == 0 )
                  break;
                if ( WORD1(v48) > 1u )
                {
                  --WORD1(v48);
                  v36 = v48;
                }
              }
              while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 448), v36, v35) != v35 );
              return v32;
            }
          }
          return v32;
        }
        goto LABEL_37;
      }
    }
    RtlpLogHeapFailure(9, v5[7], a2, 0LL, 0LL, 0LL);
    return 0;
  }
  return RtlpHpLargeFree(a1, a2) != 0;
}
