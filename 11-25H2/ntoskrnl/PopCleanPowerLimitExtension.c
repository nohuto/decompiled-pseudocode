/*
 * XREFs of PopCleanPowerLimitExtension @ 0x1405CB0A4
 * Callers:
 *     PopAssociatePowerLimitRequest @ 0x14073EFA8 (PopAssociatePowerLimitRequest.c)
 *     PopFreePowerLimitRequest @ 0x14073F574 (PopFreePowerLimitRequest.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     IoUnregisterPlugPlayNotificationEx @ 0x140A4C440 (IoUnregisterPlugPlayNotificationEx.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopCleanPowerLimitExtension(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  v2 = (void *)P[8];
  if ( v2 )
    IoUnregisterPlugPlayNotificationEx(v2);
  if ( *((_BYTE *)P + 48) )
    guard_dispatch_icall_no_overrides(P[15]);
  v3 = (void *)P[10];
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x6D6C5050u);
    P[10] = 0LL;
  }
  v4 = (void *)P[11];
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x6D6C5050u);
    P[11] = 0LL;
  }
  v5 = (void *)P[13];
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x6D6C5050u);
    P[13] = 0LL;
  }
  ExFreePoolWithTag(P, 0x6D6C5050u);
}
