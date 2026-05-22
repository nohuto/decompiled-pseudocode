/*
 * XREFs of ??R?$default_delete@U?$VariableSizedPayloadStorage@UGazeInputInfo@@@@@std@@QEBAXPEAU?$VariableSizedPayloadStorage@UGazeInputInfo@@@@@Z @ 0x1800DC9BC
 * Callers:
 *     ??1?$unique_ptr@U?$VariableSizedPayloadStorage@UGazeInputInfo@@@@U?$default_delete@U?$VariableSizedPayloadStorage@UGazeInputInfo@@@@@std@@@std@@QEAA@XZ @ 0x1800DC99C (--1-$unique_ptr@U-$VariableSizedPayloadStorage@UGazeInputInfo@@@@U-$default_delete@U-$VariableSi.c)
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x1800E0514 (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030A30 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::default_delete<VariableSizedPayloadStorage<GazeInputInfo>>::operator()(__int64 a1, void **a2)
{
  if ( a2 )
  {
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(
      a2,
      (const struct std::nothrow_t *)a2);
    operator delete(a2, (const struct std::nothrow_t *)0x10);
  }
}
