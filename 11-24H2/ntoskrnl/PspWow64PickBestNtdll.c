/*
 * XREFs of PspWow64PickBestNtdll @ 0x140490CF8
 * Callers:
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     PsQuerySystemDllInfo @ 0x14091D988 (PsQuerySystemDllInfo.c)
 */

__int64 __fastcall PspWow64PickBestNtdll(__int64 a1)
{
  int j; // edx
  __int64 v2; // rax
  unsigned int v3; // edx
  __int16 v4; // r9
  int i; // r8d
  __int64 SystemDllInfo; // rax
  unsigned int v8; // r8d
  __int16 v9; // r9

  if ( a1 && *(char *)(a1 + 17) < 0 )
  {
    for ( i = 0; i < 6; i = v8 + 1 )
    {
      SystemDllInfo = PsQuerySystemDllInfo((unsigned int)i);
      if ( SystemDllInfo && (*(_BYTE *)SystemDllInfo & 0xC) == 0xC && *(_WORD *)(SystemDllInfo + 2) == v9 )
        return v8;
    }
  }
  for ( j = 0; j < 6; j = v3 + 1 )
  {
    v2 = PsQuerySystemDllInfo((unsigned int)j);
    if ( v2 && (*(_DWORD *)v2 & 8) != 0 && *(_WORD *)(v2 + 2) == v4 )
      return v3;
  }
  return 0LL;
}
