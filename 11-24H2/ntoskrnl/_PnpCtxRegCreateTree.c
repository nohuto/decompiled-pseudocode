/*
 * XREFs of _PnpCtxRegCreateTree @ 0x140928268
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405A0600 (PipUpdateDeviceProducts.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140735C50 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1408B5110 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1408C4460 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1408C679C (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1408C88C8 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     DrvDbOpenObjectRegKey @ 0x140927630 (DrvDbOpenObjectRegKey.c)
 *     DrvDbLoadDatabaseNode @ 0x140927C38 (DrvDbLoadDatabaseNode.c)
 *     _PnpOpenPropertiesKey @ 0x14097E830 (_PnpOpenPropertiesKey.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A7C058 (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     _RegRtlCreateTreeTransacted @ 0x1409282E4 (_RegRtlCreateTreeTransacted.c)
 */

__int64 __fastcall PnpCtxRegCreateTree(
        __int64 a1,
        void *a2,
        const wchar_t *a3,
        ULONG a4,
        ACCESS_MASK DesiredAccess,
        __int64 a6,
        HANDLE *KeyHandle,
        ULONG *a8)
{
  __int64 v8; // rax
  __int64 v9; // rcx

  if ( a1 && (v8 = *(_QWORD *)(a1 + 224)) != 0 )
    v9 = *(_QWORD *)(v8 + 8);
  else
    v9 = 0LL;
  return RegRtlCreateTreeTransacted(a2, a3, a4, DesiredAccess, a6, 0, KeyHandle, a8, v9);
}
