/*
 * XREFs of EtwUnregisterTraceGuids @ 0x1800F4C30
 * Callers:
 *     <none>
 * Callees:
 *     EtwNotificationUnregister @ 0x180045F20 (EtwNotificationUnregister.c)
 *     RtlSetLastWin32Error @ 0x180046B80 (RtlSetLastWin32Error.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall EtwUnregisterTraceGuids(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // r9
  unsigned int v3; // ebx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v1 = EtwNotificationUnregister(a1, &v5);
  v3 = v1;
  if ( v1 )
    RtlSetLastWin32Error(v1);
  else
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5, v2);
  return v3;
}
