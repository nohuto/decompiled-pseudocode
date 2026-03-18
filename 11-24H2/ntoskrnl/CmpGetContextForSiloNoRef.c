/*
 * XREFs of CmpGetContextForSiloNoRef @ 0x1409E1EF0
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x140772928 (PspDeleteExternalServerSiloState.c)
 *     CmGetRootKeyObjectForSilo @ 0x1409E1B94 (CmGetRootKeyObjectForSilo.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x1409E1D14 (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmLockKeyForWrite @ 0x1409E1DB8 (CmLockKeyForWrite.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x1403F0070 (PsGetPermanentSiloContext.c)
 */

unsigned __int64 __fastcall CmpGetContextForSiloNoRef(__int64 a1)
{
  unsigned __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  PsGetPermanentSiloContext(a1, CmpSiloContextSlot, &v2);
  return v2;
}
