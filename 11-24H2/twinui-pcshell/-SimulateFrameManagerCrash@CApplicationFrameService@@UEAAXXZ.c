/*
 * XREFs of ?SimulateFrameManagerCrash@CApplicationFrameService@@UEAAXXZ @ 0x1802FFE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationFrameService::SimulateFrameManagerCrash(CApplicationFrameService *this)
{
  CApplicationFrameService::_HandleFrameManagerCrash((CApplicationFrameService *)((char *)this - 40));
}
