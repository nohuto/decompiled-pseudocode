/*
 * XREFs of KsepDbGetShimInfo @ 0x14073C4E4
 * Callers:
 *     KsepEngineGetShimsFromRegistry @ 0x140942038 (KsepEngineGetShimsFromRegistry.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x14049AA70 (KsepPoolAllocatePaged.c)
 *     KsepPoolFreePaged @ 0x1404A18F4 (KsepPoolFreePaged.c)
 *     KsepDbGetSdbString @ 0x14073C4B0 (KsepDbGetSdbString.c)
 *     SdbGetKShimTagRef @ 0x1408029B0 (SdbGetKShimTagRef.c)
 *     SdbReadGUIDTag @ 0x1408062B0 (SdbReadGUIDTag.c)
 *     SdbTagRefToTagID @ 0x14080642C (SdbTagRefToTagID.c)
 *     KsepDbFreeDriverShims @ 0x140941710 (KsepDbFreeDriverShims.c)
 *     KseShimDatabaseClose @ 0x140943D3C (KseShimDatabaseClose.c)
 *     KseShimDatabaseOpen @ 0x140943EEC (KseShimDatabaseOpen.c)
 *     SdbReadDWORDTag @ 0x140946BB8 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x140947AFC (SdbFindFirstTag.c)
 */

__int64 __fastcall KsepDbGetShimInfo(__int64 a1, unsigned int a2)
{
  char *v2; // rdi
  __int64 v3; // rsi
  int v4; // eax
  __int64 *v5; // r13
  int SdbString; // ebx
  char *Paged; // rax
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // r15
  unsigned int KShimTagRef; // eax
  __int64 v12; // r14
  unsigned int FirstTag; // eax
  __m128i *v14; // rax
  __m128i v15; // xmm1
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // eax
  unsigned int v19; // eax
  int DWORDTag; // eax
  char *v21; // r9
  __int64 v22; // r14
  _DWORD *v23; // r8
  __int128 v24; // xmm0
  unsigned int v26[4]; // [rsp+28h] [rbp-49h] BYREF
  __int64 *v27; // [rsp+38h] [rbp-39h] BYREF
  __int64 v28; // [rsp+48h] [rbp-29h] BYREF
  __int64 v29; // [rsp+50h] [rbp-21h]
  unsigned __int64 v30; // [rsp+58h] [rbp-19h]
  __int64 v31; // [rsp+60h] [rbp-11h]
  __int128 v32; // [rsp+68h] [rbp-9h] BYREF
  char v33[32]; // [rsp+78h] [rbp+7h] BYREF

  v29 = a1;
  v2 = 0LL;
  v26[0] = 0;
  v28 = 0LL;
  v27 = 0LL;
  v3 = a2;
  v4 = KseShimDatabaseOpen(&v27);
  v5 = v27;
  SdbString = v4;
  if ( v4 >= 0 )
  {
    Paged = (char *)KsepPoolAllocatePaged(80 * v3);
    v8 = *v5;
    v2 = Paged;
    v30 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    SdbString = -1073741275;
    v31 = v8;
    v9 = 0LL;
    v27 = 0LL;
    while ( (unsigned int)v9 < (unsigned int)v3 )
    {
      v10 = 80 * v9;
      KShimTagRef = SdbGetKShimTagRef(v8, *(_QWORD *)(80 * v9 + v29 + 24));
      if ( !KShimTagRef )
        goto LABEL_18;
      if ( (unsigned int)SdbTagRefToTagID(v8, KShimTagRef, &v28, v26) )
      {
        v12 = v28;
        FirstTag = SdbFindFirstTag(v28, v26[0], 36880LL);
        if ( !FirstTag )
          goto LABEL_18;
        v32 = 0LL;
        v14 = (__m128i *)SdbReadGUIDTag(v33, v12, FirstTag, &v32);
        v15 = *v14;
        v16 = v14->m128i_i64[0] - (_QWORD)v27;
        if ( !v16 )
          v16 = _mm_srli_si128(v15, 8).m128i_u64[0] - v30;
        if ( !v16 )
          goto LABEL_18;
        v17 = v26[0];
        *(__m128i *)&v2[v10] = v15;
        v18 = SdbFindFirstTag(v12, v17, 24579LL);
        if ( !v18 )
          goto LABEL_18;
        SdbString = KsepDbGetSdbString(v12, v18, (__int64)&v2[v10 + 32]);
        if ( SdbString < 0 )
          goto LABEL_18;
        v19 = SdbFindFirstTag(v12, v26[0], 16407LL);
        if ( !v19 )
          goto LABEL_18;
        DWORDTag = SdbReadDWORDTag(v12, v19, 0LL);
        v8 = v31;
        *(_DWORD *)&v2[v10 + 64] = DWORDTag;
      }
      v9 = (unsigned int)(v9 + 1);
    }
    SdbString = 0;
    if ( (_DWORD)v3 )
    {
      v21 = &v2[-v29];
      v22 = v3;
      v23 = (_DWORD *)(v29 + 64);
      do
      {
        *v23 = *(_DWORD *)((char *)v23 + (_QWORD)v21);
        v24 = *(_OWORD *)((char *)v23 + (_QWORD)v21 - 32);
        v23 += 20;
        *((_OWORD *)v23 - 7) = v24;
        *((_OWORD *)v23 - 9) = *(_OWORD *)((char *)v23 + (_QWORD)v21 - 144);
        --v22;
      }
      while ( v22 );
    }
  }
LABEL_18:
  if ( v5 )
    KseShimDatabaseClose(v5);
  if ( SdbString >= 0 )
    KsepPoolFreePaged(v2);
  else
    KsepDbFreeDriverShims(v2, (unsigned int)v3);
  return (unsigned int)SdbString;
}
