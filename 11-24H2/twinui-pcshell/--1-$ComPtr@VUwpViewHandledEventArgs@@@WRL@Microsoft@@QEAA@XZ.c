/*
 * XREFs of ??1?$ComPtr@VUwpViewHandledEventArgs@@@WRL@Microsoft@@QEAA@XZ @ 0x18043D028
 * Callers:
 *     _wil::MakeOrThrow_UwpViewHandledEventArgs_bool_&__::_1_::dtor$0 @ 0x1806E9D0C (_wil--MakeOrThrow_UwpViewHandledEventArgs_bool_-__--_1_--dtor$0.c)
 *     _UwpWindowWrapperBase::OnBackComplete_::_1_::dtor$3 @ 0x1806EA6B1 (_UwpWindowWrapperBase--OnBackComplete_--_1_--dtor$3.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18021E810 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIJumpViewExperien.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<UwpViewHandledEventArgs>::~ComPtr<UwpViewHandledEventArgs>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IJumpViewExperienceEventArgs,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
