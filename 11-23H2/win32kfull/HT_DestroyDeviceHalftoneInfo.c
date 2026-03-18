/*
 * XREFs of HT_DestroyDeviceHalftoneInfo @ 0x1C001D7E8
 * Callers:
 *     HT_DestroyDeviceHalftoneInfoWrap @ 0x1C001D7B0 (HT_DestroyDeviceHalftoneInfoWrap.c)
 *     ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x1C001D8CC (-bDisableHalftone@PDEVOBJ@@QEAAHXZ.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C001E4F0 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 * Callees:
 *     CleanUpDHI @ 0x1C001D810 (CleanUpDHI.c)
 */

__int64 __fastcall HT_DestroyDeviceHalftoneInfo(_DWORD *a1)
{
  if ( a1 && a1[10] == 1414021956 )
    return CleanUpDHI(a1);
  else
    return 0LL;
}
