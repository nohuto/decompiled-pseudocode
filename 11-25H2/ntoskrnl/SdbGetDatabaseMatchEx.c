/*
 * XREFs of SdbGetDatabaseMatchEx @ 0x14082AEDC
 * Callers:
 *     KsepDbGetDriverShimsInternal @ 0x14082941C (KsepDbGetDriverShimsInternal.c)
 *     KsepDbCacheReadDeviceInternal @ 0x14082AE34 (KsepDbCacheReadDeviceInternal.c)
 * Callees:
 *     wcsrchr @ 0x1404FDA00 (wcsrchr.c)
 *     SdbpFindFirstTagWithoutIndex @ 0x1407F46BC (SdbpFindFirstTagWithoutIndex.c)
 *     SdbpFindFirstWildcardTagWithoutIndex @ 0x1407F4774 (SdbpFindFirstWildcardTagWithoutIndex.c)
 *     SdbpFindNextTagWithoutIndex @ 0x1407F4830 (SdbpFindNextTagWithoutIndex.c)
 *     SdbpFindNextWildcardTagWithoutIndex @ 0x1407F48AC (SdbpFindNextWildcardTagWithoutIndex.c)
 *     SdbTagIDToTagRef @ 0x1407F610C (SdbTagIDToTagRef.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1408253D8 (SdbpFindFirstIndexedWildCardTag.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     SdbFindFirstStringIndexedTag @ 0x14082B0F4 (SdbFindFirstStringIndexedTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x14082BC3C (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckKObject @ 0x14082BD7C (SdbpCheckKObject.c)
 *     SdbpFindMatchingName @ 0x14082C2B0 (SdbpFindMatchingName.c)
 *     SdbpGetNextIndexedRecord @ 0x14082C3B0 (SdbpGetNextIndexedRecord.c)
 */

__int64 __fastcall SdbGetDatabaseMatchEx(
        __int64 a1,
        int a2,
        const wchar_t *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int16 v9; // r15
  int v10; // r12d
  wchar_t *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // r13
  void *v14; // rdi
  unsigned int FirstStringIndexedTag; // eax
  unsigned int k; // r14d
  unsigned int m; // eax
  unsigned int v18; // ebx
  unsigned int NextIndexedRecord; // eax
  wchar_t *v21; // rax
  unsigned int i; // eax
  unsigned int v23; // r14d
  unsigned int j; // eax
  unsigned int v25; // r14d
  _OWORD v26[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+60h] [rbp-10h]
  unsigned int v28; // [rsp+A8h] [rbp+38h] BYREF

  v27 = 0LL;
  memset(v26, 0, sizeof(v26));
  if ( a2 )
  {
    v9 = 28698;
    v10 = 0;
LABEL_3:
    v11 = (wchar_t *)a3;
    goto LABEL_4;
  }
  v9 = 28700;
  v10 = (int)a3;
  v21 = wcsrchr(a3, 0x5Cu);
  if ( !v21 )
    goto LABEL_3;
  v11 = v21 + 1;
LABEL_4:
  v28 = 0;
  v12 = *(_QWORD *)(a1 + 16);
  v13 = a7;
  if ( v12 )
  {
    for ( i = SdbpFindFirstTagWithoutIndex(v12, v9, 0x6001u, v11, (__int64)v26);
          ;
          i = SdbpFindNextTagWithoutIndex(v12, (__int64)v26) )
    {
      v23 = i;
      if ( !i )
      {
        for ( j = SdbpFindFirstWildcardTagWithoutIndex(v12, v9, 0x600Bu, v11, (__int64)v26);
              ;
              j = SdbpFindNextWildcardTagWithoutIndex(v12, (__int64)v26) )
        {
          v25 = j;
          if ( !j )
            break;
          if ( (unsigned int)SdbpCheckKObject(a1, v12, j, v10, -1LL, a5, a6, v13) )
          {
            if ( (unsigned int)SdbTagIDToTagRef(a1, v12, v25, (int *)&v28) )
              return v28;
            goto LABEL_34;
          }
        }
        goto LABEL_5;
      }
      if ( (unsigned int)SdbpCheckKObject(a1, v12, i, v10, -1LL, a5, a6, v13) )
        break;
    }
    if ( (unsigned int)SdbTagIDToTagRef(a1, v12, v23, (int *)&v28) )
      return v28;
  }
  else
  {
LABEL_5:
    v14 = *(void **)(a1 + 8);
    FirstStringIndexedTag = SdbFindFirstStringIndexedTag(v14, v9, 24577LL, v11, v26);
LABEL_6:
    for ( k = FirstStringIndexedTag; ; k = 0 )
    {
      if ( !k )
      {
        for ( m = SdbpFindFirstIndexedWildCardTag(v14, v9, 24587, (__int64)v11, (unsigned int *)v26);
              ;
              m = SdbpFindNextIndexedWildCardTag(v14, v26) )
        {
          v18 = m;
          if ( !m )
            break;
          if ( (unsigned int)SdbpCheckKObject(a1, (_DWORD)v14, m, v10, -1LL, a5, a6, v13) )
          {
            if ( (unsigned int)SdbTagIDToTagRef(a1, (__int64)v14, v18, (int *)&v28) )
              return v28;
            goto LABEL_34;
          }
        }
        return v28;
      }
      if ( (unsigned int)SdbpCheckKObject(a1, (_DWORD)v14, k, v10, -1LL, a5, a6, v13) )
        break;
      NextIndexedRecord = SdbpGetNextIndexedRecord(v14, LODWORD(v26[0]), v26);
      if ( NextIndexedRecord )
      {
        FirstStringIndexedTag = SdbpFindMatchingName(v14, NextIndexedRecord, v26);
        goto LABEL_6;
      }
    }
    if ( (unsigned int)SdbTagIDToTagRef(a1, (__int64)v14, k, (int *)&v28) )
      return v28;
  }
LABEL_34:
  AslLogCallPrintf(1LL);
  return v28;
}
