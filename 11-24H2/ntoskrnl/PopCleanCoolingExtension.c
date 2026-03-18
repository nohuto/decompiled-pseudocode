/*
 * XREFs of PopCleanCoolingExtension @ 0x140AB1600
 * Callers:
 *     PopAssociateThermalRequest @ 0x14074C028 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x140AB88D4 (PopDeactiveThermalRequest.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x14046F240 (PnpUnregisterPlugPlayNotification.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopCleanCoolingExtension(_QWORD *P, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // rcx

  v5 = (void *)P[7];
  if ( v5 )
    PnpUnregisterPlugPlayNotification(v5, 1);
  if ( *((_BYTE *)P + 64) )
    guard_dispatch_icall_no_overrides(P[12], a2, a3, a4);
  ExFreePoolWithTag(P, 0x6C6F4350u);
}
