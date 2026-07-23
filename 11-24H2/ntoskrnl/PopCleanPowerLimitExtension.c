/*
 * XREFs of PopCleanPowerLimitExtension @ 0x1405CCE74
 * Callers:
 *     PopAssociatePowerLimitRequest @ 0x1407493A8 (PopAssociatePowerLimitRequest.c)
 *     PopFreePowerLimitRequest @ 0x140749974 (PopFreePowerLimitRequest.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     IoUnregisterPlugPlayNotificationEx @ 0x140A45730 (IoUnregisterPlugPlayNotificationEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PopCleanPowerLimitExtension(_QWORD *P, __int64 a2)
{
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  v3 = (void *)P[8];
  if ( v3 )
    IoUnregisterPlugPlayNotificationEx(v3);
  if ( *((_BYTE *)P + 48) )
    guard_dispatch_icall_no_overrides(P[15], a2);
  v4 = (void *)P[10];
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x6D6C5050u);
    P[10] = 0LL;
  }
  v5 = (void *)P[11];
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x6D6C5050u);
    P[11] = 0LL;
  }
  v6 = (void *)P[13];
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x6D6C5050u);
    P[13] = 0LL;
  }
  ExFreePoolWithTag(P, 0x6D6C5050u);
}
