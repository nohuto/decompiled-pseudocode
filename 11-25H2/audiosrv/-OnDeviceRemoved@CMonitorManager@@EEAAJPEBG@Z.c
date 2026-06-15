/*
 * XREFs of ?OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z @ 0x180112EB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x1800C17A4 (WPP_SF_S.c)
 */

__int64 __fastcall CMonitorManager::OnDeviceRemoved(struct _RTL_CRITICAL_SECTION *pv, wchar_t *a2)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, (__int64)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids, a2);
  }
  return CMonitorManager::QueueDeviceStateChanged(pv, 8, (char *)a2);
}
