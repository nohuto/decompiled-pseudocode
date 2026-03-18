/*
 * XREFs of PopCleanCoolingExtension @ 0x140AAC394
 * Callers:
 *     PopAssociateThermalRequest @ 0x14073FF58 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x140AB450C (PopDeactiveThermalRequest.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x140205238 (PnpUnregisterPlugPlayNotification.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopCleanCoolingExtension(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[7];
  if ( v2 )
    PnpUnregisterPlugPlayNotification(v2, 1);
  if ( *((_BYTE *)P + 64) )
    guard_dispatch_icall_no_overrides(P[12]);
  ExFreePoolWithTag(P, 0x6C6F4350u);
}
