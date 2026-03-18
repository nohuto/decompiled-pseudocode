/*
 * XREFs of ?DdcciSaveCurrentSettings@CPhysicalMonitorHandle@@QEAAJXZ @ 0x1C0269190
 * Callers:
 *     NtGdiDDCCISaveCurrentSettings @ 0x1C0269C30 (NtGdiDDCCISaveCurrentSettings.c)
 * Callees:
 *     ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C02691E4 (-DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciSaveCurrentSettings(CPhysicalMonitorHandle *this)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned int)GreIsInLowBox() )
    return 3221225506LL;
  v3 = -1307803311;
  return CPhysicalMonitorHandle::DdcciSendDataToMonitorDevice(this, -2000000LL, (unsigned __int8 *)&v3, 4u);
}
