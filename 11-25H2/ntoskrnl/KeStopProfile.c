/*
 * XREFs of KeStopProfile @ 0x1405BB340
 * Callers:
 *     KeStartProfile @ 0x1404D7A60 (KeStartProfile.c)
 *     EtwTimeProfileReset @ 0x14079A1DC (EtwTimeProfileReset.c)
 *     ExpProfileDelete @ 0x1407B2360 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x1407B2940 (NtStopProfile.c)
 *     EtwpDisableKernelTrace @ 0x1408DA7E0 (EtwpDisableKernelTrace.c)
 *     EtwpCoverageSamplerStop @ 0x140ACFEE0 (EtwpCoverageSamplerStop.c)
 * Callees:
 *     KiStopProfileTarget @ 0x140269F30 (KiStopProfileTarget.c)
 *     KeIpiGenericCall @ 0x1404690A0 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

char __fastcall KeStopProfile(ULONG_PTR a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  ULONG_PTR Context; // [rsp+20h] [rbp-E0h] BYREF
  int v7; // [rsp+28h] [rbp-D8h]
  int v8; // [rsp+2Ch] [rbp-D4h]
  int v9; // [rsp+30h] [rbp-D0h]
  int v10; // [rsp+34h] [rbp-CCh]
  _BYTE v11[256]; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P; // [rsp+138h] [rbp+38h]
  char v13; // [rsp+140h] [rbp+40h]

  memset_0(v11, 0, 0x110uLL);
  v8 = KeNumberProcessors_0;
  v10 = 0;
  Context = a1;
  v7 = KeNumberProcessors_0;
  v9 = 2097153;
  memset_0(v11, 0, sizeof(v11));
  if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    KiStopProfileTarget(&Context, v2, v3, v4);
  else
    KeIpiGenericCall((PKIPI_BROADCAST_WORKER)KiStopProfileTarget, (ULONG_PTR)&Context);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v13;
}
