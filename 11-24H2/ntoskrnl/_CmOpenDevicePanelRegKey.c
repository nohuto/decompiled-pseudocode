/*
 * XREFs of _CmOpenDevicePanelRegKey @ 0x14081DFE0
 * Callers:
 *     _CmCreateDevicePanelWorker @ 0x14081D060 (_CmCreateDevicePanelWorker.c)
 *     _PnpDispatchDevicePanel @ 0x140820650 (_PnpDispatchDevicePanel.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A7C058 (_CmOpenDevicePanelRegKeyWorker.c)
 */

__int64 __fastcall CmOpenDevicePanelRegKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  __int64 v10; // rdi
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v16[4]; // [rsp+40h] [rbp-59h] BYREF
  unsigned int v17; // [rsp+50h] [rbp-49h]
  int v18; // [rsp+54h] [rbp-45h]
  int v19; // [rsp+58h] [rbp-41h]
  char v20; // [rsp+5Ch] [rbp-3Dh]
  __int64 v21; // [rsp+60h] [rbp-39h]
  int v22; // [rsp+68h] [rbp-31h]

  memset_0(v16, 0, 0x58uLL);
  v10 = *(_QWORD *)(a1 + 504);
  v18 = 0;
  v19 = a5;
  v20 = a6;
  v17 = 96;
  v21 = a7;
  if ( v10 )
  {
    v11 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        goto LABEL_13;
      if ( v11 )
        return (unsigned int)-1073741595;
    }
  }
  v12 = CmOpenDevicePanelRegKeyWorker(a1, a2, v17);
  v13 = v12;
  if ( v10 )
  {
    v16[0] = v12;
    v14 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v14 != -1073741822 )
    {
      if ( v14 != -1073741536 )
      {
        if ( !v14 )
          goto LABEL_8;
        return (unsigned int)-1073741595;
      }
LABEL_13:
      v13 = v16[0];
    }
  }
LABEL_8:
  if ( v13 >= 0 && a8 )
    *a8 = v22;
  return (unsigned int)v13;
}
