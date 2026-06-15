/*
 * XREFs of ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18002D430
 * Callers:
 *     ?Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18002D3D0 (-Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800C2DD0 (-Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 * Callees:
 *     ?NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z @ 0x180009E8C (-NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z.c)
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18000CC20 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEA.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x18001D268 (-PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800263DC (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x18002D71C (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     ??$_Insert_counted_range@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@1@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x18002D8D4 (--$_Insert_counted_range@PEAV-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@-$vec.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18002DE10 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU__ea_18002DE10.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSession::Disconnect(__int64 a1, int a2, char a3)
{
  struct AudioSrvTelemetryProvider *v5; // rax
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rcx
  const char *v9; // r9
  enum AudioSessionDisconnectReason v10; // esi
  __int64 **v11; // rax
  __int64 *v12; // r12
  __int64 *v13; // r13
  __int64 v14; // r15
  __int64 *v15; // rcx
  unsigned int v16; // r14d
  __int64 result; // rax
  __int64 v18; // rax
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  __int128 v23; // [rsp+38h] [rbp-70h] BYREF
  __int64 v24; // [rsp+48h] [rbp-60h]
  void (__fastcall **v25[2])(_QWORD, __int64 *); // [rsp+50h] [rbp-58h] BYREF
  int v26; // [rsp+60h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 *v28; // [rsp+B0h] [rbp+8h] BYREF
  int v29; // [rsp+B8h] [rbp+10h] BYREF
  char v30; // [rsp+C0h] [rbp+18h]
  struct _RTL_CRITICAL_SECTION *v31; // [rsp+C8h] [rbp+20h] BYREF

  v30 = a3;
  v5 = AudioSrvTelemetryProvider::Instance();
  try
  {
    v8 = *((_QWORD *)v5 + 1);
    if ( *(_DWORD *)v8 > 4u
      && (*(_DWORD *)(v8 + 16) & 0x200LL) != 0
      && (*(_QWORD *)(v8 + 24) & 0x200LL) == *(_QWORD *)(v8 + 24) )
    {
      v29 = a2;
      v28 = *(__int64 **)(a1 + 656);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v8,
        (unsigned int)&unk_18019FE7E,
        v6,
        v7,
        (__int64)&v28,
        (__int64)&v29);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
    v31 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
    v10 = DisconnectReasonExclusiveModeOverride;
    if ( a2 != 5 )
      goto LABEL_4;
    v18 = *(_QWORD *)(a1 + 112);
    if ( v18 == *(_QWORD *)(a1 + 120) )
    {
      if ( a1 != -64 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
      result = 0LL;
    }
    else
    {
      if ( !*(_BYTE *)(*(_QWORD *)v18 + 40LL) )
      {
LABEL_4:
        v11 = (__int64 **)(a1 + 112);
        v23 = 0LL;
        v24 = 0LL;
        v12 = 0LL;
        v13 = 0LL;
        v14 = 0LL;
        if ( (__int128 *)(a1 + 112) == &v23 )
        {
          v15 = (__int64 *)*((_QWORD *)&v23 + 1);
        }
        else
        {
          v12 = *v11;
          *v11 = 0LL;
          *(_QWORD *)&v23 = v12;
          v13 = *(__int64 **)(a1 + 120);
          *(_QWORD *)(a1 + 120) = 0LL;
          v15 = v13;
          *((_QWORD *)&v23 + 1) = v13;
          v14 = *(_QWORD *)(a1 + 128);
          *(_QWORD *)(a1 + 128) = 0LL;
          v24 = v14;
        }
        v28 = v15;
        EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 136));
        std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Insert_counted_range<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *>(
          a1 + 176,
          *(_QWORD *)(a1 + 184),
          v23,
          (__int64)((__int64)v28 - v23) >> 3);
        if ( a1 != -136 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 136));
        if ( v12 )
        {
          std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(v12, v13);
          std::_Deallocate<16,0>((char *)v12, (const struct std::nothrow_t *)(8 * ((v14 - (__int64)v12) >> 3)));
        }
        if ( a1 != -64 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
        v16 = CAudioSession::DisconnectStreamList((CAudioSession *)a1);
        if ( !*(_DWORD *)(a1 + 336) )
          CAudioSession::PostStateCheckExpirationWork((CAudioSession *)a1);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
        v25[0] = (void (__fastcall **)(_QWORD, __int64 *))&CAudioSessionDisconnected::`vftable';
        v25[1] = (void (__fastcall **)(_QWORD, __int64 *))a1;
        v26 = a2;
        CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::ForEachEntry(
          (LPCRITICAL_SECTION)(a1 + 432),
          v25);
        if ( !v30 )
          goto LABEL_15;
        if ( !a2 )
        {
          v10 = DisconnectReasonDeviceRemoval;
          goto LABEL_37;
        }
        v19 = a2 - 1;
        if ( !v19 )
          goto LABEL_32;
        v20 = v19 - 1;
        if ( !v20 )
        {
          v10 = DisconnectReasonFormatChanged;
          goto LABEL_37;
        }
        v21 = v20 - 1;
        if ( !v21 )
        {
          v10 = DisconnectReasonSessionLogoff;
          goto LABEL_37;
        }
        v22 = v21 - 1;
        if ( !v22 )
        {
          v10 = DisconnectReasonSessionDisconnected;
          goto LABEL_37;
        }
        if ( v22 != 1 )
LABEL_32:
          v10 = DisconnectReasonServerShutdown;
LABEL_37:
        CAudioSession::NotifyClientOfDisconnection((CAudioSession *)a1, v10);
LABEL_15:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
        return v16;
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v31);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x959,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                           v9);
  }
  return result;
}
