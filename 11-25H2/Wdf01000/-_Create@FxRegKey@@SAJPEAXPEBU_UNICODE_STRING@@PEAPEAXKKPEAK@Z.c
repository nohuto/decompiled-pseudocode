/*
 * XREFs of ?_Create@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXKKPEAK@Z @ 0x1400564AC
 * Callers:
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x140052260 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     imp_WdfRegistryCreateKey @ 0x140054A10 (imp_WdfRegistryCreateKey.c)
 *     RegistryWriteCurrentTime @ 0x14007CFA8 (RegistryWriteCurrentTime.c)
 *     ?OpenDevicemapKeyWorker@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@KPEAVFxRegKey@@@Z @ 0x140094FA8 (-OpenDevicemapKeyWorker@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@KPEAVFxRegKe.c)
 *     ?RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z @ 0x1400982AC (-RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ @ 0x1400AA13C (-PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall FxRegKey::_Create(
        void *ParentKey,
        _UNICODE_STRING *KeyName,
        void **NewKey,
        ACCESS_MASK DesiredAccess,
        ULONG CreateOptions,
        unsigned int *CreateDisposition)
{
  _OBJECT_ATTRIBUTES oa; // [rsp+40h] [rbp-38h] BYREF

  oa.RootDirectory = ParentKey;
  oa.ObjectName = KeyName;
  *(_QWORD *)&oa.Length = 48LL;
  *(_QWORD *)&oa.Attributes = 576LL;
  *(_OWORD *)&oa.SecurityDescriptor = 0LL;
  return ZwCreateKey(NewKey, DesiredAccess, &oa, 0, 0LL, CreateOptions, CreateDisposition);
}
