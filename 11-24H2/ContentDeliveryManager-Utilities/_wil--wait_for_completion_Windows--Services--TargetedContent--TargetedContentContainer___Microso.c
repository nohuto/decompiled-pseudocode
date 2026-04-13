/*
 * XREFs of _wil::wait_for_completion_Windows::Services::TargetedContent::TargetedContentContainer___Microsoft::WRL::ComPtr_Windows::Services::TargetedContent::ITargetedContentContainer____::_1_::dtor$0 @ 0x1800BC687
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180029F1C (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall wil::wait_for_completion_Windows::Services::TargetedContent::TargetedContentContainer___Microsoft::WRL::ComPtr_Windows::Services::TargetedContent::ITargetedContentContainer____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    Microsoft::WRL::WeakRef::~WeakRef(*(Microsoft::WRL::WeakRef **)(a2 + 80));
  }
}
