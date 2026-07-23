/*
 * XREFs of EmonIsProfileSourceInUseEnhanced @ 0x140559A74
 * Callers:
 *     EmonRemoveProfileSourceEnhanced @ 0x14055B770 (EmonRemoveProfileSourceEnhanced.c)
 * Callees:
 *     <none>
 */

char __fastcall EmonIsProfileSourceInUseEnhanced(int a1, int a2, int a3)
{
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // r11
  unsigned int i; // r9d
  int v9; // r10d
  __int64 j; // r8

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
  v7 = *(_QWORD *)(v4 + 16);
  for ( i = 0; i < *(_DWORD *)(v4 + 4); ++i )
  {
    v9 = 0;
    for ( j = 0LL; (unsigned int)j <= *(_DWORD *)(v4 + 8); j = (unsigned int)(j + 1) )
    {
      if ( *(_DWORD *)(v7 + 48 * j + 28) != 3 && ++v9 > i )
        goto LABEL_17;
    }
    j = 0xFFFFFFFFLL;
LABEL_17:
    if ( *(_DWORD *)(v7 + 48 * j + 24) != 3 && *(_DWORD *)(v7 + 48 * j + 36) == a3 )
      return 1;
  }
  return 0;
}
