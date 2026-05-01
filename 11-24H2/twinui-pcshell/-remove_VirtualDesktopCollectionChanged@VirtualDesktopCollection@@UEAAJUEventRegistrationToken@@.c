/*
 * XREFs of ?remove_VirtualDesktopCollectionChanged@VirtualDesktopCollection@@UEAAJUEventRegistrationToken@@@Z @ 0x180498170
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopDataSourceChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180493190 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAUIVirtualDesktopDataSource@Multitasking@Composabl.c)
 */

__int64 __fastcall VirtualDesktopCollection::remove_VirtualDesktopCollectionChanged(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSourceChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
         this + 11,
         (struct IUnknown *)a2.value);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF6,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
