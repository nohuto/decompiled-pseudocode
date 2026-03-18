/*
 * XREFs of ?Read@CBaseInput@@QEAAJXZ @ 0x140145BE0
 * Callers:
 *     PerfomInitialReadInputOnSharedThread @ 0x140145B80 (PerfomInitialReadInputOnSharedThread.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x140187370 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     PerfomInitialReadInputExplicitly @ 0x14019DF5C (PerfomInitialReadInputExplicitly.c)
 * Callees:
 *     RIMReadInput @ 0x14005C200 (RIMReadInput.c)
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1400DA4B0 (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CBaseInput::Read(CBaseInput *this)
{
  __int64 DispatcherHandleByName; // rdi

  DispatcherHandleByName = CRIMBase::GetDispatcherHandleByName((__int64)this, 2u, 0);
  if ( !DispatcherHandleByName )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 997LL);
  return RIMReadInput(
           *((char **)this + 1),
           (__int64)this + 64,
           *((_DWORD *)this + 14),
           DispatcherHandleByName,
           0,
           (__int64)this + 48,
           (__int64)this + 24,
           (__int64)this + 32);
}
