/*
 * XREFs of ?OnAsyncPnpWorkNotification@CBaseInput@@AEAAJXZ @ 0x1C01DCD50
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0052D0C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0052D50 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0179C30 (RIMOnAsyncPnpWorkNotification.c)
 */

__int64 __fastcall CBaseInput::OnAsyncPnpWorkNotification(char **this)
{
  __int64 *v3; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v3, "OnAsyncPnpWorkNotification", 0LL);
  LODWORD(this) = RIMOnAsyncPnpWorkNotification(this[1]);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v3);
  return (unsigned int)this;
}
