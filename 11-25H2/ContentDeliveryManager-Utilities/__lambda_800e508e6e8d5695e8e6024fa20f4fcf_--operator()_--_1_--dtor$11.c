/*
 * XREFs of __lambda_800e508e6e8d5695e8e6024fa20f4fcf_::operator()_::_1_::dtor$11 @ 0x1800B79BB
 * Callers:
 *     <none>
 * Callees:
 *     ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18002A964 (--1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall _lambda_800e508e6e8d5695e8e6024fa20f4fcf_::operator()_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 52) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 52) &= ~2u;
    Microsoft::WRL::Wrappers::HStringReference::~HStringReference((Microsoft::WRL::Wrappers::HStringReference *)(a2 + 144));
  }
}
