/*
 * XREFs of _CmGetParentDeviceContainerId @ 0x140AB0634
 * Callers:
 *     _CmUpdateDevicePanelInterface @ 0x140979C90 (_CmUpdateDevicePanelInterface.c)
 *     _CmUpdateDevicePanel @ 0x140979E38 (_CmUpdateDevicePanel.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     _CmGetDeviceParent @ 0x140928AD8 (_CmGetDeviceParent.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetParentDeviceContainerId(_QWORD *a1, WCHAR *a2, const wchar_t *a3)
{
  wchar_t *Pool2; // rax
  WCHAR *v7; // rdi
  int DeviceParent; // ebx
  int v10; // [rsp+60h] [rbp-18h] BYREF
  unsigned int v11[3]; // [rsp+64h] [rbp-14h] BYREF
  int v12; // [rsp+98h] [rbp+20h] BYREF

  v12 = 0;
  v10 = 0;
  v11[0] = 200;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, 0x190uLL, 0x52504E50u);
  v7 = Pool2;
  if ( Pool2 )
  {
    DeviceParent = CmGetDeviceParent(a1, a2, Pool2, v11);
    if ( DeviceParent >= 0 )
    {
      DeviceParent = PnpGetObjectProperty(
                       a1,
                       v7,
                       1u,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_Device_ContainerId,
                       &v12,
                       a3,
                       0x10u,
                       (__int64)&v10,
                       0);
      if ( DeviceParent >= 0 && (v12 != 13 || v10 != 16) )
        DeviceParent = -1073741823;
    }
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)DeviceParent;
}
