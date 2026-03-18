/*
 * XREFs of PipSetDevNodeProblem @ 0x140831BCC
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404938EC (PnpRemoveLockedDeviceNode.c)
 *     IoReportDetectedDevice @ 0x140710750 (IoReportDetectedDevice.c)
 *     IopQueueDeviceResetEvent @ 0x140715594 (IopQueueDeviceResetEvent.c)
 *     PnpDisableDevice @ 0x140717160 (PnpDisableDevice.c)
 *     PiProcessSetDeviceProblem @ 0x1407180C8 (PiProcessSetDeviceProblem.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x140721380 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiInitializeDevice @ 0x14072877C (PiInitializeDevice.c)
 *     PnpRebalance @ 0x140729028 (PnpRebalance.c)
 *     PiProcessQueryRemoveNoFdo @ 0x14072DDD4 (PiProcessQueryRemoveNoFdo.c)
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 *     PnpProcessAssignResources @ 0x14082F690 (PnpProcessAssignResources.c)
 *     PipProcessEnumeratedChildDevice @ 0x1408330E8 (PipProcessEnumeratedChildDevice.c)
 *     PnpQueryID @ 0x1408336D0 (PnpQueryID.c)
 *     PipProcessDevNodeTree @ 0x1408355F8 (PipProcessDevNodeTree.c)
 *     PiDevCfgProcessDevice @ 0x1408906D0 (PiDevCfgProcessDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1409A0984 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PipCallDriverAddDevice @ 0x1409ACAC0 (PipCallDriverAddDevice.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1409AD954 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PnpQueryDeviceID @ 0x140A2FC8C (PnpQueryDeviceID.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A60B18 (IopInitializeDeviceInstanceKey.c)
 *     PnpDriverLoadingFailed @ 0x140A9BB78 (PnpDriverLoadingFailed.c)
 * Callees:
 *     McTemplateK0pzzqdqd_EtwWriteTransfer @ 0x1405A2728 (McTemplateK0pzzqdqd_EtwWriteTransfer.c)
 *     PnpLogDeviceRequiresReboot @ 0x14071727C (PnpLogDeviceRequiresReboot.c)
 *     PiAuditDeviceEnableDisableAction @ 0x14072A5A4 (PiAuditDeviceEnableDisableAction.c)
 *     PnpTraceSetDevNodeProblem @ 0x140831A60 (PnpTraceSetDevNodeProblem.c)
 *     PipSetDevNodeFlags @ 0x1408331E8 (PipSetDevNodeFlags.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408366A8 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     _PnpGetObjectProperty @ 0x1408CB8A0 (_PnpGetObjectProperty.c)
 *     PiPnpRtlBeginOperation @ 0x1408D0818 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408D09F8 (PiPnpRtlEndOperation.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140936F00 (SeAuditingWithTokenForSubcategory.c)
 */

void __fastcall PipSetDevNodeProblem(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r14d
  int v4; // r15d
  int v6; // edi
  int v7; // esi
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // [rsp+30h] [rbp-40h]
  __int64 v14; // [rsp+38h] [rbp-38h]
  __int64 v15; // [rsp+40h] [rbp-30h]
  __int64 v16; // [rsp+48h] [rbp-28h]
  int v17; // [rsp+60h] [rbp-10h] BYREF
  PVOID P; // [rsp+68h] [rbp-8h] BYREF
  int v19; // [rsp+A0h] [rbp+30h] BYREF
  int v20; // [rsp+B8h] [rbp+48h] BYREF

  P = 0LL;
  v3 = a3;
  v17 = 0;
  v4 = a2;
  v20 = 0;
  v19 = 0;
  v6 = *(_DWORD *)(a1 + 404);
  v7 = *(_DWORD *)(a1 + 408);
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) == 0 || v7 != (_DWORD)a3 || v6 != (_DWORD)a2 )
  {
    PiPnpRtlBeginOperation(&P, a2, a3);
    PipSetDevNodeFlags(a1, 0x2000LL);
    v9 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 404) = v4;
    *(_DWORD *)(a1 + 408) = v3;
    if ( v9 )
    {
      if ( (int)PnpGetObjectProperty(
                  PiPnpRtlCtx,
                  v9,
                  1,
                  0,
                  0LL,
                  (__int64)&DEVPKEY_Device_ProblemStatusOverride,
                  (__int64)&v19,
                  (__int64)&v17,
                  4,
                  (__int64)&v20,
                  0) >= 0
        && v19 == 24
        && v20 == 4
        && v17 )
      {
        *(_DWORD *)(a1 + 408) = v17;
      }
      if ( *(_DWORD *)(a1 + 404) != v6 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v10, *(_QWORD *)(a1 + 48), 12LL);
      if ( *(_DWORD *)(a1 + 408) != v7 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v10, *(_QWORD *)(a1 + 48), 13LL);
      PnpTraceSetDevNodeProblem(
        a1 + 40,
        a1 + 56,
        *(_DWORD *)(a1 + 300),
        *(_DWORD *)(a1 + 404),
        *(_DWORD *)(a1 + 408),
        v6,
        v7);
      if ( *(_DWORD *)(a1 + 404) == 22 && (unsigned __int8)SeAuditingWithTokenForSubcategory(138LL, 0LL) )
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
    *(_DWORD *)(a1 + 8 * v12 + 796) = v4;
    *(_DWORD *)(a1 + 8 * v12 + 800) = v11;
    *(_DWORD *)(a1 + 880) = ((unsigned __int8)*(_DWORD *)(a1 + 880) + 1) & 3;
    if ( (byte_140EEFA6B & 0x20) != 0 )
    {
      LODWORD(v16) = v7;
      LODWORD(v15) = v6;
      LODWORD(v14) = v11;
      LODWORD(v13) = v4;
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
      PiPnpRtlEndOperation(P);
  }
}
