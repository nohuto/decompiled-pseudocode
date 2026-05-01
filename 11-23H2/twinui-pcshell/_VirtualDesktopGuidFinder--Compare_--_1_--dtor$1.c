/*
 * XREFs of _VirtualDesktopGuidFinder::Compare_::_1_::dtor$1 @ 0x1802C0D43
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopGuidFinder::Compare_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(*(void **)(a2 + 32));
}
