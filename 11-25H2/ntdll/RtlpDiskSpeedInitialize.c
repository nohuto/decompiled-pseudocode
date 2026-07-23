/*
 * XREFs of RtlpDiskSpeedInitialize @ 0x180114640
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetNtSystemRoot @ 0x18006C630 (RtlGetNtSystemRoot.c)
 *     RtlpGetVolumeHandle @ 0x1801146B4 (RtlpGetVolumeHandle.c)
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x1801148F8 (RtlQueryVolumeDiskSpeedPolicy.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 */

_BOOL8 __fastcall RtlpDiskSpeedInitialize(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  PWSTR NtSystemRoot; // rax
  int VolumeHandle; // ebx
  HANDLE Handle[3]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0;
  Handle[0] = 0LL;
  NtSystemRoot = RtlGetNtSystemRoot();
  VolumeHandle = RtlpGetVolumeHandle(NtSystemRoot, Handle);
  if ( VolumeHandle >= 0 )
  {
    VolumeHandle = RtlQueryVolumeDiskSpeedPolicy(Handle[0], &v7);
    if ( VolumeHandle >= 0 )
    {
      VolumeHandle = 0;
      RtlpDiskSpeedPolicy = v7;
    }
  }
  if ( Handle[0] )
    NtClose(Handle[0]);
  return VolumeHandle >= 0;
}
