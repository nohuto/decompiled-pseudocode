/*
 * XREFs of LdrUnregisterDllNotification @ 0x180114590
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall LdrUnregisterDllNotification(_UNKNOWN **a1)
{
  __int64 v2; // rdi
  int v3; // ebx
  _UNKNOWN **i; // rax
  _UNKNOWN **v5; // rcx
  void **v6; // rdx
  __int64 v7; // r9

  v2 = 0LL;
  v3 = -1073741515;
  RtlEnterCriticalSection((__int64)&LdrpDllNotificationLock);
  for ( i = (_UNKNOWN **)LdrpDllNotificationList; i != &LdrpDllNotificationList; i = (_UNKNOWN **)*i )
  {
    v5 = (_UNKNOWN **)*i;
    v2 = (__int64)i;
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
    RtlFreeHeap(LdrpHeap, 0, v2, v7);
  return (unsigned int)v3;
}
