/*
 * XREFs of TppIopCancelPendingCallbacks @ 0x18015A820
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x18003E750 (TppBarrierAdjust.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     TppETWCallbackCancel @ 0x180086D54 (TppETWCallbackCancel.c)
 */

void __fastcall TppIopCancelPendingCallbacks(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rcx

  v2 = _InterlockedExchange((volatile __int32 *)(a1 + 280), 0);
  if ( v2 )
  {
    TppBarrierAdjust((_RTL_SRWLOCK *)(a1 + 56), -v2, 0);
    if ( RtlGetCurrentServiceSessionId() )
      v3 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v3 = 2147353478LL;
    if ( *(_BYTE *)v3 )
      TppETWCallbackCancel(*(_QWORD *)(a1 + 144), a1 + 200, a1 + 80, *(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 104), v2);
  }
}
