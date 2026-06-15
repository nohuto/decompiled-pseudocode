/*
 * XREFs of ??1?$forward_list@V?$com_ptr_t@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x14006198C
 * Callers:
 *     _CAPOProcessingHost::CAPOProcessingHost_::_1_::dtor$7 @ 0x1400939C8 (_CAPOProcessingHost--CAPOProcessingHost_--_1_--dtor$7.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140018288 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::forward_list<wil::com_ptr_t<CAudioSystemEffectsPropertyChangeNotificationsHandler,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CAudioSystemEffectsPropertyChangeNotificationsHandler,wil::err_returncode_policy>>(
        _QWORD **a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v1 + 1);
      std::_Deallocate<16,0>(v1, 0x10uLL);
      v1 = v2;
    }
    while ( v2 );
  }
}
