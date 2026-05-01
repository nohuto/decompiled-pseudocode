/*
 * XREFs of _wil::MakeAndInitializeOrThrow_ApplicationContainerActivationPolicy_IApplicationContainerActivationComponent___unsigned_char_&_tagINITIALWINDOWPLACEMENT_&__::_1_::dtor$0 @ 0x18062DF06
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@QEAA@XZ @ 0x18062F2E0 (--1-$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeAndInitializeOrThrow_ApplicationContainerActivationPolicy_IApplicationContainerActivationComponent___unsigned_char___tagINITIALWINDOWPLACEMENT____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<ApplicationContainerActivationPolicy>::~ComPtr<ApplicationContainerActivationPolicy>(*(_QWORD *)(a2 + 64));
  }
  return result;
}
