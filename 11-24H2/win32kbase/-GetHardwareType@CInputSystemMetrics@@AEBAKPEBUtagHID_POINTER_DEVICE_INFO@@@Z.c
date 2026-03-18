/*
 * XREFs of ?GetHardwareType@CInputSystemMetrics@@AEBAKPEBUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1402200AC
 * Callers:
 *     ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x140147048 (-UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CInputSystemMetrics::GetHardwareType(
        CInputSystemMetrics *this,
        const struct tagHID_POINTER_DEVICE_INFO *a2)
{
  __int64 result; // rax
  unsigned int v4; // edx

  switch ( *((_DWORD *)a2 + 6) )
  {
    case 1:
    case 2:
    case 3:
    case 4:
      v4 = 129;
      break;
    case 5:
      v4 = 132;
      break;
    case 6:
      v4 = 136;
      break;
    default:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 140);
      return 0LL;
  }
  result = v4 | 0x40;
  if ( *((_DWORD *)a2 + 194) <= 1u )
    return v4;
  return result;
}
