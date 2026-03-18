/*
 * XREFs of HUBPSM20_QueueingPortResumeTimedOut @ 0x140013040
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_ReleaseInterruptReference @ 0x140011E84 (HUBMUX_ReleaseInterruptReference.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPSM20_QueueingPortResumeTimedOut(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 1328) + 1480LL))(*(_QWORD *)(v1 + 1328), 4078LL);
  HUBMUX_ReleaseInterruptReference((volatile signed __int32 *)v1);
  return 3013LL;
}
