/*
 * XREFs of ?StartNextFrameNow@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x14010EF80
 * Callers:
 *     ?NotifyCommitMustBeLastForFrame@CApplicationChannel@DirectComposition@@QEAAX_N@Z @ 0x14010EF50 (-NotifyCommitMustBeLastForFrame@CApplicationChannel@DirectComposition@@QEAAX_N@Z.c)
 * Callees:
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x140074908 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?StartNextFrameNow@CConnection@DirectComposition@@QEAAXXZ @ 0x14010EFCC (-StartNextFrameNow@CConnection@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CApplicationChannel::StartNextFrameNow(DirectComposition::CApplicationChannel *this)
{
  DirectComposition::CCriticalSection::AcquireShared(*(PERESOURCE *)(*((_QWORD *)this + 5) + 16LL));
  DirectComposition::CConnection::StartNextFrameNow(*((DirectComposition::CConnection **)this + 5));
  ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 16LL));
  KeLeaveCriticalRegion();
}
