/*
 * XREFs of PipClearDevNodeProblem @ 0x1409AD2C0
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404938EC (PnpRemoveLockedDeviceNode.c)
 *     IoReportDetectedDevice @ 0x140710750 (IoReportDetectedDevice.c)
 *     PipAttemptDependentStart @ 0x140712470 (PipAttemptDependentStart.c)
 *     PnpDisableDevice @ 0x140717160 (PnpDisableDevice.c)
 *     PiProcessResourceRequirementsChanged @ 0x140717F64 (PiProcessResourceRequirementsChanged.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x140721380 (PiProfileUpdateDeviceTreeCallback.c)
 *     PnpRebalance @ 0x140729028 (PnpRebalance.c)
 *     PiProcessQueryRemoveNoFdo @ 0x14072DDD4 (PiProcessQueryRemoveNoFdo.c)
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 *     PnpProcessAssignResourcesWorker @ 0x14082F84C (PnpProcessAssignResourcesWorker.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14082FB18 (PnpProcessQueryRemoveAndEject.c)
 *     PiDevCfgProcessDevice @ 0x1408906D0 (PiDevCfgProcessDevice.c)
 *     PipCallDriverAddDevice @ 0x1409ACAC0 (PipCallDriverAddDevice.c)
 *     PiProcessClearDeviceProblem @ 0x1409AD5D0 (PiProcessClearDeviceProblem.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A60B18 (IopInitializeDeviceInstanceKey.c)
 *     PiRestartRemovalRelations @ 0x140A945BC (PiRestartRemovalRelations.c)
 * Callees:
 *     McTemplateK0pzzqdqd_EtwWriteTransfer @ 0x1405A2728 (McTemplateK0pzzqdqd_EtwWriteTransfer.c)
 *     PiAuditDeviceEnableDisableAction @ 0x14072A5A4 (PiAuditDeviceEnableDisableAction.c)
 *     PipClearDevNodeFlags @ 0x1408350BC (PipClearDevNodeFlags.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408366A8 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PiPnpRtlBeginOperation @ 0x1408D0818 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408D09F8 (PiPnpRtlEndOperation.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140936F00 (SeAuditingWithTokenForSubcategory.c)
 *     _PnpSetObjectProperty @ 0x1409558B8 (_PnpSetObjectProperty.c)
 *     PnpTraceClearDevNodeProblem @ 0x1409AD48C (PnpTraceClearDevNodeProblem.c)
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
        1,
        0LL,
        0LL,
        (__int64)&DEVPKEY_Device_ProblemStatusOverride,
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
    if ( (byte_140EEFA6B & 0x20) != 0 )
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
