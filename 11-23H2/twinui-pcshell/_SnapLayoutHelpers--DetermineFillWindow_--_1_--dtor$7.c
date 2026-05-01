/*
 * XREFs of _SnapLayoutHelpers::DetermineFillWindow_::_1_::dtor$7 @ 0x18067135C
 * Callers:
 *     <none>
 * Callees:
 *     ??1FillCandidate@SnapLayoutHelpers@@QEAA@XZ @ 0x18046E2A8 (--1FillCandidate@SnapLayoutHelpers@@QEAA@XZ.c)
 */

void __fastcall SnapLayoutHelpers::DetermineFillWindow_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 280) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 280) &= ~2u;
    SnapLayoutHelpers::FillCandidate::~FillCandidate((__int64 *)(a2 + 96));
  }
}
