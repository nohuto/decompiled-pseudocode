/*
 * XREFs of ??1?$com_ptr_t@VViewHostItemEventArgs@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180407D54
 * Callers:
 *     ?_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18040E194 (-_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _HolographicPositioner::_RaiseViewAdded_::_1_::dtor$1 @ 0x1806E8167 (_HolographicPositioner--_RaiseViewAdded_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskDataListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UIApplicationViewChangeListener@@UIAppViewListener@56789@UIWindowSnappingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180402940 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskDataListener.c)
 */

__int64 __fastcall wil::com_ptr_t<ViewHostItemEventArgs,wil::err_exception_policy>::~com_ptr_t<ViewHostItemEventArgs,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IApplicationViewChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener,IWindowSnappingEvents,Microsoft::WRL::FtmBase>::Release(v1);
  return result;
}
