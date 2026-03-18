/*
 * XREFs of HalpInterruptOfflineProcessor @ 0x14055F790
 * Callers:
 *     HalpDpOfflineProcessorForReplace @ 0x140B3F7D0 (HalpDpOfflineProcessorForReplace.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall __noreturn HalpInterruptOfflineProcessor(volatile signed __int32 *a1)
{
  ULONG_PTR v1; // rdi
  unsigned __int8 CurrentIrql; // cl
  unsigned __int8 v4; // [rsp+30h] [rbp-18h]

  v1 = HalpInterruptController;
  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags != v4 )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  if ( *(_QWORD *)(v1 + 80) )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v1 + 16));
  _InterlockedDecrement(&HalpInterruptProcessorsStarted);
  _InterlockedIncrement(a1);
  __halt();
}
