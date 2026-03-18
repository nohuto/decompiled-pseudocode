/*
 * XREFs of ViCtxIsr @ 0x140BA2190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ViCtxCaptureInitialIsrState @ 0x140BA1EAC (ViCtxCaptureInitialIsrState.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140BA1F50 (ViCtxCheckAndReleaseIsrState.c)
 */

char __fastcall ViCtxIsr(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // bl

  v4 = ViCtxCaptureInitialIsrState(a1);
  v7 = guard_dispatch_icall_no_overrides(a1, *(_QWORD *)(a2 + 8), v5, v6);
  if ( v4 )
    ViCtxCheckAndReleaseIsrState((__int64)v4, *(const void **)a2);
  return v7;
}
