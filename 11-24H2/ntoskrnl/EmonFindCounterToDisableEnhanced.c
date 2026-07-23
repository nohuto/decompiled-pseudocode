/*
 * XREFs of EmonFindCounterToDisableEnhanced @ 0x140559310
 * Callers:
 *     EmonDisableMonitoringEnhanced @ 0x140558CF0 (EmonDisableMonitoringEnhanced.c)
 * Callees:
 *     <none>
 */

char __fastcall EmonFindCounterToDisableEnhanced(__int64 a1, int a2, unsigned int *a3, _DWORD *a4)
{
  char v4; // r11
  unsigned int j; // r10d
  unsigned int i; // ebx
  __int64 v9; // r8
  int v10; // edx
  char result; // al

  v4 = 0;
  j = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
  {
    v9 = *(_QWORD *)(a1 + 16);
    v10 = 0;
    for ( j = 0; j <= *(_DWORD *)(a1 + 8); ++j )
    {
      if ( *(_DWORD *)(v9 + 48LL * j + 28) != 3 && ++v10 > i )
        goto LABEL_9;
    }
    j = -1;
LABEL_9:
    if ( !*(_DWORD *)(v9 + 48LL * j + 24) && *(_DWORD *)(v9 + 48LL * j + 36) == a2 )
    {
      v4 = 1;
      break;
    }
  }
  result = v4;
  *a4 = *(_DWORD *)a1;
  *a3 = j;
  return result;
}
