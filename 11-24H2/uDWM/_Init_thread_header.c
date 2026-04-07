/*
 * XREFs of _Init_thread_header @ 0x18009BC60
 * Callers:
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180057D38 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 * Callees:
 *     _Init_thread_wait_v2 @ 0x18009BD10 (_Init_thread_wait_v2.c)
 */

void __fastcall Init_thread_header(_DWORD *a1)
{
  EnterCriticalSection(&CriticalSection);
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
  LeaveCriticalSection(&CriticalSection);
}
