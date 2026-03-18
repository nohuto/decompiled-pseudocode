/*
 * XREFs of _CmGetDeviceStatus @ 0x1408BC8C8
 * Callers:
 *     PpDevCfgProcessDevices @ 0x14072D090 (PpDevCfgProcessDevices.c)
 *     PiCMDeleteDeviceWorker @ 0x1407310F0 (PiCMDeleteDeviceWorker.c)
 *     PiCMGenerateDeviceInstance @ 0x14073136C (PiCMGenerateDeviceInstance.c)
 *     PiCMSetProblem @ 0x1407316B4 (PiCMSetProblem.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1408BC37C (_CmIsDeviceSafeRemovalRequired.c)
 *     PiCMGetDeviceStatus @ 0x1408BD37C (PiCMGetDeviceStatus.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1409B4770 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiCMDeviceAction @ 0x140A85618 (PiCMDeviceAction.c)
 *     PiCMQueryRemove @ 0x140ABB70C (PiCMQueryRemove.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     _CmGetDeviceRegProp @ 0x1408C5BB0 (_CmGetDeviceRegProp.c)
 */

__int64 __fastcall CmGetDeviceStatus(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        unsigned int a7)
{
  _DWORD *v7; // r15
  char v8; // bl
  _DWORD *v9; // r12
  int v12; // r13d
  NTSTATUS inited; // edi
  int v14; // eax
  int v16; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  int v19; // [rsp+B8h] [rbp+58h] BYREF

  v7 = a5;
  v8 = 0;
  v9 = a6;
  *a4 = 0;
  v19 = 0;
  *v7 = 0;
  *v9 = 0;
  v12 = (int)a2;
  DestinationString = 0LL;
  v16 = 0;
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited >= 0 )
  {
    if ( *(_QWORD *)(a1 + 264) )
    {
      v14 = guard_dispatch_icall_no_overrides(a1, &DestinationString, a4, v7);
      inited = v14;
      if ( v14 == -2147483643 )
      {
        return (unsigned int)-1073741789;
      }
      else if ( v14 >= 0 )
      {
        a7 = 4;
        if ( !(unsigned int)CmGetDeviceRegProp(a1, v12, a3, 11, (__int64)&v19, (__int64)&v16, (__int64)&a7, 0)
          && a7 >= 4
          && v19 == 4 )
        {
          v8 = v16;
        }
        if ( (v8 & 4) != 0 )
          *a4 |= 0x10u;
        if ( (*a4 & 0x400) == 0 && (v8 & 0x40) != 0 )
        {
          *a4 |= 0x400u;
          *v7 = 28;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741822;
    }
  }
  return (unsigned int)inited;
}
