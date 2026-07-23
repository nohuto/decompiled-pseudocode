/*
 * XREFs of TpWaitForIoCompletion @ 0x1800FB080
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppBarrierAdjust @ 0x180041550 (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x1801144BC (TppETWCallbackCancel.c)
 */

void __cdecl TpWaitForIoCompletion(PTP_IO Io, LOGICAL CancelPendingCallbacks)
{
  volatile int Flags; // eax
  __int32 v4; // edi
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
          Io->CleanupGroupMember.Pool,
          (_DWORD)Io + 200,
          (_DWORD)Io + 80,
          Io->CleanupGroupMember.Context,
          (__int64)Io->CleanupGroupMember.SubProcessTag,
          v4);
    }
  }
}
