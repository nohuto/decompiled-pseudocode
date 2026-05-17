/*
 * XREFs of RtlUserFiberStart @ 0x180003BD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x1800042C0 (RtlExitUserThread.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __noreturn RtlUserFiberStart()
{
  (*((void (**)(void))NtCurrentTeb()->NtTib.FiberData + 21))();
  RtlExitUserThread(3221225473LL);
  JUMPOUT(0x180003BF3LL);
}
