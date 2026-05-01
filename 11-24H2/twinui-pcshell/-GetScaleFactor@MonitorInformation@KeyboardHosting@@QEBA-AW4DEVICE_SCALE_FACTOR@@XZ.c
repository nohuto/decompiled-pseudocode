/*
 * XREFs of ?GetScaleFactor@MonitorInformation@KeyboardHosting@@QEBA?AW4DEVICE_SCALE_FACTOR@@XZ @ 0x18047A280
 * Callers:
 *     ?GetForegroundAppRect@ViewRectHelper@KeyboardHosting@@SAJAEAURect@Foundation@Windows@@@Z @ 0x180255238 (-GetForegroundAppRect@ViewRectHelper@KeyboardHosting@@SAJAEAURect@Foundation@Windows@@@Z.c)
 *     ?GetCurrentScaleFactor@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAI@Z @ 0x1802553B0 (-GetCurrentScaleFactor@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAI@Z.c)
 *     ?HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x180255820 (-HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Wi.c)
 *     ?GetCaretScaleFactor@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAI@Z @ 0x180485830 (-GetCaretScaleFactor@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAI@Z.c)
 *     ?HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveAnimationType@Text@Shell@Internal@5@PEAIPEAU345@PEAW4ShellRequestType@7895@@Z @ 0x180485CF0 (-HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveA.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 */

__int64 __fastcall KeyboardHosting::MonitorInformation::GetScaleFactor(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  RTL_SRWLOCK *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v3, this + 10);
  LODWORD(v1) = v1[12].Ptr;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v3);
  return (unsigned int)v1;
}
