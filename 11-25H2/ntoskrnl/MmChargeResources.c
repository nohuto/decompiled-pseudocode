/*
 * XREFs of MmChargeResources @ 0x14022E140
 * Callers:
 *     SmFpAllocate @ 0x140327D80 (SmFpAllocate.c)
 *     SmKmAllocateMdlForLock @ 0x1404665D8 (SmKmAllocateMdlForLock.c)
 * Callees:
 *     MiChargeResident @ 0x14022CAE0 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 */

__int64 __fastcall MmChargeResources(ULONG **a1, unsigned __int64 a2, char a3, __int64 a4)
{
  ULONG *v4; // rbp
  int v5; // edi

  v4 = *a1;
  v5 = 0;
  if ( (a3 & 2) != 0 )
  {
    if ( !(unsigned int)MiChargeResident(*a1, a2, 0LL) )
      return 0LL;
    v5 = 2;
  }
  if ( (a3 & 1) != 0 && !(unsigned int)MiChargeCommit(v4, a2, 1LL, a4) )
  {
    if ( v5 )
      MiReturnResident(*a1);
    return 0LL;
  }
  return 1LL;
}
