/*
 * XREFs of MiModifiedWriterNoReservationSort @ 0x140443090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiModifiedWriterNoReservationSort(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  unsigned __int64 v4; // rcx

  v2 = 48LL * *a1 - 0x220000000000LL;
  v3 = 48LL * *a2 - 0x220000000000LL;
  v4 = *(_QWORD *)(v2 + 40) & 0xFFFFFFFFFFLL;
  if ( v4 < (*(_QWORD *)(v3 + 40) & 0xFFFFFFFFFFuLL) )
    return 0xFFFFFFFFLL;
  if ( v4 > (*(_QWORD *)(v3 + 40) & 0xFFFFFFFFFFuLL) )
    return 1LL;
  if ( (*(_QWORD *)(v2 + 8) | 0x8000000000000000uLL) < (*(_QWORD *)(v3 + 8) | 0x8000000000000000uLL) )
    return 0xFFFFFFFFLL;
  return (*(_QWORD *)(v2 + 8) | 0x8000000000000000uLL) > (*(_QWORD *)(v3 + 8) | 0x8000000000000000uLL);
}
