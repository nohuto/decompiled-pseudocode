/*
 * XREFs of LdrRegisterDllNotification @ 0x18010D5A0
 * Callers:
 *     RtlSetIoCompletionCallback @ 0x1800C3CB0 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 */

NTSTATUS __cdecl LdrRegisterDllNotification(
        ULONG Flags,
        PLDR_DLL_NOTIFICATION_FUNCTION NotificationFunction,
        PVOID Context,
        PVOID *Cookie)
{
  _QWORD *Heap; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  NTSTATUS result; // eax

  if ( Flags || !Cookie || !NotificationFunction )
    return -1073741811;
  Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, 0x20uLL);
  v8 = Heap;
  if ( !Heap )
    return -1073741801;
  Heap[2] = NotificationFunction;
  Heap[3] = Context;
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  v9 = off_1801CE8C8;
  if ( *off_1801CE8C8 != (_UNKNOWN *)&LdrpDllNotificationList )
    __fastfail(3u);
  *v8 = &LdrpDllNotificationList;
  v8[1] = v9;
  *v9 = v8;
  off_1801CE8C8 = (_UNKNOWN **)v8;
  RtlLeaveCriticalSection(&LdrpDllNotificationLock);
  result = 0;
  *Cookie = v8;
  return result;
}
