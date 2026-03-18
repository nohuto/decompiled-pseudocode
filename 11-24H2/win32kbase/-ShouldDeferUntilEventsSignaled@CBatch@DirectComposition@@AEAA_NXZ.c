/*
 * XREFs of ?ShouldDeferUntilEventsSignaled@CBatch@DirectComposition@@AEAA_NXZ @ 0x14006E45C
 * Callers:
 *     ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_KPEA_NPEAW4DeferReason@12@@Z @ 0x1400DCB0C (-ShouldDefer@CBatch@DirectComposition@@QEAA_N_KPEA_NPEAW4DeferReason@12@@Z.c)
 * Callees:
 *     ?IsSignaled@CEvent@DirectComposition@@QEAA_NXZ @ 0x14006E4AC (-IsSignaled@CEvent@DirectComposition@@QEAA_NXZ.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x14006E4EC (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 */

char __fastcall DirectComposition::CBatch::ShouldDeferUntilEventsSignaled(DirectComposition::CBatch *this)
{
  DirectComposition::CEvent *v2; // rcx
  unsigned int v4; // edx
  __int64 *v5; // rcx
  __int64 v6; // rdi

  while ( 1 )
  {
    v2 = (DirectComposition::CEvent *)*((_QWORD *)this + 11);
    if ( !v2 )
      return 0;
    if ( !DirectComposition::CEvent::IsSignaled(v2) )
      break;
    v5 = (__int64 *)*((_QWORD *)this + 11);
    v6 = *v5;
    if ( v5 )
      DirectComposition::CEvent::`scalar deleting destructor'(v5, v4);
    *((_QWORD *)this + 11) = v6;
  }
  return 1;
}
