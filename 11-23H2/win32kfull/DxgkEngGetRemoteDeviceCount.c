/*
 * XREFs of DxgkEngGetRemoteDeviceCount @ 0x1C026F4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DrvGetRemoteDeviceCount@@YAIXZ @ 0x1C0131B24 (-DrvGetRemoteDeviceCount@@YAIXZ.c)
 */

__int64 DxgkEngGetRemoteDeviceCount()
{
  Gre::Base *v0; // rcx
  unsigned int RemoteDeviceCount; // ebx

  UserEnterUserCritSec();
  RemoteDeviceCount = DrvGetRemoteDeviceCount(v0);
  UserLeaveUserCritSec();
  return RemoteDeviceCount;
}
