/*
 * XREFs of HUBPSM20_ReleasingInterruptReferenceAndStoppingTimer @ 0x140013180
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_ReleaseInterruptReference @ 0x140011E84 (HUBMUX_ReleaseInterruptReference.c)
 *     HUBMISC_StopPortTimer @ 0x140033B18 (HUBMISC_StopPortTimer.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPSM20_ReleasingInterruptReferenceAndStoppingTimer(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi

  v1 = *(_QWORD *)(a1 + 960);
  v2 = HUBMISC_StopPortTimer(v1);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 1328) + 1480LL))(*(_QWORD *)(v1 + 1328), 4046LL);
  HUBMUX_ReleaseInterruptReference((volatile signed __int32 *)v1);
  return v2;
}
