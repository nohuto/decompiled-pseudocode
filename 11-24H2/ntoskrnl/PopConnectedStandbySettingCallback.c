/*
 * XREFs of PopConnectedStandbySettingCallback @ 0x140A71CC0
 * Callers:
 *     <none>
 * Callees:
 *     SSHSupportIsPlatformAoAc @ 0x14048B408 (SSHSupportIsPlatformAoAc.c)
 *     PopFanUpdateCsState @ 0x140AB776C (PopFanUpdateCsState.c)
 */

__int64 __fastcall PopConnectedStandbySettingCallback(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  __int64 v5; // rcx
  bool v6; // zf

  v3 = *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 == *a1 )
    v3 = *(_QWORD *)GUID_CONSOLE_DISPLAY_STATE.Data4 - a1[1];
  v4 = 0;
  if ( !v3 && a3 == 4 && a2 )
  {
    if ( !SSHSupportIsPlatformAoAc() )
      return (unsigned int)-1073741637;
    if ( PopMonitorOffDueToSleep )
    {
      PopMonitorOffDueToSleep = 0;
      v6 = (_DWORD)v5 == 0;
      if ( (_DWORD)v5 )
        return v4;
    }
    else
    {
      if ( dword_140F0B984 || PopHiberBootForceMonitorOff )
      {
        PopMonitorOffDueToSleep = 1;
        return v4;
      }
      v6 = (_DWORD)v5 == 0;
    }
    LOBYTE(v5) = !v6;
    PopFanUpdateCsState(v5);
  }
  return v4;
}
