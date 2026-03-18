/*
 * XREFs of RIMCmActivateButtonContact @ 0x1401F1704
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x1400571D4 (rimProcessPointerDeviceButtonContact.c)
 * Callees:
 *     RIMCmGetButtonContact @ 0x140104458 (RIMCmGetButtonContact.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall RIMCmActivateButtonContact(__int64 a1)
{
  __int64 ButtonContact; // rdi
  _QWORD *v3; // rdi
  __int64 *v4; // rax
  __int64 v5; // rcx

  ButtonContact = RIMCmGetButtonContact(a1);
  if ( (*(_DWORD *)(ButtonContact + 32) & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 436);
  if ( *(_DWORD *)(ButtonContact + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 437);
  *(_DWORD *)(ButtonContact + 32) |= 6u;
  if ( *(_DWORD *)(a1 + 1016) >= *(_DWORD *)(a1 + 776) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 442);
  ++*(_DWORD *)(a1 + 1016);
  ++*(_DWORD *)(a1 + 1020);
  *(_QWORD *)(ButtonContact + 24) = 0LL;
  v3 = (_QWORD *)(ButtonContact + 16);
  *v3 = 0LL;
  v4 = *(__int64 **)(a1 + 1000);
  v5 = *v4;
  if ( *(__int64 **)(*v4 + 8) != v4 )
    __fastfail(3u);
  *v3 = v5;
  v3[1] = v4;
  *(_QWORD *)(v5 + 8) = v3;
  *v4 = (__int64)v3;
  if ( *(_DWORD *)(a1 + 1016) < *(_DWORD *)(a1 + 1020) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 453);
}
