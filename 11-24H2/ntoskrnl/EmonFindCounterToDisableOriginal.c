/*
 * XREFs of EmonFindCounterToDisableOriginal @ 0x1405593C0
 * Callers:
 *     EmonDisableMonitoringOriginal @ 0x140558DC0 (EmonDisableMonitoringOriginal.c)
 * Callees:
 *     <none>
 */

char __fastcall EmonFindCounterToDisableOriginal(__int64 a1, int a2, unsigned int *a3, _DWORD *a4)
{
  char v4; // r11
  unsigned int i; // r10d
  __int64 v6; // rax
  char result; // al

  v4 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
  {
    v6 = *(_QWORD *)(a1 + 16);
    if ( !*(_DWORD *)(v6 + 48LL * i + 24) && *(_DWORD *)(v6 + 48LL * i + 36) == a2 )
    {
      v4 = 1;
      break;
    }
  }
  result = v4;
  *a4 = *(_DWORD *)a1;
  *a3 = i;
  return result;
}
