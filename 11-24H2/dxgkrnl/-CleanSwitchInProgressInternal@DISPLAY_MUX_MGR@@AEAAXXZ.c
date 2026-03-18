/*
 * XREFs of ?CleanSwitchInProgressInternal@DISPLAY_MUX_MGR@@AEAAXXZ @ 0x1400839E0
 * Callers:
 *     ??1DISPLAY_MUX_SWITCH_OPERATION@@QEAA@XZ @ 0x140082764 (--1DISPLAY_MUX_SWITCH_OPERATION@@QEAA@XZ.c)
 *     _lambda_49e79ef9181f572942092d934c66ae7a_::operator() @ 0x140082A10 (_lambda_49e79ef9181f572942092d934c66ae7a_--operator().c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x140061834 (-reset@-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@de.c)
 */

void __fastcall DISPLAY_MUX_MGR::CleanSwitchInProgressInternal(DISPLAY_MUX_MGR *this)
{
  *((_BYTE *)this + 84) = 0;
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
    (DxgkCompositionObject **)this + 11,
    0LL);
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 12) = 0LL;
  xmmword_140161438 = 0LL;
}
