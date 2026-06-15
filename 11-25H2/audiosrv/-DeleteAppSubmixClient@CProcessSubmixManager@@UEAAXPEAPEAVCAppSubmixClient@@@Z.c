/*
 * XREFs of ?DeleteAppSubmixClient@CProcessSubmixManager@@UEAAXPEAPEAVCAppSubmixClient@@@Z @ 0x1800B0EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18000229C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapSz@G@@@Z @ 0x1800023E0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapSz@G@@@-$_tlgWriteTe.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??0?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18002E118 (--0-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@0@@Z @ 0x1800A61B8 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSubmixCli.c)
 *     ??$?4U?$default_delete@VCAppSubmixClientContext@@@std@@$0A@@?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AFEB8 (--$-4U-$default_delete@VCAppSubmixClientContext@@@std@@$0A@@-$unique_ptr@VCAppSubmixClientContex.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@0@@Z @ 0x1800B04B0 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSu.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_d253d5d01bc5b20cb42527c72daa90e2___ @ 0x1800B0AB4 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--unique_ptr_CAppSub.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CProcessSubmixManager::DeleteAppSubmixClient(CProcessSubmixManager *this, struct CAppSubmixClient **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v4; // rdi
  __int64 **v5; // r8
  __int64 **v6; // rdx
  struct AudioSrvTelemetryProvider *v7; // rax
  _DWORD *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 **v12; // rdx
  __int64 **v13; // rbx
  _DWORD *v14; // rcx
  int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // r14
  __int64 *i; // rbx
  __int64 *j; // rsi
  __int64 v21; // rdx
  __int64 v22; // [rsp+50h] [rbp-19h] BYREF
  __int64 v23; // [rsp+58h] [rbp-11h] BYREF
  __int64 **v24[2]; // [rsp+60h] [rbp-9h] BYREF
  _QWORD v25[2]; // [rsp+70h] [rbp+7h] BYREF
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+80h] [rbp+17h] BYREF
  char v27; // [rsp+D0h] [rbp+67h] BYREF
  __int64 **v28; // [rsp+D8h] [rbp+6Fh] BYREF
  int v29; // [rsp+E0h] [rbp+77h] BYREF
  int v30; // [rsp+E8h] [rbp+7Fh] BYREF

  v28 = (__int64 **)a2;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v26 = v2;
  v4 = (*v28)[1];
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::com_ptr_t<IAudioProcess,wil::err_returncode_policy>(
    &v23,
    *v28);
  v27 = 0;
  v5 = *(__int64 ***)(v4 + 96);
  v6 = *(__int64 ***)(v4 + 88);
  v25[0] = &v28;
  v25[1] = &v27;
  std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_d253d5d01bc5b20cb42527c72daa90e2___(
    v24,
    v6,
    v5,
    (__int64)v25);
  if ( v27 )
  {
    v7 = AudioSrvTelemetryProvider::Instance();
    v8 = (_DWORD *)*((_QWORD *)v7 + 1);
    if ( *v8 > 4u && tlgKeywordOn(*((_QWORD *)v7 + 1), 512LL) )
    {
      v9 = v23;
      v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 48LL))(v23);
      v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9);
      v22 = v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)v8,
        (int)&unk_18019E291,
        v10,
        v11,
        (__int64)&v22,
        (__int64)&v30,
        (__int64)&v29);
    }
  }
  v12 = *(__int64 ***)(v4 + 96);
  v13 = v24[0];
  if ( v24[0] != v12 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CAppSubmixClient>>>(v24[0], v12);
    *(_QWORD *)(v4 + 96) = v13;
  }
  if ( *(_QWORD *)(v4 + 96) == *(_QWORD *)(v4 + 88) )
  {
    v14 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v14 > 4u && tlgKeywordOn((__int64)v14, 512LL) )
    {
      v24[0] = *(__int64 ***)v4;
      v29 = *(_DWORD *)(v4 + 16);
      v30 = *(_DWORD *)(v4 + 12);
      LODWORD(v22) = *(_DWORD *)(v4 + 8);
      v25[0] = v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v15,
        (int)&unk_18019E220,
        v16,
        v17,
        (__int64)v25,
        (__int64)&v22,
        (__int64)&v30,
        (__int64)&v29,
        (const WCHAR **)v24);
    }
    v18 = (__int64 *)*((_QWORD *)this + 8);
    for ( i = (__int64 *)*((_QWORD *)this + 7); i != v18 && *i != v4; ++i )
      ;
    if ( i != v18 )
    {
      for ( j = i + 1; j != v18; ++j )
      {
        if ( *j != v4 )
          std::unique_ptr<CAppSubmixClientContext>::operator=<std::default_delete<CAppSubmixClientContext>,0>(i++, j);
      }
    }
    v21 = *((_QWORD *)this + 8);
    if ( i != (__int64 *)v21 )
    {
      std::_Destroy_range<std::allocator<std::unique_ptr<CAppSubmixClientContext>>>((__int64)i, v21);
      *((_QWORD *)this + 8) = i;
    }
  }
  *v28 = 0LL;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v26);
}
