/*
 * XREFs of StorMFNDAttemptSwitchToAdminPrivilege @ 0x1400C7110
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

__int64 __fastcall StorMFNDAttemptSwitchToAdminPrivilege(__int64 a1)
{
  __int64 v2; // rdx
  signed __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // r8
  unsigned int v6; // ebx

  ExAcquireFastMutex((PFAST_MUTEX)(*(_QWORD *)(a1 + 6160) + 128LL));
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 6160) + 120LL), 1uLL);
  v4 = *(_QWORD *)(a1 + 6160);
  v5 = v3 + 1;
  if ( v5 != 1 )
  {
    if ( v5 <= 1 )
    {
      *(_DWORD *)(v4 + 8) |= 4u;
      v6 = -1073741595;
      goto LABEL_10;
    }
    if ( *(_DWORD *)(v4 + 32) != 1 )
    {
      *(_DWORD *)(v4 + 8) |= 2u;
      v6 = -1073741436;
      goto LABEL_10;
    }
    goto LABEL_5;
  }
  if ( *(_DWORD *)(v4 + 32) == 1 )
  {
    *(_DWORD *)(v4 + 8) |= 0x10u;
LABEL_5:
    v6 = 0;
    goto LABEL_10;
  }
  LOBYTE(v2) = 1;
  v6 = StorSetMFNDOperationPrivilege(a1, v2);
LABEL_10:
  ExReleaseFastMutex((PFAST_MUTEX)(*(_QWORD *)(a1 + 6160) + 128LL));
  return v6;
}
