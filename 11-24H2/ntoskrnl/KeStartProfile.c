/*
 * XREFs of KeStartProfile @ 0x1404CFCE0
 * Callers:
 *     EtwpTimeProfileStart @ 0x1406F455C (EtwpTimeProfileStart.c)
 *     EtwpCoverageSamplerStart @ 0x1407B3198 (EtwpCoverageSamplerStart.c)
 *     NtStartProfile @ 0x1407C2260 (NtStartProfile.c)
 *     EtwpEnableKernelTrace @ 0x14085ADEC (EtwpEnableKernelTrace.c)
 *     KiInitializeCacheErrataSupport @ 0x140C2C020 (KiInitializeCacheErrataSupport.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x14031D920 (KeQueryMaximumProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x14045F290 (KeIpiGenericCall.c)
 *     KiStartProfileTarget @ 0x140494D80 (KiStartProfileTarget.c)
 *     KeStopProfile @ 0x1405BC7A4 (KeStopProfile.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeStartProfile(ULONG_PTR a1)
{
  ULONG MaximumProcessorCount; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  PVOID v7; // rcx
  ULONG_PTR Context; // [rsp+28h] [rbp-E0h] BYREF
  int v10; // [rsp+30h] [rbp-D8h]
  int v11; // [rsp+34h] [rbp-D4h]
  int v12; // [rsp+38h] [rbp-D0h]
  int v13; // [rsp+40h] [rbp-C8h]
  int v14; // [rsp+44h] [rbp-C4h]
  _BYTE v15[256]; // [rsp+48h] [rbp-C0h] BYREF
  PVOID P; // [rsp+148h] [rbp+40h]
  char v17; // [rsp+158h] [rbp+50h]

  memset_0(&Context, 0, 0x138uLL);
  v11 = KeNumberProcessors_0;
  v14 = 0;
  v10 = KeNumberProcessors_0;
  v13 = 2097153;
  Context = a1;
  memset_0(v15, 0, sizeof(v15));
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  P = (PVOID)ExAllocatePool2(0x40uLL, 4 * MaximumProcessorCount + 292, 0x666F7250u);
  if ( P )
  {
    v5 = guard_dispatch_icall_no_overrides(v4, v3);
    if ( v5 < 0 )
      return (unsigned int)v5;
    if ( (unsigned int)KeNumberProcessors_0 <= 1 )
      KiStartProfileTarget(&Context);
    else
      KeIpiGenericCall((PKIPI_BROADCAST_WORKER)KiStartProfileTarget, (ULONG_PTR)&Context);
    v7 = P;
    if ( P )
      ExFreePoolWithTag(P, 0x666F7250u);
    if ( !v12 )
    {
      if ( !v17 )
        v5 = 255;
      goto LABEL_17;
    }
    if ( (v12 & 2) != 0 )
    {
      v5 = -1073741637;
    }
    else
    {
      if ( (v12 & 1) == 0 )
      {
LABEL_17:
        guard_dispatch_icall_no_overrides(v7, v6);
        return (unsigned int)v5;
      }
      v5 = -2147483631;
    }
    KeStopProfile(a1);
    goto LABEL_17;
  }
  return (unsigned int)-1073741670;
}
