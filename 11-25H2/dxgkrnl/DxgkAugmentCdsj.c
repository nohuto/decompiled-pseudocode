/*
 * XREFs of DxgkAugmentCdsj @ 0x1401C54A0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x140373EE8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x140374400 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 */

__int64 __fastcall DxgkAugmentCdsj(struct D3DKMT_AUGMENT_CDSJ *a1)
{
  struct CCD_BTL *v3; // rax

  if ( a1 )
  {
    v3 = CCD_BTL::Global();
    return CDS_JOURNAL::Augment((struct CCD_BTL *)((char *)v3 + 112), a1);
  }
  else
  {
    WdLogSingleEntry1(1LL, 0LL);
    WdLogGlobalForLineNumber = 529;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"Invalid argument. (io_pAugment = 0x%I64x)",
      0LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
