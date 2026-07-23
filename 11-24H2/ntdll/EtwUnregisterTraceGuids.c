/*
 * XREFs of EtwUnregisterTraceGuids @ 0x1800ED9B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetLastWin32Error @ 0x180048FD0 (RtlSetLastWin32Error.c)
 *     EtwNotificationUnregister @ 0x180049B40 (EtwNotificationUnregister.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 */

__int64 __fastcall EtwUnregisterTraceGuids(REGHANDLE a1)
{
  LONG v1; // eax
  unsigned __int32 v2; // ebx
  PVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  v1 = EtwNotificationUnregister(a1, &Context);
  v2 = v1;
  if ( v1 )
    RtlSetLastWin32Error(v1);
  else
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Context);
  return v2;
}
