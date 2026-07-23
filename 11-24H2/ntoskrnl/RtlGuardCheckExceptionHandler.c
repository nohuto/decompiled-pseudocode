/*
 * XREFs of RtlGuardCheckExceptionHandler @ 0x1402312A8
 * Callers:
 *     RtlUnwindEx @ 0x1402322B0 (RtlUnwindEx.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x1402313D4 (VslGetNestedPageProtectionFlags.c)
 *     RtlpxLookupFunctionTable @ 0x140233240 (RtlpxLookupFunctionTable.c)
 *     RtlFailFast2 @ 0x1404FA9B0 (RtlFailFast2.c)
 *     bsearch_s @ 0x1404FC130 (bsearch_s.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140A5E1A8 (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall RtlGuardCheckExceptionHandler(unsigned __int64 a1, char a2)
{
  unsigned __int64 v3; // rdi
  __int64 Config; // rax
  __int64 v5; // rdx
  rsize_t v7; // r8
  unsigned int v8; // eax
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]
  int Key; // [rsp+68h] [rbp+10h] BYREF

  LOBYTE(Key) = a2;
  if ( (VslGetNestedPageProtectionFlags(0LL) & 0x80u) != 0LL )
  {
    v10 = 0LL;
    v9 = 0LL;
    if ( a1 < *((_QWORD *)&xmmword_141200030 + 1)
      || a1 >= *((_QWORD *)&xmmword_141200030 + 1) + (unsigned __int64)(unsigned int)qword_141200040 )
    {
      RtlpxLookupFunctionTable(a1, &v9);
    }
    else
    {
      v9 = xmmword_141200030;
    }
    v3 = *((_QWORD *)&v9 + 1);
    if ( *((_QWORD *)&v9 + 1) )
    {
      Config = LdrImageDirectoryEntryToLoadConfig(*((_QWORD *)&v9 + 1));
      v5 = Config;
      if ( Config )
      {
        if ( *(_DWORD *)Config >= 0x118u
          && (*(_DWORD *)(Config + 144) & 0x400000) != 0
          && *(_QWORD *)(Config + 264) > v3 )
        {
          Key = a1 - DWORD2(v9);
          v7 = *(_QWORD *)(Config + 272);
          v8 = (*(_DWORD *)(Config + 144) >> 28) + 4;
          if ( !v7 || !bsearch_s(&Key, *(const void **)(v5 + 264), v7, v8, RtlpTargetCompare, 0LL) )
            RtlFailFast2(38LL, a1);
        }
      }
    }
  }
  return 0LL;
}
