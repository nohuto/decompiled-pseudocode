/*
 * XREFs of WmipGetSMBiosTableData @ 0x140A37918
 * Callers:
 *     WmipRawSMBiosTableHandler @ 0x140486010 (WmipRawSMBiosTableHandler.c)
 *     WmipQueryWmiDataBlock @ 0x140A37640 (WmipQueryWmiDataBlock.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     MmUnmapIoSpace @ 0x1402929D0 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x14034B090 (MmMapIoSpaceEx.c)
 *     RtlCopyDeviceMemory @ 0x14051E7EC (RtlCopyDeviceMemory.c)
 *     WmipSMBiosHideMachine @ 0x1407A4C9C (WmipSMBiosHideMachine.c)
 *     WmipGetRegistryHideMachine @ 0x140A37A14 (WmipGetRegistryHideMachine.c)
 *     WmipAcquireSmbiosLockShared @ 0x140A37AC4 (WmipAcquireSmbiosLockShared.c)
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
      v8 = (char *)MmMapIoSpaceEx(WmipSMBiosTablePhysicalAddress, (unsigned int)WmipSMBiosTableLength, 4LL);
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
