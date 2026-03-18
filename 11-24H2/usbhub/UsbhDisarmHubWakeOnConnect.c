/*
 * XREFs of UsbhDisarmHubWakeOnConnect @ 0x140014314
 * Callers:
 *     UsbhSshSuspendHub @ 0x140013464 (UsbhSshSuspendHub.c)
 *     UsbhSshResumeDownstream @ 0x14001DC6C (UsbhSshResumeDownstream.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1400372B8 (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhSetHubRemoteWake @ 0x140013AD0 (UsbhSetHubRemoteWake.c)
 *     UsbhDisarmHubForWakeDetect @ 0x140014368 (UsbhDisarmHubForWakeDetect.c)
 */

__int64 __fastcall UsbhDisarmHubWakeOnConnect(__int64 a1)
{
  _DWORD *v2; // rbx
  __int64 result; // rax

  v2 = FdoExt(a1);
  result = UsbhDisarmHubForWakeDetect(a1);
  if ( (v2[640] & 0x80000) != 0 )
  {
    result = UsbhSetHubRemoteWake(a1, 0);
    if ( (int)result >= 0 )
      v2[640] &= ~0x80000u;
  }
  return result;
}
