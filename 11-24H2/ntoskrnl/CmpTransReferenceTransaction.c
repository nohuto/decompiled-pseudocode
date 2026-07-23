/*
 * XREFs of CmpTransReferenceTransaction @ 0x14087D3B8
 * Callers:
 *     CmpCreateKeyBody @ 0x14083A700 (CmpCreateKeyBody.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmQueryKey @ 0x14087BBC0 (CmQueryKey.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x14087D418 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14087D698 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpTransSearchAddTrans @ 0x14087E39C (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x140A00648 (CmpTransInitializeTransaction.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     TmIsTransactionActive @ 0x1404F9D90 (TmIsTransactionActive.c)
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
