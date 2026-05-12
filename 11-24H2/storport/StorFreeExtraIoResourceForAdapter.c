/*
 * XREFs of StorFreeExtraIoResourceForAdapter @ 0x1400A6CB4
 * Callers:
 *     RaidAdapterReclaimIoResourceTimerDpcRoutine @ 0x14005D9C0 (RaidAdapterReclaimIoResourceTimerDpcRoutine.c)
 * Callees:
 *     StorFreeExtraIoResourceForGateway @ 0x1400A6D40 (StorFreeExtraIoResourceForGateway.c)
 */

__int64 __fastcall StorFreeExtraIoResourceForAdapter(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 result; // rax

  v2 = 0;
  v3 = *(_DWORD *)(a1 + 588) / *(_DWORD *)(a1 + 968);
  do
  {
    v4 = 320LL * v2;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)(*(_QWORD *)(a1 + 960) + v4 + 136),
                             0,
                             0);
    if ( (unsigned int)result > v3 )
      result = StorFreeExtraIoResourceForGateway(v4 + *(_QWORD *)(a1 + 960), v3);
    ++v2;
  }
  while ( v2 < *(_DWORD *)(a1 + 968) );
  return result;
}
