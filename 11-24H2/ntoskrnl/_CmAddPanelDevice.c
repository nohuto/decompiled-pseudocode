/*
 * XREFs of _CmAddPanelDevice @ 0x14081CC0C
 * Callers:
 *     _CmUpdateDevicePanel @ 0x140979E38 (_CmUpdateDevicePanel.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _CmAddPanelDeviceWorker @ 0x14081CD50 (_CmAddPanelDeviceWorker.c)
 *     _PnpObjectRaiseDevicesChangeEvent @ 0x140AAC718 (_PnpObjectRaiseDevicesChangeEvent.c)
 */

__int64 __fastcall CmAddPanelDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v12; // [rsp+20h] [rbp-A8h]
  _DWORD *v13; // [rsp+28h] [rbp-A0h]
  _DWORD v14[4]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v15; // [rsp+50h] [rbp-78h]
  __int64 v16; // [rsp+58h] [rbp-70h]
  _BYTE v17[64]; // [rsp+60h] [rbp-68h] BYREF

  memset_0(v14, 0, 0x58uLL);
  v6 = *(_QWORD *)(a1 + 504);
  v15 = a2;
  v16 = a3;
  if ( v6 )
  {
    v13 = v14;
    v12 = 1;
    v7 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v7 == -1073741822 )
    {
      v6 = 0LL;
    }
    else
    {
      if ( v7 == -1073741536 )
        return v14[0];
      if ( v7 )
        return (unsigned int)-1073741595;
    }
  }
  v8 = CmAddPanelDeviceWorker(a1, a2, v16, v17, v12, v13);
  v9 = v8;
  if ( v6 )
  {
    v14[0] = v8;
    v10 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v10 != -1073741822 )
    {
      if ( v10 != -1073741536 )
      {
        if ( !v10 )
          goto LABEL_8;
        return (unsigned int)-1073741595;
      }
      return v14[0];
    }
  }
LABEL_8:
  if ( !v17[0] )
    PnpObjectRaiseDevicesChangeEvent(a1, a2, 6LL);
  return v9;
}
