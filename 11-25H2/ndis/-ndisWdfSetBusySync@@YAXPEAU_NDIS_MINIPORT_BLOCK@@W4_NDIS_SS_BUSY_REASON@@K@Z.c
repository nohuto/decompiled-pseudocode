/*
 * XREFs of ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140061E30
 * Callers:
 *     ?ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140061D50 (-ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x14003F7E0 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x14003FBC0 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x140040330 (McTemplateK0qq_EtwWriteTransfer.c)
 *     ?ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140062000 (-ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@.c)
 *     ?ndisIsPowerReferencedForSelectiveSuspend@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@E@Z @ 0x1400620F0 (-ndisIsPowerReferencedForSelectiveSuspend@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@E@Z.c)
 */

void __fastcall ndisWdfSetBusySync(__int64 a1, unsigned int a2, unsigned int a3)
{
  char v3; // r15
  __int64 v4; // rbx
  KIRQL v8; // r14
  __int64 v9; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-38h]

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 4448);
  if ( (*(_DWORD *)(a1 + 120) & 0x80u) == 0 )
    NT_ASSERT("((((Miniport)->Flags & (0x00000080)) != 0))");
  v8 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 4448));
  if ( ndisIsPowerReferencedForSelectiveSuspend((struct _NDIS_SELECTIVE_SUSPEND *)v4, 1u) )
  {
    ndisIncrementSyncIdleCountersLocked(v4, a2, a3);
    ndisSelectiveSuspendSetResumeBusyReason((_DWORD *)v4, 0, a2, a3);
    KeReleaseSpinLock((PKSPIN_LOCK)v4, v8);
  }
  else
  {
    if ( !*(_DWORD *)(v4 + 512)
      && !*(_DWORD *)(v4 + 516)
      && !*(_DWORD *)(v4 + 528)
      && !*(_DWORD *)(v4 + 532)
      && !*(_DWORD *)(v4 + 520)
      && !*(_DWORD *)(v4 + 524)
      && !*(_DWORD *)(v4 + 576)
      && !*(_DWORD *)(v4 + 508) )
    {
      v3 = 1;
      KeClearEvent((PRKEVENT)(v4 + 272));
    }
    ndisIncrementSyncIdleCountersLocked(v4, a2, a3);
    KeReleaseSpinLock((PKSPIN_LOCK)v4, v8);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xFu,
        0x25u,
        (struct _GUID *)&WPP_0da1f7415b08391dc91ed9194dfe6793_Traceguids,
        a1,
        a2);
    if ( (byte_140125101 & 8) != 0 )
    {
      LODWORD(Timeout) = a2;
      McTemplateK0qq_EtwWriteTransfer(
        v9,
        &SSResumeRequested,
        (const GUID *)(a1 + 4008),
        (*(_QWORD *)(a1 + 4024) >> 24) & 0xFFFFFF,
        (__int64)Timeout);
    }
    if ( v3 )
      ndisWdfAcquirePowerReferenceHelper((struct _NDIS_MINIPORT_BLOCK *)a1, 1, 0);
    else
      KeWaitForSingleObject((PVOID)(v4 + 272), Executive, 0, 0, 0LL);
  }
}
