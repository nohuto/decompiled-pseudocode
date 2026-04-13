/*
 * XREFs of ??Yvector_iterator_nothrow@?$vector_range_nothrow@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@wil@@QEAAAEAV012@H@Z @ 0x1800A748C
 * Callers:
 *     ?GetHasMobilityAccount@MobilityExperienceManager@@UEAAJPEAE@Z @ 0x1800A7550 (-GetHasMobilityAccount@MobilityExperienceManager@@UEAAJPEAE@Z.c)
 * Callees:
 *     ?get_at_current@?$vector_range_nothrow@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@wil@@QEAAXI@Z @ 0x1800A7FC8 (-get_at_current@-$vector_range_nothrow@U-$IVectorView@PEAVWebAccount@Credentials@Security@Window.c)
 */

__int64 __fastcall wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *>>::vector_iterator_nothrow::operator+=(
        __int64 a1)
{
  wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *>>::get_at_current(
    *(_QWORD *)a1,
    (unsigned int)++*(_DWORD *)(a1 + 8));
  return a1;
}
