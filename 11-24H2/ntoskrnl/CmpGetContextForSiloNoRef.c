/*
 * XREFs of CmpGetContextForSiloNoRef @ 0x1409DBCA0
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x140772B48 (PspDeleteExternalServerSiloState.c)
 *     CmGetRootKeyObjectForSilo @ 0x1409DB944 (CmGetRootKeyObjectForSilo.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x1409DBAC4 (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmLockKeyForWrite @ 0x1409DBB68 (CmLockKeyForWrite.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x1403E3CE0 (PsGetPermanentSiloContext.c)
 */

unsigned __int64 __fastcall CmpGetContextForSiloNoRef(__int64 a1)
{
  unsigned __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  PsGetPermanentSiloContext(a1, CmpSiloContextSlot, &v2);
  return v2;
}
