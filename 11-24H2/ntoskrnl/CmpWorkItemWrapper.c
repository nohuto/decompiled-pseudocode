/*
 * XREFs of CmpWorkItemWrapper @ 0x140494900
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall CmpWorkItemWrapper(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int32 v5; // eax

  do
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(a1 + 40);
      if ( (v5 & 2) == 0 )
        break;
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 40), 1u);
      guard_dispatch_icall_no_overrides(a1, *(_QWORD *)(a1 + 56), a3, a4);
    }
  }
  while ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), v5 & 0xFFFFFFFE, v5) );
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 32));
}
