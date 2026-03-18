/*
 * XREFs of ?vRefPalette@XEPALOBJ@@QEAAXXZ @ 0x1401DB594
 * Callers:
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1400C95C8 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPALOBJ::vRefPalette(XEPALOBJ *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
    INC_SHARE_REF_CNT(v1);
}
