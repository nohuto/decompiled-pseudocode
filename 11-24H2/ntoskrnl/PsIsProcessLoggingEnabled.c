/*
 * XREFs of PsIsProcessLoggingEnabled @ 0x14040A430
 * Callers:
 *     NtProtectVirtualMemory @ 0x1408DA8B0 (NtProtectVirtualMemory.c)
 *     PsImpersonateClient @ 0x1408E7A20 (PsImpersonateClient.c)
 *     MiReadWriteVirtualMemory @ 0x140992B20 (MiReadWriteVirtualMemory.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsProcessLoggingEnabled(__int64 a1, __int64 a2, int a3)
{
  int v4; // r9d
  _DWORD *v5; // rcx
  int v7; // r9d

  v4 = 0;
  v5 = 0LL;
  if ( a3 == 16 )
  {
    v4 = 0x1000000;
    v5 = (_DWORD *)(a2 + 496);
    return (v4 & *v5) != 0;
  }
  if ( a3 == 256 )
    return *(int *)(a2 + 1532) < 0;
  if ( a3 == 8 )
  {
    v7 = 0x20000000;
    if ( a1 != a2 )
      v7 = 0x10000000;
    return (v7 & *(_DWORD *)(a2 + 1532)) != 0;
  }
  else
  {
    if ( a3 != 32 )
    {
      if ( a3 == 2 )
      {
        v4 = 0x100000;
        v5 = (_DWORD *)(a2 + 1532);
      }
      else if ( a3 == 2048 )
      {
        v4 = 0x80000;
        v5 = (_DWORD *)(a2 + 1532);
      }
      return (v4 & *v5) != 0;
    }
    return (*(_DWORD *)(a2 + 496) & 0x2000000) != 0;
  }
}
