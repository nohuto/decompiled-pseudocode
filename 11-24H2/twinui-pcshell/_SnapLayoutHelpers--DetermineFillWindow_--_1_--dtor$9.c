/*
 * XREFs of _SnapLayoutHelpers::DetermineFillWindow_::_1_::dtor$9 @ 0x1806F70F9
 * Callers:
 *     <none>
 * Callees:
 *     ??1FillCandidate@SnapLayoutHelpers@@QEAA@XZ @ 0x1802C8B1C (--1FillCandidate@SnapLayoutHelpers@@QEAA@XZ.c)
 */

void __fastcall SnapLayoutHelpers::DetermineFillWindow_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 264) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 264) &= ~4u;
    SnapLayoutHelpers::FillCandidate::~FillCandidate((__int64 *)(a2 + 128));
  }
}
