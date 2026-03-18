/*
 * XREFs of _CmDeleteCommonClassRegKey @ 0x140817E8C
 * Callers:
 *     _CmDeleteInstallerClassRegKey @ 0x140818B44 (_CmDeleteInstallerClassRegKey.c)
 *     _CmDeleteInterfaceClassRegKey @ 0x140818EEC (_CmDeleteInterfaceClassRegKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140817FD8 (_CmDeleteCommonClassRegKeyWorker.c)
 */

__int64 __fastcall CmDeleteCommonClassRegKey(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdi
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  _DWORD v13[4]; // [rsp+40h] [rbp-41h] BYREF
  int v14; // [rsp+50h] [rbp-31h]
  int v15; // [rsp+54h] [rbp-2Dh]
  char v16; // [rsp+58h] [rbp-29h]
  int v17; // [rsp+5Ch] [rbp-25h]

  memset_0(v13, 0, 0x58uLL);
  if ( (unsigned __int8)a3 == 32 )
  {
    v6 = 2;
  }
  else
  {
    if ( (unsigned __int8)a3 != 64 )
      return (unsigned int)-1073741811;
    v6 = 4;
  }
  v7 = *(_QWORD *)(a1 + 504);
  v15 = 0;
  v17 = 0;
  v14 = a3;
  v16 = 1;
  if ( v7 )
  {
    v8 = guard_dispatch_icall_no_overrides(a1, a2, v6, 12LL);
    if ( v8 == -1073741822 )
    {
      v7 = 0LL;
    }
    else
    {
      if ( v8 == -1073741536 )
        return v13[0];
      if ( v8 )
        return (unsigned int)-1073741595;
    }
  }
  v9 = CmDeleteCommonClassRegKeyWorker(a1, a2, v14, v15, v16);
  v10 = v9;
  if ( !v7 )
    return v10;
  v13[0] = v9;
  v11 = guard_dispatch_icall_no_overrides(a1, a2, v6, 12LL);
  if ( v11 == -1073741822 )
    return v10;
  if ( v11 == -1073741536 )
    return v13[0];
  if ( v11 )
    return (unsigned int)-1073741595;
  return v10;
}
