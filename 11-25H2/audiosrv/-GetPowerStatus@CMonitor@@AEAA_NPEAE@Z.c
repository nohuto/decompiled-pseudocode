/*
 * XREFs of ?GetPowerStatus@CMonitor@@AEAA_NPEAE@Z @ 0x180114A5C
 * Callers:
 *     ?OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x1801153E4 (-OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x180115B44 (-Start@CMonitor@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

char __fastcall CMonitor::GetPowerStatus(CMonitor *this, unsigned __int8 *a2)
{
  unsigned __int8 v2; // al
  _SYSTEM_POWER_STATUS SystemPowerStatus; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_BYTE *)this + 208);
  if ( v2 != 0xFF )
  {
    *a2 = v2;
    return 1;
  }
  *(_QWORD *)&SystemPowerStatus.ACLineStatus = 0LL;
  SystemPowerStatus.BatteryFullLifeTime = 0;
  if ( GetSystemPowerStatus(&SystemPowerStatus) )
  {
    *a2 = SystemPowerStatus.ACLineStatus;
    return 1;
  }
  *a2 = -1;
  return 0;
}
