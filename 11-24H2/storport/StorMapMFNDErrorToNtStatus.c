/*
 * XREFs of StorMapMFNDErrorToNtStatus @ 0x140067C1C
 * Callers:
 *     RaidAdapterMFNDChildPFControl @ 0x14005B108 (RaidAdapterMFNDChildPFControl.c)
 *     RaidAdapterMFNDNameSpacePageMapControl @ 0x14005B548 (RaidAdapterMFNDNameSpacePageMapControl.c)
 *     RaidAdapterReconfigureMFND @ 0x14005DA44 (RaidAdapterReconfigureMFND.c)
 *     StorGetMFNDCapabilities @ 0x14018E4C4 (StorGetMFNDCapabilities.c)
 *     StorMFNDNameSpaceReadWrite @ 0x14018E90C (StorMFNDNameSpaceReadWrite.c)
 *     StorQueryMFNDChildPFCommandPermission @ 0x14018EE90 (StorQueryMFNDChildPFCommandPermission.c)
 *     StorQueryMFNDChildPFGlobalProperty @ 0x14018F10C (StorQueryMFNDChildPFGlobalProperty.c)
 *     StorQueryMFNDChildPFList @ 0x14018F2D0 (StorQueryMFNDChildPFList.c)
 *     StorQueryMFNDChildPFQoSStatisticsLog @ 0x14018F94C (StorQueryMFNDChildPFQoSStatisticsLog.c)
 *     StorQueryMFNDChildPFQoSStatisticsProperty @ 0x14018FC9C (StorQueryMFNDChildPFQoSStatisticsProperty.c)
 *     StorQueryMFNDChildPFQueuesState @ 0x14018FEA4 (StorQueryMFNDChildPFQueuesState.c)
 *     StorQueryMFNDChildPFSettings @ 0x140190278 (StorQueryMFNDChildPFSettings.c)
 *     StorQueryMFNDMigrationQoS @ 0x140190584 (StorQueryMFNDMigrationQoS.c)
 *     StorQueryMFNDNamespacePageMap @ 0x140190768 (StorQueryMFNDNamespacePageMap.c)
 *     StorQueryMFNDOperationInfo @ 0x140190B74 (StorQueryMFNDOperationInfo.c)
 *     StorRetrieveMFNDChildPFGlobalProperty @ 0x140190DD8 (StorRetrieveMFNDChildPFGlobalProperty.c)
 *     StorSetMFNDChildPFCommandPermission @ 0x1401914C8 (StorSetMFNDChildPFCommandPermission.c)
 *     StorSetMFNDChildPFGlobalProperty @ 0x1401916CC (StorSetMFNDChildPFGlobalProperty.c)
 *     StorSetMFNDChildPFQoS @ 0x1401918C0 (StorSetMFNDChildPFQoS.c)
 *     StorSetMFNDChildPFQoSStatisticsProperty @ 0x140191B28 (StorSetMFNDChildPFQoSStatisticsProperty.c)
 *     StorSetMFNDChildPFQueuesState @ 0x140191D2C (StorSetMFNDChildPFQueuesState.c)
 *     StorSetMFNDChildPFSettings @ 0x14019204C (StorSetMFNDChildPFSettings.c)
 *     StorSetMFNDMigrationQoS @ 0x140192354 (StorSetMFNDMigrationQoS.c)
 *     StorSetMFNDOperationInfo @ 0x14019289C (StorSetMFNDOperationInfo.c)
 * Callees:
 *     <none>
 */

char __fastcall StorMapMFNDErrorToNtStatus(unsigned __int16 a1, _DWORD *a2)
{
  char v2; // r8
  int v3; // eax

  v2 = 1;
  v3 = a1 >> 1;
  switch ( (unsigned __int8)v3 )
  {
    case 0xC5u:
      goto LABEL_9;
    case 0xC6u:
    case 0xC7u:
      *a2 = -2147483210;
      return v2;
    case 0xC8u:
LABEL_9:
      *a2 = -2147483599;
      return v2;
  }
  if ( (unsigned __int8)v3 != 201 )
    return 0;
  *a2 = -1073741790;
  return v2;
}
