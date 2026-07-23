/*
 * XREFs of KeStopProfile @ 0x1405BC7A4
 * Callers:
 *     KeStartProfile @ 0x1404CFCE0 (KeStartProfile.c)
 *     EtwTimeProfileReset @ 0x1407A96EC (EtwTimeProfileReset.c)
 *     ExpProfileDelete @ 0x1407C1F80 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x1407C2560 (NtStopProfile.c)
 *     EtwpDisableKernelTrace @ 0x14085B3E0 (EtwpDisableKernelTrace.c)
 *     EtwpCoverageSamplerStop @ 0x140ADC310 (EtwpCoverageSamplerStop.c)
 * Callees:
 *     KiStopProfileTarget @ 0x1403A55C0 (KiStopProfileTarget.c)
 *     KeIpiGenericCall @ 0x14045F290 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall KeStopProfile(ULONG_PTR a1)
{
  ULONG_PTR Context; // [rsp+20h] [rbp-E0h] BYREF
  int v4; // [rsp+28h] [rbp-D8h]
  int v5; // [rsp+2Ch] [rbp-D4h]
  int v6; // [rsp+30h] [rbp-D0h]
  int v7; // [rsp+34h] [rbp-CCh]
  _BYTE v8[256]; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P; // [rsp+138h] [rbp+38h]
  char v10; // [rsp+140h] [rbp+40h]

  memset_0(v8, 0, 0x110uLL);
  v5 = KeNumberProcessors_0;
  v7 = 0;
  Context = a1;
  v4 = KeNumberProcessors_0;
  v6 = 2097153;
  memset_0(v8, 0, sizeof(v8));
  if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    KiStopProfileTarget(&Context);
  else
    KeIpiGenericCall((PKIPI_BROADCAST_WORKER)KiStopProfileTarget, (ULONG_PTR)&Context);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v10;
}
