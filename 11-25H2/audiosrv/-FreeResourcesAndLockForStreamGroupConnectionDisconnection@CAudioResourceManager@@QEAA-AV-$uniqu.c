/*
 * XREFs of ?FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIDeviceGraphObjectsStore@@@Z @ 0x180070AE4
 * Callers:
 *     ?LockEndpointForUse@CPolicyConfig@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x180101010 (-LockEndpointForUse@CPolicyConfig@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PE.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x18002368C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180070CFC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTempl.c)
 *     ??$?0$00X@?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@PEAX@Z @ 0x1800A370C (--$-0$00X@-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@PEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_64f1d33ea67811168a6f1a76ade7d933___ @ 0x1800B6B04 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800B6B04.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_c4376a3696dbfe6b962cbfe5dee66a96___ @ 0x1800B6DD4 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800B6DD4.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioResourceManager::FreeResourcesAndLockForStreamGroupConnectionDisconnection(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v5; // eax
  __int64 *v6; // rsi
  __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r15
  char v10; // r12
  int v11; // eax
  _QWORD *v12; // rax
  _DWORD *v13; // rbx
  int v14; // r8d
  int v15; // r9d
  int v17; // [rsp+20h] [rbp-49h]
  __int128 v18; // [rsp+48h] [rbp-21h] BYREF
  __int64 v19; // [rsp+58h] [rbp-11h]
  __int128 v20; // [rsp+60h] [rbp-9h] BYREF
  __int64 v21; // [rsp+70h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  __int64 v23; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v24; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v25; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v26; // [rsp+E8h] [rbp+7Fh] BYREF

  v24 = a2;
  v23 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 128LL))(a3);
  v20 = 0LL;
  v21 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 112LL))(a3, &v20);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD09,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v5,
      v17);
  v6 = (__int64 *)*((_QWORD *)&v20 + 1);
  v7 = (__int64 *)v20;
  v8 = (__int64)(*((_QWORD *)&v20 + 1) - v20) >> 3;
  v9 = 0LL;
  v10 = 0;
  while ( v7 != v6 )
  {
    v18 = 0LL;
    v19 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)a3 + 120LL))(a3, *v7, &v18);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD12,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v11,
        v17);
    v9 += (__int64)(*((_QWORD *)&v18 + 1) - v18) >> 3;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*v7 + 104LL))(*v7) )
    {
      v10 = 1;
      std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_64f1d33ea67811168a6f1a76ade7d933___(
        &v23,
        v18,
        *((_QWORD *)&v18 + 1));
    }
    else
    {
      v12 = (_QWORD *)wistd::unique_ptr<void,wil::process_heap_deleter>::unique_ptr<void,wil::process_heap_deleter>(
                        &v25,
                        v7);
      std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_c4376a3696dbfe6b962cbfe5dee66a96___(
        &v26,
        v18,
        *((_QWORD *)&v18 + 1),
        *v12);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v7);
    }
    if ( (_QWORD)v18 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
        (__int64 *)v18,
        *((__int64 **)&v18 + 1));
      std::_Deallocate<16,0>((char *)v18, (const struct std::nothrow_t *)((v19 - v18) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    ++v7;
  }
  v13 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *v13 > 4u )
  {
    LOBYTE(v23) = v10;
    v25 = v9;
    v26 = v8;
    v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 24LL))(a3);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      (_DWORD)v13,
      (unsigned int)&unk_18019E8A6,
      v14,
      v15,
      (__int64)&v24,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v23);
  }
  if ( (_QWORD)v20 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
      (__int64 *)v20,
      *((__int64 **)&v20 + 1));
    std::_Deallocate<16,0>((char *)v20, (const struct std::nothrow_t *)((v21 - v20) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  return a2;
}
