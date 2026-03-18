/*
 * XREFs of ?SupportHWVSync@DXGADAPTER@@QEBAEXZ @ 0x140044ECC
 * Callers:
 *     ?GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ @ 0x140090CC0 (-GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x14019B720 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::SupportHWVSync(DXGADAPTER *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 390) )
    return *((_QWORD *)this + 87) != 0LL;
  return result;
}
