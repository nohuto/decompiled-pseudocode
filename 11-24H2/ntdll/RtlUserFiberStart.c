/*
 * XREFs of RtlUserFiberStart @ 0x1800AAD10
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x1800AADB0 (RtlExitUserThread.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __noreturn RtlUserFiberStart()
{
  (*((void (**)(void))NtCurrentTeb()->NtTib.FiberData + 21))();
  RtlExitUserThread(-1073741823);
}
