/*
 * XREFs of KxStartSystemThread @ 0x1406ABDC0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheck @ 0x1404FB970 (KeBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall __noreturn KxStartSystemThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h]
  __int64 v5; // [rsp+8h] [rbp+8h]

  if ( (_BYTE)KeSmapEnabled )
    __asm { stac }
  __writecr8(KeGetCurrentThread()->WaitIrql);
  guard_dispatch_icall_no_overrides(v5, retaddr, a3, a4);
  KeBugCheck(0xEu);
}
