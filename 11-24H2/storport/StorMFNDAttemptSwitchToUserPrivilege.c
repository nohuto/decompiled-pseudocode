/*
 * XREFs of StorMFNDAttemptSwitchToUserPrivilege @ 0x1400C71BC
 * Callers:
 *     StorMFNDChildPFControl @ 0x14018E6B4 (StorMFNDChildPFControl.c)
 *     StorMFNDNSPageMapControl @ 0x14018E7E8 (StorMFNDNSPageMapControl.c)
 *     StorMFNDNameSpaceReadWrite @ 0x14018E90C (StorMFNDNameSpaceReadWrite.c)
 *     StorQueryMFNDChildPFQueuesState @ 0x14018FEA4 (StorQueryMFNDChildPFQueuesState.c)
 *     StorQueryMFNDNamespacePageMap @ 0x140190768 (StorQueryMFNDNamespacePageMap.c)
 *     StorResetMFND @ 0x140190CF8 (StorResetMFND.c)
 *     StorSetMFNDChildPFCommandPermission @ 0x1401914C8 (StorSetMFNDChildPFCommandPermission.c)
 *     StorSetMFNDChildPFGlobalProperty @ 0x1401916CC (StorSetMFNDChildPFGlobalProperty.c)
 *     StorSetMFNDChildPFQoS @ 0x1401918C0 (StorSetMFNDChildPFQoS.c)
 *     StorSetMFNDChildPFQoSStatisticsProperty @ 0x140191B28 (StorSetMFNDChildPFQoSStatisticsProperty.c)
 *     StorSetMFNDChildPFQueuesState @ 0x140191D2C (StorSetMFNDChildPFQueuesState.c)
 *     StorSetMFNDChildPFSettings @ 0x14019204C (StorSetMFNDChildPFSettings.c)
 *     StorSetMFNDMigrationQoS @ 0x140192354 (StorSetMFNDMigrationQoS.c)
 *     StorSetMFNDOperationInfo @ 0x14019289C (StorSetMFNDOperationInfo.c)
 * Callees:
 *     StorSetMFNDOperationPrivilege @ 0x1400C7364 (StorSetMFNDOperationPrivilege.c)
 */

__int64 __fastcall StorMFNDAttemptSwitchToUserPrivilege(__int64 a1)
{
  signed __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  ExAcquireFastMutex((PFAST_MUTEX)(*(_QWORD *)(a1 + 6160) + 128LL));
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 6160) + 120LL), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = *(_QWORD *)(a1 + 6160);
  v4 = v2 - 1;
  if ( v4 )
  {
    if ( v4 < 1 )
    {
      *(_DWORD *)(v3 + 8) |= 4u;
      v5 = -1073741595;
    }
    else if ( *(_DWORD *)(v3 + 32) == 1 )
    {
      v5 = 0;
    }
    else
    {
      *(_DWORD *)(v3 + 8) |= 2u;
      v5 = -1073741436;
    }
  }
  else
  {
    v5 = 0;
    if ( *(_DWORD *)(v3 + 32) )
      v5 = StorSetMFNDOperationPrivilege(a1, 0LL);
    else
      *(_DWORD *)(v3 + 8) |= 2u;
  }
  ExReleaseFastMutex((PFAST_MUTEX)(*(_QWORD *)(a1 + 6160) + 128LL));
  return v5;
}
