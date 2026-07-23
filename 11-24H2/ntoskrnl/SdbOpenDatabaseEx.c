/*
 * XREFs of SdbOpenDatabaseEx @ 0x1408016C4
 * Callers:
 *     SdbpOpenLocalDatabaseEx @ 0x1408069BC (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SdbGetMergeRedirectPath @ 0x14080154C (SdbGetMergeRedirectPath.c)
 *     SdbpOpenCompressedDatabase @ 0x1408077D4 (SdbpOpenCompressedDatabase.c)
 *     AslFileMappingEnsureMappedAs @ 0x14080996C (AslFileMappingEnsureMappedAs.c)
 *     AslFileMappingGetViewBase @ 0x140809E34 (AslFileMappingGetViewBase.c)
 *     AslPathGetFileNamePart @ 0x14080A524 (AslPathGetFileNamePart.c)
 *     AslFileMappingCreate @ 0x140941554 (AslFileMappingCreate.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     AslFileMappingDelete @ 0x140944898 (AslFileMappingDelete.c)
 *     AslAlloc @ 0x140944EA4 (AslAlloc.c)
 *     SdbpReadMappedData @ 0x140947C10 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x140AA8F10 (SdbpValidateAndApplyCompatFlags.c)
 */

_QWORD *SdbOpenDatabaseEx(__int64 a1, __int64 a2, __int64 a3, ...)
{
  const wchar_t *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int MergeRedirectPath; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // esi
  const char *v13; // r9
  int v14; // r8d
  int v15; // ecx
  const char *v16; // r9
  int v17; // r8d
  __int64 v18; // rsi
  __int64 v20; // rcx
  int v21; // [rsp+20h] [rbp-20h]
  const wchar_t *v22; // [rsp+28h] [rbp-18h]
  __int64 v23; // [rsp+30h] [rbp-10h] BYREF
  int v24; // [rsp+38h] [rbp-8h]
  _QWORD *v25; // [rsp+70h] [rbp+30h] BYREF
  int v26; // [rsp+80h] [rbp+40h] BYREF
  __int64 v27; // [rsp+88h] [rbp+48h] BYREF
  va_list va; // [rsp+88h] [rbp+48h]
  va_list va1; // [rsp+90h] [rbp+50h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v27 = va_arg(va1, _QWORD);
  v26 = 0;
  v23 = 0LL;
  v24 = 0;
  v4 = (const wchar_t *)a1;
  if ( !a1 )
    v4 = &cchOriginalDestLength;
  v22 = v4;
  v21 = 0;
  AslLogCallPrintf(3, (unsigned int)"SdbOpenDatabaseEx", 2380, (unsigned int)"Flags:%d; DatabasePath:%ws");
  v6 = (_QWORD *)AslAlloc(v5, 2688LL);
  v25 = v6;
  v7 = v6;
  if ( v6 )
  {
    memset_0(v6, 0, 0xA80uLL);
    v27 = 0LL;
    MergeRedirectPath = SdbGetMergeRedirectPath((__int64 *)va, &v26, 1, a1);
    v12 = MergeRedirectPath;
    if ( MergeRedirectPath < 0 )
    {
      if ( MergeRedirectPath == -1073741772 )
        goto LABEL_15;
      v13 = "SdbGetMergeRedirectPath failed to check for sdb merge redirect [%x]";
      v14 = 2406;
      v15 = 3;
    }
    else
    {
      if ( !v27 )
      {
        v12 = -1073741772;
        goto LABEL_15;
      }
      if ( v26 )
      {
        AslPathGetFileNamePart(a1);
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbOpenDatabaseEx",
          2418,
          (unsigned int)"Handled Error: MergeSdb staged deletion feature was used to prevent sdb mismatch error. SdbName: [%ls].");
      }
      MergeRedirectPath = AslFileMappingCreate((_DWORD)v7, v27, 0, 0, 0LL);
      v12 = MergeRedirectPath;
      if ( MergeRedirectPath >= 0 )
      {
LABEL_15:
        if ( v27 )
          AslFree(v10);
        if ( v12 >= 0 && *v7 || (int)AslFileMappingCreate((_DWORD)v7, a1, 0, 0, 0LL) >= 0 )
        {
          v18 = *(_QWORD *)(*v7 + 24LL);
          if ( (unsigned __int64)(v18 - 42) > 0xFFFFFD5 )
          {
            v16 = "Failed to open SDB - File size too large or small.";
            v17 = 2468;
            goto LABEL_36;
          }
          if ( (int)AslFileMappingEnsureMappedAs(*v7, v9, v11) >= 0 )
          {
            *((_DWORD *)v7 + 4) = 0;
            *((_DWORD *)v7 + 5) = v18;
            v7[1] = AslFileMappingGetViewBase(*v7);
            if ( (unsigned int)((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64 *, __int64, int, const wchar_t *))SdbpReadMappedData)(
                                 v7,
                                 0LL,
                                 &v23,
                                 12LL,
                                 v21,
                                 v22) )
            {
              if ( v24 == 1717724275 )
              {
                if ( !(unsigned int)SdbpValidateAndApplyCompatFlags(v7, &v23, 0LL) )
                  goto LABEL_37;
              }
              else
              {
                if ( v24 != 1717724282 )
                {
                  v16 = "Magic does not match a valid value: 0x%lx";
                  v17 = 2500;
                  goto LABEL_36;
                }
                if ( !(unsigned int)SdbpOpenCompressedDatabase(&v25, 0LL, 0LL) )
                {
                  AslLogCallPrintf(
                    1,
                    (unsigned int)"SdbOpenDatabaseEx",
                    2506,
                    (unsigned int)"SdbpOpenCompressedDatabase failed to open compressed database.");
                  v7 = v25;
                  goto LABEL_37;
                }
              }
              return v7;
            }
            v16 = "Failed to read database header";
            v17 = 2487;
          }
          else
          {
            v16 = "Failed to map SDB [%x]";
            v17 = 2474;
          }
        }
        else
        {
          v16 = "Failed to create file mapping [%x]";
          v17 = 2459;
        }
LABEL_36:
        AslLogCallPrintf(1, (unsigned int)"SdbOpenDatabaseEx", v17, (_DWORD)v16);
LABEL_37:
        if ( v7 )
        {
          AslFileMappingDelete(*v7);
          AslFree(v20);
        }
        return 0LL;
      }
      v13 = "Failed to create file mapping for redirected SDB file [%x]";
      v14 = 2437;
      v15 = 1;
    }
    v21 = MergeRedirectPath;
    AslLogCallPrintf(v15, (unsigned int)"SdbOpenDatabaseEx", v14, (_DWORD)v13);
    goto LABEL_15;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbOpenDatabaseEx", 2388, (unsigned int)"Failed to allocate DB structure");
  return 0LL;
}
