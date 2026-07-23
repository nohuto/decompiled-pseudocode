/*
 * XREFs of MiUnlinkHotAddFlight @ 0x1407EA69C
 * Callers:
 *     MiPerformMemoryChange @ 0x14066F268 (MiPerformMemoryChange.c)
 *     MiReturnAddMemoryResources @ 0x14066FA80 (MiReturnAddMemoryResources.c)
 *     MiHonorExistingHotMemoryFlights @ 0x1407E9B54 (MiHonorExistingHotMemoryFlights.c)
 * Callees:
 *     <none>
 */

void __fastcall MiUnlinkHotAddFlight(__int64 *a1)
{
  __int64 *v1; // rdx
  __int64 **v2; // rax

  if ( *a1 )
  {
    --dword_140E2ED50;
    dword_140E2ED54 -= *((_DWORD *)a1 + 38);
    v1 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1 || (v2 = (__int64 **)a1[1], *v2 != a1) )
      __fastfail(3u);
    *v2 = v1;
    v1[1] = (__int64)v2;
    *a1 = 0LL;
  }
}
