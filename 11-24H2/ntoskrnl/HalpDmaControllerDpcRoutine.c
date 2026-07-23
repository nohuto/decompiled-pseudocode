/*
 * XREFs of HalpDmaControllerDpcRoutine @ 0x1404A9510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpDmaControllerDpcRoutine(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a2 + 24);
  if ( v2 )
  {
    if ( *(_QWORD *)(a2 + 8) )
      guard_dispatch_icall_no_overrides(v2, *(_QWORD *)(*(_QWORD *)(v2 + 352) + 48LL));
  }
}
