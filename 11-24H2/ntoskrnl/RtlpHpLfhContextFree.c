/*
 * XREFs of RtlpHpLfhContextFree @ 0x14035BCF0
 * Callers:
 *     RtlpHpSegLfhVsFree @ 0x14035CC90 (RtlpHpSegLfhVsFree.c)
 *     RtlpHpMetadataFree @ 0x140459100 (RtlpHpMetadataFree.c)
 *     RtlpHpAllocateHeapSlow @ 0x1404D2B7C (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 *     RtlpHpEnvCompactionSchedule @ 0x14035ED20 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F2F1C (RtlpHpLfhThreadDataInitializeSet.c)
 */

__int64 __fastcall RtlpHpLfhContextFree(ULONG_PTR *a1, unsigned __int64 a2, ULONG_PTR a3)
{
  unsigned int v5; // r10d
  unsigned __int64 v6; // r9
  unsigned int v7; // edi
  unsigned int v8; // edx
  unsigned __int64 v10; // rbp
  struct _KPRCB *CurrentPrcb; // r8
  unsigned int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rax
  signed __int64 v17; // rax
  ULONG_PTR v18; // r8
  int v19; // edx
  unsigned __int64 v20; // rcx
  signed __int64 v21; // rtt
  ULONG_PTR *v24; // r9
  signed __int64 v25; // rax
  __int64 v26; // r10
  signed __int64 v27; // rax
  signed __int64 v28; // rtt
  signed __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  signed __int64 v32; // [rsp+68h] [rbp+10h]
  int v33; // [rsp+74h] [rbp+1Ch]

  v5 = qword_140E28348 ^ *(_DWORD *)(a2 + 40) ^ (a2 >> 12);
  v6 = (unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6;
  v7 = 0;
  v8 = a3 - HIWORD(v5) - a2;
  v10 = (v8 * (unsigned __int64)*(unsigned int *)((char *)a1 + v6 + 72)) >> 32;
  if ( v8 != (unsigned __int16)v5 * ((v8 * (unsigned __int64)*(unsigned int *)((char *)a1 + v6 + 72)) >> 32) )
    return v7;
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = (*((_DWORD *)a1 + 19) >> 13) & 0x3FFFF;
  _BitScanReverse(&v13, v12);
  v14 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)CurrentPrcb->ExSaPageArray + v13 - 2) + 8LL * (v12 ^ (1 << v13)) + 8)
                  + 8LL * ((*((_DWORD *)a1 + 19) >> 4) & 0x1FF));
  if ( !v14 )
    LOWORD(v14) = RtlpHpLfhThreadDataInitializeSet(a1);
  if ( (_WORD)v14 != *(_WORD *)(a2 + 46) || *(_BYTE *)(a2 + 22) == 1 )
  {
    v15 = v10;
    v16 = *(_QWORD *)(a2 + 8 * (v10 >> 6) + 64);
    if ( _bittest64(&v16, v10 & 0x3F) )
    {
      v17 = *(_QWORD *)(a2 + 16);
      do
      {
        v33 = HIDWORD(v17);
        v32 = v17;
        if ( BYTE6(v17) == 1 )
          BYTE6(v32) = 2;
        if ( a3 )
        {
          v18 = a1[10];
          v19 = v18;
          *(_WORD *)a3 = v17;
          CurrentPrcb = (struct _KPRCB *)HIDWORD(v18);
          LOWORD(v32) = v10 + 1;
          *(_DWORD *)(a3 + 8) = a3 ^ (unsigned int)CurrentPrcb ^ __ROL4__(*(_DWORD *)a3 ^ v19, v17);
        }
        WORD1(v32) = WORD1(v17) + 1;
        v20 = (unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6;
        v21 = v17;
        v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), v32, v17);
      }
      while ( v21 != v17 );
      if ( !*((_BYTE *)a1 + v20 + 92) )
      {
        *((_BYTE *)a1 + v20 + 92) = 1;
        if ( !(BYTE1(**(_QWORD **)(*a1 + 56)) == 1 ? ExpHpGCScheduledNonPaged : ExpHpGCScheduledPaged) )
          RtlpHpEnvCompactionSchedule(*(_QWORD *)(*a1 + 56), v32, CurrentPrcb);
      }
      if ( BYTE2(v33) == 1 )
      {
        v24 = &a1[8 * (unsigned __int16)v33];
        _m_prefetchw(v24 + 1);
        v25 = v24[1];
        v26 = *(_QWORD *)(a2 + 24);
        *(_QWORD *)(a2 + 24) = v26 & 0xFFF | (v25 - (v25 & 0xFFF));
        v28 = v25;
        v27 = _InterlockedCompareExchange64((volatile signed __int64 *)v24 + 1, a2 | v25 & 0xFFF, v25);
        if ( v28 != v27 )
        {
          do
          {
            v29 = v27;
            *(_QWORD *)(a2 + 24) = v26 ^ (v26 ^ v27) & 0xFFFFFFFFFFFFF000uLL;
            v27 = _InterlockedCompareExchange64((volatile signed __int64 *)v24 + 1, a2 | v27 & 0xFFF, v27);
          }
          while ( v27 != v29 );
        }
      }
      return 1;
    }
  }
  else
  {
    v30 = *(_QWORD *)(a2 + 8 * (v10 >> 6) + 64);
    v31 = __ROL8__(-2LL, v10 & 0x3F);
    v15 = v10;
    *(_QWORD *)(a2 + 8 * (v10 >> 6) + 64) = v31 & v30;
    if ( (~v31 & v30) != 0 )
    {
      ++*(_WORD *)(a2 + 32);
      return 1;
    }
  }
  RtlpLogHeapFailure(17, *a1, a3, a2, v15, 0LL);
  return 0LL;
}
