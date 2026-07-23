/*
 * XREFs of _CmDeleteInterfaceClass @ 0x140819500
 * Callers:
 *     _PnpDispatchInterfaceClass @ 0x1408B9700 (_PnpDispatchInterfaceClass.c)
 *     PiCMDeleteClassKey @ 0x140ABB8E4 (PiCMDeleteClassKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _CmDeleteInterfaceClassWorker @ 0x140819658 (_CmDeleteInterfaceClassWorker.c)
 */

__int64 __fastcall CmDeleteInterfaceClass(__int64 a1, __int64 a2, unsigned int a3)
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

  memset_0(v14, 0, 0x58uLL);
  v6 = *(_QWORD *)(a1 + 504);
  v15 = a3;
  if ( v6 )
  {
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
  v8 = CmDeleteInterfaceClassWorker(a1, a2, v15);
  v9 = v8;
  if ( !v6 )
    return v9;
  v14[0] = v8;
  v10 = guard_dispatch_icall_no_overrides(a1, a2);
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
