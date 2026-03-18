/*
 * XREFs of HalpInterruptOfflineProcessor @ 0x140562090
 * Callers:
 *     HalpDpOfflineProcessorForReplace @ 0x140B4F7D0 (HalpDpOfflineProcessorForReplace.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall __noreturn HalpInterruptOfflineProcessor(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  ULONG_PTR v4; // rdi
  unsigned __int8 CurrentIrql; // cl
  __int64 v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v4 = HalpInterruptController;
  LODWORD(v9) = 0;
  v8 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags != (unsigned __int8)v9 )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  if ( *(_QWORD *)(v4 + 80) )
  {
    v9 = 0LL;
    v7 = *(_QWORD *)(v4 + 16);
    v8 = 0LL;
    LODWORD(v8) = 4;
    guard_dispatch_icall_no_overrides(v7, &v8, a3, a4);
  }
  _InterlockedDecrement(&HalpInterruptProcessorsStarted);
  _InterlockedIncrement(a1);
  __halt();
}
