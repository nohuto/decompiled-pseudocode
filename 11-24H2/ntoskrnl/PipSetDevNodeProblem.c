/*
 * XREFs of PipSetDevNodeProblem @ 0x14098FC24
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404926CC (PnpRemoveLockedDeviceNode.c)
 *     IoReportDetectedDevice @ 0x14071C850 (IoReportDetectedDevice.c)
 *     IopQueueDeviceResetEvent @ 0x140721694 (IopQueueDeviceResetEvent.c)
 *     PnpDisableDevice @ 0x140723260 (PnpDisableDevice.c)
 *     PiProcessSetDeviceProblem @ 0x1407241C8 (PiProcessSetDeviceProblem.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x14072D300 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiInitializeDevice @ 0x140734A0C (PiInitializeDevice.c)
 *     PnpRebalance @ 0x1407352B8 (PnpRebalance.c)
 *     PiProcessQueryRemoveNoFdo @ 0x14073A064 (PiProcessQueryRemoveNoFdo.c)
 *     PipProcessDevNodeTree @ 0x1408BA630 (PipProcessDevNodeTree.c)
 *     PnpProcessAssignResources @ 0x14098E760 (PnpProcessAssignResources.c)
 *     PipProcessEnumeratedChildDevice @ 0x1409904C0 (PipProcessEnumeratedChildDevice.c)
 *     PiDevCfgProcessDevice @ 0x140996E44 (PiDevCfgProcessDevice.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1409C5C74 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PipCallDriverAddDevice @ 0x1409C6228 (PipCallDriverAddDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140A109EC (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpQueryDeviceID @ 0x140A33FB0 (PnpQueryDeviceID.c)
 *     PnpQueryID @ 0x140A34100 (PnpQueryID.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A626D8 (IopInitializeDeviceInstanceKey.c)
 *     PiProcessNewDeviceNode @ 0x140A7C564 (PiProcessNewDeviceNode.c)
 *     PnpDriverLoadingFailed @ 0x140AA1408 (PnpDriverLoadingFailed.c)
 * Callees:
 *     McTemplateK0pzzqdqd_EtwWriteTransfer @ 0x1405A5F98 (McTemplateK0pzzqdqd_EtwWriteTransfer.c)
 *     PnpLogDeviceRequiresReboot @ 0x14072337C (PnpLogDeviceRequiresReboot.c)
 *     PiAuditDeviceEnableDisableAction @ 0x140736834 (PiAuditDeviceEnableDisableAction.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408B94C4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PiPnpRtlBeginOperation @ 0x1408CBF78 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408CC158 (PiPnpRtlEndOperation.c)
 *     _PnpGetObjectProperty @ 0x1408CDFD0 (_PnpGetObjectProperty.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140938740 (SeAuditingWithTokenForSubcategory.c)
 *     PnpTraceSetDevNodeProblem @ 0x14098FAB8 (PnpTraceSetDevNodeProblem.c)
 *     PipSetDevNodeFlags @ 0x1409905B8 (PipSetDevNodeFlags.c)
 */

void __fastcall PipSetDevNodeProblem(__int64 a1, int a2, int a3)
{
  int v6; // edi
  int v7; // esi
  __int64 v8; // r8
  WCHAR *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // [rsp+30h] [rbp-40h]
  __int64 v14; // [rsp+38h] [rbp-38h]
  __int64 v15; // [rsp+40h] [rbp-30h]
  __int64 v16; // [rsp+48h] [rbp-28h]
  wchar_t v17[4]; // [rsp+60h] [rbp-10h] BYREF
  PVOID P; // [rsp+68h] [rbp-8h] BYREF
  int v19; // [rsp+A0h] [rbp+30h] BYREF
  int v20; // [rsp+B8h] [rbp+48h] BYREF

  P = 0LL;
  *(_DWORD *)v17 = 0;
  v20 = 0;
  v19 = 0;
  v6 = *(_DWORD *)(a1 + 404);
  v7 = *(_DWORD *)(a1 + 408);
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) == 0 || v7 != a3 || v6 != a2 )
  {
    PiPnpRtlBeginOperation(&P);
    PipSetDevNodeFlags(a1, 0x2000LL);
    v9 = *(WCHAR **)(a1 + 48);
    *(_DWORD *)(a1 + 404) = a2;
    *(_DWORD *)(a1 + 408) = a3;
    if ( v9 )
    {
      if ( (int)PnpGetObjectProperty(
                  *(_QWORD **)&PiPnpRtlCtx,
                  v9,
                  1u,
                  0LL,
                  0LL,
                  (__int64)DEVPKEY_Device_ProblemStatusOverride,
                  &v19,
                  v17,
                  4u,
                  (__int64)&v20,
                  0) >= 0
        && v19 == 24
        && v20 == 4
        && *(_DWORD *)v17 )
      {
        *(_DWORD *)(a1 + 408) = *(_DWORD *)v17;
      }
      if ( *(_DWORD *)(a1 + 404) != v6 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v10, *(_QWORD *)(a1 + 48), 12);
      if ( *(_DWORD *)(a1 + 408) != v7 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v10, *(_QWORD *)(a1 + 48), 13);
      PnpTraceSetDevNodeProblem(
        a1 + 40,
        a1 + 56,
        *(_DWORD *)(a1 + 300),
        *(_DWORD *)(a1 + 404),
        *(_DWORD *)(a1 + 408),
        v6,
        v7);
      if ( *(_DWORD *)(a1 + 404) == 22 && SeAuditingWithTokenForSubcategory(138, 0LL) )
      {
        PiAuditDeviceEnableDisableAction(a1 + 40, v6, *(unsigned int *)(a1 + 404));
      }
      else if ( *(_DWORD *)(a1 + 404) == 14 )
      {
        PnpLogDeviceRequiresReboot(a1);
      }
    }
    v11 = *(unsigned int *)(a1 + 408);
    v12 = 3LL * *(unsigned int *)(a1 + 880);
    *(_QWORD *)(a1 + 8 * v12 + 784) = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)(a1 + 8 * v12 + 792) = 1;
    *(_DWORD *)(a1 + 8 * v12 + 796) = a2;
    *(_DWORD *)(a1 + 8 * v12 + 800) = v11;
    *(_DWORD *)(a1 + 880) = ((unsigned __int8)*(_DWORD *)(a1 + 880) + 1) & 3;
    if ( (byte_140EEFD23 & 0x20) != 0 )
    {
      LODWORD(v16) = v7;
      LODWORD(v15) = v6;
      LODWORD(v14) = v11;
      LODWORD(v13) = a2;
      McTemplateK0pzzqdqd_EtwWriteTransfer(
        v12,
        v11,
        v8,
        a1,
        *(_QWORD *)(a1 + 48),
        *(_QWORD *)(a1 + 64),
        v13,
        v14,
        v15,
        v16);
    }
    if ( P )
      PiPnpRtlEndOperation((PVOID **)P);
  }
}
