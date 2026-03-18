/*
 * XREFs of HT_DestroyDeviceHalftoneInfo @ 0x14012A1C0
 * Callers:
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1401277C8 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     HT_DestroyDeviceHalftoneInfoWrap @ 0x14012A060 (HT_DestroyDeviceHalftoneInfoWrap.c)
 *     ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x14012A098 (-bDisableHalftone@PDEVOBJ@@QEAAHXZ.c)
 * Callees:
 *     CleanUpDHI @ 0x140129F28 (CleanUpDHI.c)
 */

__int64 __fastcall HT_DestroyDeviceHalftoneInfo(__int64 a1)
{
  if ( a1 && *(_DWORD *)(a1 + 40) == 1414021956 )
    return CleanUpDHI((HSEMAPHORE *)a1);
  else
    return 0LL;
}
