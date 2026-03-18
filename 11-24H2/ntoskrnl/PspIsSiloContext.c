/*
 * XREFs of PspIsSiloContext @ 0x1409E2188
 * Callers:
 *     PsReplaceSiloContext @ 0x140772230 (PsReplaceSiloContext.c)
 *     PsInsertSiloContext @ 0x1409E1C10 (PsInsertSiloContext.c)
 *     PsInsertPermanentSiloContextEx @ 0x1409E20A4 (PsInsertPermanentSiloContextEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspIsSiloContext(__int64 a1)
{
  PVOID v1; // rax

  v1 = (PVOID)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  return v1 == (PVOID)PsSiloContextNonPagedType || v1 == PsSiloContextPagedType;
}
