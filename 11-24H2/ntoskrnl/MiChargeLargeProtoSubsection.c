/*
 * XREFs of MiChargeLargeProtoSubsection @ 0x1407F0364
 * Callers:
 *     MiCreatePrototypePtes @ 0x1402751A4 (MiCreatePrototypePtes.c)
 *     MiDecrementLargeSubsections @ 0x1404C22C0 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x14067BC54 (MiEnableLargeSubsection.c)
 * Callees:
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 *     MiChargeResident @ 0x14033DD30 (MiChargeResident.c)
 */

__int64 __fastcall MiChargeLargeProtoSubsection(__int64 a1, int a2, __int64 a3, struct _KPRCB *a4)
{
  bool v4; // zf
  unsigned __int64 v5; // rdx
  __int64 result; // rax

  v4 = a2 == 0;
  v5 = (unsigned __int64)*(unsigned int *)(a1 + 44) >> 9;
  if ( v4 )
  {
    MiReturnResident((__int64)&MiSystemPartition, v5);
    return 1LL;
  }
  result = MiChargeResident(&MiSystemPartition, v5, 1024LL, a4);
  if ( (_DWORD)result )
    return 1LL;
  return result;
}
