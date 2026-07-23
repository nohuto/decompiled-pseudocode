/*
 * XREFs of MmStoreChargeResidentAvailableForRead @ 0x14033E98C
 * Callers:
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x1404A30D0 (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x14033ECD0 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MmStoreChargeResidentAvailableForRead(ULONG **a1, __int64 a2)
{
  ULONG *v2; // r9
  unsigned __int64 v3; // rdx
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int32 CachedResidentAvailable; // eax
  unsigned __int32 v6; // ett
  __int64 result; // rax

  v2 = *a1;
  v3 = a2 + 48;
  if ( *a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( v3 <= CachedResidentAvailable && CachedResidentAvailable != -1 )
    {
      v6 = CachedResidentAvailable;
      CachedResidentAvailable = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                  CachedResidentAvailable - v3,
                                  CachedResidentAvailable);
      if ( v6 == CachedResidentAvailable )
        return 1LL;
    }
  }
  result = MiChargePartitionResidentAvailable(v2, v3, 0LL, v2);
  if ( (_DWORD)result )
    return 1LL;
  return result;
}
