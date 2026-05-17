/*
 * XREFs of TpWaitForIoCompletion @ 0x1800F9460
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x180011D50 (TppBarrierAdjust.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     TppETWCallbackCancel @ 0x18006A664 (TppETWCallbackCancel.c)
 *     TppRaiseInvalidParameter @ 0x18006B7F4 (TppRaiseInvalidParameter.c)
 */

void __fastcall TpWaitForIoCompletion(__int64 a1, int a2)
{
  int v3; // eax
  int v4; // edi
  __int64 v5; // rcx

  if ( !a1
    || (v3 = *(_DWORD *)(a1 + 168), (v3 & 0x10000) != 0)
    || (v3 & 0x20000) != 0
    || *(__int64 (__fastcall ***)())(a1 + 8) != TppIopCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter();
  }
  else
  {
    v4 = 0;
    if ( a2 )
      v4 = _InterlockedExchange((volatile __int32 *)(a1 + 280), 0);
    TppBarrierAdjust((volatile signed __int64 *)(a1 + 56), -v4, 1);
    if ( v4 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v5 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v5 = 2147353478LL;
      if ( *(_BYTE *)v5 )
        TppETWCallbackCancel(*(_QWORD *)(a1 + 144), a1 + 200, a1 + 80, *(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 104), v4);
    }
  }
}
