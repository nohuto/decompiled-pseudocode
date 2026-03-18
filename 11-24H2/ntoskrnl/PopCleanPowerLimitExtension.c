/*
 * XREFs of PopCleanPowerLimitExtension @ 0x1405CF754
 * Callers:
 *     PopAssociatePowerLimitRequest @ 0x14074B078 (PopAssociatePowerLimitRequest.c)
 *     PopFreePowerLimitRequest @ 0x14074B644 (PopFreePowerLimitRequest.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     IoUnregisterPlugPlayNotificationEx @ 0x140A4EAB0 (IoUnregisterPlugPlayNotificationEx.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopCleanPowerLimitExtension(_QWORD *P, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx

  v5 = (void *)P[8];
  if ( v5 )
    IoUnregisterPlugPlayNotificationEx(v5);
  if ( *((_BYTE *)P + 48) )
    guard_dispatch_icall_no_overrides(P[15], a2, a3, a4);
  v6 = (void *)P[10];
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x6D6C5050u);
    P[10] = 0LL;
  }
  v7 = (void *)P[11];
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x6D6C5050u);
    P[11] = 0LL;
  }
  v8 = (void *)P[13];
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x6D6C5050u);
    P[13] = 0LL;
  }
  ExFreePoolWithTag(P, 0x6D6C5050u);
}
