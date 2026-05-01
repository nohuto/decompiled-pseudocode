/*
 * XREFs of ?HampHostTryEstimateRemainingQuiesceTime@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043D2C
 * Callers:
 *     ?HamSrvTryEstimateRemainingQuiesceTime@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAK@Z @ 0x180044CA8 (-HamSrvTryEstimateRemainingQuiesceTime@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAK@Z.c)
 * Callees:
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x18002C71C (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180043D7C (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180043E08 (-HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

__int64 __fastcall HampHostTryEstimateRemainingQuiesceTime(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx

  HampHostAcquireLockSharedEx(a1, 0);
  v2 = CempQueryUnbiasedInterruptTimeMs64() - *((_DWORD *)a1 + 171);
  v3 = 0;
  if ( v2 <= *((_DWORD *)a1 + 172) )
    v3 = *((_DWORD *)a1 + 172) - v2;
  HampHostReleaseLockSharedEx(a1, *((_DWORD *)a1 + 172) - v2);
  return v3;
}
