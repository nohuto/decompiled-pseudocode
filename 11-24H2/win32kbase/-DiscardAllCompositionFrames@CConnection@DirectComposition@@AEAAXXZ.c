/*
 * XREFs of ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1400E1CAC
 * Callers:
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1400E1A10 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1400E1B98 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CConnection::DiscardAllCompositionFrames(DirectComposition::CConnection *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 24);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 48LL))(v1);
}
