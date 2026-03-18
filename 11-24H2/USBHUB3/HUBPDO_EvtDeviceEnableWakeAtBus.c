/*
 * XREFs of HUBPDO_EvtDeviceEnableWakeAtBus @ 0x140016090
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_SubmitDeviceWakeNotificationIoctl @ 0x14001BBA4 (HUBPDO_SubmitDeviceWakeNotificationIoctl.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceEnableWakeAtBus(__int64 a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  int v6; // r8d
  __int64 v7; // rcx

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006C0F8);
  v5 = v3;
  v6 = 0;
  _InterlockedOr((volatile signed __int32 *)(v3 + 32), 8u);
  if ( a2 == 1 || (v4 = *(unsigned int *)(*(_QWORD *)(v3 + 24) + 1640LL), (v4 & 2) == 0) )
  {
    v7 = *(_QWORD *)(v3 + 24);
    if ( (*(_DWORD *)(v7 + 1640) & 0x100) != 0 )
    {
      if ( (*(_DWORD *)(v3 + 32) & 0x10) == 0 )
      {
        if ( (*(_DWORD *)(v7 + 1464) & 0x800) != 0 )
        {
          v6 = HUBPDO_SubmitDeviceWakeNotificationIoctl(v7, v4, 0LL);
          if ( v6 >= 0 )
            _InterlockedOr((volatile signed __int32 *)(v5 + 32), 0x4000u);
        }
        _InterlockedOr((volatile signed __int32 *)(v5 + 32), 4u);
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v6;
}
