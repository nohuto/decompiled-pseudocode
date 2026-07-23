/*
 * XREFs of _CmCreateDevicePanel @ 0x14081CF00
 * Callers:
 *     _CmAddPanelDeviceWorker @ 0x14081CD50 (_CmAddPanelDeviceWorker.c)
 *     _CmUpdateDevicePanel @ 0x140979E38 (_CmUpdateDevicePanel.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _CmCreateDevicePanelWorker @ 0x14081D060 (_CmCreateDevicePanelWorker.c)
 */

__int64 __fastcall CmCreateDevicePanel(__int64 a1, __int64 a2, __int64 a3, HANDLE *a4, _BYTE *a5)
{
  __int64 v8; // rdi
  int v9; // eax
  int DevicePanelWorker; // eax
  int v11; // ebx
  int v12; // eax
  int v14[4]; // [rsp+40h] [rbp-59h] BYREF
  int v15; // [rsp+50h] [rbp-49h]
  HANDLE Handle; // [rsp+58h] [rbp-41h] BYREF
  _BYTE v17[4]; // [rsp+60h] [rbp-39h] BYREF
  int v18; // [rsp+64h] [rbp-35h]

  memset_0(v14, 0, 0x58uLL);
  v8 = *(_QWORD *)(a1 + 504);
  v18 = 0;
  v15 = 4;
  if ( v8 )
  {
    v9 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v9 == -1073741822 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( v9 == -1073741536 )
        goto LABEL_12;
      if ( v9 )
        goto LABEL_14;
    }
  }
  DevicePanelWorker = CmCreateDevicePanelWorker(a1, a2, v15, (unsigned int)&Handle, (__int64)v17, v18);
  v11 = DevicePanelWorker;
  if ( v8 )
  {
    v14[0] = DevicePanelWorker;
    v12 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v12 != -1073741822 )
    {
      if ( v12 != -1073741536 )
      {
        if ( !v12 )
          goto LABEL_8;
LABEL_14:
        v11 = -1073741595;
        goto LABEL_15;
      }
LABEL_12:
      v11 = v14[0];
    }
  }
LABEL_8:
  if ( v11 >= 0 && a4 )
  {
    *a4 = Handle;
LABEL_18:
    if ( a5 )
      *a5 = v17[0];
    return (unsigned int)v11;
  }
LABEL_15:
  if ( Handle )
    ZwClose(Handle);
  if ( v11 >= 0 )
    goto LABEL_18;
  return (unsigned int)v11;
}
