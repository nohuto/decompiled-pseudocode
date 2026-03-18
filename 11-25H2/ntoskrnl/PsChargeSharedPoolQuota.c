/*
 * XREFs of PsChargeSharedPoolQuota @ 0x14091C6C0
 * Callers:
 *     PspAllocateRateControl @ 0x14091C57C (PspAllocateRateControl.c)
 *     RtlpAllocateAtom @ 0x14091C628 (RtlpAllocateAtom.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     PspChargeQuota @ 0x1403C65E0 (PspChargeQuota.c)
 *     PspReturnQuota @ 0x1403C6990 (PspReturnQuota.c)
 */

__int64 __fastcall PsChargeSharedPoolQuota(__int64 a1, ULONG_PTR a2, unsigned __int64 a3)
{
  __int64 v5; // rbx

  if ( (PEPROCESS)a1 == PsInitialSystemProcess )
    return 1LL;
  v5 = *(_QWORD *)(a1 + 760);
  if ( !a2 || (int)PspChargeQuota(*(_QWORD *)(a1 + 760), 0LL, 1, a2) >= 0 )
  {
    if ( !a3 || (int)PspChargeQuota(v5, 0LL, 0, a3) >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 512));
      return v5;
    }
    if ( a2 )
      PspReturnQuota((__int64 *)v5, 0LL, 1, a2);
  }
  return 0LL;
}
