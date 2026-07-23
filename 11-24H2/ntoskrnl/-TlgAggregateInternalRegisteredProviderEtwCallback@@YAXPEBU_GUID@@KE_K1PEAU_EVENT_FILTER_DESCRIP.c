/*
 * XREFs of ?TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140A49880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     LookUpTableFlushPartial @ 0x140A497B8 (LookUpTableFlushPartial.c)
 *     LookUpTableFlushComplete @ 0x140A498FC (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalRegisteredProviderEtwCallback(
        const struct _GUID *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        struct _EVENT_FILTER_DESCRIPTOR *a6,
        _QWORD *a7)
{
  int v7; // edi

  v7 = a2;
  if ( a7[41] )
    guard_dispatch_icall_no_overrides(a1, a2);
  if ( v7 == 1 )
  {
    LookUpTableFlushComplete(a7);
  }
  else if ( v7 == 2 )
  {
    LookUpTableFlushPartial((__int64)a7);
  }
}
