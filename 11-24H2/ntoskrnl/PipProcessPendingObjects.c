/*
 * XREFs of PipProcessPendingObjects @ 0x140C25CE0
 * Callers:
 *     PipProcessPendingOsExtensionResources @ 0x140C25F44 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140C25FEC (PipProcessPendingServices.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PnpCheckDriverDependencies @ 0x140722F44 (PnpCheckDriverDependencies.c)
 *     _PnpCtxRegQueryValue @ 0x1408BC774 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegOpenKey @ 0x1408C7AFC (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegEnumKey @ 0x140992734 (_PnpCtxRegEnumKey.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  char v16; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v17[3]; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v18; // [rsp+34h] [rbp-CCh] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  void *v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+48h] [rbp-B8h]
  __int64 v22; // [rsp+50h] [rbp-B0h]
  _BYTE v23[528]; // [rsp+60h] [rbp-A0h] BYREF

  v22 = a4;
  Pool2 = 0LL;
  v16 = 0;
  v5 = 0;
  v20 = 0LL;
  v6 = 0;
  v19 = 0;
  while ( 1 )
  {
    v18 = 260;
    v9 = v6;
    v10 = PnpCtxRegEnumKey((__int64)a1, a1);
    ++v6;
    v11 = v10;
    v21 = v6;
    if ( v10 == -2147483622 || v10 == -1073741444 )
      break;
    if ( v10 < 0 )
      goto LABEL_30;
    if ( (int)PnpCtxRegOpenKey(*(__int64 *)&PiPnpRtlCtx, (__int64)a1, (__int64)v23, 0, 1u, (__int64)&v20) >= 0 )
    {
      if ( !a2 )
        goto LABEL_9;
      v16 = 0;
      v11 = guard_dispatch_icall_no_overrides(v23, v20, 0LL, &v16);
      if ( v11 < 0 )
        goto LABEL_30;
      if ( !v16 )
      {
LABEL_9:
        v18 = v5;
        v12 = PnpCtxRegQueryValue((__int64)a1, v20, L"DependOnFirmware", &v19, Pool2, &v18);
        if ( v12 == -1073741789 || v12 == -2147483643 )
        {
          if ( Pool2 )
            ExFreePoolWithTag(Pool2, 0x42706E50u);
          v5 = v18;
          Pool2 = (_WORD *)ExAllocatePool2(0x100uLL, v18, 0x42706E50uLL);
          if ( !Pool2 )
            return (unsigned int)-1073741670;
          v12 = PnpCtxRegQueryValue(v14, v20, L"DependOnFirmware", &v19, Pool2, &v18);
        }
        if ( v12 == -1073741772 )
        {
          if ( !Pool2 || v5 < 2 )
            goto LABEL_25;
          *Pool2 = 0;
LABEL_22:
          if ( !*Pool2 )
            goto LABEL_25;
          v17[0] = 0;
          if ( (int)PnpCheckDriverDependencies(Pool2, v17, v13) >= 0 )
          {
            if ( v17[0] )
              goto LABEL_25;
          }
        }
        else if ( v12 >= 0 )
        {
          if ( Pool2 && v5 >= 2 )
            goto LABEL_22;
LABEL_25:
          v6 = v9;
          if ( (int)guard_dispatch_icall_no_overrides(v23, a1, v20, 0LL) < 0 )
            v6 = v21;
        }
      }
    }
  }
  v11 = 0;
LABEL_30:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x42706E50u);
  return (unsigned int)v11;
}
