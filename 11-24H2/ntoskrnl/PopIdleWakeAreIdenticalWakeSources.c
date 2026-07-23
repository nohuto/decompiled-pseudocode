/*
 * XREFs of PopIdleWakeAreIdenticalWakeSources @ 0x1405D7CC4
 * Callers:
 *     PopIdleWakeFindOrAllocateWakeSource @ 0x1405D7EA8 (PopIdleWakeFindOrAllocateWakeSource.c)
 * Callees:
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 */

bool __fastcall PopIdleWakeAreIdenticalWakeSources(int a1, _BYTE *a2, _BYTE *a3)
{
  char v3; // r9
  unsigned int i; // ecx
  char v5; // al
  const wchar_t *v6; // rdx
  const wchar_t *v7; // r10
  size_t v8; // r8

  v3 = 0;
  if ( a1 == 128 )
  {
    v3 = 1;
    for ( i = 0; i < 3; ++i )
    {
      if ( *(_QWORD *)&a2[8 * i] != *(_QWORD *)&a3[8 * i] || *(_QWORD *)&a2[8 * i + 24] != *(_QWORD *)&a3[8 * i + 24] )
        return 0;
    }
  }
  else if ( a1 == 129 )
  {
    v5 = *a2;
    if ( *a2 == *a3 )
    {
      v6 = (const wchar_t *)(a2 + 2);
      v7 = (const wchar_t *)(a3 + 2);
      if ( v5 == 3 )
      {
        v8 = -1LL;
        do
          ++v8;
        while ( v6[v8] );
        return wcsnicmp(v7, v6, v8) == 0;
      }
      else
      {
        return *(_BYTE *)v6 == *(_BYTE *)v7;
      }
    }
  }
  return v3;
}
