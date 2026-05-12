/*
 * XREFs of RaidAdapterPerfStateCallback @ 0x140077890
 * Callers:
 *     <none>
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x140027690 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaidAdapterPerfStateCallback(__int64 a1)
{
  __int64 result; // rax

  RaCallMiniportAdapterControl(a1 + 376);
  result = *(_QWORD *)(a1 + 4960);
  if ( result )
    _interlockedbittestandreset((volatile signed __int32 *)(result + 120), 0);
  return result;
}
