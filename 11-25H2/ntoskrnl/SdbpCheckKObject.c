/*
 * XREFs of SdbpCheckKObject @ 0x14082BD7C
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x14082AEDC (SdbGetDatabaseMatchEx.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SdbpCreateSearchDBContext @ 0x1407F4460 (SdbpCreateSearchDBContext.c)
 *     SdbpMatchAcpi @ 0x1407F5594 (SdbpMatchAcpi.c)
 *     SdbpMatchBios @ 0x1407F5670 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x1407F5708 (SdbpMatchCpu.c)
 *     SdbpMatchOem @ 0x1407F58C4 (SdbpMatchOem.c)
 *     SdbpIsEntryIdAvailableInOtherDb @ 0x1407F63D4 (SdbpIsEntryIdAvailableInOtherDb.c)
 *     AslFileMappingDelete @ 0x14082ADE8 (AslFileMappingDelete.c)
 *     SdbpCheckForMatch @ 0x140A0B70C (SdbpCheckForMatch.c)
 *     AslFileMappingCreate @ 0x140A75D30 (AslFileMappingCreate.c)
 *     SdbpReleaseSearchDBContext @ 0x140AB0898 (SdbpReleaseSearchDBContext.c)
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
  const wchar_t **v13; // rsi
  int v14; // eax
  __int64 *v15; // rdi
  __int64 v16; // r9
  __int64 v17; // rdx
  const wchar_t **v19; // [rsp+30h] [rbp-79h] BYREF
  _QWORD v20[20]; // [rsp+40h] [rbp-69h] BYREF
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
    LODWORD(v20[0]) = 26;
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
  SdbpReleaseSearchDBContext(v20);
  AslFileMappingDelete((__int64)v13);
  return SearchDBContext;
}
