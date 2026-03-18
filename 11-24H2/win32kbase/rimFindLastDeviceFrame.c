/*
 * XREFs of rimFindLastDeviceFrame @ 0x1401ED55C
 * Callers:
 *     RIMCmDeactivateContact @ 0x1401822F4 (RIMCmDeactivateContact.c)
 *     RIMRemoveFromActiveDevices @ 0x1401E0EE0 (RIMRemoveFromActiveDevices.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimFindLastDeviceFrame(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx

  v2 = 0LL;
  if ( !*(_QWORD *)(a2 + 176) )
    return *(_QWORD *)(*(_QWORD *)(a2 + 456) + 1072LL);
  if ( (*(_DWORD *)(a2 + 168) & 0x2000) != 0 )
    v3 = *(_QWORD *)(a2 + 24);
  else
    v3 = *(_QWORD *)(a2 + 16);
  v4 = a1 + 744;
  v5 = *(_QWORD *)(v4 + 8);
  do
  {
    if ( v5 == v4 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131080, 697);
      return v2;
    }
    v6 = v5 - 8;
    v5 = *(_QWORD *)(v5 + 8);
  }
  while ( *(_QWORD *)(v6 + 32) != v3 );
  return v6;
}
