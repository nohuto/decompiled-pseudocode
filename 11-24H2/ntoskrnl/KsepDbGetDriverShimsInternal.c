/*
 * XREFs of KsepDbGetDriverShimsInternal @ 0x1409428D4
 * Callers:
 *     KsepDbGetDriverShims @ 0x140942B68 (KsepDbGetDriverShims.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x14049AA70 (KsepPoolAllocatePaged.c)
 *     KsepDbGetSdbString @ 0x14073C4B0 (KsepDbGetSdbString.c)
 *     SdbReadGUIDTag @ 0x1408062B0 (SdbReadGUIDTag.c)
 *     SdbTagRefToTagID @ 0x14080642C (SdbTagRefToTagID.c)
 *     KsepDbFreeDriverShims @ 0x140941710 (KsepDbFreeDriverShims.c)
 *     SdbGetDatabaseMatchEx @ 0x140944EEC (SdbGetDatabaseMatchEx.c)
 *     SdbReadDWORDTag @ 0x140946BB8 (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x140946FA4 (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x140947AFC (SdbFindFirstTag.c)
 */

__int64 __fastcall KsepDbGetDriverShimsInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _QWORD *a6,
        unsigned int *a7)
{
  unsigned int v7; // ebp
  unsigned int *v8; // r12
  _QWORD *v10; // r13
  _QWORD *Paged; // rsi
  __int64 v12; // r8
  unsigned int DatabaseMatch; // eax
  int SdbString; // ebx
  __int64 v15; // rdi
  unsigned int FirstTag; // eax
  __int64 v17; // rbx
  unsigned int NextTag; // eax
  unsigned int v19; // r14d
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int128 v26; // [rsp+40h] [rbp-58h] BYREF
  __int128 v27; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v28; // [rsp+B0h] [rbp+18h] BYREF

  v7 = 0;
  v8 = a7;
  v10 = a6;
  Paged = 0LL;
  v12 = *(_QWORD *)(a3 + 8);
  *a7 = 0;
  *v10 = 0LL;
  *(_QWORD *)&v26 = 0LL;
  v28 = 0;
  DatabaseMatch = SdbGetDatabaseMatchEx(a1, 0LL, v12);
  if ( !DatabaseMatch
    || !(unsigned int)SdbTagRefToTagID(a1, DatabaseMatch, &v26, (int *)&v28)
    || (v15 = v26, (FirstTag = SdbFindFirstTag(v26, v28, 28710LL)) == 0) )
  {
    SdbString = -1073741275;
LABEL_3:
    KsepDbFreeDriverShims(Paged, *v8);
    return (unsigned int)SdbString;
  }
  LODWORD(v17) = 0;
  do
  {
    FirstTag = SdbFindNextTag(v15, v28, FirstTag);
    v17 = (unsigned int)(v17 + 1);
  }
  while ( FirstTag );
  *v8 = v17;
  Paged = KsepPoolAllocatePaged(80 * v17);
  if ( !Paged )
  {
    SdbString = -1073741801;
    goto LABEL_3;
  }
  NextTag = SdbFindFirstTag(v15, v28, 28710LL);
  while ( 1 )
  {
    v19 = NextTag;
    if ( !NextTag )
      break;
    if ( v7 < *v8 )
    {
      v20 = SdbFindFirstTag(v15, NextTag, 36880LL);
      if ( v20 )
      {
        v26 = 0LL;
        *(_OWORD *)&Paged[10 * v7] = *SdbReadGUIDTag(&v27, v15, v20, &v26);
      }
      v21 = SdbFindFirstTag(v15, v19, 24577LL);
      if ( v21 )
      {
        SdbString = KsepDbGetSdbString(v15, v21, (__int64)&Paged[10 * v7 + 2]);
        if ( SdbString < 0 )
          goto LABEL_3;
      }
      v22 = SdbFindFirstTag(v15, v19, 24579LL);
      if ( v22 )
      {
        SdbString = KsepDbGetSdbString(v15, v22, (__int64)&Paged[10 * v7 + 4]);
        if ( SdbString < 0 )
          goto LABEL_3;
      }
      v23 = SdbFindFirstTag(v15, v19, 16407LL);
      if ( v23 )
        LODWORD(Paged[10 * v7 + 8]) = SdbReadDWORDTag(v15, v23, 0LL);
      v24 = SdbFindFirstTag(v15, v19, 24584LL);
      if ( v24 )
      {
        SdbString = KsepDbGetSdbString(v15, v24, (__int64)&Paged[10 * v7 + 6]);
        if ( SdbString < 0 )
          goto LABEL_3;
      }
      HIDWORD(Paged[10 * v7 + 8]) = 1;
    }
    NextTag = SdbFindNextTag(v15, v28, v19);
    ++v7;
  }
  *v10 = Paged;
  return 0;
}
