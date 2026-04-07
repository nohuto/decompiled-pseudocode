/*
 * XREFs of _Init_thread_footer @ 0x18005CE48
 * Callers:
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x18002EA28 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_footer(_DWORD *a1)
{
  __int64 v2; // rdx

  EnterCriticalSection(&CriticalSection);
  v2 = (unsigned int)tls_index;
  *a1 = ++Init_global_epoch;
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v2) + 4LL) = Init_global_epoch;
  LeaveCriticalSection(&CriticalSection);
  return Init_thread_notify();
}
