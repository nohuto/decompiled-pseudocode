/*
 * XREFs of EtwUnregisterTraceGuids @ 0x1800F30C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001C5D0 (RtlSetLastWin32Error.c)
 *     EtwNotificationUnregister @ 0x18001D140 (EtwNotificationUnregister.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 */

__int64 __fastcall EtwUnregisterTraceGuids(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  unsigned __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  v1 = EtwNotificationUnregister(a1, &v4);
  v2 = v1;
  if ( v1 )
    RtlSetLastWin32Error(v1);
  else
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
  return v2;
}
