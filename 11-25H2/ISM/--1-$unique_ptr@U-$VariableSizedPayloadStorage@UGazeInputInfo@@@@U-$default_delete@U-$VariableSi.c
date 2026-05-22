/*
 * XREFs of ??1?$unique_ptr@U?$VariableSizedPayloadStorage@UGazeInputInfo@@@@U?$default_delete@U?$VariableSizedPayloadStorage@UGazeInputInfo@@@@@std@@@std@@QEAA@XZ @ 0x1800D97AC
 * Callers:
 *     ??1GazeHidDevice@@UEAA@XZ @ 0x1800DD3A0 (--1GazeHidDevice@@UEAA@XZ.c)
 * Callees:
 *     ??R?$default_delete@U?$VariableSizedPayloadStorage@UGazeInputInfo@@@@@std@@QEBAXPEAU?$VariableSizedPayloadStorage@UGazeInputInfo@@@@@Z @ 0x1800D97CC (--R-$default_delete@U-$VariableSizedPayloadStorage@UGazeInputInfo@@@@@std@@QEBAXPEAU-$VariableSi.c)
 */

__int64 __fastcall std::unique_ptr<VariableSizedPayloadStorage<GazeInputInfo>>::~unique_ptr<VariableSizedPayloadStorage<GazeInputInfo>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<VariableSizedPayloadStorage<GazeInputInfo>>::operator()();
  return result;
}
