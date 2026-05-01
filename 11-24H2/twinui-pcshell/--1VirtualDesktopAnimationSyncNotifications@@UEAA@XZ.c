/*
 * XREFs of ??1VirtualDesktopAnimationSyncNotifications@@UEAA@XZ @ 0x180559BCC
 * Callers:
 *     ??_EVirtualDesktopAnimationSyncNotifications@@UEAAPEAXI@Z @ 0x180559DC0 (--_EVirtualDesktopAnimationSyncNotifications@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAXPEAUItem@AgileRegistrationList@@QEAU12@AEAV?$allocator@UItem@AgileRegistrationList@@@0@@Z @ 0x180046A10 (--$_Destroy_range@V-$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAXPEAUItem@AgileRegistr.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall VirtualDesktopAnimationSyncNotifications::~VirtualDesktopAnimationSyncNotifications(
        VirtualDesktopAnimationSyncNotifications *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<AgileRegistrationList::Item>>(v2, *((_QWORD *)this + 7));
    std::_Deallocate<16,0>(
      *((void **)this + 6),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 8) - *((_QWORD *)this + 6)) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>((__int64)this + 8);
}
