/*
 * XREFs of ?OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z @ 0x18006CBF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Sd @ 0x1800C30FC (WPP_SF_Sd.c)
 */

__int64 __fastcall CMonitorManager::OnDeviceStateChanged(
        struct _RTL_CRITICAL_SECTION *pv,
        const unsigned __int16 *a2,
        int a3)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      24,
      (unsigned int)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
      (_DWORD)a2,
      a3);
  }
  return CMonitorManager::QueueDeviceStateChanged(pv, a3, a2);
}
