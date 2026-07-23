/*
 * XREFs of PpmUpdateTargetProcessorPolicy @ 0x1404A277C
 * Callers:
 *     PpmUpdateProcessorPolicyCallback @ 0x1404A2750 (PpmUpdateProcessorPolicyCallback.c)
 *     PpmUpdateProcessorPolicy @ 0x140A51F98 (PpmUpdateProcessorPolicy.c)
 * Callees:
 *     PpmEventAutonomousModeChange @ 0x1405D63B4 (PpmEventAutonomousModeChange.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmUpdateTargetProcessorPolicy(__int64 a1, _QWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 result; // rax

  v5 = a2[1];
  if ( *(_QWORD *)(a1 + 336) && (*a3 & 0x20) != 0 )
    guard_dispatch_icall_no_overrides(v5, *(unsigned int *)(a4 + 68));
  if ( *(_QWORD *)(a1 + 344) && (*a3 & 0x40) != 0 )
    guard_dispatch_icall_no_overrides(v5, *(unsigned int *)(a4 + 72));
  if ( *(_QWORD *)(a1 + 352) && (PpmAllowedActions & 0x100) != 0 )
    guard_dispatch_icall_no_overrides(v5, *(unsigned int *)(a4 + 88));
  if ( *(_QWORD *)(a1 + 360) )
  {
    if ( (*a3 & 0x80u) != 0 )
    {
      *(_BYTE *)(a1 + 520) = *(_BYTE *)(a4 + 92);
      guard_dispatch_icall_no_overrides(v5, *(unsigned __int8 *)(a4 + 92));
      if ( *a2 )
        PpmEventAutonomousModeChange(*a2, *(unsigned __int8 *)(a1 + 520));
    }
  }
  result = *(_QWORD *)(a1 + 328);
  if ( result )
  {
    if ( (*a3 & 0x200) != 0 )
      return guard_dispatch_icall_no_overrides(v5, (unsigned int)PpmPerfTimeWindow);
  }
  return result;
}
