/*
 * XREFs of _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$6 @ 0x1806E8582
 * Callers:
 *     <none>
 * Callees:
 *     ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1802CFC68 (--1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 120) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 120) &= ~1u;
    Microsoft::WRL::Wrappers::HStringReference::~HStringReference((Microsoft::WRL::Wrappers::HStringReference *)(a2 + 360));
  }
}
