/*
 * XREFs of KeStartProfile @ 0x1404D7A60
 * Callers:
 *     EtwpTimeProfileStart @ 0x1406EACF8 (EtwpTimeProfileStart.c)
 *     EtwpCoverageSamplerStart @ 0x1407A3978 (EtwpCoverageSamplerStart.c)
 *     NtStartProfile @ 0x1407B2640 (NtStartProfile.c)
 *     EtwpEnableKernelTrace @ 0x1408DA1EC (EtwpEnableKernelTrace.c)
 *     KiInitializeCacheErrataSupport @ 0x140C18DF0 (KiInitializeCacheErrataSupport.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402BD630 (KeQueryMaximumProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x1404690A0 (KeIpiGenericCall.c)
 *     KiStartProfileTarget @ 0x14049A3B0 (KiStartProfileTarget.c)
 *     KeStopProfile @ 0x1405BB340 (KeStopProfile.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeStartProfile(ULONG_PTR a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  PVOID v6; // rcx
  ULONG_PTR Context; // [rsp+28h] [rbp-E0h] BYREF
  int v9; // [rsp+30h] [rbp-D8h]
  int v10; // [rsp+34h] [rbp-D4h]
  int v11; // [rsp+38h] [rbp-D0h]
  int v12; // [rsp+40h] [rbp-C8h]
  int v13; // [rsp+44h] [rbp-C4h]
  _BYTE v14[256]; // [rsp+48h] [rbp-C0h] BYREF
  PVOID P; // [rsp+148h] [rbp+40h]
  char v16; // [rsp+158h] [rbp+50h]

  memset_0(&Context, 0, 0x138uLL);
  v10 = KeNumberProcessors_0;
  v13 = 0;
  v9 = KeNumberProcessors_0;
  v12 = 2097153;
  Context = a1;
  memset_0(v14, 0, sizeof(v14));
  KeQueryMaximumProcessorCountEx(0xFFFFu);
  P = (PVOID)ExAllocatePool2(0x40uLL);
  if ( P )
  {
    v4 = guard_dispatch_icall_no_overrides(v3, v2);
    if ( v4 < 0 )
      return (unsigned int)v4;
    if ( (unsigned int)KeNumberProcessors_0 <= 1 )
      KiStartProfileTarget(&Context);
    else
      KeIpiGenericCall((PKIPI_BROADCAST_WORKER)KiStartProfileTarget, (ULONG_PTR)&Context);
    v6 = P;
    if ( P )
      ExFreePoolWithTag(P, 0x666F7250u);
    if ( !v11 )
    {
      if ( !v16 )
        v4 = 255;
      goto LABEL_17;
    }
    if ( (v11 & 2) != 0 )
    {
      v4 = -1073741637;
    }
    else
    {
      if ( (v11 & 1) == 0 )
      {
LABEL_17:
        guard_dispatch_icall_no_overrides(v6, v5);
        return (unsigned int)v4;
      }
      v4 = -2147483631;
    }
    KeStopProfile(a1);
    goto LABEL_17;
  }
  return (unsigned int)-1073741670;
}
