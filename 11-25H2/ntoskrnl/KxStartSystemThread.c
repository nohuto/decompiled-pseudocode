/*
 * XREFs of KxStartSystemThread @ 0x1406A0AF0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheck @ 0x1404F9260 (KeBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __noreturn KxStartSystemThread()
{
  __int64 v0; // [rsp+8h] [rbp+8h]

  if ( (_BYTE)KeSmapEnabled )
    __asm { stac }
  __writecr8(KeGetCurrentThread()->WaitIrql);
  guard_dispatch_icall_no_overrides(v0);
  KeBugCheck(0xEu);
}
