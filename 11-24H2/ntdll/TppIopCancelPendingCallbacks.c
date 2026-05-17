/*
 * XREFs of TppIopCancelPendingCallbacks @ 0x18015C460
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x180011D50 (TppBarrierAdjust.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     TppETWCallbackCancel @ 0x18006A664 (TppETWCallbackCancel.c)
 */

void __fastcall TppIopCancelPendingCallbacks(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rcx

  v2 = _InterlockedExchange((volatile __int32 *)(a1 + 280), 0);
  if ( v2 )
  {
    TppBarrierAdjust((volatile signed __int64 *)(a1 + 56), -v2, 0);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v3 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v3 = 2147353478LL;
    if ( *(_BYTE *)v3 )
      TppETWCallbackCancel(*(_QWORD *)(a1 + 144), a1 + 200, a1 + 80, *(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 104), v2);
  }
}
