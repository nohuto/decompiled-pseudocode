/*
 * XREFs of ViCtxIsrMessageBased @ 0x140BA21F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ViCtxCaptureInitialIsrState @ 0x140BA1EAC (ViCtxCaptureInitialIsrState.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140BA1F50 (ViCtxCheckAndReleaseIsrState.c)
 */

char __fastcall ViCtxIsrMessageBased(__int64 a1, __int64 a2, unsigned int a3)
{
  volatile signed __int32 *v6; // rbp
  __int64 v7; // r9
  char v8; // bl

  v6 = ViCtxCaptureInitialIsrState(a1);
  v8 = guard_dispatch_icall_no_overrides(a1, *(_QWORD *)(a2 + 8), a3, v7);
  if ( v6 )
    ViCtxCheckAndReleaseIsrState((__int64)v6, *(const void **)(a2 + 16));
  return v8;
}
