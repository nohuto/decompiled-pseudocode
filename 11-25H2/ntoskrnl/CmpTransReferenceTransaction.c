/*
 * XREFs of CmpTransReferenceTransaction @ 0x140870E50
 * Callers:
 *     CmpTransSearchAddTransFromKeyBody @ 0x140870454 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1408705D4 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     CmQueryKey @ 0x14087AC40 (CmQueryKey.c)
 *     CmpTransSearchAddTrans @ 0x140885A48 (CmpTransSearchAddTrans.c)
 *     CmpCreateKeyBody @ 0x14089EB50 (CmpCreateKeyBody.c)
 *     CmpTransInitializeTransaction @ 0x140A8174C (CmpTransInitializeTransaction.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     TmIsTransactionActive @ 0x1404F9D50 (TmIsTransactionActive.c)
 */

__int64 __fastcall CmpTransReferenceTransaction(__int64 a1)
{
  struct _KTRANSACTION *v1; // rbx
  bool v2; // zf
  void *v3; // rcx
  unsigned int v4; // edi

  v1 = (struct _KTRANSACTION *)(a1 & 0xFFFFFFFFFFFFFFFEuLL);
  v2 = (a1 & 1) == 0;
  v3 = (void *)(a1 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( v2 )
  {
    v4 = 0;
    PsReferenceSiloContext(v3);
    if ( !TmIsTransactionActive(v1) )
    {
      ObfDereferenceObject(v1);
      return (unsigned int)-1072103421;
    }
  }
  else
  {
    PsReferenceSiloContext(v3);
    return v1->OutcomeEvent.Header.LockNV != 0 ? 0xC0190003 : 0;
  }
  return v4;
}
