/*
 * XREFs of ?OnMfxDiscoveryEffectsChanged@CAudioResourceManager@@UEAAJPEBGU_GUID@@@Z @ 0x1800BE4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x180002840 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011640 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800271A0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180027E54 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     _lambda_c90e8a76b02d1fc01a85dd002f968322_::__lambda_c90e8a76b02d1fc01a85dd002f968322_ @ 0x1800A3230 (_lambda_c90e8a76b02d1fc01a85dd002f968322_--__lambda_c90e8a76b02d1fc01a85dd002f968322_.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_02f5f1fbcf15b576b00898c5b7a1de2a__0_ @ 0x1800B52B0 (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_02f5f1fbcf15b576b00898c5.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEBG@Z @ 0x1800B62C4 (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBG@std@@YA-AV-.c)
 *     _lambda_02f5f1fbcf15b576b00898c5b7a1de2a_::_lambda_02f5f1fbcf15b576b00898c5b7a1de2a_ @ 0x1800B6384 (_lambda_02f5f1fbcf15b576b00898c5b7a1de2a_--_lambda_02f5f1fbcf15b576b00898c5b7a1de2a_.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall CAudioResourceManager::OnMfxDiscoveryEffectsChanged(
        CAudioResourceManager *this,
        const unsigned __int16 *a2,
        struct _GUID *a3)
{
  __int64 *v5; // rax
  __int64 *v6; // rdx
  __int64 v7; // r11
  int v8; // ebx
  _DWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  const WCHAR *v13; // [rsp+30h] [rbp-98h] BYREF
  struct _GUID *v14; // [rsp+38h] [rbp-90h] BYREF
  __int64 v15; // [rsp+40h] [rbp-88h] BYREF
  std::_Ref_count_base *v16; // [rsp+48h] [rbp-80h]
  _BYTE v17[64]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v18[5]; // [rsp+90h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v13 = a2;
  std::make_shared<std::wstring,unsigned short const * &>(&v15, (__int64 *)&v13);
  GetSerialWorkQueue();
  v5 = (__int64 *)lambda_02f5f1fbcf15b576b00898c5b7a1de2a_::_lambda_02f5f1fbcf15b576b00898c5b7a1de2a_(
                    v18,
                    (__int64)this - 8,
                    &v15);
  v6 = (__int64 *)std::function_void___cdecl_void__::function_void___cdecl_void____lambda_02f5f1fbcf15b576b00898c5b7a1de2a__0_(
                    (__int64)v17,
                    v5);
  v8 = CSerialWorkQueue::QueueWorkItem(v7, v6);
  lambda_c90e8a76b02d1fc01a85dd002f968322_::__lambda_c90e8a76b02d1fc01a85dd002f968322_((__int64)v18);
  if ( v8 >= 0 )
  {
    v10 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v10 > 4u )
    {
      v14 = a3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>>(
        (int)v10,
        (int)&unk_1801A913C,
        v11,
        v12,
        &v13,
        (__int64 *)&v14);
    }
    if ( v16 )
      std::_Ref_count_base::_Decref(v16);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEC5,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v8);
    if ( v16 )
      std::_Ref_count_base::_Decref(v16);
    return (unsigned int)v8;
  }
}
