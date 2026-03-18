/*
 * XREFs of ?Read@CBaseInput@@QEAAJXZ @ 0x1C0077540
 * Callers:
 *     UserKSTInitialize @ 0x1C0084060 (UserKSTInitialize.c)
 *     PerfomInitialReadInputOnSharedThread @ 0x1C0087B0C (PerfomInitialReadInputOnSharedThread.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C00E4D90 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C00775C0 (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     RIMReadInput @ 0x1C0077620 (RIMReadInput.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CBaseInput::Read(CBaseInput *this)
{
  __int64 DispatcherHandleByName; // rax
  int v3; // edi

  DispatcherHandleByName = CRIMBase::GetDispatcherHandleByName(this, 2LL, 0LL);
  v3 = DispatcherHandleByName;
  if ( !DispatcherHandleByName )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 972LL);
  return RIMReadInput(
           *((_QWORD *)this + 1),
           (int)this + 64,
           *((_DWORD *)this + 14),
           v3,
           0,
           (__int64)this + 48,
           (__int64)this + 24,
           (__int64)this + 32);
}
