/*
 * XREFs of KeStartProfile @ 0x1404D6890
 * Callers:
 *     EtwpTimeProfileStart @ 0x1406F655C (EtwpTimeProfileStart.c)
 *     EtwpCoverageSamplerStart @ 0x1407B2D48 (EtwpCoverageSamplerStart.c)
 *     NtStartProfile @ 0x1407C4440 (NtStartProfile.c)
 *     EtwpEnableKernelTrace @ 0x1408E95BC (EtwpEnableKernelTrace.c)
 *     KiInitializeCacheErrataSupport @ 0x140C29F00 (KiInitializeCacheErrataSupport.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x14033E440 (KeQueryMaximumProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x1404677F0 (KeIpiGenericCall.c)
 *     KiStartProfileTarget @ 0x14049A320 (KiStartProfileTarget.c)
 *     KeStopProfile @ 0x1405BF174 (KeStopProfile.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeStartProfile(ULONG_PTR a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  PVOID v10; // rcx
  ULONG_PTR Context; // [rsp+28h] [rbp-E0h] BYREF
  int v13; // [rsp+30h] [rbp-D8h]
  int v14; // [rsp+34h] [rbp-D4h]
  int v15; // [rsp+38h] [rbp-D0h]
  int v16; // [rsp+40h] [rbp-C8h]
  int v17; // [rsp+44h] [rbp-C4h]
  _BYTE v18[256]; // [rsp+48h] [rbp-C0h] BYREF
  PVOID P; // [rsp+148h] [rbp+40h]
  char v20; // [rsp+158h] [rbp+50h]

  memset_0(&Context, 0, 0x138uLL);
  v14 = KeNumberProcessors_0;
  v17 = 0;
  v13 = KeNumberProcessors_0;
  v16 = 2097153;
  Context = a1;
  memset_0(v18, 0, sizeof(v18));
  KeQueryMaximumProcessorCountEx(0xFFFFu);
  P = (PVOID)ExAllocatePool2(0x40uLL);
  if ( P )
  {
    v6 = guard_dispatch_icall_no_overrides(v3, v2, v4, v5);
    if ( v6 < 0 )
      return (unsigned int)v6;
    if ( (unsigned int)KeNumberProcessors_0 <= 1 )
      KiStartProfileTarget(&Context);
    else
      KeIpiGenericCall((PKIPI_BROADCAST_WORKER)KiStartProfileTarget, (ULONG_PTR)&Context);
    v10 = P;
    if ( P )
      ExFreePoolWithTag(P, 0x666F7250u);
    if ( !v15 )
    {
      if ( !v20 )
        v6 = 255;
      goto LABEL_17;
    }
    if ( (v15 & 2) != 0 )
    {
      v6 = -1073741637;
    }
    else
    {
      if ( (v15 & 1) == 0 )
      {
LABEL_17:
        guard_dispatch_icall_no_overrides(v10, v7, v8, v9);
        return (unsigned int)v6;
      }
      v6 = -2147483631;
    }
    KeStopProfile(a1);
    goto LABEL_17;
  }
  return (unsigned int)-1073741670;
}
