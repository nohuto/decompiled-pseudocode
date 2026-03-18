/*
 * XREFs of ?StartNextFrameNow@CConnection@DirectComposition@@QEAAXXZ @ 0x14010EFCC
 * Callers:
 *     ?KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z @ 0x1400746F0 (-KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z.c)
 *     ?StartNextFrameNow@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x14010EF80 (-StartNextFrameNow@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CConnection::StartNextFrameNow(DirectComposition::CConnection *this)
{
  __int64 v1; // rcx

  if ( *((_DWORD *)this + 37) )
  {
    v1 = *((_QWORD *)this + 37);
    if ( v1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 216LL))(v1);
  }
}
