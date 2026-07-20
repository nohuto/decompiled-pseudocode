/*
 * XREFs of CreateFileW @ 0x14001CBB0
 * Callers:
 *     BasepGetVolumeDosLetterNameFromNTName @ 0x14001B0E4 (BasepGetVolumeDosLetterNameFromNTName.c)
 *     BasepGetVolumeGUIDFromNTName @ 0x14001B4A0 (BasepGetVolumeGUIDFromNTName.c)
 * Callees:
 *     Feature_Servicing_CD_PathRedirectionAPI_2503__private_IsEnabledDeviceUsageNoInline @ 0x14001C028 (Feature_Servicing_CD_PathRedirectionAPI_2503__private_IsEnabledDeviceUsageNoInline.c)
 *     CreateFileInternal @ 0x14001C20C (CreateFileInternal.c)
 */

__int64 CreateFileW()
{
  int IsEnabledDeviceUsageNoInline; // eax
  int v2; // [rsp+30h] [rbp-28h] BYREF
  __int64 v3; // [rsp+34h] [rbp-24h]
  int v4; // [rsp+3Ch] [rbp-1Ch]
  __int128 v5; // [rsp+40h] [rbp-18h]

  v2 = 32;
  v4 = 0;
  v5 = 0LL;
  v3 = 128LL;
  IsEnabledDeviceUsageNoInline = Feature_Servicing_CD_PathRedirectionAPI_2503__private_IsEnabledDeviceUsageNoInline();
  return CreateFileInternal(L"\\\\.\\MountPointManager", 0, 3u, 3, (__int64)&v2, IsEnabledDeviceUsageNoInline != 0);
}
