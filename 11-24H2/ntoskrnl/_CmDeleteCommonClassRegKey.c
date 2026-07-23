/*
 * XREFs of _CmDeleteCommonClassRegKey @ 0x1408185CC
 * Callers:
 *     _CmDeleteInstallerClassRegKey @ 0x140819284 (_CmDeleteInstallerClassRegKey.c)
 *     _CmDeleteInterfaceClassRegKey @ 0x14081962C (_CmDeleteInterfaceClassRegKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140818718 (_CmDeleteCommonClassRegKeyWorker.c)
 */

__int64 __fastcall CmDeleteCommonClassRegKey(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rdi
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  _DWORD v12[4]; // [rsp+40h] [rbp-41h] BYREF
  int v13; // [rsp+50h] [rbp-31h]
  int v14; // [rsp+54h] [rbp-2Dh]
  char v15; // [rsp+58h] [rbp-29h]
  int v16; // [rsp+5Ch] [rbp-25h]

  memset_0(v12, 0, 0x58uLL);
  if ( (unsigned __int8)a3 != 32 && (unsigned __int8)a3 != 64 )
    return (unsigned int)-1073741811;
  v6 = *(_QWORD *)(a1 + 504);
  v14 = 0;
  v16 = 0;
  v13 = a3;
  v15 = 1;
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
        return v12[0];
      if ( v7 )
        return (unsigned int)-1073741595;
    }
  }
  v8 = CmDeleteCommonClassRegKeyWorker(a1, a2, v13, v14, v15);
  v9 = v8;
  if ( !v6 )
    return v9;
  v12[0] = v8;
  v10 = guard_dispatch_icall_no_overrides(a1, a2);
  if ( v10 == -1073741822 )
    return v9;
  if ( v10 == -1073741536 )
    return v12[0];
  if ( v10 )
    return (unsigned int)-1073741595;
  return v9;
}
