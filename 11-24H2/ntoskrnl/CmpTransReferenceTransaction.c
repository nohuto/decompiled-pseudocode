/*
 * XREFs of CmpTransReferenceTransaction @ 0x140879088
 * Callers:
 *     CmpCreateKeyBody @ 0x14083E100 (CmpCreateKeyBody.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     CmQueryKey @ 0x140877890 (CmQueryKey.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1408790E8 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140879368 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpTransSearchAddTrans @ 0x14087A4F0 (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x140A04118 (CmpTransInitializeTransaction.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     TmIsTransactionActive @ 0x1404FC4D0 (TmIsTransactionActive.c)
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
