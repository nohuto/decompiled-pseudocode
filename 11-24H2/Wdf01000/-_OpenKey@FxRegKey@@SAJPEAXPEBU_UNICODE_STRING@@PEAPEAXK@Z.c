/*
 * XREFs of ?_OpenKey@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXK@Z @ 0x14006FF90
 * Callers:
 *     imp_WdfRegistryOpenKey @ 0x1400810E0 (imp_WdfRegistryOpenKey.c)
 *     ?FxIFRGetDriverMultiString@@YAJKPEAGPEAK@Z @ 0x14008CCC8 (-FxIFRGetDriverMultiString@@YAJKPEAGPEAK@Z.c)
 *     FxLibraryGlobalsQueryRegistrySettings @ 0x1400961F4 (FxLibraryGlobalsQueryRegistrySettings.c)
 *     ?RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z @ 0x1400982EC (-RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall FxRegKey::_OpenKey(
        void *ParentKey,
        _UNICODE_STRING *KeyName,
        void **Key,
        ACCESS_MASK DesiredAccess)
{
  _OBJECT_ATTRIBUTES oa; // [rsp+20h] [rbp-38h] BYREF

  *(&oa.Length + 1) = 0;
  memset(&oa.Attributes + 1, 0, 20);
  oa.RootDirectory = ParentKey;
  oa.ObjectName = KeyName;
  oa.Length = 48;
  oa.Attributes = 576;
  return ZwOpenKey(Key, DesiredAccess, &oa);
}
