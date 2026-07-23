/*
 * XREFs of TpWaitForIoCompletion @ 0x1800F4030
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x18003E750 (TppBarrierAdjust.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     TppETWCallbackCancel @ 0x180086D54 (TppETWCallbackCancel.c)
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 */

void __cdecl TpWaitForIoCompletion(PTP_IO Io, LOGICAL CancelPendingCallbacks)
{
  volatile int Flags; // eax
  int v4; // edi
  __int64 v5; // rcx

  if ( !Io
    || (Flags = Io->CleanupGroupMember.Flags, (Flags & 0x10000) != 0)
    || (Flags & 0x20000) != 0
    || (__int64 (__fastcall **)(PVOID))Io->CleanupGroupMember.VFuncs != &TppIopCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter();
  }
  else
  {
    v4 = 0;
    if ( CancelPendingCallbacks )
      v4 = _InterlockedExchange(&Io->PendingIrpCount, 0);
    TppBarrierAdjust((_RTL_SRWLOCK *)&Io->CleanupGroupMember.CallbackBarrier, -v4, 1);
    if ( v4 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v5 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v5 = 2147353478LL;
      if ( *(_BYTE *)v5 )
        TppETWCallbackCancel(
          (__int64)Io->CleanupGroupMember.Pool,
          (__int64)&Io->Direct,
          (__int64)&Io->CleanupGroupMember.80,
          (__int64)Io->CleanupGroupMember.Context,
          (__int64)Io->CleanupGroupMember.SubProcessTag,
          v4);
    }
  }
}
