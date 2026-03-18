/*
 * XREFs of ?TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140A4E8D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     LookUpTableFlushPartial @ 0x140A4E808 (LookUpTableFlushPartial.c)
 *     LookUpTableFlushComplete @ 0x140A4E94C (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalRegisteredProviderEtwCallback(
        const struct _GUID *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        struct _EVENT_FILTER_DESCRIPTOR *a6,
        _QWORD *a7)
{
  if ( a7[41] )
    guard_dispatch_icall_no_overrides(a1);
  if ( a2 == 1 )
  {
    LookUpTableFlushComplete(a7);
  }
  else if ( a2 == 2 )
  {
    LookUpTableFlushPartial((__int64)a7);
  }
}
