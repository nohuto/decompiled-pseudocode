/*
 * XREFs of DxgkReportDeviceDirectedPowerDown @ 0x140068450
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1403B9530 (DpiFdoHandleDevicePower.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkReportDeviceDirectedPowerDown(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( *(_QWORD *)(a1 + 3232) )
      return PoFxCompleteDirectedPowerDown();
  }
  return result;
}
