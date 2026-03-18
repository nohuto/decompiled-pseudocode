/*
 * XREFs of ImpAllocate @ 0x1C007B048
 * Callers:
 *     ImpInitializeWork @ 0x1C007AD6C (ImpInitializeWork.c)
 *     ImpInitializeLock @ 0x1C00C37F4 (ImpInitializeLock.c)
 *     ImpRpcAsyncInit @ 0x1C00CA1F0 (ImpRpcAsyncInit.c)
 *     MIDL_user_allocate @ 0x1C0235B10 (MIDL_user_allocate.c)
 *     ImpQueueCharacter @ 0x1C0235D58 (ImpQueueCharacter.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00ADF88 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage @ 0x1C00D6694 (Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall ImpAllocate(__int64 a1, char a2, char a3)
{
  __int64 v6; // rdi
  __int64 v7; // rbx

  v6 = (-(__int64)(a2 != 0) & 0xC0) + 64;
  if ( (unsigned int)Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage() )
  {
    v7 = (-(__int64)(a2 != 0) & 0xC0) + 68;
    if ( !a3 )
      v7 = v6;
  }
  else
  {
    v7 = (-(__int64)(a2 != 0) & 0xC0) + 68;
    if ( !a3 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
  }
  return ExAllocatePool2(v7, a1, 1836084809LL);
}
