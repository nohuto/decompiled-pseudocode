/*
 * XREFs of InitOnceScanIndexes @ 0x140824AF0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SdbReadDWORDTag @ 0x140824978 (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x140824D70 (SdbFindNextTag.c)
 *     SdbReadWORDTag @ 0x140824E14 (SdbReadWORDTag.c)
 *     SdbFindFirstTag @ 0x1408258C0 (SdbFindFirstTag.c)
 *     SdbGetTagFromTagID @ 0x140825934 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 */

__int64 __fastcall InitOnceScanIndexes(PRTL_RUN_ONCE RunOnce, _DWORD *Parameter, PVOID *Context)
{
  unsigned int v3; // esi
  char *v6; // r12
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // eax
  unsigned int v10; // ebp
  unsigned int i; // eax
  unsigned int v12; // r14d
  unsigned int FirstTag; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // r9
  int v17; // edx
  __int64 v18; // rax
  const char *v20; // r9
  int v21; // r8d
  const char *v22; // r9
  int v23; // r8d

  v3 = 0;
  if ( Parameter )
  {
    if ( Context )
    {
      v6 = (char *)(Parameter + 12);
      memset_0(Parameter + 12, 0, 0xA00uLL);
      v9 = Parameter[5];
      v10 = v9 > 0xC ? 0xC : 0;
      if ( v9 <= 0xC )
      {
        v20 = "Failed to get the child index from root";
        v21 = 1227;
      }
      else
      {
        if ( (unsigned __int16)SdbGetTagFromTagID(Parameter, v10, v7, v8) != 30722 )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"InitOnceScanIndexes",
            1232,
            (unsigned int)"Root child tag is not index tagid 0x%lx");
          return v3;
        }
        Parameter[659] = 0;
        for ( i = SdbFindFirstTag(Parameter, v10, 30723LL); ; i = SdbFindNextTag(Parameter, v10, v12) )
        {
          v12 = i;
          if ( !i )
          {
            *Context = v6;
            return 1;
          }
          if ( Parameter[659] == 64 )
            break;
          FirstTag = SdbFindFirstTag(Parameter, i, 14338LL);
          if ( !FirstTag )
          {
            v20 = "Index missing TAG_INDEX_TAG";
            v21 = 1254;
            goto LABEL_18;
          }
          LOWORD(Parameter[10 * Parameter[659] + 13]) = SdbReadWORDTag(Parameter, FirstTag, 0LL);
          v14 = SdbFindFirstTag(Parameter, v12, 14339LL);
          if ( !v14 )
          {
            v20 = "Index missing TAG_INDEX_KEY";
            v21 = 1263;
            goto LABEL_18;
          }
          HIWORD(Parameter[10 * Parameter[659] + 13]) = SdbReadWORDTag(Parameter, v14, 0LL);
          v15 = SdbFindFirstTag(Parameter, v12, 16406LL);
          if ( v15 )
            Parameter[10 * Parameter[659] + 20] = SdbReadDWORDTag((__int64)Parameter, v15, 0LL, v16);
          else
            Parameter[10 * Parameter[659] + 20] = 0;
          v17 = SdbFindFirstTag(Parameter, v12, 38913LL);
          v18 = (unsigned int)Parameter[659];
          if ( !v17 )
          {
            LOWORD(Parameter[10 * v18 + 13]) = 0;
            v20 = "Index missing TAG_INDEX_BITS";
            v21 = 1280;
            goto LABEL_18;
          }
          Parameter[10 * v18 + 12] = v17;
          ++Parameter[659];
        }
        v20 = "Too many indexes in file: recompile and increase SDB_MAX_INDEXES";
        v21 = 1247;
      }
LABEL_18:
      AslLogCallPrintf(1, (unsigned int)"InitOnceScanIndexes", v21, (_DWORD)v20);
      return v3;
    }
    v22 = "No return context was supplied for InitOnceScanIndexes";
    v23 = 1212;
  }
  else
  {
    v22 = "PDB was not supplied for InitOnceScanIndexes";
    v23 = 1206;
  }
  AslLogCallPrintf(1, (unsigned int)"InitOnceScanIndexes", v23, (_DWORD)v22);
  return 0LL;
}
