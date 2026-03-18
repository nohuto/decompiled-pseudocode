/*
 * XREFs of PipClearDevNodeProblem @ 0x1409C5678
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404926CC (PnpRemoveLockedDeviceNode.c)
 *     IoReportDetectedDevice @ 0x14071C850 (IoReportDetectedDevice.c)
 *     PipAttemptDependentStart @ 0x14071E570 (PipAttemptDependentStart.c)
 *     PnpDisableDevice @ 0x140723260 (PnpDisableDevice.c)
 *     PiProcessResourceRequirementsChanged @ 0x140724064 (PiProcessResourceRequirementsChanged.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x14072D300 (PiProfileUpdateDeviceTreeCallback.c)
 *     PnpRebalance @ 0x1407352B8 (PnpRebalance.c)
 *     PiProcessQueryRemoveNoFdo @ 0x14073A064 (PiProcessQueryRemoveNoFdo.c)
 *     PnpProcessAssignResourcesWorker @ 0x14098E91C (PnpProcessAssignResourcesWorker.c)
 *     PiDevCfgProcessDevice @ 0x140996E44 (PiDevCfgProcessDevice.c)
 *     PiProcessClearDeviceProblem @ 0x1409C5564 (PiProcessClearDeviceProblem.c)
 *     PipCallDriverAddDevice @ 0x1409C6228 (PipCallDriverAddDevice.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140A0DB78 (PnpProcessQueryRemoveAndEject.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A626D8 (IopInitializeDeviceInstanceKey.c)
 *     PiProcessNewDeviceNode @ 0x140A7C564 (PiProcessNewDeviceNode.c)
 *     PiRestartRemovalRelations @ 0x140A9A270 (PiRestartRemovalRelations.c)
 * Callees:
 *     McTemplateK0pzzqdqd_EtwWriteTransfer @ 0x1405A5F98 (McTemplateK0pzzqdqd_EtwWriteTransfer.c)
 *     PiAuditDeviceEnableDisableAction @ 0x140736834 (PiAuditDeviceEnableDisableAction.c)
 *     _PnpSetObjectProperty @ 0x1408B88E8 (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408B94C4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipClearDevNodeFlags @ 0x1408BB57C (PipClearDevNodeFlags.c)
 *     PiPnpRtlBeginOperation @ 0x1408CBF78 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408CC158 (PiPnpRtlEndOperation.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140938740 (SeAuditingWithTokenForSubcategory.c)
 *     PnpTraceClearDevNodeProblem @ 0x1409C5844 (PnpTraceClearDevNodeProblem.c)
 */

void __fastcall PipClearDevNodeProblem(__int64 a1)
{
  unsigned int v2; // edi
  unsigned int v3; // esi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h]
  __int64 v11; // [rsp+40h] [rbp-18h]
  __int64 v12; // [rsp+48h] [rbp-10h]
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  P = 0LL;
  v2 = *(_DWORD *)(a1 + 404);
  v3 = *(_DWORD *)(a1 + 408);
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 || v2 )
  {
    PiPnpRtlBeginOperation(&P);
    PipClearDevNodeFlags(a1, 0x2000);
    v6 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 404) = 0;
    *(_DWORD *)(a1 + 408) = 0;
    if ( v6 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v4, v6, 12);
      if ( *(_DWORD *)(a1 + 408) != v3 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v7, *(_QWORD *)(a1 + 48), 13);
      PnpTraceClearDevNodeProblem(a1 + 40, a1 + 56, v2, v3);
      if ( v2 == 22 && SeAuditingWithTokenForSubcategory(138, 0LL) )
        PiAuditDeviceEnableDisableAction(a1 + 40, 22, *(unsigned int *)(a1 + 404));
      PnpSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        1u,
        0LL,
        0LL,
        (__int64)DEVPKEY_Device_ProblemStatusOverride,
        0,
        0LL,
        0,
        0);
    }
    v8 = 3LL * *(unsigned int *)(a1 + 880);
    *(_QWORD *)(a1 + 8 * v8 + 784) = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)(a1 + 8 * v8 + 792) = 2;
    *(_DWORD *)(a1 + 8 * v8 + 796) = v2;
    *(_DWORD *)(a1 + 8 * v8 + 800) = v3;
    *(_DWORD *)(a1 + 880) = ((unsigned __int8)*(_DWORD *)(a1 + 880) + 1) & 3;
    if ( (byte_140EEFD23 & 0x20) != 0 )
    {
      LODWORD(v12) = v3;
      LODWORD(v11) = v2;
      LODWORD(v10) = 0;
      LODWORD(v9) = 0;
      McTemplateK0pzzqdqd_EtwWriteTransfer(
        v8,
        v6,
        v5,
        a1,
        *(_QWORD *)(a1 + 48),
        *(_QWORD *)(a1 + 64),
        v9,
        v10,
        v11,
        v12);
    }
    if ( P )
      PiPnpRtlEndOperation((PVOID **)P);
  }
}
