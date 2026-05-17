/*
 * XREFs of RtlGuardCheckExceptionHandler @ 0x180022CB0
 * Callers:
 *     RcFrameConsolidation @ 0x180122CC0 (RcFrameConsolidation.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180022E20 (LdrImageDirectoryEntryToLoadConfig.c)
 *     RtlpxLookupFunctionTable @ 0x1800787D0 (RtlpxLookupFunctionTable.c)
 *     RtlFailFast2 @ 0x180123150 (RtlFailFast2.c)
 *     bsearch_s @ 0x180125920 (bsearch_s.c)
 */

__int64 __fastcall RtlGuardCheckExceptionHandler(unsigned __int64 a1, char a2, char *a3)
{
  char v6; // bp
  unsigned __int64 v7; // rsi
  __int64 Config; // rax
  __int64 v9; // rdx
  rsize_t v10; // r8
  unsigned int v11; // eax
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-28h]
  int Key; // [rsp+88h] [rbp+20h] BYREF

  if ( !qword_1801EC4F8 || (dword_1801EC4DC & 1) != 0 )
  {
    if ( a3 )
      *a3 = 1;
  }
  else
  {
    v6 = 0;
    v14 = 0LL;
    v13 = 0LL;
    if ( a1 < *((_QWORD *)&xmmword_1801E9430 + 1)
      || a1 >= *((_QWORD *)&xmmword_1801E9430 + 1) + (unsigned __int64)(unsigned int)qword_1801E9440 )
    {
      RtlpxLookupFunctionTable(a1, &v13);
    }
    else
    {
      v13 = xmmword_1801E9430;
    }
    v7 = *((_QWORD *)&v13 + 1);
    if ( *((_QWORD *)&v13 + 1)
      && (Config = LdrImageDirectoryEntryToLoadConfig(*((_QWORD *)&v13 + 1)), (v9 = Config) != 0)
      && *(_DWORD *)Config >= 0x118u
      && (*(_DWORD *)(Config + 144) & 0x400000) != 0
      && *(_QWORD *)(Config + 264) > v7
      && ((Key = a1 - v7, v10 = *(_QWORD *)(Config + 272), v11 = (*(_DWORD *)(Config + 144) >> 28) + 4, !v10)
       || !bsearch_s(&Key, *(const void **)(v9 + 264), v10, v11, RtlpTargetCompare, 0LL)) )
    {
      if ( !a2 )
        RtlFailFast2(38LL, a1);
    }
    else
    {
      v6 = 1;
    }
    if ( a3 )
      *a3 = v6;
  }
  return 0LL;
}
