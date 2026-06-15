/*
 * XREFs of ??1?$CAutoPtr@_N@ATL@@QEAA@XZ @ 0x1800A1830
 * Callers:
 *     _CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71____::_1_::dtor$1 @ 0x18016AFA0 (_CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c_ea_18016AFA0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ATL::CAutoPtr<bool>::~CAutoPtr<bool>(void **a1)
{
  operator delete(*a1, (const struct std::nothrow_t *)1);
  *a1 = 0LL;
}
