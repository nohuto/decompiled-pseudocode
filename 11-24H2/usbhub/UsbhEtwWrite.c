/*
 * XREFs of UsbhEtwWrite @ 0x14000D0C0
 * Callers:
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x14000CF10 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhHubProcessIsr @ 0x14000D190 (UsbhHubProcessIsr.c)
 *     UsbhSshSuspendHub @ 0x140013464 (UsbhSshSuspendHub.c)
 *     UsbhDisableTimerObject @ 0x140013F2C (UsbhDisableTimerObject.c)
 *     UsbhPdoDevicePowerState @ 0x140014968 (UsbhPdoDevicePowerState.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x140016DA8 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhEtwLogHubIrpEvent @ 0x140018260 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhPortConnect @ 0x140019BF0 (UsbhPortConnect.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x14001C918 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhEtwLogDeviceInformation @ 0x140024C7C (UsbhEtwLogDeviceInformation.c)
 *     UsbhEnableTimerObject @ 0x14002C5D0 (UsbhEnableTimerObject.c)
 *     UsbhEtwLogHubInformation @ 0x14002F554 (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogPortInformation @ 0x14002F654 (UsbhEtwLogPortInformation.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1400302AC (UsbhEtwLogHubPowerEvent.c)
 *     UsbhEtwLogHubPastExceptions @ 0x140030558 (UsbhEtwLogHubPastExceptions.c)
 *     UsbhSshResumeUpstream @ 0x140030B38 (UsbhSshResumeUpstream.c)
 *     UsbhEtwLogDeviceDescription @ 0x140039BD4 (UsbhEtwLogDeviceDescription.c)
 * Callees:
 *     __security_check_cookie @ 0x140060F40 (__security_check_cookie.c)
 *     memset @ 0x140061340 (memset.c)
 */

NTSTATUS UsbhEtwWrite(PCEVENT_DESCRIPTOR EventDescriptor, LPCGUID ActivityId, ...)
{
  va_list v4; // r8
  ULONG v5; // r9d
  unsigned __int64 v6; // rdx
  unsigned int v7; // ecx
  __int64 v8; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData[10]; // [rsp+40h] [rbp-C8h] BYREF
  va_list va; // [rsp+120h] [rbp+18h] BYREF

  va_start(va, ActivityId);
  memset(UserData, 0, sizeof(UserData));
  va_copy(v4, va);
  v5 = 0;
  while ( 1 )
  {
    v6 = *(_QWORD *)v4;
    if ( !*(_QWORD *)v4 )
      break;
    v7 = *((_DWORD *)v4 + 2);
    v4 += 16;
    if ( !v7 || v5 >= 0xA )
      break;
    v8 = v5++;
    UserData[v8].Ptr = v6;
    UserData[v8].Size = v7;
    UserData[v8].Reserved = 0;
  }
  return EtwWrite(RegHandle, EventDescriptor, ActivityId, v5, UserData);
}
