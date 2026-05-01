/*
 * XREFs of ??1GamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAA@XZ @ 0x18032D384
 * Callers:
 *     ??_G?$heap_implements@UGamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18032D890 (--_G-$heap_implements@UGamingPostureSystemDialog@implementation@Posture@GamingExperiences@Intern.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??1?$unique_ptr@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@U?$default_delete@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@@std@@@std@@QEAA@XZ @ 0x18032D1FC (--1-$unique_ptr@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@U-$default_delete@VSyste.c)
 */

void __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::~GamingPostureSystemDialog(
        winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog *this)
{
  std::unique_ptr<GamingPostureUXTelemetryProvider::SystemDialogActivity>::~unique_ptr<GamingPostureUXTelemetryProvider::SystemDialogActivity>((_QWORD *)this + 9);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog *)((char *)this + 64));
  if ( *((_QWORD *)this + 7) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 7);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)this + 3);
  winrt::impl::root_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>::~root_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>((__int64)this);
}
