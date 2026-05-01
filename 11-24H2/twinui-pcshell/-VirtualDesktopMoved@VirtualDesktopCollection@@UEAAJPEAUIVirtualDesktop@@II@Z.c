/*
 * XREFs of ?VirtualDesktopMoved@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@II@Z @ 0x180497D50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180075174 (-GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@P.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18013C6A0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$InvokeAll@PEAVVirtualDesktopCollection@@PEAUIVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVVirtualDesktopCollection@@PEAUIVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180496508 (--$InvokeAll@PEAVVirtualDesktopCollection@@PEAUIVirtualDesktopCollectionChangedEventArgs@Multita.c)
 *     ??$MakeAndInitialize@VVirtualDesktopCollectionChangedEventArgs@@UIVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopCollectionChangedEventType@3456@PEAUIVirtualDesktop@3456@AEAIAEAI@Details@WRL@Microsoft@@YAJPEAPEAUIVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@$$QEAW4VirtualDesktopCollectionChangedEventType@4567@$$QEAPEAUIVirtualDesktop@4567@AEAI3@Z @ 0x1804967A4 (--$MakeAndInitialize@VVirtualDesktopCollectionChangedEventArgs@@UIVirtualDesktopCol_ea_1804967A4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopCollection::VirtualDesktopMoved(
        RTL_SRWLOCK *this,
        struct IVirtualDesktop *a2,
        int a3,
        int a4)
{
  unsigned int v6; // ebx
  int WinRTDesktopForInternalDesktopInternal; // eax
  __int64 v8; // rdx
  int v9; // eax
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *v11; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h] BYREF
  RTL_SRWLOCK *v13; // [rsp+40h] [rbp-10h] BYREF
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *v14; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v16; // [rsp+70h] [rbp+20h] BYREF
  int v17; // [rsp+80h] [rbp+30h] BYREF
  int v18; // [rsp+88h] [rbp+38h] BYREF

  v18 = a4;
  v17 = a3;
  v12 = 0LL;
  wil::AcquireSRWLockExclusive(&v13, this + 37);
  if ( !this[10].Ptr )
  {
    v6 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x155,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcollection.cpp",
      (const char *)0x8007139FLL);
LABEL_8:
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v13);
    goto LABEL_12;
  }
  v11 = 0LL;
  WinRTDesktopForInternalDesktopInternal = VirtualDesktopCollection::GetWinRTDesktopForInternalDesktopInternal(
                                             (struct IThumbnailDeviceSource **)&this[-4],
                                             a2,
                                             &v11);
  v6 = WinRTDesktopForInternalDesktopInternal;
  if ( WinRTDesktopForInternalDesktopInternal < 0 )
  {
    v8 = 344LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)WinRTDesktopForInternalDesktopInternal);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v11);
    goto LABEL_8;
  }
  v14 = v11;
  v16 = 3;
  WinRTDesktopForInternalDesktopInternal = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopCollectionChangedEventArgs,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopCollectionChangedEventType,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,unsigned int &,unsigned int &>(
                                             &v12,
                                             &v16,
                                             (__int64 *)&v14,
                                             &v17,
                                             &v18);
  v6 = WinRTDesktopForInternalDesktopInternal;
  if ( WinRTDesktopForInternalDesktopInternal < 0 )
  {
    v8 = 345LL;
    goto LABEL_7;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v11);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v13);
  v9 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<VirtualDesktopCollection *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs *>(
         (__int64)&this[7],
         (__int64)&this[-4],
         v12);
  v6 = v9;
  if ( v9 >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15C,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v9);
LABEL_12:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
  return v6;
}
