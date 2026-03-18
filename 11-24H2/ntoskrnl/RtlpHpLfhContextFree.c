/*
 * XREFs of RtlpHpLfhContextFree @ 0x1402B3130
 * Callers:
 *     RtlpHpSegLfhVsFree @ 0x1402B41B0 (RtlpHpSegLfhVsFree.c)
 *     RtlpHpAllocateHeapSlow @ 0x1402B819C (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpMetadataFree @ 0x140420E2C (RtlpHpMetadataFree.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1402B2E04 (RtlpLogHeapFailure.c)
 *     RtlpHpEnvCompactionSchedule @ 0x1402B389C (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F561C (RtlpHpLfhThreadDataInitializeSet.c)
 */

__int64 __fastcall RtlpHpLfhContextFree(ULONG_PTR *a1, unsigned __int64 a2, ULONG_PTR a3)
{
  unsigned int v5; // r10d
  unsigned __int64 v6; // r9
  unsigned int v7; // edi
  unsigned int v8; // edx
  unsigned __int64 v10; // rbp
  unsigned int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rax
  signed __int64 v16; // rax
  ULONG_PTR v17; // r8
  unsigned __int64 v18; // rcx
  signed __int64 v19; // rtt
  ULONG_PTR *v22; // r9
  signed __int64 v23; // rax
  __int64 v24; // r10
  signed __int64 v25; // rax
  signed __int64 v26; // rtt
  signed __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  signed __int64 v30; // [rsp+68h] [rbp+10h]
  int v31; // [rsp+74h] [rbp+1Ch]

  v5 = qword_140E28208 ^ *(_DWORD *)(a2 + 40) ^ (a2 >> 12);
  v6 = (unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6;
  v7 = 0;
  v8 = a3 - HIWORD(v5) - a2;
  v10 = (v8 * (unsigned __int64)*(unsigned int *)((char *)a1 + v6 + 72)) >> 32;
  if ( v8 != (unsigned __int16)v5 * ((v8 * (unsigned __int64)*(unsigned int *)((char *)a1 + v6 + 72)) >> 32) )
    return v7;
  v11 = (*((_DWORD *)a1 + 19) >> 13) & 0x3FFFF;
  _BitScanReverse(&v12, v11);
  v13 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v12 - 2) + 8LL * (v11 ^ (1 << v12)) + 8)
                  + 8LL * ((*((_DWORD *)a1 + 19) >> 4) & 0x1FF));
  if ( !v13 )
    LOWORD(v13) = RtlpHpLfhThreadDataInitializeSet(a1);
  if ( (_WORD)v13 != *(_WORD *)(a2 + 46) || *(_BYTE *)(a2 + 22) == 1 )
  {
    v14 = v10;
    v15 = *(_QWORD *)(a2 + 8 * (v10 >> 6) + 64);
    if ( _bittest64(&v15, v10 & 0x3F) )
    {
      v16 = *(_QWORD *)(a2 + 16);
      do
      {
        v31 = HIDWORD(v16);
        v30 = v16;
        if ( BYTE6(v16) == 1 )
          BYTE6(v30) = 2;
        if ( a3 )
        {
          v17 = a1[10];
          *(_WORD *)a3 = v16;
          LOWORD(v30) = v10 + 1;
          *(_DWORD *)(a3 + 8) = a3 ^ HIDWORD(v17) ^ __ROL4__(*(_DWORD *)a3 ^ v17, v16);
        }
        WORD1(v30) = WORD1(v16) + 1;
        v18 = (unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6;
        v19 = v16;
        v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), v30, v16);
      }
      while ( v19 != v16 );
      if ( !*((_BYTE *)a1 + v18 + 92) )
      {
        *((_BYTE *)a1 + v18 + 92) = 1;
        if ( !(BYTE1(**(_QWORD **)(*a1 + 56)) == 1 ? ExpHpGCScheduledNonPaged : ExpHpGCScheduledPaged) )
          RtlpHpEnvCompactionSchedule(*(_QWORD *)(*a1 + 56));
      }
      if ( BYTE2(v31) == 1 )
      {
        v22 = &a1[8 * (unsigned __int16)v31];
        _m_prefetchw(v22 + 1);
        v23 = v22[1];
        v24 = *(_QWORD *)(a2 + 24);
        *(_QWORD *)(a2 + 24) = v24 & 0xFFF | (v23 - (v23 & 0xFFF));
        v26 = v23;
        v25 = _InterlockedCompareExchange64((volatile signed __int64 *)v22 + 1, a2 | v23 & 0xFFF, v23);
        if ( v26 != v25 )
        {
          do
          {
            v27 = v25;
            *(_QWORD *)(a2 + 24) = v24 ^ (v24 ^ v25) & 0xFFFFFFFFFFFFF000uLL;
            v25 = _InterlockedCompareExchange64((volatile signed __int64 *)v22 + 1, a2 | v25 & 0xFFF, v25);
          }
          while ( v25 != v27 );
        }
      }
      return 1;
    }
  }
  else
  {
    v28 = *(_QWORD *)(a2 + 8 * (v10 >> 6) + 64);
    v29 = __ROL8__(-2LL, v10 & 0x3F);
    v14 = v10;
    *(_QWORD *)(a2 + 8 * (v10 >> 6) + 64) = v29 & v28;
    if ( (~v29 & v28) != 0 )
    {
      ++*(_WORD *)(a2 + 32);
      return 1;
    }
  }
  RtlpLogHeapFailure(17, *a1, a3, a2, v14, 0LL);
  return 0LL;
}
