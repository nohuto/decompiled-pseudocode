/*
 * XREFs of Amd64IsProfileBeingUsed @ 0x14056939C
 * Callers:
 *     Amd64RemoveProfileSource @ 0x140569A10 (Amd64RemoveProfileSource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Amd64IsProfileBeingUsed(int a1, int a2, int a3)
{
  unsigned int v3; // r9d
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // r8

  v3 = 0;
  v5 = *(_QWORD *)(KiProcessorBlock[a2] + 88);
  if ( a1 )
  {
    v6 = a1 - 1;
    if ( v6 )
    {
      v7 = v6 - 99;
      if ( v7 )
      {
        if ( v7 == 1 )
          v5 += 72LL;
        else
          v5 = 0LL;
      }
      else
      {
        v5 += 48LL;
      }
    }
    else
    {
      v5 += 24LL;
    }
  }
  v8 = *(_QWORD *)(v5 + 16);
  while ( v3 < *(_DWORD *)(v5 + 4) )
  {
    if ( *(_DWORD *)(v8 + 48LL * v3 + 24) != 3 && *(_DWORD *)(v8 + 48LL * v3 + 36) == a3 )
      return 2147483665LL;
    ++v3;
  }
  return 0LL;
}
