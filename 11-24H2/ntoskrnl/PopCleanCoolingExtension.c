/*
 * XREFs of PopCleanCoolingExtension @ 0x140AAC570
 * Callers:
 *     PopAssociateThermalRequest @ 0x14074A358 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x140AB2D98 (PopDeactiveThermalRequest.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x140469950 (PnpUnregisterPlugPlayNotification.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PopCleanCoolingExtension(_QWORD *P, __int64 a2)
{
  void *v3; // rcx

  v3 = (void *)P[7];
  if ( v3 )
    PnpUnregisterPlugPlayNotification(v3, 1);
  if ( *((_BYTE *)P + 64) )
    guard_dispatch_icall_no_overrides(P[12], a2);
  ExFreePoolWithTag(P, 0x6C6F4350u);
}
