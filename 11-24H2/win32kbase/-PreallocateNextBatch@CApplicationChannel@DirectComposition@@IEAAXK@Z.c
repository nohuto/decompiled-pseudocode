/*
 * XREFs of ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXK@Z @ 0x140224F2C
 * Callers:
 *     ?BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x14006CD70 (-BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 *     ?Synchronize@CSystemChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x14006E744 (-Synchronize@CSystemChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x14006FA48 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 *     ?BeginDuplicateResource@CSystemChannel@DirectComposition@@QEAAJVResourceHandle@@I@Z @ 0x140075264 (-BeginDuplicateResource@CSystemChannel@DirectComposition@@QEAAJVResourceHandle@@I@Z.c)
 *     NtDCompositionSynchronize @ 0x1400EEE00 (NtDCompositionSynchronize.c)
 *     ?DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1402256AC (-DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x14007F1D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::PreallocateNextBatch(
        DirectComposition::CApplicationChannel *this,
        int a2)
{
  if ( !a2 )
    a2 = *((_DWORD *)this + 102) + 1;
  if ( !*((_QWORD *)this + 22) )
    *((_QWORD *)this + 22) = DirectComposition::CApplicationChannel::GetBatchFragment(this, a2, 0, 0, 1);
}
