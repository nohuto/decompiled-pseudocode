/*
 * XREFs of UsbhHighResWait @ 0x14001A35C
 * Callers:
 *     UsbhRawWait @ 0x14001A244 (UsbhRawWait.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

char __fastcall UsbhHighResWait(unsigned int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // rdx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v1 = a1;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v2 = ((__int64 (__fastcall *)(void *, struct _KEVENT *, __int64))g_ExAllocateTimer)(
         &UsbhHighResTimerCompletion,
         &Event,
         4LL);
  v3 = v2;
  if ( v2 )
  {
    ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))g_ExSetTimer)(v2, -10000 * v1, 0LL, 0LL);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    LOBYTE(v4) = 1;
    LOBYTE(v5) = 1;
    ((void (__fastcall *)(__int64, __int64, __int64, _QWORD))g_ExDeleteTimer)(v3, v5, v4, 0LL);
    LOBYTE(v2) = 1;
  }
  return v2;
}
