/*
 * XREFs of ??$AllocateIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAPEAXXZ @ 0x140026B3C
 * Callers:
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z @ 0x1401C1200 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140027710 (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 __fastcall AllocateIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>(__int64 a1)
{
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 4272LL) + 56LL) )
    return NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
  else
    return 0LL;
}
