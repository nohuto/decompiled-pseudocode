/*
 * XREFs of _PnpCtxRegCreateTree @ 0x140926128
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405A36C0 (PipUpdateDeviceProducts.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140737D20 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1408B77A0 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1408C6A30 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1408C8D6C (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1408CAE98 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     DrvDbOpenObjectRegKey @ 0x1409254F0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbLoadDatabaseNode @ 0x140925AF8 (DrvDbLoadDatabaseNode.c)
 *     _PnpOpenPropertiesKey @ 0x1409937F0 (_PnpOpenPropertiesKey.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A815F8 (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     _RegRtlCreateTreeTransacted @ 0x1409261A4 (_RegRtlCreateTreeTransacted.c)
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
