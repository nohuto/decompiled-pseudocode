/*
 * XREFs of SdbpCheckKObject @ 0x1409413E0
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x140944EEC (SdbGetDatabaseMatchEx.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SdbpMatchAcpi @ 0x140805844 (SdbpMatchAcpi.c)
 *     SdbpMatchBios @ 0x140805920 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x1408059B8 (SdbpMatchCpu.c)
 *     SdbpMatchOem @ 0x140805B74 (SdbpMatchOem.c)
 *     SdbpIsEntryIdAvailableInOtherDb @ 0x140806684 (SdbpIsEntryIdAvailableInOtherDb.c)
 *     SdbpReleaseSearchDBContext @ 0x1409412B8 (SdbpReleaseSearchDBContext.c)
 *     AslFileMappingCreate @ 0x140941554 (AslFileMappingCreate.c)
 *     AslFileMappingDelete @ 0x140944898 (AslFileMappingDelete.c)
 *     SdbpCheckForMatch @ 0x140A04CB0 (SdbpCheckForMatch.c)
 *     SdbpCreateSearchDBContext @ 0x140A80724 (SdbpCreateSearchDBContext.c)
 */

__int64 __fastcall SdbpCheckKObject(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8)
{
  unsigned int SearchDBContext; // ebx
  __int64 v13; // rsi
  int v14; // eax
  __int64 *v15; // rdi
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v19; // [rsp+30h] [rbp-79h] BYREF
  _DWORD v20[40]; // [rsp+40h] [rbp-69h] BYREF
  int v21; // [rsp+F0h] [rbp+47h] BYREF
  int v22; // [rsp+108h] [rbp+5Fh] BYREF

  memset_0(v20, 0, 0x68uLL);
  v21 = 0;
  SearchDBContext = 0;
  v22 = 0;
  v13 = 0LL;
  v19 = 0LL;
  if ( !a4 || (v14 = AslFileMappingCreate((unsigned int)&v19, a4, a5, a6, a7), v13 = v19, v14 >= 0) )
  {
    v20[0] = 26;
    SearchDBContext = SdbpCreateSearchDBContext(v20, v13);
    if ( SearchDBContext )
    {
      SearchDBContext = SdbpCheckForMatch(a1, a2, a3, (unsigned int)v20, (__int64)&v22, (__int64)&v21);
      if ( SearchDBContext )
      {
        v15 = a8;
        if ( a8 )
        {
          SearchDBContext = SdbpMatchAcpi(a2, a3, *a8);
          if ( SearchDBContext )
          {
            SearchDBContext = SdbpMatchOem(a2, a3, v15[1]);
            if ( SearchDBContext )
            {
              SearchDBContext = SdbpMatchBios(a2, a3, v15[2]);
              if ( SearchDBContext )
              {
                SearchDBContext = SdbpMatchCpu(a2, a3, v15[3]);
                if ( SearchDBContext )
                {
                  v17 = *(_QWORD *)(a1 + 16);
                  if ( v17 )
                  {
                    if ( v17 != a2 && (unsigned int)SdbpIsEntryIdAvailableInOtherDb(a2, v17, a3, v16) )
                      SearchDBContext = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  SdbpReleaseSearchDBContext((__int64)v20);
  AslFileMappingDelete(v13);
  return SearchDBContext;
}
