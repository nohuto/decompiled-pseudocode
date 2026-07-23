/*
 * XREFs of KxStartSystemThread @ 0x1406ACD60
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheck @ 0x1404F9230 (KeBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __noreturn KxStartSystemThread()
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h]
  __int64 v1; // [rsp+8h] [rbp+8h]

  if ( (_BYTE)KeSmapEnabled )
    __asm { stac }
  __writecr8(KeGetCurrentThread()->WaitIrql);
  guard_dispatch_icall_no_overrides(v1, retaddr);
  KeBugCheck(0xEu);
}
