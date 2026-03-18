/*
 * XREFs of MiDistributeSystemCacheVaReductions @ 0x140666770
 * Callers:
 *     MiSegmentDereferenceWorker @ 0x140459230 (MiSegmentDereferenceWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     PsGetNextPartition @ 0x1403BE1E8 (PsGetNextPartition.c)
 */

_QWORD *MiDistributeSystemCacheVaReductions()
{
  _QWORD *i; // rcx
  __int64 v1; // rax
  _QWORD *result; // rax
  _QWORD *v3; // rbx

  for ( i = 0LL; ; i = v3 )
  {
    result = PsGetNextPartition(i);
    v3 = result;
    if ( !result )
      break;
    v1 = *result;
    if ( *(_DWORD *)(*v3 + 2408LL) >= 0x10u )
      KeSetEvent((PRKEVENT)(v1 + 2416), 0, 0);
  }
  return result;
}
