/*
 * XREFs of Microsoft::WRL::Details::MakeAndInitialize__TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg_Windows::Internal::Shell::Experience::IShellExperienceViewEventArg_HSTRING_____&_Windows::Foundation::Collections::IPropertySet___&_ @ 0x18046F2CC
 * Callers:
 *     ?_FireViewEvent@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804701F8 (-_FireViewEvent@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collect.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18046EFD4 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UISh_ea_18046EFD4.c)
 *     _TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::ShellExperienceViewEventArg @ 0x18046F4A4 (_TwinUI--Cortana--ShellExperienceView--_FireViewEvent_--_2_--ShellExperienceViewEventArg--ShellE.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18046FAB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShe_ea_18046FAB0.c)
 *     _TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::RuntimeClassInitialize @ 0x18046FC4C (_TwinUI--Cortana--ShellExperienceView--_FireViewEvent_--_2_--ShellExperienceViewEventArg--Runtim.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize__TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg_Windows::Internal::Shell::Experience::IShellExperienceViewEventArg_HSTRING_______Windows::Foundation::Collections::IPropertySet_____(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  void *v6; // rax
  int v7; // ebx
  __int64 v8; // rdi

  *a1 = 0LL;
  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::ShellExperienceViewEventArg(v6);
    v7 = TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::RuntimeClassInitialize(
           v8,
           *a2,
           *a3);
    if ( v7 >= 0 )
      v7 = Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>>(
             v8,
             &GUID_945f341f_df0f_41d1_adae_5b9dabbb2139,
             a1);
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::Release(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
