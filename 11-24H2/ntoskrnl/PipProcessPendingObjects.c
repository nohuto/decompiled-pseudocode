/*
 * XREFs of PipProcessPendingObjects @ 0x140C27D30
 * Callers:
 *     PipProcessPendingOsExtensionResources @ 0x140C27F94 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140C2803C (PipProcessPendingServices.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PnpCheckDriverDependencies @ 0x140720AD4 (PnpCheckDriverDependencies.c)
 *     _PnpCtxRegQueryValue @ 0x1408BA0C4 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegEnumKey @ 0x14097D774 (_PnpCtxRegEnumKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipProcessPendingObjects(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _WORD *Pool2; // rbx
  unsigned int v5; // esi
  int v6; // r14d
  int v9; // r13d
  int v10; // eax
  int v11; // edi
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rcx
  _BYTE v16[3]; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v17; // [rsp+34h] [rbp-CCh] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  void *v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+48h] [rbp-B8h]
  __int64 v21; // [rsp+50h] [rbp-B0h]
  _BYTE v22[528]; // [rsp+60h] [rbp-A0h] BYREF

  v21 = a4;
  Pool2 = 0LL;
  v5 = 0;
  v19 = 0LL;
  v6 = 0;
  v18 = 0;
  while ( 1 )
  {
    v17 = 260;
    v9 = v6;
    v10 = PnpCtxRegEnumKey((__int64)a1, a1);
    ++v6;
    v11 = v10;
    v20 = v6;
    if ( v10 == -2147483622 || v10 == -1073741444 )
      break;
    if ( v10 < 0 )
      goto LABEL_29;
    if ( (int)PnpCtxRegOpenKey(*(__int64 *)&PiPnpRtlCtx, (__int64)a1, (__int64)v22, 0, 1u, (__int64)&v19) >= 0 )
    {
      if ( a2 )
      {
        v11 = guard_dispatch_icall_no_overrides(v22, v19);
        if ( v11 < 0 )
          goto LABEL_29;
      }
      v17 = v5;
      v12 = PnpCtxRegQueryValue((__int64)a1, v19, L"DependOnFirmware", &v18, Pool2, &v17);
      if ( v12 == -1073741789 || v12 == -2147483643 )
      {
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0x42706E50u);
        v5 = v17;
        Pool2 = (_WORD *)ExAllocatePool2(0x100uLL, v17, 0x42706E50uLL);
        if ( !Pool2 )
          return (unsigned int)-1073741670;
        v12 = PnpCtxRegQueryValue(v14, v19, L"DependOnFirmware", &v18, Pool2, &v17);
      }
      if ( v12 == -1073741772 )
      {
        if ( !Pool2 || v5 < 2 )
          goto LABEL_24;
        *Pool2 = 0;
LABEL_21:
        if ( !*Pool2 )
          goto LABEL_24;
        v16[0] = 0;
        if ( (int)PnpCheckDriverDependencies(Pool2, v16, v13) >= 0 )
        {
          if ( v16[0] )
            goto LABEL_24;
        }
      }
      else if ( v12 >= 0 )
      {
        if ( Pool2 && v5 >= 2 )
          goto LABEL_21;
LABEL_24:
        v6 = v9;
        if ( (int)guard_dispatch_icall_no_overrides(v22, a1) < 0 )
          v6 = v20;
      }
    }
  }
  v11 = 0;
LABEL_29:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x42706E50u);
  return (unsigned int)v11;
}
