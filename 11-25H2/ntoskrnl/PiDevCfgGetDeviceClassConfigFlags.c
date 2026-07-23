/*
 * XREFs of PiDevCfgGetDeviceClassConfigFlags @ 0x140AA9E98
 * Callers:
 *     PpDevCfgProcessDeviceClass @ 0x140720574 (PpDevCfgProcessDeviceClass.c)
 *     PiDevCfgConfigureDevice @ 0x14097F7D4 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x1408CB8A0 (_PnpGetObjectProperty.c)
 */

__int64 __fastcall PiDevCfgGetDeviceClassConfigFlags(const WCHAR *a1, void *a2, _DWORD *a3)
{
  int v7; // [rsp+80h] [rbp+18h] BYREF
  int v8; // [rsp+88h] [rbp+20h] BYREF

  *a3 = 0;
  v7 = 0;
  v8 = 1;
  if ( (unsigned int)PnpGetObjectProperty(
                       *(_QWORD **)&PiPnpRtlCtx,
                       a1,
                       2u,
                       a2,
                       0LL,
                       (__int64)DEVPKEY_DeviceClass_ConfigFilters,
                       &v8,
                       0LL,
                       0,
                       (__int64)&v7,
                       0) == -1073741789
    || (unsigned int)PnpGetObjectProperty(
                       *(_QWORD **)&PiPnpRtlCtx,
                       a1,
                       2u,
                       a2,
                       0LL,
                       (__int64)&DEVPKEY_DeviceClass_ConfigNotifyWnfTriggers,
                       &v8,
                       0LL,
                       0,
                       (__int64)&v7,
                       0) == -1073741789 )
  {
    *a3 |= 0x80000u;
  }
  return 0LL;
}
