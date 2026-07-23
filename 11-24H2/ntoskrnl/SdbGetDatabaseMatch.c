/*
 * XREFs of SdbGetDatabaseMatch @ 0x1409410B0
 * Callers:
 *     PiIsDriverBlocked @ 0x1409BA914 (PiIsDriverBlocked.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SdbTagIDToTagRef @ 0x1408063BC (SdbTagIDToTagRef.c)
 *     AslFileMappingCreateFromImageView @ 0x14080974C (AslFileMappingCreateFromImageView.c)
 *     SdbpReleaseSearchDBContext @ 0x1409412B8 (SdbpReleaseSearchDBContext.c)
 *     AslFileMappingCreate @ 0x140941554 (AslFileMappingCreate.c)
 *     AslFileMappingDelete @ 0x140944898 (AslFileMappingDelete.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 *     SdbpSearchDB @ 0x140A04788 (SdbpSearchDB.c)
 *     SdbpCreateSearchDBContext @ 0x140A80724 (SdbpCreateSearchDBContext.c)
 */

__int64 __fastcall SdbGetDatabaseMatch(__int64 a1, _WORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // eax
  const char *v9; // r9
  int v10; // r8d
  __int64 v11; // r8
  const char *v12; // r9
  int v13; // r8d
  __int64 v14; // rdi
  unsigned int v15; // eax
  int v16; // r8d
  __int64 i; // rbx
  unsigned int v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v22[108]; // [rsp+44h] [rbp-BCh] BYREF
  _DWORD v23[32]; // [rsp+B0h] [rbp-50h] BYREF

  memset_0(v22, 0, 0x64uLL);
  memset_0(v23, 0, sizeof(v23));
  v20 = 0LL;
  v8 = 10;
  v19 = 0;
  if ( a4 )
    v8 = 26;
  v21 = v8;
  if ( (int)AslFileMappingCreate((unsigned int)&v20, (_DWORD)a2, -1, a4, a5) < 0 )
  {
    if ( !a4 )
    {
      v9 = "Failed to create initialize file mapping [%x]";
      v10 = 5952;
      goto LABEL_7;
    }
    if ( (int)AslFileMappingCreateFromImageView(&v20, a2, a4, a5) < 0 )
    {
      v9 = "Failed to initialize file mapping from image view [%x]";
      v10 = 5944;
LABEL_7:
      AslLogCallPrintf(1, (unsigned int)"SdbGetDatabaseMatch", v10, (_DWORD)v9);
      goto LABEL_26;
    }
  }
  if ( !(unsigned int)SdbpCreateSearchDBContext(&v21, v20) )
  {
    v12 = "Failed to create search DB context";
    v13 = 5961;
LABEL_25:
    AslLogCallPrintf(1, (unsigned int)"SdbGetDatabaseMatch", v13, (_DWORD)v12);
    goto LABEL_26;
  }
  v14 = *(_QWORD *)(a1 + 16);
  if ( !v14 )
  {
LABEL_15:
    v14 = *(_QWORD *)(a1 + 8);
    v15 = SdbpSearchDB(a1, v14, v11, &v21, v23);
    if ( v15 <= 0x10 )
    {
      if ( !v15 )
        goto LABEL_26;
      goto LABEL_19;
    }
    v16 = 5999;
    goto LABEL_17;
  }
  v15 = SdbpSearchDB(a1, *(_QWORD *)(a1 + 16), v11, &v21, v23);
  if ( v15 <= 0x10 )
  {
    if ( v15 )
      goto LABEL_19;
    goto LABEL_15;
  }
  v16 = 5980;
LABEL_17:
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbGetDatabaseMatch",
    v16,
    (unsigned int)"The database has more matches than SDB_MAX_EXES");
  v15 = 16;
LABEL_19:
  for ( i = (int)(v15 - 1); i >= 0; --i )
  {
    if ( (v23[2 * i + 1] & 2) == 0 && !(unsigned int)SdbTagIDToTagRef(a1, v14, (unsigned int)v23[2 * i], (int *)&v19) )
    {
      v12 = "Failed to convert tagid to tagref";
      v13 = 6019;
      goto LABEL_25;
    }
  }
LABEL_26:
  SdbpReleaseSearchDBContext(&v21);
  AslFileMappingDelete(v20);
  return v19;
}
