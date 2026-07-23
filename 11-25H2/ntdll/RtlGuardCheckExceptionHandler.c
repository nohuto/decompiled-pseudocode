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

__int64 __fastcall RtlGuardCheckExceptionHandler(PVOID BaseAddress, char a2, char *a3)
{
  char v6; // bp
  __int64 Config; // rax
  __int64 v8; // rdx
  rsize_t v9; // r8
  unsigned int v10; // eax
  __int128 v12; // [rsp+30h] [rbp-38h]
  int Key; // [rsp+88h] [rbp+20h] BYREF

  if ( !LdrSystemDllInitBlock.CfgBitMap || (LdrSystemDllInitBlock.Flags & 1) != 0 )
  {
    if ( a3 )
      *a3 = 1;
  }
  else
  {
    v6 = 0;
    v12 = 0LL;
    if ( (unsigned __int64)BaseAddress < *((_QWORD *)&xmmword_1801E9430 + 1)
      || (unsigned __int64)BaseAddress >= *((_QWORD *)&xmmword_1801E9430 + 1)
                                        + (unsigned __int64)(unsigned int)qword_1801E9440 )
    {
      RtlpxLookupFunctionTable(BaseAddress);
    }
    else
    {
      *((_QWORD *)&v12 + 1) = *((_QWORD *)&xmmword_1801E9430 + 1);
    }
    if ( *((_QWORD *)&v12 + 1)
      && (Config = LdrImageDirectoryEntryToLoadConfig(*((_QWORD *)&v12 + 1)), (v8 = Config) != 0)
      && *(_DWORD *)Config >= 0x118u
      && (*(_DWORD *)(Config + 144) & 0x400000) != 0
      && *(_QWORD *)(Config + 264) > *((_QWORD *)&v12 + 1)
      && ((Key = (_DWORD)BaseAddress - DWORD2(v12),
           v9 = *(_QWORD *)(Config + 272),
           v10 = (*(_DWORD *)(Config + 144) >> 28) + 4,
           !v9)
       || !bsearch_s(&Key, *(const void **)(v8 + 264), v9, v10, RtlpTargetCompare, 0LL)) )
    {
      if ( !a2 )
        RtlFailFast2(38LL, BaseAddress);
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
