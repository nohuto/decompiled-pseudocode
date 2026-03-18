/*
 * XREFs of _CmDeleteDevicePanelRegKey @ 0x14081CAF4
 * Callers:
 *     _CmDeleteDevicePanelWorker @ 0x14081CECC (_CmDeleteDevicePanelWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x14081CC34 (_CmDeleteDevicePanelRegKeyWorker.c)
 */

__int64 __fastcall CmDeleteDevicePanelRegKey(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdi
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  _DWORD v14[4]; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v15; // [rsp+50h] [rbp-78h]
  int v16; // [rsp+54h] [rbp-74h]
  char v17; // [rsp+58h] [rbp-70h]

  memset_0(v14, 0, 0x58uLL);
  v6 = *(_QWORD *)(a1 + 504);
  v16 = 0;
  v15 = a3;
  v17 = 1;
  if ( v6 )
  {
    v7 = guard_dispatch_icall_no_overrides(a1, a2, 6LL, 12LL);
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
  v8 = CmDeleteDevicePanelRegKeyWorker(a1, a2, v15);
  v9 = v8;
  if ( !v6 )
    return v9;
  v14[0] = v8;
  v10 = guard_dispatch_icall_no_overrides(a1, a2, 6LL, 12LL);
  v11 = v10;
  if ( v10 == -1073741822 )
    return v9;
  if ( v10 == -1073741536 )
    return v14[0];
  v12 = v9;
  if ( v11 )
    return (unsigned int)-1073741595;
  return v12;
}
