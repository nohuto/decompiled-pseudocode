/*
 * XREFs of _CmValidateDeviceName @ 0x1408B8070
 * Callers:
 *     PiCMDeleteDeviceWorker @ 0x1407310F0 (PiCMDeleteDeviceWorker.c)
 *     PiCMGenerateDeviceInstance @ 0x14073136C (PiCMGenerateDeviceInstance.c)
 *     _CmEnumSubkeyCallback @ 0x14081B530 (_CmEnumSubkeyCallback.c)
 *     _CmGetDeviceInterfaceName @ 0x1408B7B74 (_CmGetDeviceInterfaceName.c)
 *     _PnpDispatchDevice @ 0x1408CDBB0 (_PnpDispatchDevice.c)
 *     PiCMRegisterDeviceInterface @ 0x140A6E630 (PiCMRegisterDeviceInterface.c)
 *     PiCMGetDeviceDepth @ 0x140A7FAEC (PiCMGetDeviceDepth.c)
 *     PiCMDeviceAction @ 0x140A85618 (PiCMDeviceAction.c)
 *     PiCMCreateDevice @ 0x140AB4970 (PiCMCreateDevice.c)
 *     PiCMQueryRemove @ 0x140ABB70C (PiCMQueryRemove.c)
 *     PiCMSetDeviceProblem @ 0x140AC10B0 (PiCMSetDeviceProblem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmValidateDeviceName(__int64 a1, _WORD *a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rcx
  _WORD *i; // rax
  __int16 v6; // ax

  v2 = 0;
  v3 = 1;
  if ( !a2 )
    return 3221225485LL;
  v4 = 200LL;
  for ( i = a2; *i; ++i )
  {
    if ( !--v4 )
      return 3221225523LL;
  }
  while ( 1 )
  {
    v6 = *a2;
    if ( !*a2 )
      break;
    if ( (unsigned __int16)(v6 - 33) > 0x5Eu || v6 == 44 )
      return 3221225523LL;
    if ( v6 == 92 )
    {
      if ( !v2 )
        return 3221225523LL;
      v2 = 0;
      ++v3;
      ++a2;
    }
    else
    {
      ++v2;
      ++a2;
    }
  }
  if ( !v2 || v3 != 3 )
    return 3221225523LL;
  return 0LL;
}
