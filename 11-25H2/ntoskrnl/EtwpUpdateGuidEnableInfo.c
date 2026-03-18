/*
 * XREFs of EtwpUpdateGuidEnableInfo @ 0x1409E53C0
 * Callers:
 *     EtwpEnableGuid @ 0x14089BB2C (EtwpEnableGuid.c)
 * Callees:
 *     _tlgWriteAgg @ 0x1403BAC2C (_tlgWriteAgg.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     EtwpReferenceGuidEntry @ 0x14089BAD0 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x14089E370 (EtwpUnreferenceGuidEntry.c)
 *     EtwpUpdateGuidFilterData @ 0x1409E5684 (EtwpUpdateGuidFilterData.c)
 */

__int64 __fastcall EtwpUpdateGuidEnableInfo(_BYTE *P, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  int v5; // eax
  char v8; // dl
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 i; // rdx
  __int64 v12; // rax
  __int64 v13; // r11
  char *v14; // r10
  int v15; // r15d
  unsigned __int8 v16; // si
  __int64 v17; // r14
  unsigned __int8 v18; // al
  __int64 v19; // rax
  __int64 v20; // r11
  char *v21; // r10
  int v22; // r15d
  unsigned __int8 v23; // si
  __int64 v24; // r14
  unsigned __int8 v26; // al
  __int64 v27; // r8
  __int64 v28; // r9
  __int128 v29; // [rsp+30h] [rbp-91h]
  __int128 v30; // [rsp+30h] [rbp-91h]
  __int128 v31; // [rsp+40h] [rbp-81h]
  __int128 v32; // [rsp+40h] [rbp-81h]
  int v33; // [rsp+50h] [rbp-71h] BYREF
  __int64 v34; // [rsp+58h] [rbp-69h] BYREF
  __int64 v35; // [rsp+60h] [rbp-61h] BYREF
  _BYTE v36[32]; // [rsp+70h] [rbp-51h] BYREF
  __int64 *v37; // [rsp+90h] [rbp-31h]
  __int64 v38; // [rsp+98h] [rbp-29h]
  __int64 *v39; // [rsp+A0h] [rbp-21h]
  __int64 v40; // [rsp+A8h] [rbp-19h]
  char *v41; // [rsp+B0h] [rbp-11h]
  __int64 v42; // [rsp+B8h] [rbp-9h]
  int *v43; // [rsp+C0h] [rbp-1h]
  __int64 v44; // [rsp+C8h] [rbp+7h]

  v5 = *(_DWORD *)(a2 + 72);
  if ( v5 == 1 )
  {
    v8 = *(_BYTE *)(a2 + 112);
    P[91] ^= (P[91] ^ v8) & 1;
    P[91] = v8 & 1 | (2 * *(_BYTE *)(a2 + 107));
    *((_WORD *)P + 44) = *(_WORD *)(a2 + 104);
    P[90] = *(_BYTE *)(a2 + 106);
    *((_QWORD *)P + 10) = a3;
  }
  else if ( !v5 && *((_WORD *)P + 44) == *(_WORD *)(a2 + 104) )
  {
    P[91] &= ~1u;
  }
  v9 = 0LL;
  v10 = 8LL;
  while ( (unsigned int)v9 < 8 )
  {
    if ( *(_WORD *)&P[32 * (unsigned int)v9 + 134] == *(_WORD *)(a2 + 78) )
    {
      v19 = 32 * ((unsigned int)v9 + 4LL);
      if ( *(_DWORD *)&P[v19] )
      {
        v20 = -1LL;
        v21 = P + 132;
        *(_OWORD *)&P[v19] = *(_OWORD *)(a2 + 72);
        v30 = 0LL;
        v22 = 0;
        v23 = 0;
        v24 = 0LL;
        *(_OWORD *)&P[v19 + 16] = *(_OWORD *)(a2 + 88);
        *((_QWORD *)&v32 + 1) = -1LL;
        do
        {
          if ( *((_DWORD *)v21 - 1) )
          {
            v26 = v23;
            LODWORD(v30) = 1;
            if ( v23 <= (unsigned __int8)*v21 )
              v26 = *v21;
            v20 &= *(_QWORD *)(v21 + 20);
            v24 |= *(_QWORD *)(v21 + 12);
            v23 = v26;
            v22 |= *((_DWORD *)v21 + 1);
            *((_QWORD *)&v32 + 1) = v20;
          }
          v21 += 32;
          --v10;
        }
        while ( v10 );
        BYTE4(v30) = v23;
        DWORD2(v30) = v22;
        *(_QWORD *)&v32 = v24;
        *((_OWORD *)P + 6) = v30;
        *((_OWORD *)P + 7) = v32;
        *a5 = 1 << v9;
        EtwpUpdateGuidFilterData(P, v9, *(_DWORD *)(a2 + 72) == 0, a4);
        if ( !*(_DWORD *)(a2 + 72) )
          EtwpUnreferenceGuidEntry((volatile signed __int64 *)P);
        return 0LL;
      }
    }
    v9 = (unsigned int)(v9 + 1);
  }
  if ( !*(_DWORD *)(a2 + 72) )
    return 3221226021LL;
  for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
  {
    v12 = 32 * ((unsigned int)i + 4LL);
    if ( !*(_DWORD *)&P[v12] )
    {
      v13 = -1LL;
      v14 = P + 132;
      *(_OWORD *)&P[v12] = *(_OWORD *)(a2 + 72);
      v29 = 0LL;
      v15 = 0;
      v16 = 0;
      v17 = 0LL;
      *(_OWORD *)&P[v12 + 16] = *(_OWORD *)(a2 + 88);
      *((_QWORD *)&v31 + 1) = -1LL;
      do
      {
        if ( *((_DWORD *)v14 - 1) )
        {
          v18 = v16;
          LODWORD(v29) = 1;
          if ( v16 <= (unsigned __int8)*v14 )
            v18 = *v14;
          v13 &= *(_QWORD *)(v14 + 20);
          v17 |= *(_QWORD *)(v14 + 12);
          v16 = v18;
          v15 |= *((_DWORD *)v14 + 1);
          *((_QWORD *)&v31 + 1) = v13;
        }
        v14 += 32;
        --v10;
      }
      while ( v10 );
      BYTE4(v29) = v16;
      DWORD2(v29) = v15;
      *(_QWORD *)&v31 = v17;
      *((_OWORD *)P + 6) = v29;
      *((_OWORD *)P + 7) = v31;
      *a5 = 1 << i;
      EtwpUpdateGuidFilterData(P, i, *(_DWORD *)(a2 + 72) == 0, a4);
      EtwpReferenceGuidEntry((ULONG_PTR)P);
      return 0LL;
    }
  }
  if ( (unsigned int)dword_140E09048 > 5 && tlgKeywordOn((__int64)&dword_140E09048, 0x200000000000LL) )
  {
    v34 = v28;
    v37 = &v34;
    v38 = v27;
    v35 = 2164260864LL;
    v40 = v27;
    v39 = &v35;
    v42 = 16LL;
    v41 = P + 40;
    v43 = &v33;
    v33 = v27;
    v44 = 4LL;
    tlgWriteAgg((__int64)&dword_140E09048, (unsigned __int8 *)word_140051BF2, v27, 6u, (__int64)v36);
  }
  return 3221225626LL;
}
