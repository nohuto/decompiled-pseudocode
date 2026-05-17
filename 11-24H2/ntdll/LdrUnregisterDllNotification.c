/*
 * XREFs of LdrUnregisterDllNotification @ 0x180111490
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 */

__int64 __fastcall LdrUnregisterDllNotification(_UNKNOWN **a1)
{
  unsigned __int64 v2; // rdi
  int v3; // ebx
  _UNKNOWN **i; // rax
  _UNKNOWN **v5; // rcx
  void **v6; // rdx

  v2 = 0LL;
  v3 = -1073741515;
  RtlEnterCriticalSection((__int64)&LdrpDllNotificationLock);
  for ( i = (_UNKNOWN **)LdrpDllNotificationList; i != &LdrpDllNotificationList; i = (_UNKNOWN **)*i )
  {
    v5 = (_UNKNOWN **)*i;
    v2 = (unsigned __int64)i;
    if ( i == a1 )
    {
      if ( v5[1] != (_UNKNOWN *)i || (v6 = (void **)i[1], *v6 != i) )
        __fastfail(3u);
      *v6 = v5;
      v3 = 0;
      v5[1] = v6;
      break;
    }
  }
  RtlLeaveCriticalSection((__int64)&LdrpDllNotificationLock);
  if ( v3 >= 0 )
    RtlFreeHeap(LdrpHeap, 0, v2);
  return (unsigned int)v3;
}
