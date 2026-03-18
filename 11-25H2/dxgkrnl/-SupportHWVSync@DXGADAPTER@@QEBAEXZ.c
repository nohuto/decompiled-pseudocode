/*
 * XREFs of ?SupportHWVSync@DXGADAPTER@@QEBAEXZ @ 0x1400451EC
 * Callers:
 *     ?GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ @ 0x14008F8B0 (-GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x14019922C (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
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
