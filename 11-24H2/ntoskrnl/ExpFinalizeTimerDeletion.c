/*
 * XREFs of ExpFinalizeTimerDeletion @ 0x1403ADE00
 * Callers:
 *     KiFinalizeTimer2Disablement @ 0x1403AF288 (KiFinalizeTimer2Disablement.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFinalizeTimerDeletion(unsigned __int64 P)
{
  unsigned __int64 v2; // rcx

  if ( KiWaitAlways != _byteswap_uint64(P ^ __ROL8__(*(_QWORD *)(P + 136) ^ KiWaitNever, KiWaitNever)) )
  {
    v2 = KiWaitAlways ^ _byteswap_uint64(P ^ __ROL8__(*(_QWORD *)(P + 144) ^ KiWaitNever, KiWaitNever));
    guard_dispatch_icall_no_overrides(v2, v2);
  }
  *(_BYTE *)(P + 152) = ~ExpTimerFreedCookie;
  ExFreePoolWithTag((PVOID)P, 0x6D547845u);
}
