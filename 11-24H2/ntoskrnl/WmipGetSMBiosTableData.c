/*
 * XREFs of WmipGetSMBiosTableData @ 0x140A42038
 * Callers:
 *     WmipRawSMBiosTableHandler @ 0x14048B1E0 (WmipRawSMBiosTableHandler.c)
 *     WmipQueryWmiDataBlock @ 0x140A41D60 (WmipQueryWmiDataBlock.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     MmUnmapIoSpace @ 0x140263160 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x1402E9A50 (MmMapIoSpaceEx.c)
 *     RtlCopyDeviceMemory @ 0x140520F1C (RtlCopyDeviceMemory.c)
 *     WmipSMBiosHideMachine @ 0x1407A4B8C (WmipSMBiosHideMachine.c)
 *     WmipGetRegistryHideMachine @ 0x140A42134 (WmipGetRegistryHideMachine.c)
 *     WmipAcquireSmbiosLockShared @ 0x140A421E4 (WmipAcquireSmbiosLockShared.c)
 */

__int64 __fastcall WmipGetSMBiosTableData(char *a1, int *a2, _DWORD *a3)
{
  int v6; // ebx
  char *v8; // rax
  char *v9; // rbx

  if ( !a2 )
    return 3221225485LL;
  WmipAcquireSmbiosLockShared();
  if ( a3 )
    *a3 = WmipSMBiosVersionInfo;
  if ( *a2 >= (unsigned int)WmipSMBiosTableLength )
  {
    if ( WmipSMBiosTablePhysicalAddress )
    {
      v8 = (char *)MmMapIoSpaceEx(WmipSMBiosTablePhysicalAddress, (unsigned int)WmipSMBiosTableLength, 4u);
      v9 = v8;
      if ( v8 )
      {
        RtlCopyDeviceMemory(a1, v8, (unsigned int)WmipSMBiosTableLength);
        MmUnmapIoSpace(v9, (unsigned int)WmipSMBiosTableLength);
        v6 = 0;
      }
      else
      {
        v6 = -1073741670;
      }
    }
    else
    {
      v6 = -1073741808;
    }
  }
  else
  {
    v6 = -1073741789;
  }
  *a2 = WmipSMBiosTableLength;
  if ( (unsigned __int8)WmipGetRegistryHideMachine() )
  {
    if ( v6 >= 0 )
      WmipSMBiosHideMachine(a1, *a2);
  }
  ExReleaseResourceLite(&WmipSMBiosLock);
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
