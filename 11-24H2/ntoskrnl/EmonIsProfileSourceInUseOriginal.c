/*
 * XREFs of EmonIsProfileSourceInUseOriginal @ 0x140559B34
 * Callers:
 *     EmonRemoveProfileSourceOriginal @ 0x14055B870 (EmonRemoveProfileSourceOriginal.c)
 * Callees:
 *     <none>
 */

char __fastcall EmonIsProfileSourceInUseOriginal(int a1, int a2, int a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rax

  v3 = 0;
  v4 = *(_QWORD *)(KiProcessorBlock[a2] + 88);
  if ( a1 )
  {
    v5 = a1 - 1;
    if ( v5 )
    {
      v6 = v5 - 99;
      if ( v6 )
      {
        if ( v6 == 1 )
          v4 += 72LL;
        else
          v4 = 0LL;
      }
      else
      {
        v4 += 48LL;
      }
    }
    else
    {
      v4 += 24LL;
    }
  }
  while ( v3 < *(_DWORD *)(v4 + 4) )
  {
    v7 = *(_QWORD *)(v4 + 16);
    if ( *(_DWORD *)(v7 + 48LL * v3 + 24) != 3 && *(_DWORD *)(v7 + 48LL * v3 + 36) == a3 )
      return 1;
    ++v3;
  }
  return 0;
}
