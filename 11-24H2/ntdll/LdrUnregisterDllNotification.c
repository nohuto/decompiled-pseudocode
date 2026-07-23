/*
 * XREFs of LdrUnregisterDllNotification @ 0x18010C8A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 */

NTSTATUS __cdecl LdrUnregisterDllNotification(PVOID Cookie)
{
  void *v2; // rdi
  NTSTATUS v3; // ebx
  _QWORD *i; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx

  v2 = 0LL;
  v3 = -1073741515;
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  for ( i = LdrpDllNotificationList; i != &LdrpDllNotificationList; i = (_QWORD *)*i )
  {
    v5 = (_QWORD *)*i;
    v2 = i;
    if ( i == Cookie )
    {
      if ( (_QWORD *)v5[1] != i || (v6 = (_QWORD *)i[1], (_QWORD *)*v6 != i) )
        __fastfail(3u);
      *v6 = v5;
      v3 = 0;
      v5[1] = v6;
      break;
    }
  }
  RtlLeaveCriticalSection(&LdrpDllNotificationLock);
  if ( v3 >= 0 )
    RtlFreeHeap(LdrpHeap, 0, v2);
  return v3;
}
