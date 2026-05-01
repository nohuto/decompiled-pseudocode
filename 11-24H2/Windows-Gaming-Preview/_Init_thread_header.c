/*
 * XREFs of _Init_thread_header @ 0x180002488
 * Callers:
 *     ?_InitializeCategoryFromStateRepository@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180031170 (-_InitializeCategoryFromStateRepository@GameListEntryServer@GamesEnumeration@Preview@Gaming@Wind.c)
 * Callees:
 *     _Init_thread_wait_v2 @ 0x180002538 (_Init_thread_wait_v2.c)
 */

void __fastcall Init_thread_header(_DWORD *a1)
{
  EnterCriticalSection(&stru_1800595E8);
  while ( 1 )
  {
    if ( !*a1 )
    {
      *a1 = -1;
      goto LABEL_7;
    }
    if ( *a1 != -1 )
      break;
    Init_thread_wait_v2();
  }
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL) = Init_global_epoch;
LABEL_7:
  LeaveCriticalSection(&stru_1800595E8);
}
