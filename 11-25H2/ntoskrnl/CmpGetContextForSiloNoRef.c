/*
 * XREFs of CmpGetContextForSiloNoRef @ 0x1409E32A0
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x140762F68 (PspDeleteExternalServerSiloState.c)
 *     CmGetRootKeyObjectForSilo @ 0x1409E2F4C (CmGetRootKeyObjectForSilo.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x1409E30C0 (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmLockKeyForWrite @ 0x1409E3164 (CmLockKeyForWrite.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x1403EA530 (PsGetPermanentSiloContext.c)
 */

unsigned __int64 __fastcall CmpGetContextForSiloNoRef(__int64 a1)
{
  unsigned __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  PsGetPermanentSiloContext(a1, CmpSiloContextSlot, &v2);
  return v2;
}
