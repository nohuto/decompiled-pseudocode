/*
 * XREFs of Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1400828FC
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1400370B0 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     Controller_GetPreProcessedSystemPowerAction @ 0x1400400E0 (Controller_GetPreProcessedSystemPowerAction.c)
 *     Controller_UpdateIdleTimeout @ 0x140081F88 (Controller_UpdateIdleTimeout.c)
 */

__int64 __fastcall Controller_UpdateIdleTimeoutOnControllerFDOD0Entry(__int64 a1)
{
  __int64 result; // rax
  int v3; // edx

  result = Controller_GetPreProcessedSystemPowerAction(a1);
  if ( !(_DWORD)result || (result = (unsigned int)(result - 1), (unsigned int)result <= 1) )
  {
    if ( !*(_DWORD *)(a1 + 864) && *(_DWORD *)(a1 + 976) != 10000 )
    {
      Controller_UpdateIdleTimeout(a1, 10000);
      result = (__int64)&WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v3) = 2;
        return WPP_RECORDER_SF_d(
                 *(_QWORD *)(a1 + 72),
                 v3,
                 4,
                 29,
                 (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
                 16);
      }
    }
  }
  return result;
}
