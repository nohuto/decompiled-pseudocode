/*
 * XREFs of KiSelectIdleProcessor @ 0x1403690F0
 * Callers:
 *     KiChooseTargetProcessor @ 0x1404DE410 (KiChooseTargetProcessor.c)
 * Callees:
 *     KiFindRankBiasedIdleSmtSet @ 0x140368B7C (KiFindRankBiasedIdleSmtSet.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x140369BE0 (KiReduceByEffectiveIdleSmtSet.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KiSelectIdleProcessor(_WORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char *a6)
{
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rbx
  __int64 v15; // r8
  unsigned __int8 v16; // r10
  unsigned __int8 v17; // cl
  __int64 v18; // rdx
  unsigned __int8 v20; // r9
  __int64 v21; // r10
  __int64 v22; // r9
  unsigned __int64 v23; // r11
  unsigned __int64 v24; // r9
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  char v27; // cl
  __int64 v28; // r9
  char v29; // cl
  unsigned __int64 v30; // rax
  char v31; // al
  _QWORD v32[2]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v33[64]; // [rsp+30h] [rbp-98h] BYREF

  v6 = a5;
  v7 = 0LL;
  if ( a5 )
    goto LABEL_2;
  v21 = *(unsigned __int16 *)(a4 + 136);
  if ( (unsigned __int16)v21 >= *a1 )
    v22 = 0LL;
  else
    v22 = *(_QWORD *)&a1[4 * v21 + 4];
  v23 = *(_QWORD *)(a4 + 128);
  v24 = v23 & v22;
  if ( v24 )
  {
    v25 = *(_QWORD *)(a3 + 192);
    LODWORD(v32[0]) = 0;
    _BitScanForward64(&v26, *(_QWORD *)(v25 + 128));
    _BitScanForward64((unsigned __int64 *)&v25, v23);
    v27 = (v25 + *(_BYTE *)(a3 + 209) - v26) & 0x3F;
    _BitScanForward64((unsigned __int64 *)&v25, __ROR8__(v24, v27));
    v6 = KiProcessorBlock[*((unsigned int *)qword_140F22998 + 64 * (_DWORD)v21 + (((_BYTE)v25 + v27) & 0x3Fu))];
LABEL_2:
    memset_0(v33, 0, sizeof(v33));
    v11 = *(unsigned __int16 *)(a4 + 136);
    if ( (unsigned __int16)v11 >= *a1 )
      v12 = 0LL;
    else
      v12 = *(_QWORD *)&a1[4 * v11 + 4];
    v13 = *(_QWORD *)(a4 + 8);
    v14 = v12 & v13 & *(_QWORD *)(a4 + 8LL * *((int *)a6 + 1) + 16);
    v32[0] = v14;
    if ( v14 )
    {
      if ( (*(_BYTE *)(a4 + 184) & 1) == 0 )
        goto LABEL_6;
      if ( *a6 && KiFindRankBiasedIdleSmtSet(a4, v32) )
      {
        v14 = v32[0];
LABEL_6:
        RtlCopyVolatileMemory(v33, (const void *)(a4 + 576), 0x40uLL);
        v15 = 0LL;
        v16 = -1;
        v17 = 0;
        v18 = 0LL;
        do
        {
          if ( ((1LL << v17) & v14) != 0 )
          {
            v20 = v33[v18];
            if ( v20 == v16 )
            {
              v15 |= 1LL << v18;
            }
            else if ( v20 < v16 )
            {
              v16 = v33[v18];
              v15 = 1LL << v17;
            }
          }
          ++v17;
          ++v18;
        }
        while ( v17 < 0x40u );
        if ( (v15 & *(_QWORD *)(v6 + 200)) != 0 )
          return v6;
        v28 = *(_QWORD *)(v6 + 36448) & v15;
        if ( !v28 )
        {
          v28 = *(_QWORD *)(v6 + 36472) & v15;
          if ( !v28 )
          {
            v28 = v15;
            if ( (KiCacheAwareScheduling & 1) != 0 && (*(_QWORD *)(v6 + 36464) & v15) != 0 )
              v28 = *(_QWORD *)(v6 + 36464) & v15;
          }
        }
        v29 = *(_BYTE *)(v6 + 209);
        _BitScanForward64(&v30, __ROR8__(v28, v29));
        return KiProcessorBlock[*((unsigned int *)qword_140F22998
                                + 64 * *(unsigned __int8 *)(v6 + 208)
                                + (((unsigned __int8)v30 + v29) & 0x3F))];
      }
      v14 = v32[0];
      v31 = *a6;
      if ( (v32[0] & *(_QWORD *)(a4 + 24)) != 0LL )
      {
        if ( !v31 || (unsigned int)__popcnt(v13) >= KiPerfIsoEnabled )
        {
          v14 = v32[0] & *(_QWORD *)(a4 + 24);
          goto LABEL_6;
        }
      }
      else if ( !v31 )
      {
        if ( *(_QWORD *)(a2 + 192) == a4 )
        {
          KiReduceByEffectiveIdleSmtSet(a2, v32);
          v14 = v32[0];
        }
        goto LABEL_6;
      }
    }
    return v7;
  }
  return 0LL;
}
