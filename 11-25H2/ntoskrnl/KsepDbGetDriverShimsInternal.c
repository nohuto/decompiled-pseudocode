/*
 * XREFs of KsepDbGetDriverShimsInternal @ 0x14082941C
 * Callers:
 *     KsepDbGetDriverShims @ 0x1408296B0 (KsepDbGetDriverShims.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1404A0CB0 (KsepPoolAllocatePaged.c)
 *     KsepDbGetSdbString @ 0x140732560 (KsepDbGetSdbString.c)
 *     SdbReadGUIDTag @ 0x1407F6000 (SdbReadGUIDTag.c)
 *     SdbTagRefToTagID @ 0x1407F617C (SdbTagRefToTagID.c)
 *     SdbReadDWORDTag @ 0x140824978 (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x140824D70 (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x1408258C0 (SdbFindFirstTag.c)
 *     SdbGetDatabaseMatchEx @ 0x14082AEDC (SdbGetDatabaseMatchEx.c)
 *     KsepDbFreeDriverShims @ 0x140AB2B60 (KsepDbFreeDriverShims.c)
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
  _OWORD *Paged; // rsi
  __int64 v12; // r8
  unsigned int DatabaseMatch; // eax
  int SdbString; // ebx
  __int64 v15; // rdi
  unsigned int FirstTag; // eax
  __int64 v17; // r9
  __int64 v18; // rbx
  unsigned int NextTag; // eax
  __int64 v20; // r9
  unsigned int v21; // r14d
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // r9
  unsigned int v27; // eax
  __int128 v29; // [rsp+40h] [rbp-58h] BYREF
  __int128 v30; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v31; // [rsp+B0h] [rbp+18h] BYREF

  v7 = 0;
  v8 = a7;
  v10 = a6;
  Paged = 0LL;
  v12 = *(_QWORD *)(a3 + 8);
  *a7 = 0;
  *v10 = 0LL;
  *(_QWORD *)&v29 = 0LL;
  v31 = 0;
  DatabaseMatch = SdbGetDatabaseMatchEx(a1, 0LL, v12);
  if ( !DatabaseMatch
    || !(unsigned int)SdbTagRefToTagID(a1, DatabaseMatch, &v29, (int *)&v31)
    || (v15 = v29, (FirstTag = SdbFindFirstTag(v29, v31, 28710)) == 0) )
  {
    SdbString = -1073741275;
LABEL_3:
    KsepDbFreeDriverShims(Paged, *v8);
    return (unsigned int)SdbString;
  }
  LODWORD(v18) = 0;
  do
  {
    FirstTag = SdbFindNextTag(v15, v31, FirstTag, v17);
    v18 = (unsigned int)(v18 + 1);
  }
  while ( FirstTag );
  *v8 = v18;
  Paged = KsepPoolAllocatePaged(80 * v18);
  if ( !Paged )
  {
    SdbString = -1073741801;
    goto LABEL_3;
  }
  NextTag = SdbFindFirstTag(v15, v31, 28710);
  while ( 1 )
  {
    v21 = NextTag;
    if ( !NextTag )
      break;
    if ( v7 < *v8 )
    {
      v22 = SdbFindFirstTag(v15, NextTag, 36880);
      if ( v22 )
      {
        v29 = 0LL;
        Paged[5 * v7] = *SdbReadGUIDTag(&v30, v15, v22, &v29);
      }
      v23 = SdbFindFirstTag(v15, v21, 24577);
      if ( v23 )
      {
        SdbString = KsepDbGetSdbString(v15, v23, (__int64)&Paged[5 * v7 + 1]);
        if ( SdbString < 0 )
          goto LABEL_3;
      }
      v24 = SdbFindFirstTag(v15, v21, 24579);
      if ( v24 )
      {
        SdbString = KsepDbGetSdbString(v15, v24, (__int64)&Paged[5 * v7 + 2]);
        if ( SdbString < 0 )
          goto LABEL_3;
      }
      v25 = SdbFindFirstTag(v15, v21, 16407);
      if ( v25 )
        LODWORD(Paged[5 * v7 + 4]) = SdbReadDWORDTag(v15, v25, 0LL, v26);
      v27 = SdbFindFirstTag(v15, v21, 24584);
      if ( v27 )
      {
        SdbString = KsepDbGetSdbString(v15, v27, (__int64)&Paged[5 * v7 + 3]);
        if ( SdbString < 0 )
          goto LABEL_3;
      }
      DWORD1(Paged[5 * v7 + 4]) = 1;
    }
    NextTag = SdbFindNextTag(v15, v31, v21, v20);
    ++v7;
  }
  *v10 = Paged;
  return 0;
}
