/*
 * XREFs of PspIsSiloContext @ 0x1409E3538
 * Callers:
 *     PsReplaceSiloContext @ 0x140762870 (PsReplaceSiloContext.c)
 *     PsInsertSiloContext @ 0x1409E2FC0 (PsInsertSiloContext.c)
 *     PsInsertPermanentSiloContextEx @ 0x1409E3454 (PsInsertPermanentSiloContextEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspIsSiloContext(__int64 a1)
{
  PVOID v1; // rax

  v1 = (PVOID)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  return v1 == (PVOID)PsSiloContextNonPagedType || v1 == PsSiloContextPagedType;
}
