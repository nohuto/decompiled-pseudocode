/*
 * XREFs of _lambda_a8a3ec141be49a0429a3d190c13e56dc_::operator() @ 0x180132330
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_a8a3ec141be49a0429a3d190c13e56dc__long_IAudioProcessingObject____GUID_unsigned_int_::_Do_call @ 0x180139910 (std--_Func_impl_no_alloc__lambda_a8a3ec141be49a0429a3d190c13e56dc__long_IAudioProce_ea_180139910.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180045DCC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTempla.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     ??$try_com_query_to@UIApoAcousticEchoCancellation@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProcessingObject@@PEAPEAUIApoAcousticEchoCancellation@@@Z @ 0x18005B8B0 (--$try_com_query_to@UIApoAcousticEchoCancellation@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_a8a3ec141be49a0429a3d190c13e56dc_::operator()(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // rbx
  _DWORD *v8; // rcx
  int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+48h] [rbp-18h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h] BYREF
  const WCHAR *v16; // [rsp+58h] [rbp-8h] BYREF

  v13 = a2;
  v7 = *a1;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 56LL))(*a1) && *(_DWORD *)a1[1] == 2 && !a4 )
    return 0LL;
  v14 = 0LL;
  if ( !wil::try_com_query_to<IApoAcousticEchoCancellation,IAudioProcessingObject * &>(&v13, (__int64)&v14) )
  {
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
    return 0LL;
  }
  v8 = *(_DWORD **)(v7 + 8288);
  if ( *v8 > 4u && tlgKeywordOn((__int64)v8, 256LL) )
  {
    LODWORD(v13) = *(_DWORD *)a1[1];
    v15 = a3;
    v16 = *(const WCHAR **)(v7 + 48);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
      v9,
      (int)&unk_1801B02CA,
      v10,
      v11,
      &v16,
      &v15,
      (__int64)&v13);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
  return 2289827895LL;
}
