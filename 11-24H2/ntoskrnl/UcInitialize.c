/*
 * XREFs of UcInitialize @ 0x140694538
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 *     EtwpInitialize @ 0x140C3D0FC (EtwpInitialize.c)
 *     ExpInitSystemPhase1 @ 0x140C40A64 (ExpInitSystemPhase1.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     UcpLogUnexpectedCodePathEvent @ 0x140694B40 (UcpLogUnexpectedCodePathEvent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140A57414 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall UcInitialize(int a1)
{
  unsigned int v1; // ebx
  KIRQL v2; // al
  __int64 v3; // rdi
  KIRQL v4; // si
  __int64 v5; // rdx
  _DWORD v7[4]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 259;
  if ( a1 == 2 )
  {
    UcIsWNFInfraInitialized = 1;
    return 0;
  }
  if ( a1 )
  {
    if ( a1 == 1 && !UcIsTraceLoggingInitialized )
    {
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140E0A020, 0LL, 0LL);
      v2 = KeAcquireSpinLockRaiseToDpc(&UcSpinLock);
      v3 = UcpTriggeredList;
      v4 = v2;
      UcpMaxTriggeredNodeExcceded = 0;
      UcIsTraceLoggingInitialized = 1;
      while ( (__int64 *)v3 != &UcpTriggeredList )
      {
        v5 = *(unsigned int *)(v3 - 16);
        v7[0] = *(_DWORD *)(v3 + 24);
        v7[1] = *(_DWORD *)(v3 + 28);
        v7[2] = *(_DWORD *)(v3 + 32);
        UcpLogUnexpectedCodePathEvent(v7, v5);
        v3 = *(_QWORD *)v3;
      }
      v1 = 0;
      KeReleaseSpinLock(&UcSpinLock, v4);
    }
  }
  else if ( !UcIsSystemReadyForLiveDump )
  {
    UcSpinLock = 0LL;
    qword_140EF0A68 = (__int64)&UcpTriggeredList;
    UcpTriggeredList = (__int64)&UcpTriggeredList;
    qword_140EF0A58 = (__int64)&UcpOneSettingsClientConfigurationList;
    UcpOneSettingsClientConfigurationList = (__int64)&UcpOneSettingsClientConfigurationList;
    UcIsSystemReadyForLiveDump = 1;
    return 0;
  }
  return v1;
}
