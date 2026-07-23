/*
 * XREFs of MiComputeAweCharges @ 0x1406F37C8
 * Callers:
 *     MiComputeVadCharges @ 0x140210398 (MiComputeVadCharges.c)
 *     MiFreeAweView @ 0x1406F3720 (MiFreeAweView.c)
 * Callees:
 *     MiPageSizeToPteLevel @ 0x140414D2C (MiPageSizeToPteLevel.c)
 *     MiPageChainCount @ 0x14045AA00 (MiPageChainCount.c)
 *     MiGetAweViewPageSize @ 0x1404B4F9C (MiGetAweViewPageSize.c)
 *     MiResidentPagesForSpan @ 0x14099A484 (MiResidentPagesForSpan.c)
 */

__int64 __fastcall MiComputeAweCharges(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r10
  unsigned __int64 AweViewPageSize; // rcx
  __int64 v5; // r8

  v2 = 0;
  v3 = a1;
  AweViewPageSize = 1LL;
  if ( a2 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL) & 1) == 0 )
    {
      AweViewPageSize = MiGetAweViewPageSize(a2);
      if ( !AweViewPageSize )
        AweViewPageSize = MiPageChainCount(v5);
    }
    v2 = MiPageSizeToPteLevel(AweViewPageSize);
  }
  return MiResidentPagesForSpan(
           (*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32)) << 12,
           ((*(unsigned int *)(v3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 33) << 32)) << 12) | 0xFFF,
           v2);
}
